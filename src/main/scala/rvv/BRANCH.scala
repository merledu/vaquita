package rvv

import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage

class BranchControl extends Module{
    val io = IO (new Bundle {
        val fnct3 = Input ( UInt (3.W ) )
        val branch = Input ( Bool () )
        val arg_x = Input ( SInt (32.W ) )
        val arg_y = Input ( SInt (32.W ) )
        val br_taken = Output ( Bool () )
})
when(io.branch === 1.B){
    // beq
    when ( io.fnct3 === 0.U ) {
        io.br_taken := io.arg_x === io.arg_y
    // bne
    }.elsewhen ( io.fnct3 === 1.U ) {
        io.br_taken := io.arg_x =/= io.arg_y
    // blt
    }.elsewhen ( io.fnct3 === 4.U ) {
        io.br_taken := io.arg_x < io.arg_y
    // bge
    }.elsewhen ( io.fnct3 === 5.U ) {
        io.br_taken := io.arg_x >= io.arg_y
    // bgeu
    }.elsewhen ( io.fnct3 === 7.U ) {
        io.br_taken := (io.arg_x >= io.arg_y).asUInt
    // bltu
    }.elsewhen ( io.fnct3 === 6.U ) {
        io.br_taken := (io.arg_x <= io.arg_y).asUInt
    }.otherwise{
        io.br_taken := 0.B
    }

}.otherwise{
    io.br_taken := 0.B
}
}


