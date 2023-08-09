package Vpractice

import chisel3._
import chisel3.util._
 
class Alu_Control ( ) extends Module {
    val io = IO (new Bundle {
        val func3 = Input ( UInt (3.W ) )
        val func7 = Input ( Bool () )
        val aluOp = Input ( UInt (3.W ) )
        val I_inst = Input ( Bool() )                    //vsetvli
        val V_inst = Input ( Bool() )


        val out = Output ( UInt ( 5.W ) )
        val out_V = Output ( Bool() )                    //vsetvli
})
when (io.I_inst === 1.B) {
    // R type
    when (io.aluOp === 0.U) {
        io.out := Cat(0.U, io.func7, io.func3)
        io.out_V := 0.U

    // I type
    }.elsewhen (io.aluOp === 1.U) {
        io.out := Cat("b00".U, io.func3)
        io.out_V := 0.U

    // SB type
    }.elsewhen (io.aluOp === 2.U) {
        io.out := Cat(1.U, 0.U, io.func3)
        io.out_V := 0.U

    // UJ type
    }.elsewhen (io.aluOp === 3.U) {
        io.out := "b11111".U
        io.out_V := 0.U

    // Loads
    }.elsewhen (io.aluOp === 4.U) {
        io.out := "b00000".U
        io.out_V := 0.U

    // S type
    }.elsewhen (io.aluOp === 5.U) {
        io.out := "b00000".U
        io.out_V := 0.U

    // U type(lui)
    }.elsewhen (io.aluOp === 6.U) {
        io.out := "b00000".U
        io.out_V := 0.U

    // U type(auipc)
    }.elsewhen (io.aluOp === 7.U) {
        io.out := "b00000".U
        io.out_V := 0.U

    }.otherwise{
        io.out := 0.U
        io.out_V := 0.U
    }

}.elsewhen (io.V_inst === 1.B) {
    // vsetvli
    when (io.aluOp === 0.U) {
        io.out := Cat("b00".U, io.func3)
        io.out_V := 1.B 
    }.otherwise {
        io.out := 0.U
        io.out_V := 0.U
    }
 
}.otherwise {
    io.out := 0.U
    io.out_V := 0.U
}
}