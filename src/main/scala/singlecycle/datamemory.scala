package singlecycle

import chisel3._
import chisel3.util._

class datamem extends Module {
  val io = IO (new Bundle {
	val Addr = Input(UInt(8.W))
	val Data = Input(SInt(32.W))
	val MemWrite = Input(Bool())
	val MemRead = Input(Bool())
	val out = Output(SInt(32.W))
  })
	val mem = Mem(1024,SInt(32.W))
	when (io.MemWrite === 1.B){
		mem.write(io.Addr , io.Data )
		}
	when(io.MemRead === 1.B){
		io.out := mem.read(io.Addr)
		}
	.otherwise {io.out := 0.S}
}