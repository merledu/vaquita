package Vpractice

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class VECTOR_REGISTERTest extends FreeSpec with ChiselScalatestTester{
   "V_REGISTERTest test" in{
       test(new V_RegFile ()){c =>
         c.io.vs1.poke(1.U)
         c.io.vs2.poke(2.U)
         c.io.V_reg_write.poke(1.B)
         c.io.vd.poke(3.U)
         c.io.V_w_data.poke(8.S) 
         c.clock.step(50)
      }
   }
   }
