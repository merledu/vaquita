
package vaquita.components
import chisel3._


class ForwardingUnit extends Module {
  val io = IO(new Bundle {
    val mem_vd       = Input(UInt(5.W))
    val wb_vd        = Input(UInt(5.W))
    val instr_in     = Input(UInt(32.W))
    val mem_regWrite = Input(Bool())
    val wb_regWrite  = Input(Bool())

    val forward_a     = Output(UInt(2.W))
    val forward_b     = Output(UInt(2.W))
    val forward_c     = Output(UInt(2.W))
    val forward_d     = Output(UInt(2.W))
  })
  val vs2_addr     = io.instr_in(24,20)
  val vs1_addr     = io.instr_in(19,15)
  val vs3_addr     = io.instr_in(11,7)
  val vs0_addr_bit = vs1_addr | vs2_addr
  val func3        = io.instr_in(14,12)
  dontTouch(func3)

  io.forward_a := DontCare
  io.forward_b := DontCare
  // forword A => vs1 data Hazard
  when((vs1_addr === io.mem_vd && 0.U===func3) && io.mem_vd =/= 0.U && io.mem_regWrite) { // fun3 for vector to vector in vs1(solve immediate number and scalar number)
    io.forward_a := 1.U
  }.elsewhen( vs1_addr === io.wb_vd && 0.U===func3 && io.wb_vd =/= 0.U && io.wb_regWrite) {
    io.forward_a := 2.U
  }.otherwise {
    io.forward_a := 0.U
  }
  // forword B => vs2 data Hazard
  when((vs2_addr === io.mem_vd) && io.mem_vd =/= 0.U && io.mem_regWrite) {
    io.forward_b := 1.U
  }.elsewhen( vs2_addr === io.wb_vd && io.wb_vd =/= 0.U && io.wb_regWrite) {
    io.forward_b := 2.U
  }.otherwise {
    io.forward_b := 0.U
  }
  // forword c => vs3 data Hazard
  when((vs3_addr === io.mem_vd) && io.mem_vd =/= 0.U && io.mem_regWrite) {
    io.forward_c := 1.U
  }.elsewhen( vs3_addr === io.wb_vd && io.wb_vd =/= 0.U && io.wb_regWrite) {
    io.forward_c := 2.U
  }.otherwise {
    io.forward_c := 0.U
  }
  // forword D => vs0 data Hazard
  when((0.U === io.mem_vd && vs0_addr_bit===1.B) && io.mem_vd =/= 0.U && io.mem_regWrite) {
    io.forward_d := 1.U
  }.elsewhen( (0.U === io.wb_vd && vs0_addr_bit===1.B) && io.wb_vd =/= 0.U && io.wb_regWrite) {
    io.forward_d := 2.U
  }.otherwise {
    io.forward_d := 0.U
  }
}
