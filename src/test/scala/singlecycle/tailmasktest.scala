package singlecycle
import chisel3._
import org.scalatest.FreeSpec
import chiseltest._
import chiseltest.experimental.TestOptionBuilder._
import chiseltest.internal.VerilatorBackendAnnotation
import scala.util.Random

class TAIL_MASKTEST extends FreeSpec with ChiselScalatestTester{
   "TAIL_MASKTest test" in{
       test(new Tail_Mask()){c =>
      c.io.sew.poke("b010".U)
      c.io.vma.poke("b1".U)
      c.io.vta.poke("b1".U)
      c.io.vm.poke("b0".U)
      c.io.vs0.poke("b0011".U)
      c.io.vd.poke("b00000000000000000000000000000000101010101010101010101010101010100000000000000000000000000000000010101010101010101010101010101010".U)
      c.io.vdata.poke("b000000000000000000000000000001111000000000000000000000000000001111000000000000000000000000000001111000000000000000000000000000001111".U)
      c.io.vlmax.poke(3.U)
      // c.io.v_data2.poke()
      c.io.vl.poke(2.U)
         c.clock.step(100) 
      // c.io.v_data_out.expect("b11111111111111111111111111111111111111111111111111111111111111110000000000000000000000000001111000000000000000000000000000001111".U)
        
       }
    }
}