package vaquita
import chisel3._
import chisel3.util._

class decode_stage(implicit val config: Config) extends Module {
    val io = IO(new Bundle{
        val instr = Input(UInt(32.W))
        val wb_de_instr_in = Input(UInt(32.W))
        val rs1_data = Input(SInt(32.W))
        val sew_out = Output(UInt(5.W))
        val vs1_data_out = Output(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
        val vs2_data_out = Output(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
        val vsd_data_in = Input(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
        val alu_op_out = Output(UInt(9.W))
    })
    val vec_cu_module = Module(new vec_control_unit)
    dontTouch(vec_cu_module.io)

    val vec_reg_module = Module(new vec_reg_file)
    dontTouch(vec_reg_module.io)

    val vcsr_module = Module(new Vcsr)
    dontTouch(vcsr_module.io)

    // vec control unit
    vec_cu_module.io.instr := io.instr
    // vec reg file
    vec_reg_module.io.vs1_addr := io.instr(19,15)
    vec_reg_module.io.vs2_addr := io.instr(24,20)
    vec_reg_module.io.vd_addr := io.instr(11,7)
    vec_reg_module.io.lmul := vcsr_module.io.vtype_out(2,0)
    vec_reg_module.io.sew := vcsr_module.io.vtype_out(5,3)
    vec_reg_module.io.vl := vcsr_module.io.vl_out
    vec_reg_module.io.reg_write := vec_cu_module.io.reg_write
    vec_reg_module.io.vtype := vcsr_module.io.vtype_out
    vec_reg_module.io.wb_vd_addr := io.wb_de_instr_in(11,7)


    vcsr_module.io.vec_config := vec_cu_module.io.vec_config
    vcsr_module.io.vtype_input := io.instr(30,20)

    //excute stage
    io.sew_out := vcsr_module.io.sew

    for (i <- 0 to 7) {
    for (j <- 0 until config.count_lanes) {
    io.vs1_data_out(i)(j) := MuxLookup(vec_cu_module.io.operand_type,0.S,Array(
        (0.U) -> vec_reg_module.io.vs1_data(i)(j),
        (1.U) -> io.rs1_data,
        (2.U) -> io.instr(19,15).asSInt,
        (3.U) -> 0.S)
    )}
    }
    for (i <- 0 to 7) {
        for (j <- 0 to (config.vlen >> 6)-1) {
            io.vs2_data_out(i)(j) := vec_reg_module.io.vs2_data(i)(j)
    }}
io.alu_op_out := Cat(io.instr(14,12),io.instr(31,26))

    for (i <- 0 to 7) {
        for (j <- 0 to (config.vlen >> 6)-1) {
            vec_reg_module.io.vd_data(i)(j) := io.vsd_data_in(i)(j)
    }}
}