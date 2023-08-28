package singlecycle

import chisel3._
import org.scalatest._
import chiseltest._

class AluControlTest extends FreeSpec with ChiselScalatestTester {
  "Alu_Control Test" in {
    test(new Alu_Control) { c =>
      // Test cases here
      c.io.I_inst.poke(false.B)
      c.io.V_inst.poke(false.B)
      c.io.aluOp.poke("b000".U)
      c.io.func3.poke("b001".U)
      c.io.func7.poke(false.B)
      c.io.func6.poke(0.U)
      c.clock.step(1)

      c.io.out.expect("b000000001".U)
      c.io.out_V.expect(false.B)

    }
  }
}
