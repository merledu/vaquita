package vaquita
import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class instr_status_table_test extends FreeSpec with ChiselScalatestTester {

  "buffer" in {
    test(new FIFOBuffer(8,12)) { c =>
    //   c.io.empty.expect(true.B)
    //   c.io.full.expect(false.B)

      for (i <- 0 until 12) {
        c.io.writeEn.poke(true.B)
        c.io.writeData.poke(i.U)
        c.clock.step(1)
      }
    //   c.io.empty.expect(false.B)
    //   c.io.full.expect(true.B)

      // Read data from the buffer
      for (i <- 0 until 12) {
        c.io.readEn.poke(true.B)
        c.io.readData.expect(i.U)
        c.clock.step(1)
      }

    //   c.io.empty.expect(true.B)
    //   c.io.full.expect(false.B)
    }
  }
}
