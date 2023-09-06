package singlecycle
import chisel3._
import org.scalatest._
import chiseltest._
class immgentest extends FreeSpec with ChiselScalatestTester{
    "ins Test" in {
        test(new ImmdValGen1()){ c =>
        c.io.instruction.poke(0x00408267.U)
        c.io.pc.poke(4.U)
        c.clock.step(1)
        
    }
}
}