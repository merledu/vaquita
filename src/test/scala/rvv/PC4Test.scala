package rvv

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class PC4Test extends FreeSpec with ChiselScalatestTester{
   "PC4Test test" in{
       test(new Program_Counter ()){c =>
         c.io.pc.poke(0.U)
         c.clock.step(1) 
   
         c.io.pc.poke(4.U)         
         c.clock.step(1) 

         c.io.pc.poke(8.U)         
         c.clock.step(1) 

         c.io.pc.poke(12.U)         
         c.clock.step(1) 
   
         c.io.pc.poke(16.U)         
         c.clock.step(1) 

         c.io.pc.poke(20.U)         
         c.clock.step(1) 

         c.io.pc.poke(24.U)         
         c.clock.step(1) 

         c.io.pc.poke(28.U)         
         c.clock.step(1) 
   }
}      
}
