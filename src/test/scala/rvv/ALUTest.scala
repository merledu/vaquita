package rvv

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class ALUTest extends FreeSpec with ChiselScalatestTester{
   "ALUTest test" in{
       test(new ALU_1 ()){c =>
         c.io.in_A.poke(1.S)
         c.io.in_B.poke(2.S)
         c.io.alu_Op.poke(0.U)
         c.io.in_I.poke(0.B)
         c.io.in_V.poke(1.B)
         c.io.alu_sew.poke("b010".U)
         c.io.alu_imm.poke(2.S)
         c.io.V_in_A.poke(2.S)
         c.io.V_in_B.poke(5.S)
         c.clock.step(50) 
         // c.io.out.expect(3.S)

   }
}      
}
