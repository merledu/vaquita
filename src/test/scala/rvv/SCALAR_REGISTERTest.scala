package rvv

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class SCALAR_REGISTERTest extends FreeSpec with ChiselScalatestTester{
   "REGISTERSTest test" in{
       test(new RegFile ()){c =>
         c.io.rs1.poke(2.U)
         c.io.rs2.poke(0.U)
         c.io.w_reg.poke(3.U)
         c.io.w_data.poke(15.S)
         c.io.reg_write.poke(1.B)
         c.clock.step(3) 
         c.io.rs1.poke(3.U)
         c.clock.step(1)
   }
}      
}
