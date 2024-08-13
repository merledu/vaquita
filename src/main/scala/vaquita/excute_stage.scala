package vaquita
import chisel3._
import chisel3.util._
import javax.xml.transform.OutputKeys

class excute_stage(implicit val config: Config) extends Module {
    val io = IO (new Bundle{
        // excute stage inputs
        val ex_vs1_data_in = Input(Vec(8, Vec(config.count_lanes, SInt(64.W))))
        val ex_vs2_data_in = Input(Vec(8, Vec(config.count_lanes, SInt(64.W))))
        val ex_sew_in = Input(UInt(5.W))
        val ex_instr_in = Input(UInt(32.W))
        val ex_instr_out = Output(UInt(32.W))
        val ex_alu_op_in = Input(UInt(6.W))
        val ex_write_en_in = Input(Bool())
        val ex_read_en_in = Input(Bool())
        val ex_rs1_data_in  = Input(SInt(32.W))
        // val mem_vd = Input(UInt(7.W))
        // val wb_vd = Input(UInt(8.W))
        val ex_reg_write_in = Input(Bool())
        // val mem_reg_write_in = Input(Bool())
        // val wb_reg_write_in = Input(Bool())
        val ex_reg_write_out = Output(Bool())

        val ex_rs1_data_out  = Output(SInt(32.W))
        val ex_write_en_out = Output(Bool())
        val ex_read_en_out = Output(Bool())
        val vsd_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(64.W))))
        val ex_vs1_data_out_vs3 = Output(Vec(8, Vec(config.count_lanes, SInt(64.W))))
})
// val a  = RegInit(VecInit(Seq.fill(config.count_lanes)(0.S(64.W))))

    val vec_alu_module = Module(new vec_alu)
    dontTouch(vec_alu_module.io)

    // val fu_module = Module(new ForwardingUnit)
    // dontTouch(fu_module.io)
    
    // val initValue = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(64.W)))))
    // val vs1_reg_data = RegNext(WireDefault(initValue))

    // val initValue1 = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(64.W)))))
    // val vs2_reg_data = RegNext(WireDefault(initValue1))

    val next_sew = RegNext(io.ex_sew_in)
    val ex_alu_op_out = RegNext(io.ex_alu_op_in)
    io.ex_instr_out := RegNext(io.ex_instr_in)
    
    for (i <- 0 to 7) { // for grouping = 8
  for (j <- 0 until (config.vlen >> 6)) {
    // vs1_reg_data(i)(j) := io.ex_vs1_data_in(i)(j)
    // vs2_reg_data(i)(j) := io.ex_vs2_data_in(i)(j)
    vec_alu_module.io.vs1_in(i)(j) := io.ex_vs1_data_in(i)(j)
    vec_alu_module.io.vs2_in(i)(j) := io.ex_vs2_data_in(i)(j)
  }
}

vec_alu_module.io.sew := next_sew
vec_alu_module.io.alu_opcode := ex_alu_op_out

for (i <- 0 to 7) { // for grouping = 8
  for (j <- 0 until (config.vlen >> 6)) {
    io.vsd_data_out(i)(j) := vec_alu_module.io.vsd_out(i)(j)
    io.ex_vs1_data_out_vs3(i)(j) := io.ex_vs1_data_in(i)(j)
  }}

  io.ex_write_en_out := RegNext(io.ex_write_en_in)
  io.ex_read_en_out :=  RegNext(io.ex_read_en_in)
  io.ex_rs1_data_out := RegNext(io.ex_rs1_data_in)

  // fu_module.io.mem_regWrite := io.mem_reg_write_in
  // fu_module.io.wb_regWrite := io.wb_reg_write_in
  io.ex_reg_write_out := RegNext(io.ex_reg_write_in)

}