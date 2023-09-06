package singlecycle
import chisel3._
import org.scalatest._
import chiseltest._

class instmemtest extends FreeSpec with ChiselScalatestTester{
    "instmem Test" in { 
        test(new InstMem()){ c=>
        for (i <- 1 until 10){
        c.io.addr.poke(i.U)
        //c.io.in.poke(15.U)
        //c.io.select.poke(0.B)
       c.clock.step(1)
    
        }
         c.clock.step(100)
        }
    }
}