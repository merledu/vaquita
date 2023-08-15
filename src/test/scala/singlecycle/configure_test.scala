// package singlecycle
// import chisel3._
// import org.scalatest._
// import chiseltest._
// import chisel3.util._

// class configtest  extends FreeSpec with ChiselScalatestTester {
//     "config Test" in {
//         test(new configure()){c=>
//         c.io.zimm.poke("b00000000000000000000000000000000".U)
//         c.io.rs1.poke(0.U)
//         c.io.rd.poke(1.U)
//         c.io.rs1_readdata.poke(8.S)
//         c.io.current_vl.poke(2.S)
//         c.clock.step(1)
//         // c.io.vlmax.expect(16.U)
//         // c.io.vl.expect(16.S)
//         // c.io.avl.expect(16.U)
//     }}
// }