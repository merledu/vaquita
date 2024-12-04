
package vaquita
import chisel3._

class ForwardingUnit extends Module {
  val io = IO(new Bundle {
    val mem_vd = Input(UInt(5.W))
    val wb_vd = Input(UInt(5.W))
    val instr_in = Input(UInt(32.W))
    val mem_regWrite = Input(Bool())
    val wb_regWrite = Input(Bool())

    val forwardA = Output(UInt(2.W))
    val forwardB = Output(UInt(2.W))
    val forwardC = Output(UInt(2.W))
    val forwardD = Output(UInt(2.W))
  })
  val vs2_addr = io.instr_in(24,20)
  val vs1_addr = io.instr_in(19,15)
  val vs3_addr = io.instr_in(11,7)
  val vs0_addr_bit = vs1_addr | vs2_addr
  val func3 = io.instr_in(14,12)
  dontTouch(func3)

  io.forwardA := DontCare
  io.forwardB := DontCare
  
  when((vs1_addr === io.mem_vd && 0.U===func3) && io.mem_vd =/= 0.U && io.mem_regWrite) { // fun3 for vector to vector in vs1(solve immediate number and scalar number)
    io.forwardA := 1.U
  }.elsewhen( vs1_addr === io.wb_vd && 0.U===func3 && io.wb_vd =/= 0.U && io.wb_regWrite) {
      io.forwardA := 2.U
    }
    .otherwise {
      io.forwardA := 0.U
    }

when((vs2_addr === io.mem_vd) && io.mem_vd =/= 0.U && io.mem_regWrite) {
    io.forwardB := 1.U
  }.elsewhen( vs2_addr === io.wb_vd && io.wb_vd =/= 0.U && io.wb_regWrite) {
      io.forwardB := 2.U
    }
    .otherwise {
      io.forwardB := 0.U
    }
  when((vs3_addr === io.mem_vd) && io.mem_vd =/= 0.U && io.mem_regWrite) {
    io.forwardC := 1.U
  }.elsewhen( vs3_addr === io.wb_vd && io.wb_vd =/= 0.U && io.wb_regWrite) {
      io.forwardC := 2.U
    }
    .otherwise {
      io.forwardC := 0.U
    }
    when((0.U === io.mem_vd && vs0_addr_bit===1.B) && io.mem_vd =/= 0.U && io.mem_regWrite) {
    io.forwardD := 1.U
  }.elsewhen( (0.U === io.wb_vd && vs0_addr_bit===1.B) && io.wb_vd =/= 0.U && io.wb_regWrite) {
      io.forwardD := 2.U
    }
    .otherwise {
      io.forwardD := 0.U
    }
}
