package Vpractice

import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage

class Immde extends Module {
    val io = IO (new Bundle{
        val instr = Input ( UInt (32.W ) )
        val pc = Input( UInt (32.W))
        val I_type = Output ( SInt (32.W ) )
        val S_type = Output ( SInt (32.W ) )
        val SB_type = Output ( SInt (32.W ) )
        val U_type = Output ( SInt (32.W ) )
        val UJ_type = Output ( SInt (32.W ) )
})   

io.I_type := Cat(Fill(20, io.instr(31)), io.instr(31,20)).asSInt

io.S_type := Cat(Fill(20, io.instr(31)), io.instr(31,25), io.instr(11,7)).asSInt

val a = Cat(Fill(19, io.instr(31)), io.instr(31), io.instr(7), io.instr(30,25), io.instr(11,8), 0.U).asSInt
io.SB_type := a + io.pc.asSInt

io.U_type := Cat(io.instr(31,12), Fill(12, "b0".U)).asSInt

val b = Cat(Fill(11, io.instr(31)), io.instr(31), io.instr(19,12), io.instr(20), io.instr(30,21), 0.U).asSInt
io.UJ_type := b + io.pc.asSInt
}
