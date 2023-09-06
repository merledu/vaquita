package rvv

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._

class TAIL_MASKTest extends FreeSpec with ChiselScalatestTester{
   "TAIL_MASKTest test" in{
       test(new Tail_Mask()){c =>
        //  c.io.V_out_alu.poke(BigInt("101000000000000000000000000000000000000000000000000000000001010").S)
        //  c.io.v0.poke(BigInt("101000000000000000000000000000000000000000000000000000000001010").S)
        //  c.io.alu_vd_data_pre.poke(BigInt("101000000000000000000000000000000000000000000000000000000001010").S)
         c.io.tm_sew.poke("b010".U)
         c.io.tm_vl.poke(4.U)               //if 4 means all body elements, if 3 means last elment is tail element
         c.io.tm_vta.poke(0.U)
         c.io.tm_vma.poke(1.U)
         c.io.tm_vm.poke(0.U)
         c.clock.step(10) 
       }
    }
}       