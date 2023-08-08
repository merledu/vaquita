// package singlecycle
// import chisel3 . _
// import chisel3 . util . _
// import chisel3.util.experimental.loadMemoryFromFile
// import scala.io.Source
// class InstMem1 extends Module {
//   val io = IO (new Bundle {
//     val addr = Input ( UInt ( 10 . W ))
//     val inst = Output ( UInt ( 32 . W ))
//     }
//   )

// val imem = Module(new InstMem)
// imem.io.addr := io.addr
// io.inst := imem.io.inst

// // loadMemoryFromFile (imem,"D:/merl/Scala-Chisel-Learning-Journey/src/main/scala/singlecycle/abc.txt")
// // io.inst := imem(io.addr)
// }
