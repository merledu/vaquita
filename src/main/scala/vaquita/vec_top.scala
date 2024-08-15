package vaquita
import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage

class vec_top extends Module {
    val io = IO(new Bundle{
        val instr = Input(UInt(32.W))
        val rs1_data = Input(SInt(32.W))
        val dmemReq = Decoupled(new MemRequestIO)
        val dmemRsp = Flipped(Decoupled(new MemResponseIO))
    })
    implicit val config = new Vaquita_Config {}
    val de_module = Module(new decode_stage)
    dontTouch(de_module.io)
    val excute_stage_module = Module(new excute_stage)
    dontTouch(excute_stage_module.io)

    val mem_stage_module = Module(new mem_stage)
    dontTouch(mem_stage_module.io)

    val vec_mem_fetch_module = Module(new vec_mem_fetch)
    dontTouch(vec_mem_fetch_module.io)

    val wb_stage_module = Module(new wb_stage)
    dontTouch(wb_stage_module.io)

    val fu_module = Module(new ForwardingUnit)
    dontTouch(fu_module.io)

    // val vec_alu_module = Module(new vec_alu)
    // dontTouch(vec_alu_module.io)

//     io.dmemReq <> vec_mem_fetch_module.io.dccmReq
//   vec_mem_fetch_module.io.dccmRsp <> io.dmemRsp
  for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            vec_mem_fetch_module.io.mem_vs3_data(i)(j) := mem_stage_module.io.vs3_data_out(i)(j)
        }}
        vec_mem_fetch_module.io.write_en := mem_stage_module.io.mem_stage_write_en
        vec_mem_fetch_module.io.read_en := mem_stage_module.io.mem_stage_read_en
        vec_mem_fetch_module.io.addr := mem_stage_module.io.mem_stage_addr
        // vec_mem_module.io.dccmReq.ready := 1.B

// -----------------decode stage ---------------------------------
    de_module.io.instr := io.instr
    de_module.io.rs1_data := io.rs1_data
    de_module.io.wb_reg_write_in  := wb_stage_module.io.wb_reg_write_out

    // -----------------excute stage ---------------------------------

    // ************forwording unit***********************
    fu_module.io.mem_vd := mem_stage_module.io.mem_instr_out(11,7)
    fu_module.io.wb_vd := wb_stage_module.io.wb_instr_out(11,7)
    fu_module.io.vs2_vs1_addr_func3 := excute_stage_module.io.ex_instr_out(24,12)
    fu_module.io.mem_regWrite := mem_stage_module.io.mem_reg_write_out
    fu_module.io.wb_regWrite := wb_stage_module.io.wb_reg_write_out
    when(fu_module.io.forwardA===1.U){
        for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            excute_stage_module.io.ex_vs1_data_in(i)(j) := mem_stage_module.io.mem_vsd_data_out(i)(j)
        }}
    }
    .elsewhen(fu_module.io.forwardA===2.U){
        for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            excute_stage_module.io.ex_vs1_data_in(i)(j) := wb_stage_module.io.wb_vsd_data_out(i)(j)
        }}
    }
    .otherwise{
        for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            excute_stage_module.io.ex_vs1_data_in(i)(j) := RegNext(de_module.io.vs1_data_out(i)(j))
        }}
    }
    when(fu_module.io.forwardB===1.U){
        for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            excute_stage_module.io.ex_vs2_data_in(i)(j) := mem_stage_module.io.mem_vsd_data_out(i)(j)
        }
    }
    }.elsewhen(fu_module.io.forwardB===2.U){
        for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            excute_stage_module.io.ex_vs2_data_in(i)(j) := wb_stage_module.io.wb_vsd_data_out(i)(j)
        }}
    }.otherwise{
        for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            excute_stage_module.io.ex_vs2_data_in(i)(j) := RegNext(de_module.io.vs2_data_out(i)(j))
        }}
    }
    
    excute_stage_module.io.ex_sew_in := de_module.io.sew_out
    excute_stage_module.io.ex_alu_op_in := de_module.io.alu_op_out
    excute_stage_module.io.ex_instr_in := io.instr
    excute_stage_module.io.ex_read_en_in := de_module.io.de_read_en
    excute_stage_module.io.ex_write_en_in := de_module.io.de_write_en
    excute_stage_module.io.ex_rs1_data_in := io.rs1_data
    excute_stage_module.io.ex_reg_write_in := de_module.io.de_reg_write

    // -----------------memory stage ---------------------------------

    io.dmemReq <> vec_mem_fetch_module.io.dccmReq
    vec_mem_fetch_module.io.dccmRsp <> io.dmemRsp

    for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            mem_stage_module.io.mem_vsd_data_in(i)(j) := excute_stage_module.io.vsd_data_out(i)(j)
        }}
   mem_stage_module.io.mem_instr_in := excute_stage_module.io.ex_instr_out
   mem_stage_module.io.write_en := excute_stage_module.io.ex_write_en_out
   mem_stage_module.io.read_en := excute_stage_module.io.ex_read_en_out
   mem_stage_module.io.mem_rs1_data_in := excute_stage_module.io.ex_rs1_data_out
   mem_stage_module.io.mem_reg_write_in := excute_stage_module.io.ex_reg_write_out
   


    for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            wb_stage_module.io.wb_vsd_data_in(i)(j) := mem_stage_module.io.mem_vsd_data_out(i)(j)
            wb_stage_module.io.wb_vs3_data_in_store :=mem_stage_module.io.vec_read_data_load
            mem_stage_module.io.mem_vs1_data_vs3_in(i)(j) := excute_stage_module.io.ex_vs1_data_out_vs3(i)(j)
        }}
        wb_stage_module.io.mem_to_reg := mem_stage_module.io.mem_read_en_out
    // -----------------write back stage ---------------------------------
    wb_stage_module.io.wb_instr_in := mem_stage_module.io.mem_instr_out
    for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            de_module.io.vsd_data_in(i)(j) := wb_stage_module.io.wb_vsd_data_out(i)(j)
            
        }}

       de_module.io.wb_de_instr_in := wb_stage_module.io.wb_instr_out
       wb_stage_module.io.wb_reg_write_in := mem_stage_module.io.mem_reg_write_out
}



// object top_driver extends App {
//   chisel3.Driver.execute(args, () => new vec_top)
// }