package rvv

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class BRANCHTest extends FreeSpec with ChiselScalatestTester{
   "BRANCHTest test" in{
       test(new BranchControl()){c =>
         c.io.fnct3.poke(0.U)
         c.io.branch.poke(1.B)
         c.io.arg_x.poke(5.S)
         c.io.arg_y.poke(5.S)
         c.clock.step(1) 
         c.io.br_taken.expect(1.B)
   }
}      
}
