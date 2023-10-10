package singlecycle
import chisel3._

class pc extends Module {
  val io=IO (new Bundle{
	val input = Input(UInt(32.W))
	val pc4 = Output(UInt(32.W))
	val pc = Output(UInt(32.W))
  })
	val reg = RegInit(0.U(32.W))
    reg := io.input
	io.pc4 := reg + 4.U
	io.pc := reg
}