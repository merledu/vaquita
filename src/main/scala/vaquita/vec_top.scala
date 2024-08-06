package vaquita
import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage

class vec_top extends Module {
    val io = IO(new Bundle{
        val instr = Input(UInt(32.W))
        val rs1_data = Input(SInt(32.W))
    })
    implicit val config = new Config {}
    val de_module = Module(new decode_stage)
    dontTouch(de_module.io)
    val excute_stage_module = Module(new excute_stage)
    dontTouch(excute_stage_module.io)

    val mem_stage_module = Module(new mem_stage)
    dontTouch(mem_stage_module.io)

    val wb_stage_module = Module(new wb_stage)
    dontTouch(wb_stage_module.io)

// -----------------decode stage ---------------------------------
    de_module.io.instr := io.instr
    de_module.io.rs1_data := io.rs1_data

    // -----------------excute stage ---------------------------------

    for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            excute_stage_module.io.ex_vs1_data_in(i)(j) := de_module.io.vs1_data_out(i)(j)
            excute_stage_module.io.ex_vs2_data_in(i)(j) := de_module.io.vs2_data_out(i)(j)
        }
    }
    excute_stage_module.io.ex_sew_in := de_module.io.sew_out
    excute_stage_module.io.ex_alu_op_in := de_module.io.alu_op_out
    excute_stage_module.io.ex_instr_in := io.instr

    // -----------------memory stage ---------------------------------

    for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            mem_stage_module.io.mem_vsd_data_in(i)(j) := excute_stage_module.io.vsd_data_out(i)(j)
        }}
   mem_stage_module.io.mem_instr_in := excute_stage_module.io.ex_instr_out

    for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            wb_stage_module.io.wb_vsd_data_in(i)(j) := mem_stage_module.io.mem_vsd_data_out(i)(j)
        }}
    // -----------------write back stage ---------------------------------
    wb_stage_module.io.wb_instr_in := mem_stage_module.io.mem_instr_out
    for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            de_module.io.vsd_data_in(i)(j) := wb_stage_module.io.wb_vsd_data_out(i)(j)
        }}

       de_module.io.wb_de_instr_in := wb_stage_module.io.wb_instr_out
}

object top_driver extends App {
  chisel3.Driver.execute(args, () => new vec_top)
}