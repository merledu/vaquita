package Vpractice

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class V_CSRTest extends FreeSpec with ChiselScalatestTester{
   "V_CSRTest test" in{
       test(new V_Csr ()){c =>
         c.io.Vtype_inst.poke("b00001010111".U)
         c.io.vl_writeback.poke(0.U)
         c.io.csr_regWrite.poke(1.B)
         c.clock.step(5) 
         c.io.vl_out.expect(0.U)
         // c.io.vtype_out.expect

   }
}      
}
