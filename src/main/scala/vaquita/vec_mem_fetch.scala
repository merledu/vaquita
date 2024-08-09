package vaquita
import chisel3._
import chisel3.util._
import chisel3.experimental._


class vec_mem_fetch(implicit val config: Config) extends Module {
  val io = IO (new Bundle {
    val addr = Input(UInt(32.W))
    val vec_write_data = Input(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
    // val vec_read_data = Output(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
    val write_en = Input(Bool())
    val read_en = Input(Bool())
  })
}