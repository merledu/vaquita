package vaquita
import chisel3._
import chisel3.util._
import javax.xml.transform.OutputKeys

class excute_stage(implicit val config: Vaquita_Config) extends Module {
    val io = IO (new Bundle{
        // excute stage inputs
        val ex_vs1_data_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val ex_vs2_data_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val ex_vs3_data_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val ex_vs0_data_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val ex_sew_in = Input(UInt(5.W))
        val ex_instr_in = Input(UInt(32.W))
        val ex_instr_out = Output(UInt(32.W))
        val ex_alu_op_in = Input(UInt(6.W))
        val ex_write_en_in = Input(Bool())
        val ex_read_en_in = Input(Bool())
        val ex_rs1_data_in  = Input(SInt(32.W))
        val vl_in  = Input(UInt(32.W))
        // val ex_vl_out  = Input(UInt(32.W))

        // val mem_vd = Input(UInt(7.W))
        // val wb_vd = Input(UInt(8.W))
        val ex_reg_write_in = Input(Bool())
        // val mem_reg_write_in = Input(Bool())
        // val wb_reg_write_in = Input(Bool())
        val ex_reg_write_out = Output(Bool())

        val ex_rs1_data_out  = Output(SInt(32.W))
        val ex_write_en_out = Output(Bool())
        val ex_read_en_out = Output(Bool())
        val vsd_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val ex_vs1_data_out_vs3 = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val hazard_rs1 = Input(UInt(32.W))
        val vl_rs1_out = Output(UInt(32.W))
        val ex_lmul_in = Input(UInt(32.W))
        val ex_lmul_out = Output(UInt(32.W))
})
// val a  = RegInit(VecInit(Seq.fill(config.count_lanes)(0.S(64.W))))

    val vec_alu_module = Module(new vec_alu)
    dontTouch(vec_alu_module.io)
    val vsetvli_module = Module(new vsetvli)
    dontTouch(vsetvli_module.io)

    // val fu_module = Module(new ForwardingUnit)
    // dontTouch(fu_module.io)
    
    // val initValue = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(64.W)))))
    // val vs1_reg_data = RegNext(WireDefault(initValue))

    // val initValue1 = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(64.W)))))
    // val vs2_reg_data = RegNext(WireDefault(initValue1))

    val next_sew = RegNext(io.ex_sew_in)
    val ex_alu_op_out = RegNext(io.ex_alu_op_in)
    io.ex_instr_out := RegNext(io.ex_instr_in)
    vec_alu_module.io.vl := RegNext(io.vl_in)
    vec_alu_module.io.vl_in   := vsetvli_module.io.vl

    def sew_selector_with_element(sew:UInt,rs1:SInt):SInt={

        val element_return = WireInit(0.S(config.XLEN.W))
        val sew8_element  =   WireInit(0.S(8.W))
        val sew16_element =  WireInit(0.S(16.W))
        val sew32_element =  WireInit(0.S(32.W))
        // val sew64_element =  WireInit(0.S(32.W))
        sew8_element  := rs1(7,0).asSInt
        sew16_element := rs1(15,0).asSInt
        sew32_element := rs1
        // sew64_element := rs1

        when(sew==="b000".U){
           element_return:= Cat(sew8_element,sew8_element,sew8_element,sew8_element).asSInt
        }.elsewhen(sew==="b001".U){
           element_return:= Cat(sew16_element,sew16_element).asSInt
        }.elsewhen(sew==="b010".U){
           element_return:= sew32_element
        }
        .otherwise{
            element_return:= 0.S
        }
        element_return
    }

    for (i <- 0 to 7) { // for grouping = 8
  for (j <- 0 until (config.count_lanes)) {
    // vs1_reg_data(i)(j) := io.ex_vs1_data_in(i)(j)
    // vs2_reg_data(i)(j) := io.ex_vs2_data_in(i)(j)
    vec_alu_module.io.vs1_in(i)(j) := Mux(io.ex_instr_out(6,0)==="b1010111".U && io.ex_instr_out(14,12)==="b100".U,sew_selector_with_element(next_sew,io.hazard_rs1.asSInt),io.ex_vs1_data_in(i)(j))
    vec_alu_module.io.vs2_in(i)(j) := io.ex_vs2_data_in(i)(j)
    vec_alu_module.io.vs3_in(i)(j) := io.ex_vs3_data_in(i)(j)
    vec_alu_module.io.vs0_in(i)(j) := io.ex_vs0_data_in(i)(j)
  }
}

vec_alu_module.io.sew := next_sew
vec_alu_module.io.alu_opcode := ex_alu_op_out
vec_alu_module.io.mask_arith := io.ex_instr_out(25)

for (i <- 0 to 7) { // for grouping = 8
  for (j <- 0 until (config.count_lanes)) {
    io.vsd_data_out(i)(j)        := vec_alu_module.io.vsd_out(i)(j)
    io.ex_vs1_data_out_vs3(i)(j) := io.ex_vs3_data_in(i)(j)
  }}

  io.ex_write_en_out := RegNext(io.ex_write_en_in)
  io.ex_read_en_out :=  RegNext(io.ex_read_en_in)
  io.ex_rs1_data_out := RegNext(io.ex_rs1_data_in)

  // fu_module.io.mem_regWrite := io.mem_reg_write_in
  // fu_module.io.wb_regWrite := io.wb_reg_write_in
  io.ex_reg_write_out := RegNext(io.ex_reg_write_in)

vsetvli_module.io.instr_in := RegNext(io.ex_instr_in)
vsetvli_module.io.rs1_in := io.hazard_rs1
io.vl_rs1_out := vsetvli_module.io.vl
io.ex_lmul_out := RegNext(io.ex_lmul_in)
}