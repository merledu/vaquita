package rvv

import chisel3._
import org.scalatest._
import chiseltest._

class Topfile_Test extends FreeSpec with ChiselScalatestTester{
    "Top File Test" in {
        test(new top){
            C =>
            C.clock.step(100)
        }
    }
}