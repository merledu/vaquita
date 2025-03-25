package vaquita.pipeline
import chisel3._
import chisel3.util._
import vaquita.configparameter.VaquitaConfig


class WBStage(implicit val config: VaquitaConfig,val on : Bool =1.B, val off : Bool =0.B) extends Module {
  val io = IO (new Bundle {
    val wb_vsd_data_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val wb_vs3_data_in_store = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))

    val wb_vsd_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val wb_instr_in = Input(UInt(32.W))
    val wb_instr_out = Output(UInt(32.W))
    val wb_reg_write_in = Input(Bool())
    val wb_reg_write_out = Output(Bool())
    val mem_to_reg = Input(Bool())
    })
    val init_value = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(config.XLEN.W)))))
    val vsd_data   = RegNext(WireDefault(init_value))
    val mem_to_reg = RegNext(io.mem_to_reg)

    when(mem_to_reg===0.B){
      vsd_data             <> io.wb_vsd_data_in
      io.wb_vsd_data_out   <> vsd_data
    }.otherwise{
        io.wb_vsd_data_out <> io.wb_vs3_data_in_store
      
    }

    io.wb_instr_out     := RegNext(io.wb_instr_in)
    io.wb_reg_write_out := RegNext(io.wb_reg_write_in)
}