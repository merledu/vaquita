// package singlecycle

// import chisel3._
// import chiseltest._
// import org.scalatest._

// class DynamicVectorElementWidthExampleTest extends FlatSpec with ChiselScalatestTester {
//   behavior of "DynamicVectorElementWidthExample"

//   it should "correctly adapt vector and element widths" in {
//     test(new DynamicVectorElementWidthExample) { C =>
//       // Test different configurations
//       // Configuration: Vector Width = 4, Element Width = 32
//       C.io.configVectorWidth.poke(4.U)
//       C.io.configElementWidth.poke(32.U)
//       C.io.outputPins.expect(Seq.fill(16)(0.U(32.W)))

//       // Configuration: Vector Width = 8, Element Width = 16
//       C.io.configVectorWidth.poke(8.U)
//       C.io.configElementWidth.poke(16.U)
//       C.io.outputPins.expect(Seq.fill(16)(0.U(16.W)))

//       // Configuration: Vector Width = 16, Element Width = 8
//       C.io.configVectorWidth.poke(16.U)
//       C.io.configElementWidth.poke(8.U)
//       C.io.outputPins.expect(Seq.fill(16)(0.U(8.W)))
//     }
//   }
// }

// object DynamicVectorElementWidthExampleTest extends App {
//   // Run the test
//   chisel3.iotesters.Driver.execute(Array("-tbn", "verilator"), () => new DynamicVectorElementWidthExample) {
//     C => new DynamicVectorElementWidthExampleTest(C)
//   }
// }