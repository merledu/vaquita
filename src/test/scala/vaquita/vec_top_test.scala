package vaquita
import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class vec_top_test extends FreeSpec with ChiselScalatestTester {
  "vec top test" in {
    implicit val config = new Config {}
    test(new vec_top) { dut =>
      dut.io.instr.poke("x0284b4d7".U)
      dut.io.rs1_data.poke(23.S)
      dut.clock.step(1)
      dut.io.instr.poke("x02824557".U)
      dut.io.rs1_data.poke(22.S)
      dut.clock.step(1)
      dut.io.instr.poke("x029505d7".U)
      dut.io.rs1_data.poke(123.S)
      dut.clock.step(1)
      dut.io.instr.poke("x0212b557".U)
      dut.io.rs1_data.poke(123.S)
      dut.clock.step(10)
      }
    }
}

