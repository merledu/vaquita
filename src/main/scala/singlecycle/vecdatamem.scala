package singlecycle

import chisel3._
import chisel3.util._

class vecdatamem extends Module {
  val io = IO (new Bundle {
	val Addr = Input(UInt(8.W))
	val Data = Input(SInt(32.W))
	val MemWrite = Input(Bool())
	val MemRead = Input(Bool())
    val load = Output(UInt(4.W))
	val out = Output(SInt(32.W))
    val vsew = Input(UInt(3.W))
  })
	val mem = Mem(1024,SInt(32.W))
	when (io.MemWrite === 1.B){
		mem.write(io.Addr , io.Data )
		}
	when(io.MemRead === 1.B){
		io.out := mem.read(io.Addr)
		}
	.otherwise {io.out := 0.S}

    when (io.load === 1.U & io.vsew === "b010".U){
        val addr1 = io.Addr
        val addr2 = io.Addr + 4.U
        val addr3 = io.Addr + 8.U
        val addr4 = io.Addr + 12.U
    }
}