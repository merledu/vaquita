package singlecycle
import chisel3._
//import chisel3.core.SInt

class jalr extends Module {
  val io = IO (new Bundle {
	val rs1 = Input(SInt(32.W))
	val imm = Input(SInt(32.W))
	val out = Output(SInt(32.W))
  })
	val a = io.rs1 + io.imm
	io.out := a & 4294967294L.S
}