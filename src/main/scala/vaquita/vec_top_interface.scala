package vaquita
import chisel3._
import chisel3.util._

class vaquita_CoProcessor_interface extends Module {
  val io = IO(new Bundle {
    // val req_data   = Input(Bool())
    // val ready      = Output(Bool())
    val instr    = Input(UInt(32.W))
    val rs1_data = Input(SInt(32.W))
  })
  val vec_top_module = Module(new vec_top)
    dontTouch(vec_top_module.io)
    vec_top_module.io.instr := io.instr
    vec_top_module.io.rs1_data := io.rs1_data
}
