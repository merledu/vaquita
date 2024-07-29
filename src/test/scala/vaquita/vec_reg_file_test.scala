package vaquita
import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class vec_reg_file_test extends FreeSpec with ChiselScalatestTester {
  "vec reg file" in {
    implicit val config = new Config {}
    test(new vec_reg_file) { dut =>
      dut.io.vs1_addr.poke(22.U)
      dut.io.vs2_addr.poke(22.U)
      dut.io.vd_addr.poke(22.U)
      dut.io.vd_data(0).poke(22.S)
      dut.io.vd_data(1).poke(22.S)
      dut.io.vd_data(2).poke(22.S)
      dut.io.vd_data(3).poke(22.S)
      // dut.io.vd_data(4).poke(22.S)
      // dut.io.vd_data(5).poke(22.S)
      // dut.io.vd_data(6).poke(22.S)
      // dut.io.vd_data(7).poke(22.S)
      dut.io.reg_write.poke(1.B)
      dut.io.vtype.poke("b10000000000000000000000000010010".U)
      // dut.io.sew.poke(32.U)
      // dut.io.lmul.poke(2.U)
      // dut.io.vs1_out.expect(44.S)
      dut.clock.step(20)
      }
    }
}