package rvv

import chisel3._
import chisel3.util._

class aluControl extends Module{
    val io = IO(new Bundle{
        val alu_Operation = Input(UInt(3.W))
        val func3 = Input(UInt(3.W))
        val func7 = Input(UInt(7.W))
        val func6 = Input(UInt(6.W))
        val is_I = Input(Bool())
        val is_V = Input(Bool())
        val out_V = Output(Bool())
        val out_I = Output(Bool())
        val out = Output(UInt(11.W))
    })
    when(io.is_I === 1.B & io.is_V === 0.B){
        when(io.alu_Operation === "b000".U){//R-Type
            io.out := Cat("b0".U, io.func7, io.func3)
            io.out_I := 1.B
            io.out_V := 0.B
        }.elsewhen(io.alu_Operation === "b001".U){//I-Type
            io.out := Cat("b0".U, "b0000000".U, io.func3)
            io.out_I := 1.B
            io.out_V := 0.B
        }.elsewhen(io.alu_Operation === "b101".U){//S-Type
            io.out := "b00000000000".U
            io.out_I := 1.B
            io.out_V := 0.B
        }.elsewhen(io.alu_Operation === "b010".U){//SB-Type
            io.out := Cat("b10000000".U, io.func3)
            io.out_I := 1.B
            io.out_V := 0.B
        }.elsewhen(io.alu_Operation === "b110".U){//LUI-Type
            io.out := "b00000000000".U
            io.out_I := 1.B
            io.out_V := 0.B
        }.elsewhen(io.alu_Operation === "b011".U){//UJ-Type
            io.out := "b11111111111".U
            io.out_I := 1.B
            io.out_V := 0.B
        }.elsewhen(io.alu_Operation === "b100".U){//Load
            io.out := "b00000000000".U
            io.out_I := 1.B
            io.out_V := 0.B
        }.elsewhen(io.alu_Operation === "b111".U){//AUIPC
            io.out := "b00000000000".U
            io.out_I := 1.B
            io.out_V := 0.B
        }.otherwise{
            io.out := DontCare
            io.out_I := DontCare
            io.out_V := DontCare
        }
    }.elsewhen(io.is_I === 0.B & io.is_V === 1.B){
        when(io.alu_Operation === "b000".U){//VSETVLI
            io.out := Cat("b00".U, "b0000000".U, io.func3)
            io.out_V := 1.B
            io.out_I := 0.B
        }.elsewhen(io.alu_Operation === "b001".U){//Vaddi
            io.out := Cat("b00".U, io.func6, io.func3)
            io.out_V := 1.B
            io.out_I := 0.B
        }.otherwise{
            io.out := DontCare
            io.out_V := DontCare
            io.out_I := DontCare
        }
    }.otherwise{
        io.out := DontCare
        io.out_I := DontCare
        io.out_V := DontCare
    }
}