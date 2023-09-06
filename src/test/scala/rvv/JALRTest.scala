package rvv

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class JALRTest extends FreeSpec with ChiselScalatestTester{
   "JALRTest test" in{
       test(new Jalr ()){c =>
         c.io.imme.poke(19.U)
         c.io.rdata1.poke(2.U)
         c.clock.step(1) 
         c.io.out.expect(20.U)
   }
}      
}
