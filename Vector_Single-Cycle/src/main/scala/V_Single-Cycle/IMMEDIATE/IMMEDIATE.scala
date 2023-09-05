package Vpractice

import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage

class Immde extends Module {
    val io = IO (new Bundle{
        val instr = Input ( UInt (32.W ) )
        val pc = Input( UInt (32.W))
        val I_instruction = Input ( Bool() )                    //opivi
        val V_instruction = Input ( Bool() )
        val I_type = Output ( SInt (32.W ) )
        val S_type = Output ( SInt (32.W ) )
        val SB_type = Output ( SInt (32.W ) )
        val U_type = Output ( SInt (32.W ) )
        val UJ_type = Output ( SInt (32.W ) )
        val V_I_type = Output ( SInt (64.W ) )
})   

when (io.I_instruction === 1.B) {        // Extract immediate values for various scalar instructions.
    io.I_type := Cat(Fill(20, io.instr(31)), io.instr(31,20)).asSInt

    io.S_type := Cat(Fill(20, io.instr(31)), io.instr(31,25), io.instr(11,7)).asSInt

    val a = Cat(Fill(19, io.instr(31)), io.instr(31), io.instr(7), io.instr(30,25), io.instr(11,8), 0.U).asSInt
    io.SB_type := a + io.pc.asSInt

    io.U_type := Cat(io.instr(31,12), Fill(12, "b0".U)).asSInt

    val b = Cat(Fill(11, io.instr(31)), io.instr(31), io.instr(19,12), io.instr(20), io.instr(30,21), 0.U).asSInt
    io.UJ_type := b + io.pc.asSInt

    io.V_I_type := 0.S
    
}.elsewhen (io.V_instruction === 1.B) {  // If it's a Vector instruction, extract the corresponding immediate value.
    io.I_type := 0.S 
    io.S_type := 0.S 
    io.SB_type := 0.S 
    io.U_type := 0.S 
    io.UJ_type := 0.S 
    io.V_I_type := Cat(Fill(59, 0.U), io.instr(19, 15)).asSInt

}.otherwise {
    io.I_type := 0.S 
    io.S_type := 0.S 
    io.SB_type := 0.S 
    io.U_type := 0.S 
    io.UJ_type := 0.S 
    io.V_I_type := 0.S
}

}
