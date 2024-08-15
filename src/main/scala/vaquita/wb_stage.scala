package vaquita
import chisel3._
import chisel3.util._


class wb_stage(implicit val config: Vaquita_Config,val on : Bool =1.B, val off : Bool =0.B) extends Module {
  val io = IO (new Bundle {
    val wb_vsd_data_in = Input(Vec(8, Vec(config.count_lanes, SInt(64.W))))
    val wb_vs3_data_in_store = Input(Vec(8, Vec(config.count_lanes, SInt(64.W))))

    val wb_vsd_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(64.W))))
    val wb_instr_in = Input(UInt(32.W))
    val wb_instr_out = Output(UInt(32.W))
    val wb_reg_write_in = Input(Bool())
    val wb_reg_write_out = Output(Bool())
    val mem_to_reg = Input(Bool())
    })
    val initValue = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(64.W)))))
    val vsd_data = RegNext(WireDefault(initValue))

    val mem_to_reg = RegNext(io.mem_to_reg)

    when(mem_to_reg===0.B){
    for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            vsd_data(i)(j) := io.wb_vsd_data_in(i)(j)
            io.wb_vsd_data_out(i)(j) := vsd_data(i)(j)
          }
    }}.otherwise{
      for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            io.wb_vsd_data_out(i)(j) := io.wb_vs3_data_in_store(i)(j)
          }}
      
    }

    io.wb_instr_out := RegNext(io.wb_instr_in)
    io.wb_reg_write_out := RegNext(io.wb_reg_write_in)
}