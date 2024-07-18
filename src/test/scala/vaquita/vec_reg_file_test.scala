package vaquita
import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class vec_reg_file_test extends FreeSpec with ChiselScalatestTester {
  "vec reg file" in {
    implicit val config = new Config {}
    test(new vregfile) { dut =>
      dut.io.vs1_addr.poke(22.U)
      dut.io.vs2_addr.poke(22.U)
      dut.io.vd_addr.poke(22.U)
      dut.io.vd_data.poke(22.S)
      dut.io.reg_write.poke(1.B)
      // dut.io.vs1_out.expect(44.S)
      dut.clock.step(20)
      }
    }
}