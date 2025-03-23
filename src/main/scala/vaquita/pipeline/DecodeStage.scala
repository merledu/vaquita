package vaquita.pipeline

import chisel3._
import chisel3.util._
import vaquita.components.{VecControlUnit, VecRegFile, VCSR}
import vaquita.configparameter.VaquitaConfig
import vaquita.util.SewSelector

/** IO Bundle for DecodeStage */
class DecodeStageIO(implicit val config: VaquitaConfig) extends Bundle {
    val instr           = Input(UInt(32.W))
    val wb_de_instr_in  = Input(UInt(32.W))
    val rs1_data        = Input(SInt(32.W))
    val sew_out         = Output(UInt(5.W))
    val alu_op_out      = Output(UInt(6.W))
    val de_write_en     = Output(Bool())
    val de_read_en      = Output(Bool())
    val de_reg_write    = Output(Bool())
    val wb_reg_write_in = Input(Bool())
    val vl_rs1_in       = Input(UInt(32.W))
    val lmul_out        = Output(UInt(32.W))
}

/** Vector Data IO Bundle */
class DecodeStageVecIO(implicit val config: VaquitaConfig) extends Bundle {
    val vs1_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs2_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs3_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs0_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vsd_data_in  = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
}

class DecodeStage(implicit val config: VaquitaConfig) extends Module {
    val io = IO(new Bundle {
        val de_vec_io = new DecodeStageVecIO
        val de_io     = new DecodeStageIO
  })

  /** Instantiate submodules */
    val vec_cu_module  = Module(new VecControlUnit)
    val vec_reg_module = Module(new VecRegFile)
    val vcsr_module    = Module(new VCSR)

    vec_cu_module.io.instr := io.de_io.instr

    /** Vector Register File Wiring */
    vec_reg_module.io.vs1_addr         := io.de_io.instr(19, 15)
    vec_reg_module.io.func3            := io.de_io.instr(14, 12)
    vec_reg_module.io.vs2_addr         := io.de_io.instr(24, 20)
    vec_reg_module.io.vd_addr          := io.de_io.instr(11, 7)
    vec_reg_module.io.lmul             := vcsr_module.io.vtype_out(2, 0)
    vec_reg_module.io.sew              := vcsr_module.io.vtype_out(5, 3)
    vec_reg_module.io.vl               := vcsr_module.io.vl_out.asSInt
    vec_reg_module.io.reg_write        := io.de_io.wb_reg_write_in
    vec_reg_module.io.reg_write_decode := vec_cu_module.io.reg_write
    vec_reg_module.io.vtype            := vcsr_module.io.vtype_out
    vec_reg_module.io.wb_vd_addr       := io.de_io.wb_de_instr_in(11, 7)
    vec_reg_module.io.store_vs3_to_mem := vec_cu_module.io.store_vs3_to_mem

    /** Vector CSR Module Wiring */
    vcsr_module.io.vec_config := vec_cu_module.io.vec_config
    vcsr_module.io.instr_in   := io.de_io.instr
    vcsr_module.io.vl_rs1_in  := io.de_io.vl_rs1_in.asUInt

    /** de_io Output Wiring */
    io.de_io.lmul_out     := vcsr_module.io.lmul
    io.de_io.sew_out      := vcsr_module.io.sew
    io.de_io.de_write_en  := vec_cu_module.io.mem_write
    io.de_io.de_read_en   := vec_cu_module.io.mem_read
    io.de_io.de_reg_write := vec_cu_module.io.reg_write

    /** ALU Operation */
    io.de_io.alu_op_out := io.de_io.instr(31, 26)



  /**  selects vs1_data_out based on operand_type(immediate , rs1, vector) */
    val sew_selector = new SewSelector()
    for (i <- 0 until 8) {
        for (j <- 0 until config.count_lanes) {
        io.de_vec_io.vs1_data_out(i)(j) := MuxLookup(
            vec_cu_module.io.operand_type,
            0.S,
            Array(
            (0.U) -> vec_reg_module.io.vs1_data(i)(j),
            (1.U) -> io.de_io.rs1_data,
            (2.U) -> sew_selector.sew_selector_with_element(vcsr_module.io.sew, io.de_io.instr(19, 15).asSInt),
            (3.U) -> 0.S
            )
        )
        }
    }

    /** Connect Vector Data */
    io.de_vec_io.vs2_data_out <> vec_reg_module.io.vs2_data
    io.de_vec_io.vs3_data_out <> vec_reg_module.io.vs3_data
    io.de_vec_io.vs0_data_out <> vec_reg_module.io.vs0_data
    vec_reg_module.io.vd_data <> io.de_vec_io.vsd_data_in
}
