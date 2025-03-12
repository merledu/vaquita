package vaquita
import chisel3._
import chisel3.util._
class DecodeStage(implicit val config: VaquitaConfig) extends Module {
    val io = IO(new Bundle{
        val instr = Input(UInt(32.W))
        val wb_de_instr_in = Input(UInt(32.W))
        val rs1_data = Input(SInt(32.W))
        val sew_out = Output(UInt(5.W))
        val vs1_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val vs2_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val vs3_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val vs0_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val vsd_data_in  = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val alu_op_out   = Output(UInt(6.W))
        val de_write_en = Output(Bool())
        val de_read_en = Output(Bool())
        val de_reg_write = Output(Bool())
        val wb_reg_write_in = Input(Bool())
        val vl_out = Output(UInt(32.W))
        val vl_rs1_in =  Input(UInt(32.W))
        val lmul_out = Output(UInt(32.W))
    })
    val vec_cu_module = Module(new VecControlUnit)
    dontTouch(vec_cu_module.io)

    val vec_reg_module = Module(new VecRegFile)
    dontTouch(vec_reg_module.io)

    val vcsr_module = Module(new VCSR)
    dontTouch(vcsr_module.io)

    // vec control unit
    vec_cu_module.io.instr := io.instr
    // vec reg file
    vec_reg_module.io.vs1_addr := io.instr(19,15)
    vec_reg_module.io.func3 := io.instr(14,12)
    vec_reg_module.io.vs2_addr := io.instr(24,20)
    vec_reg_module.io.vd_addr := io.instr(11,7)
    vec_reg_module.io.lmul := vcsr_module.io.vtype_out(2,0)
    vec_reg_module.io.sew := vcsr_module.io.vtype_out(5,3)
    vec_reg_module.io.vl := vcsr_module.io.vl_out.asSInt
    vec_reg_module.io.reg_write := io.wb_reg_write_in
    vec_reg_module.io.reg_write_decode := vec_cu_module.io.reg_write
    vec_reg_module.io.vtype := vcsr_module.io.vtype_out
    vec_reg_module.io.wb_vd_addr := io.wb_de_instr_in(11,7)
    vec_reg_module.io.store_vs3_to_mem := vec_cu_module.io.store_vs3_to_mem


    vcsr_module.io.vec_config := vec_cu_module.io.vec_config
    vcsr_module.io.instr_in := io.instr
    vcsr_module.io.vl_rs1_in := io.vl_rs1_in.asUInt
    //excute stage
    io.lmul_out := vcsr_module.io.lmul
    io.vl_out := vcsr_module.io.vl_out.asUInt
    io.sew_out := vcsr_module.io.sew
    io.de_write_en := vec_cu_module.io.mem_write
    io.de_read_en := vec_cu_module.io.mem_read
    io.de_reg_write := vec_cu_module.io.reg_write
    def sew_selector_with_element(sew:UInt,rs1:UInt):UInt={

        val element_return = WireInit(0.U(config.XLEN.W))
        val sew8_element  =   WireInit(0.U(8.W))
        val sew16_element =  WireInit(0.U(16.W))
        val sew32_element =  WireInit(0.U(32.W))
        sew8_element  := Cat(Fill(3,0.U),rs1)
        sew16_element := Cat(Fill(11,0.U),rs1)
        sew32_element := Cat(Fill(27,0.U),rs1)

        when(sew==="b000".U){
           element_return:= Cat(sew8_element,sew8_element,sew8_element,sew8_element)
        }.elsewhen(sew==="b001".U){
           element_return:= Cat(sew16_element,sew16_element)
        }.elsewhen(sew==="b010".U){
           element_return:= sew32_element
        }
        .otherwise{
            element_return:= 0.U
        }
        element_return
    }

    for (i <- 0 to 7) {
    for (j <- 0 until config.count_lanes) {
    io.vs1_data_out(i)(j) := MuxLookup(vec_cu_module.io.operand_type,0.S,Array(
        (0.U) -> vec_reg_module.io.vs1_data(i)(j),
        (1.U) -> io.rs1_data,
        (2.U) -> sew_selector_with_element(vcsr_module.io.sew,io.instr(19,15)).asSInt,
        (3.U) -> 0.S)
    )}
    }
    for (i <- 0 to 7) {
        for (j <- 0 to (config.count_lanes)-1) {
            io.vs2_data_out(i)(j) := vec_reg_module.io.vs2_data(i)(j)
            io.vs3_data_out(i)(j) := vec_reg_module.io.vs3_data(i)(j)
            io.vs0_data_out(i)(j) := vec_reg_module.io.vs0_data(i)(j)
    }}
io.alu_op_out := io.instr(31,26)

    for (i <- 0 to 7) {
        for (j <- 0 to (config.count_lanes)-1) {
            vec_reg_module.io.vd_data(i)(j) := io.vsd_data_in(i)(j)
    }}

}