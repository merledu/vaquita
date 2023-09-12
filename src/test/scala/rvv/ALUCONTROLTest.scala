package rvv

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class ALUCONTROLTest extends FreeSpec with ChiselScalatestTester{
   "ALUCONTROLTest test" in{
       test(new Alu_Control  ()){c =>
         c.io.func3.poke(3.U)
         c.io.func7.poke(0.B)
         c.io.aluOp.poke(1.U)
         c.io.I_inst.poke(0.B)
         c.io.V_inst.poke(1.B)
         c.io.func6.poke(0.U)
         c.clock.step(1) 
         c.io.out.expect("b000000011".U)
         c.io.out_V.expect(1.B)
   }
}      
}
