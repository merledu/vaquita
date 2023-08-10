package rvv

import chisel3._
import chisel3.util._

class regFile extends Module{
    val io = IO(new Bundle{
        val writeData = Input(SInt(32.W))
        val rs1_addr = Input(UInt(5.W))
        val rs2_addr = Input(UInt(5.W))
        val rd_addr = Input(UInt(5.W))
        val rs1 = Output(SInt(32.W))
        val rs2 = Output(SInt(32.W))
    })
    val register = RegInit(VecInit(Seq.fill(32)(0.S(32.W))))
    register(0) := 0.S
    io.rs1 := register(io.rs1_addr)
    io.rs2 := register(io.rs2_addr)
    when(io.rd_addr === "b00000".U) {
        register(io.rd_addr) := 0.S    
    }.otherwise{
        register(io.rd_addr) := io.writeData
    }
}