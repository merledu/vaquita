package rvv

import chisel3._
import chisel3.util._

class pC extends Module{
    val io = IO(new Bundle{
        val in = Input(SInt(32.W))
        val out = Output(SInt(32.W))
        val pc4 = Output(SInt(32.W))
    })
    val pc = RegInit(0.S(32.W))
    pc := io.in
    io.out := pc
    io.pc4 := pc + 4.S
}