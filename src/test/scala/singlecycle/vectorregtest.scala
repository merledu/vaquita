package singlecycle

import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec

class VRegFileTest extends FreeSpec with ChiselScalatestTester {
  "vreg Test" in {
    
    // Wrap the module instantiation within the test
    test(new vregfile) { dut =>
      
      dut.io.reg_write.poke(1.B)
      dut.io.numElem.poke(4.U)
      dut.io.elemWidth.poke(32.U)
      dut.io.vd_addr.poke(1.U)
      dut.io.vd_data(0).poke(42.U) // Writing sequential data
      dut.io.vd_data(1).poke(42.U) // Writing sequential data
      dut.io.vd_data(2).poke(42.U) // Writing sequential data
      dut.io.vd_data(3).poke(42.U) // Writing sequential data

      dut.clock.step(100)

      // Add more test cases and assertions here
      // Example: Checking if the data is correctly read back from the register file
      dut.io.vsew.poke("b010".U)
      dut.io.vs1_addr.poke(1.U)
      dut.io.vs2_addr.poke(3.U)
      dut.clock.step()
      // dut.io.vs1_data.expect(VecInit(Seq.tabulate(4)(i => i.U))) // Expecting sequential data
    }
  }
}

