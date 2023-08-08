package singlecycle
import chisel3._
import org.scalatest._
import chiseltest._

class jalrtest extends FreeSpec with ChiselScalatestTester{
    "jalr Test" in { 
        test(new jalr()){ c=>
        c.io.rs1.poke(1.S)
        c.io.imm.poke(4.S)
        
        
        //c.io.out.expect(2.S)
        c.clock.step(1)
        
        }
    }
}