package vaquita
import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class alutest extends FreeSpec with ChiselScalatestTester {

  "vec alu" in {
    implicit val config = new Config {}
    test(new VALU) { dut =>
      dut.io.vs1_in.poke(22.S)
      dut.io.vs2_in.poke(22.S)
      dut.io.mask_arith.poke(1.B)
      // dut.io.vs1_out.expect(44.S)
      dut.clock.step(20)
      }
    }
}