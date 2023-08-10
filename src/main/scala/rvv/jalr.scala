package rvv

import chisel3._
import chisel3.util._

class jalr extends Module{
    val io = IO(new Bundle{
        val rs1 = Input(UInt(32.W))
        val imm = Input(UInt(32.W))
        var pcVal = Output(UInt(32.W))
    })
    val sum = WireInit(io.rs1 + io.imm)
    io.pcVal := sum & "b11111111111111111111111111111110".U
}