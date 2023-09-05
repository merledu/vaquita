// package singlecycle
// import chisel3._
// import org.scalatest._
// import chiseltest._
// class alu_test extends FreeSpec with ChiselScalatestTester{
//     "alu test" in {
//         test(new ALU_()){ c =>
//         c.io.aluc.poke("b000000011".U)
//         c.io.in_A.poke(7.S)
//         c.io.in_B.poke(1.S)
//         c.io.vs1.poke("b00000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000001".U)
//         c.io.vs2.poke("b00000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000001".U)
//         c.io.sew.poke("b011".U)
//         c.io.v_ins.poke(1.B)
//         c.clock.step(200)
//         // c.io.output.expect(0.S)
//         // c.io.v_output.expect()
       
//         }
//     }
// }