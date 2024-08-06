package vaquita
import chisel3._
import chisel3.util._


class mem_stage(implicit val config: Config) extends Module {
  val io = IO (new Bundle {
    val mem_vsd_data_in = Input(Vec(8, Vec(config.count_lanes, SInt(64.W))))
    val mem_vsd_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(64.W))))
    val mem_instr_in = Input(UInt(32.W))
    val mem_instr_out = Output(UInt(32.W))

    })
  
    val initValue = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(64.W)))))
    val vsd_data = RegNext(WireDefault(initValue))

    for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            vsd_data(i)(j) := io.mem_vsd_data_in(i)(j)
            io.mem_vsd_data_out(i)(j) := vsd_data(i)(j)
          }
    }
    io.mem_instr_out := RegNext(io.mem_instr_in)
}