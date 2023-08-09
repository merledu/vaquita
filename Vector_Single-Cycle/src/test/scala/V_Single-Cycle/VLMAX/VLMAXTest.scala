package Vpractice

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class VLMAXTest extends FreeSpec with ChiselScalatestTester{
   "VLMAXTest test" in{
       test(new Vlmax ()){c =>
         c.io.v_lmul.poke("b001".U)
         c.io.v_sew.poke("b000".U)
         c.clock.step(10) 
         c.io.vlmax.expect(32.U)

   }
}      
}