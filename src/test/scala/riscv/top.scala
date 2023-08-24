package riscv
import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class top extends FreeSpec with ChiselScalatestTester{
    "top" in {
        test(new top_file){c=>
        c.clock.step(100)
           
            
        }
    }
}