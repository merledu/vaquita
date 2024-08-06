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
        val ex_alu_op_in = Input(UInt(9.W))
        val vsd_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(64.W))))
})
// val a  = RegInit(VecInit(Seq.fill(config.count_lanes)(0.S(64.W))))

    val vec_alu_module = Module(new vec_alu)
    dontTouch(vec_alu_module.io)
    
    val initValue = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(64.W)))))
    val vs1_reg_data = RegNext(WireDefault(initValue))

    val initValue1 = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(64.W)))))
    val vs2_reg_data = RegNext(WireDefault(initValue1))

    val next_sew = RegNext(io.ex_sew_in)
    val ex_alu_op_out = RegNext(io.ex_alu_op_in)
    io.ex_instr_out := RegNext(io.ex_instr_in)

    
    for (i <- 0 to 7) { // for grouping = 8
  for (j <- 0 until (config.vlen >> 6)) {
    vs1_reg_data(i)(j) := io.ex_vs1_data_in(i)(j)
    vs2_reg_data(i)(j) := io.ex_vs2_data_in(i)(j)
    vec_alu_module.io.vs1_in(i)(j) := vs1_reg_data(i)(j)
    vec_alu_module.io.vs2_in(i)(j) := vs2_reg_data(i)(j)
  }
}

vec_alu_module.io.sew := next_sew
vec_alu_module.io.alu_opcode := ex_alu_op_out

for (i <- 0 to 7) { // for grouping = 8
  for (j <- 0 until (config.vlen >> 6)) {
    io.vsd_data_out(i)(j) := vec_alu_module.io.vsd_out(i)(j)
  }}

}