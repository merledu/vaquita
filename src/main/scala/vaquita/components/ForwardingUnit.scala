
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

    def forwardLogic(src: UInt, mem_vd: UInt, wb_vd: UInt, mem_regWrite: Bool, wb_regWrite: Bool, func3: UInt = 0.U, checkFunc3: Bool = false.B): UInt = {
        Mux((src === mem_vd && (!checkFunc3 || func3 === 0.U)) && mem_vd =/= 0.U && mem_regWrite, 1.U,
           Mux((src === wb_vd && (!checkFunc3 || func3 === 0.U)) && wb_vd =/= 0.U && wb_regWrite, 2.U, 0.U)
      )
    }

    io.forward_a := forwardLogic(vs1_addr, io.mem_vd, io.wb_vd, io.mem_regWrite, io.wb_regWrite, func3, checkFunc3 = true.B)
    io.forward_b := forwardLogic(vs2_addr, io.mem_vd, io.wb_vd, io.mem_regWrite, io.wb_regWrite)
    io.forward_c := forwardLogic(vs3_addr, io.mem_vd, io.wb_vd, io.mem_regWrite, io.wb_regWrite)
    io.forward_d := forwardLogic(0.U, io.mem_vd, io.wb_vd, io.mem_regWrite, io.wb_regWrite)

    io.forward_a := DontCare
    io.forward_b := DontCare
    io.forward_c := DontCare
    io.forward_d := DontCare

}
