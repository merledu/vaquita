package singlecycle
import chisel3._
import org.scalatest._
import chiseltest._

class regfiletest extends FreeSpec with ChiselScalatestTester{
    "regfile Test" in { 
        test(new regfile()){ c=>
        c.io.RegWrite.poke(1.B)
        c.io.rs1.poke(1.U)
        c.io.rs2.poke(2.U)
        c.io.rd.poke(3.U)
        c.io.WriteData.poke(3.S)
        
        
        
        c.clock.step(1)
        
        }
    }
}