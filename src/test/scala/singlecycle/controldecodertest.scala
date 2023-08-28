package singlecycle
import chisel3._
import chiseltest._
import org.scalatest._

class ControlDecTest extends FreeSpec with ChiselScalatestTester {
  "controldec Test" in { 
    test(new controldec()) { c =>
      c.io.Instruction.poke("b0110011".U)
      c.clock.step(1)

      // Expected outputs for this test case
      c.io.MemWrite.expect(false.B)
      c.io.Branch.expect(false.B)
      c.io.MemRead.expect(false.B)
      c.io.RegWrite.expect(true.B)
      c.io.Mem2Reg.expect(false.B)
      c.io.opAsel.expect("b00".U)
      c.io.opBsel.expect(false.B)
      c.io.Ex_sel.expect("b00".U)
      c.io.nextPCsel.expect("b00".U)
      c.io.aluop.expect("b000".U)
      c.io.vset.expect(false.B)
      c.io.load.expect(0.U)
      c.io.V_inst.expect(false.B)
    }
  }
}
