// package singlecycle
// import chisel3._
// import org.scalatest._
// import chiseltest._

// class controldectest extends FreeSpec with ChiselScalatestTester{
//     "control Test" in { 
//         test(new controldec()){ c=>
//         c.io.opcode.poke("b0110011".U)
//         c.clock.step(1)
//         c.io.MemWrite.expect(0.B)
//         c.io.Branch.expect(0.B)
//         c.io.MemRead.expect(0.B)
//         c.io.RegWrite.expect(1.B)
//         c.io.Mem2Reg.expect(0.B)
//         c.io.opAsel.expect("b00".U)
//         c.io.opBsel.expect(0.B)
//         c.io.Ex_sel.expect("b00".U)
//         c.io.nextPCsel.expect("b00".U)
//         c.io.aluop.expect("b000".U)
//         }
//     }
// }