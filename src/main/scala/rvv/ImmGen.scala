package rvv

import chisel3._
import chisel3.util._

class immdValGen extends Module {
    val io = IO(new Bundle {
        val instr = Input(UInt(32.W))
        val pc = Input(SInt(32.W))
        val s_imm = Output(SInt(32.W))
        val sb_imm = Output(SInt(32.W))
        val u_imm = Output(SInt(32.W))
        val uj_imm = Output(SInt(32.W))
        val i_imm = Output(SInt(32.W))
        val vaddi_imm = Output(SInt(32.W))
    })

    val s1 = io.instr(11,7)
    val s2 = io.instr(31,25)
    var s3 = Cat(s2, s1)
    val s4 = Cat(Fill(20, s3(11)), s3) 
    io.s_imm := s4.asSInt

    val sb1 = io.instr(11,8)
    val sb2 = io.instr(30, 25)
    val sb3 = io.instr(7)
    val sb4 = io.instr(31)
    val sb5 = Cat(sb4, sb3, sb2, sb1, 0.S)
    val sb6 = Cat(Fill(19, sb5(12)), sb5).asSInt
    io.sb_imm := sb6 + io.pc

    val u1 = io.instr(31,12)
    var u2 = Cat(Fill(12, u1(19)), u1)
    val u3 = u2 << 12.U
    io.u_imm := u3.asSInt

    val uj1 = io.instr(30, 21)
    val uj2 = io.instr(20)
    val uj3 = io.instr(19, 12)
    val uj4 = io.instr(31)
    val uj5 = Cat(uj4, uj3, uj2, uj1, 0.S)
    val uj6 = Cat(Fill(11, uj5(20)), uj5).asSInt
    io.uj_imm := uj6 + io.pc

    val i1 = io.instr(31, 20)
    val i2 = Cat(Fill(20, i1(11)), i1)
    io.i_imm := i2.asSInt

    io.vaddi_imm := Cat(Fill(27, 0.U), io.instr(19,15)).asSInt
}