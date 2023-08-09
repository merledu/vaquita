package Vpractice

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class ALUTest extends FreeSpec with ChiselScalatestTester{
   "ALUTest test" in{
       test(new ALU_1 ()){c =>
         c.io.in_A.poke(1.S)
         c.io.in_B.poke(2.S)
         c.io.alu_Op.poke(7.U)
         c.io.in_I.poke(0.B)
         c.io.in_V.poke(1.B)
         c.clock.step(1) 
         c.io.out.expect(1.S)
   }
}      
}
