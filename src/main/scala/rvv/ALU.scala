package rvv

import chisel3._
import chisel3.util._

object ALUOP {
    val ALU_ADD = "b00000".U(5.W)
    val ALU_SUB = "b01000".U(5.W)
    val ALU_AND = "b00111".U(5.W)
    val ALU_OR = "b00110".U(5.W)
    val ALU_XOR = "b00100".U(5.W)
    val ALU_SLT = "b00010".U(5.W)
    val ALU_SLL = "b00001".U(5.W)
    val ALU_SLTU = "b00011".U(5.W)
    val ALU_SRL = "b00101".U(5.W)
    val ALU_SRA = "b11101".U(5.W)
    val ALU_JALR = "b11111".U(5.W)
    val ALU_VSET = "b00111".U(5.W)
}

trait Config {
    val WLEN = 32
    val ALUOP_SIG_LEN = 11
}

import ALUOP._
class ALU extends Module with Config {
    val io = IO(new Bundle{
        val in_A = Input(SInt(WLEN.W))
        val in_B = Input(SInt(WLEN.W))
        val alu_Op = Input(UInt(ALUOP_SIG_LEN.W))
        val in_V = Input(Bool())
        val in_I = Input(Bool())
        var out = Output(SInt(WLEN.W))
    })
    io.out := 0.S
    switch(io.in_I){
        is(1.B){
            switch(io.alu_Op){
                is(ALU_ADD){
                    io.out := io.in_A + io.in_B
                }
                is(ALU_SUB){
                    io.out := io.in_A - io.in_B
                }
                is(ALU_SLT){
                    when(io.in_A < io.in_B) {
                        io.out := 1.S
                    }.otherwise{
                        io.out := 0.S
                    } 
                }
                is(ALU_SLTU){
                    when(io.in_A.asUInt < io.in_B.asUInt) {
                        io.out := 1.S
                    }.otherwise {
                        io.out := 0.S
                    }
                }
                is(ALU_SRA){
                    io.out := io.in_A >> io.in_B(4, 0)
                }
                is(ALU_SRL){
                    io.out := io.in_A >> io.in_B(4, 0)
                }
                is(ALU_SLL){
                    val sr = io.in_B(4, 0)
                    io.out := io.in_A << sr
                }
                is(ALU_AND){
                    io.out := io.in_A & io.in_B
                }
                is(ALU_OR){
                    io.out:=io.in_A | io.in_B
                }
                is(ALU_XOR){
                io.out := (io.in_A ^ io.in_B)
                }
                is(ALU_JALR){
                    io.out := (io.in_A)
                }
            }
        }
    }
    switch(io.in_V){
        is(1.B){
            switch(io.alu_Op){
                is(ALU_VSET){
                    when(io.in_A <= io.in_B){
                        io.out := io.in_A
                    }.elsewhen(io.in_A >= (io.in_B * 2.S)){
                        io.out := io.in_B
                    }.otherwise{
                        io.out := 0.S
                    }
                }
            }
        }
    }
}