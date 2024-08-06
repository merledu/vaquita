package vaquita
import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class stages_test extends FreeSpec with ChiselScalatestTester {
  "stages test" in {
    implicit val config = new Config {}
    test(new stages) { dut =>
      dut.io.bit1.poke(1.B)
      dut.io.bits_32_s.poke(32.S)
      dut.io.bits_32_u.poke(32.U)

      // dut.io.vs1_out.expect(44.S)
      dut.clock.step(20)
      }
    }
}