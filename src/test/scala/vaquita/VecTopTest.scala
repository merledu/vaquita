package vaquita
import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._
import vaquita.configparameter.VaquitaConfig


class VecTopTest extends FreeSpec with ChiselScalatestTester {
  "vec top test" in {
    implicit val config = new VaquitaConfig (256,32,32,8)
    test(new VaquitaTop) { dut =>
    dut.io.instr.poke(0.U)
    dut.io.rs1_data.poke(0.S)
    dut.io.hazard_rs1_data_in.poke(0.U)
    dut.io.vl_rs1_out.expect(0.U)    
    dut.io.dmemReq.ready.poke(true.B)
    dut.io.dmemRsp.valid.poke(true.B)
    dut.clock.step(1)
    }
  }
}