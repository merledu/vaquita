package vaquita
import chisel3._
import chisel3.util._

class vec_top extends Module {
    val io = IO(new Bundle{
        val instr = Input(UInt(32.W))
        val rs1_data = Input(SInt(32.W))
    })
    implicit val config = new Config {}
    val vec_cu_module = Module(new vec_control_unit)
    dontTouch(vec_cu_module.io)

    val vec_reg_module = Module(new vec_reg_file)
    dontTouch(vec_reg_module.io)

    val excute_stage_module = Module(new excute_stage)
    dontTouch(excute_stage_module.io)

    val vcsr_module = Module(new Vcsr)
    dontTouch(vcsr_module.io)

    // vec control unit
    vec_cu_module.io.instr := io.instr
    // vec reg file
    vec_reg_module.io.vs1_addr := io.instr(19,15)
    vec_reg_module.io.vs2_addr := io.instr(24,20)
    vec_reg_module.io.vd_addr := io.instr(11,7)
    vec_reg_module.io.vd_data(0) := 99.S
    vec_reg_module.io.vd_data(1) := 99.S
    vec_reg_module.io.lmul := 4.U
    // vec_reg_module.io.vd_data(2) := 99.S
    // vec_reg_module.io.vd_data(3) := 99.S
    vec_reg_module.io.reg_write := vec_cu_module.io.reg_write
    vec_reg_module.io.vtype := vcsr_module.io.vtype_out


    vcsr_module.io.vec_config := vec_cu_module.io.vec_config
    vcsr_module.io.vtype_input := io.instr(30,20)

    for (i <- 0 to 7) {
    for (j <- 0 until config.count_lanes) {
    excute_stage_module.io.ex_vs1_data_in(i)(j) := MuxLookup(vec_cu_module.io.operand_type,0.S,Array(
        (0.U) -> vec_reg_module.io.vs1_data(i)(j),
        (1.U) -> io.rs1_data,
        (2.U) -> io.instr(19,15).asSInt,
        (3.U) -> 0.S)
    )}
    }
    for (i <- 0 to 7) {
    for (j <- 0 to (config.vlen >> 6)-1) {
    excute_stage_module.io.ex_vs2_data_in(i)(j) := vec_reg_module.io.vs2_data(i)(j)
}}
}