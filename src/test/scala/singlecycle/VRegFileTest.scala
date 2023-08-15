package singlecycle

import chisel3._
import chisel3.util._
import chisel3.tester._
import org.scalatest.FreeSpec

class VRegFileTest extends FreeSpec with ChiselScalatestTester {
  "vect reg Test" in {
    test(new Vregfile(4, 32)) { a =>
      a.io.vsew.poke("b010".U)
      a.io.vs1_addr.poke(2.U)
      a.io.vs2_addr.poke(3.U)
      a.io.vd_addr.poke(1.U)
      a.io.vd_data(0).poke(1.U)
      a.io.vd_data(1).poke(1.U)
      
      a.io.reg_write.poke(true.B)

      a.clock.step()

      a.io.vs1_data.zipWithIndex.foreach { case (data, i) =>
        data.expect(i.U)
      }
    }
  }
}
