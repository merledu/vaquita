package rvv

import chisel3._
import chisel3.util._

object BROP{
    val ALU_beq = "b10000".U(5.W) 
    val ALU_bne = "b10001".U(5.W)
    val ALU_blt = "b10100".U(5.W)
    val ALU_bge = "b10101".U(5.W)
}
import BROP._
class branchControl extends Module{
    val io = IO(new Bundle{
        val in_A = Input(SInt(32.W))
        val in_B = Input(SInt(32.W))
        val br_Op = Input(UInt(5.W))
        val branch_out = Output(UInt(1.W))
    })
    io.branch_out := 0.B
    switch(io.br_Op){
        is(ALU_beq){
            when (io.in_A === io.in_B){
                io.branch_out := 1.U
            }.otherwise{
                io.branch_out := 0.U
            }
        }
        is(ALU_bne){
            when (io.in_A =/= io.in_B){
                io.branch_out := 1.U
            }.otherwise{
                io.branch_out := 0.U
            }
        }
        is(ALU_blt){
            when (io.in_A < io.in_B){
                io.branch_out := 1.U
            }.otherwise{
                io.branch_out := 0.U
            }
        }
        is(ALU_bge){
            when(io.in_A > io.in_B){
                io.branch_out := 1.U
            }.otherwise{
                io.branch_out := 0.U
            }
        }
    }
}