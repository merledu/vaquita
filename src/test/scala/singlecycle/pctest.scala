package singlecycle
import chisel3._
import org.scalatest._
import chiseltest._

class pctest extends FreeSpec with ChiselScalatestTester{
    "pc Test" in { 
        test(new pc()){ c=>
        c.io.input.poke(0.U)
        c.clock.step(5)
        c.io.pc4.expect(4.U)
        c.io.pc.expect(0.U)
        }
    }
}