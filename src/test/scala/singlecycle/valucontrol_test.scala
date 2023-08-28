// package  singlecycle 

// import chisel3._
// import chiseltest._
// import org.scalatest._

// class VAluControlTest extends FreeSpec with ChiselScalatestTester {
//   "vAlu_Control Test" in {
//     test(new VAlu_Control) { c =>
//       c.io.func3.poke(false.B)
//       c.io.func7.poke(false.B)
//       c.io.aluOp.poke(0.U)
//       c.io.func3.poke(0.U)
//       c.io.func7.poke(false.B)
//       c.io.func6.poke(0.U)
//       c.clock.step(1)
//       c.io.out.expect("b000000000".U)
//       c.io.out_V.expect(false.B)
//     }
//   }
// }
