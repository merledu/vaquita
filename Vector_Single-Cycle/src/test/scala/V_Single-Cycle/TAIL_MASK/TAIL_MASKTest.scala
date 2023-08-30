// package Vpractice

// import chisel3._
// import org.scalatest.FreeSpec
// import chiseltest._
// import chiseltest.experimental.TestOptionBuilder._
// import chiseltest.internal.VerilatorBackendAnnotation
// import scala.util.Random

// class TAIL_MASKTest extends FreeSpec with ChiselScalatestTester{
//    "TAIL_MASKTest test" in{
//        test(new Tail_Mask()){c =>
//          c.io.v_data2(0).poke(5.U)
//          c.io.v_data2(1).poke(5.U)
//          c.io.v_data2(2).poke(5.U)
//          c.io.v_data2(3).poke(5.U)
//          c.io.v_data2(4).poke(5.U)
//          c.io.v_data2(5).poke(5.U)
//          c.io.v_data2(6).poke(5.U)
//          c.io.v_data2(7).poke(5.U)
//          c.io.v_data2(8).poke(5.U)
//          c.io.v_data2(9).poke(5.U)
//          c.io.v_data2(10).poke(5.U)
//          c.io.v_data2(11).poke(5.U)
//          c.io.v_data2(12).poke(5.U)
//          c.io.v_data2(13).poke(5.U)
//          c.io.v_data2(14).poke(5.U)
//          c.io.v_data2(15).poke(5.U)
//         //  c.io.v_data2.poke()
//          c.io.tm_vl.poke(4.U)
//         //  c.io.tm_vlmax.poke(16.U)
//          c.io.tm_vta.poke(1.B)
//         //  c.io.tm_vma.poke(0.B)
//          c.io.tm_vm.poke(1.B)
//          c.clock.step(10) 
//          c.io.v_data2_out(0).expect(5.U)
//          c.io.v_data2_out(1).expect(5.U)
//          c.io.v_data2_out(2).expect(5.U)
//          c.io.v_data2_out(3).expect(5.U)
//          c.io.v_data2_out(4).expect(0.U)
//          c.io.v_data2_out(5).expect(0.U)
//          c.io.v_data2_out(6).expect(0.U)
//          c.io.v_data2_out(7).expect(0.U)
//          c.io.v_data2_out(8).expect(0.U)
//          c.io.v_data2_out(9).expect(0.U)
//          c.io.v_data2_out(10).expect(0.U)
//          c.io.v_data2_out(11).expect(0.U)
//          c.io.v_data2_out(12).expect(0.U)
//          c.io.v_data2_out(13).expect(0.U)
//          c.io.v_data2_out(14).expect(0.U)
//          c.io.v_data2_out(15).expect(0.U)
//         //  c.io.v_data2_out.expect()
        
//        }
//     }
// }       