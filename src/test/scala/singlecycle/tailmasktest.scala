package singlecycle

import chisel3._
import org.scalatest.FreeSpec
import chiseltest._
import chiseltest.experimental.TestOptionBuilder._
import chiseltest.internal.VerilatorBackendAnnotation
import scala.util.Random

class TAIL_MASKTest extends FreeSpec with ChiselScalatestTester{
   "TAIL_MASKTest test" in{
       test(new Tail_Mask()){c =>
         c.io.v_data1(0).poke(5.U)
         c.io.v_data1(1).poke(5.U)
         c.io.v_data1(2).poke(5.U)
         c.io.v_data1(3).poke(5.U)
         c.io.v_data1(4).poke(5.U)
         c.io.v_data1(5).poke(5.U)
         c.io.v_data1(6).poke(4.U)
         c.io.v_data1(7).poke(4.U)
         c.io.v_data1(8).poke(4.U)
         c.io.v_data1(9).poke(4.U)
         c.io.v_data1(10).poke(4.U)
         c.io.v_data1(11).poke(4.U)
         c.io.v_data1(12).poke(6.U)
         c.io.v_data1(13).poke(6.U)
         c.io.v_data1(14).poke(6.U)
         c.io.v_data1(15).poke(6.U)
         c.io.vlmax.poke(16.U)
        //  c.io.v_data2.poke()
         c.io.tm_vl.poke(12.U)
        //  c.io.tm_vm.poke(1.B)
         c.clock.step(10) 
        //  c.io.v_data1_out(0).expect(0.U)
        //  c.io.v_data1_out(1).expect(0.U)
        //  c.io.v_data1_out(2).expect(0.U)
        //  c.io.v_data1_out(12).expect(6.U)
        //  c.io.v_data1_out(13).expect(6.U)
        //  c.io.v_data1_out(14).expect(6.U)
         
        //  c.io.v_data2_out.expect()
        
       }
    }
}