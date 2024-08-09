
package vaquita
import chisel3._

class ForwardingUnit extends Module {
  val io = IO(new Bundle {
    val mem_vd = Input(UInt(5.W))
    val wb_vd = Input(UInt(5.W))
    val vs2_vs1_addr_func3 = Input(UInt(13.W))
    val mem_regWrite = Input(Bool())
    val wb_regWrite = Input(Bool())

    val forwardA = Output(UInt(2.W))
    val forwardB = Output(UInt(2.W))
  })
  val vs2_addr = io.vs2_vs1_addr_func3(12,8)
  val vs1_addr = io.vs2_vs1_addr_func3(7,3)
  val func3 = io.vs2_vs1_addr_func3(2,0)
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
}
