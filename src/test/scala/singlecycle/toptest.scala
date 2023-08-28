package singlecycle
import chisel3._
import org.scalatest._
import chiseltest._

class toptest extends FreeSpec with ChiselScalatestTester{
    "top Test" in { 
        test(new Top()){ c=>
        c.clock.step(100)

      
        
        
        
        
        
        }
    }
}