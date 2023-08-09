package Vpractice

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class RISC5Test extends FreeSpec with ChiselScalatestTester{
   "RISC5Test test" in{
       test(new Top ()){c =>
         c.clock.step(85) 
   }
}      
}
