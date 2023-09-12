package rvv

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class PCTest extends FreeSpec with ChiselScalatestTester{
   "PCTest test" in{
       test(new PC ()){c =>
         c.io.in.poke(0.S)
         c.clock.step(1) 
         c.io.out.expect(0.S)
       }
   }
}