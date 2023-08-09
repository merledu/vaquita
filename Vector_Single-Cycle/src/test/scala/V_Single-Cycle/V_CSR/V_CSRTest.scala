package Vpractice

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class V_CSRTest extends FreeSpec with ChiselScalatestTester{
   "V_CSRTest test" in{
       test(new V_Csr ()){c =>
         c.io.Vtype_inst.poke("b00001010111".U)
         c.io.vl_writeback.poke(0.U)
         // c.io.vl.poke(2.U)
         c.clock.step(5) 
         c.io.vl_out.expect(0.U)

   }
}      
}


// 0003f357
// c100ffd7