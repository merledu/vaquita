package vaquita
import chisel3._
import chisel3.util._
import chisel3.experimental._


class vec_mem_fetch(implicit val config: Config) extends Module {
  val io = IO (new Bundle {
    val addr = Input(UInt(32.W))
    val mem_vs3_data = Input(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
    val vec_read_data_load = Output(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
    val write_en = Input(Bool())
    val read_en = Input(Bool())
  })

  // when(io.read_en===1.B){
    for (i <- 0 to 7) { // for grouping = 8
      for (j <- 0 until (config.vlen >> 6)) {
        io.vec_read_data_load(i)(j) := 57.S
      }
      // }
    // }.otherwise{
    //     for (i <- 0 to 7) { // for grouping = 8
    //   for (j <- 0 until (config.vlen >> 6)) {
    //     io.vec_read_data_load(i)(j) := 0.S
    //   }
    //   }

      }
}
// note
// storing data come from vs1 address because in store instruction use the vs2 address