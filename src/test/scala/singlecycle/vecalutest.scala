// package singlecycle
// import chisel3._
// import org.scalatest._
// import chiseltest._
// class vecalutest extends FreeSpec with ChiselScalatestTester{
//     "vecalu Test" in {
//         test(new vecalu()){ c =>
//         c.io.vs1_data.poke(2.S)
//         c.io.vs2_data.poke(3.S)
//         c.io.aluC.poke("b000000".U)
//         // c.io.vs1_data.poke(2.U)
//         c.io.imm.poke(2.S)
//         c.io.vsew.poke("b010".U)
//         c.clock.step(100)}}}