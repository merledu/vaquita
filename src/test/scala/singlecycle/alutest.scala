package singlecycle
import chisel3._
import org.scalatest._
import chiseltest._
class alu_test extends FreeSpec with ChiselScalatestTester{
    "alu test" in {
        test(new ALU_){ c =>
        c.io.aluc.poke("b00000".U)
        c.io.in_A.poke(7.S)
        c.io.in_B.poke(2.S)
        c.clock.step(20)
        c.io.output.expect(9.S)
       
        }
    }
}