package vaquita
import chisel3._
import chisel3.util._


class MemStage(implicit val config: VaquitaConfig) extends Module {
  val io = IO (new Bundle {
    val mem_vsd_data_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val mem_vsd_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val mem_instr_in = Input(UInt(32.W))
    val mem_instr_out = Output(UInt(32.W))
    val write_en = Input(Bool())
    val read_en = Input(Bool())
    val mem_stage_write_en = Output(Bool())
    val mem_stage_read_en = Output(Bool())
    val mem_read_en_out = Output(Bool())
    val mem_reg_write_in = Input(Bool())
    val mem_reg_write_out = Output(Bool())
    val mem_stage_addr = Output(UInt(32.W))
    val mem_rs1_data_in = Input(SInt(32.W))
    val mem_vs1_data_vs3_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs3_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    })
  val initValue     = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(config.XLEN.W)))))
  val vsd_data      = RegNext(WireDefault(initValue))
  val initValue_vs3 = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(64.W)))))
  val vs3_data      = RegNext(WireDefault(initValue))   
  vsd_data            <> io.mem_vsd_data_in
  io.mem_vsd_data_out <> vsd_data
  vs3_data            <> io.mem_vs1_data_vs3_in
  io.vs3_data_out     <> vs3_data//io.mem_vs1_data_vs3_in(i)(j)// vs3_data(i)(j)
  io.mem_instr_out      := RegNext(io.mem_instr_in)
  io.mem_stage_write_en := RegNext(io.write_en)
  io.mem_stage_read_en  := RegNext(io.read_en)
  io.mem_stage_addr     := RegNext(io.mem_rs1_data_in.asUInt)
  io.mem_reg_write_out  := RegNext(io.mem_reg_write_in)
  io.mem_read_en_out    := RegNext(io.read_en)
}