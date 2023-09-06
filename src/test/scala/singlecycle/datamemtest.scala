package singlecycle
import chisel3._
import org.scalatest._
import chiseltest._

class dmemtest extends FreeSpec with ChiselScalatestTester{
    "dmem Test" in { 
        test(new datamem()){ c=>
        c.io.Addr.poke(1.U)
        c.io.Data.poke(1.S)
        c.io.MemWrite.poke(0.B)
        c.io.MemRead.poke(1.B)
        
        c.io.out.expect(0.S)
        c.clock.step(1)
        
        }
    }
}