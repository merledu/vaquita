// package Vpractice

// import chisel3._
// import chisel3.util._
// import chisel3.stage.ChiselStage
 
// class Tail_Mask ( ) extends Module {
//     val io = IO (new Bundle {
//         // val v_data1 = Input(Vec(16, UInt(128.W))) 
//         val v_data2 = Input(Vec(16, UInt(128.W))) 
//         val tm_vl = Input ( UInt(32.W) )
//         // val tm_vlmax = Input ( UInt(32.W) )
//         val tm_vm = Input ( Bool() ) 
//         val tm_vta = Input ( Bool() )
//         // val tm_vma = Input ( Bool() )

//         // val v_data1_out = Output(Vec(16, UInt(128.W))) 
//         val v_data2_out = Output(Vec(16, UInt(128.W)))
// })

// val vstart = 0.U

// val prestartIndices = io.v_data2.zipWithIndex.map { case (elem, i) =>
//     Mux(i.U < vstart, elem, 0.U)
// }

// val bodyIndices = io.v_data2.zipWithIndex.map { case (elem, i) =>
//     Mux(i.U >= vstart && i.U < io.tm_vl, Mux(io.tm_vm, elem, 0.U), 0.U)

//     // Mux(i.U >= vstart && i.U < io.tm_vl, elem, 0.U)
//     // val isActive = i.U >= vstart && i.U < io.tm_vl
//     // val newValue = Mux(io.tm_vm, elem, Mux(io.tm_vma, 1.U, elem))
//     // Mux(isActive, newValue, 0.U)
// }

// // val activeBodyIndices = bodyIndices.map { elem =>
// //     Mux(io.tm_vm, elem, 0.U)
// // }

// val tailIndices = io.v_data2.zipWithIndex.map { case (elem, i) =>
//     Mux(i.U >= io.tm_vl && i.U < 16.U, Mux(io.tm_vta, 1.U, elem), 0.U)
// }

// io.v_data2_out := bodyIndices

// }

