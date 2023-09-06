package singlecycle
import chisel3._
import org.scalatest._
import chiseltest._

class brcntrltest extends FreeSpec with ChiselScalatestTester{
    "brcntrl Test" in { 
        test(new BranchControl_()){ c=>
        c.io.aluc.poke("b10000".U)
        c.io.arg_x.poke(1.S)
        c.io.arg_y.poke(1.S)
        c.io.branch.poke(1.B)
        c.clock.step(1)
        c.io.br_taken.expect(1.B)}
    }
}