package singlecycle

import chisel3._
import chisel3.util._

class Tail_Mask extends Module {
  val io = IO(new Bundle {
    val v_data1 = Input(Vec(16, UInt(128.W)))
    val tm_vl = Input(UInt(32.W))
    val vlmax = Input(UInt(32.W))
    val v_data1_out = Output(Vec(16, UInt(128.W)))
  })

  val vstart = 4.U

  val prestartIndices = io.v_data1.zipWithIndex.map { case (elem, i) =>
    Mux((i.U + vstart)< vstart, elem, 0.U)
  }

  val bodyIndices = io.v_data1.zipWithIndex.map { case (elem, i) =>
    Mux(i.U >= vstart && i.U < io.tm_vl, elem, 0.U)
  }

  val tailIndices = io.v_data1.zipWithIndex.map { case (elem, i) =>
    Mux(i.U >= io.tm_vl && i.U < io.vlmax, elem, 0.U)
  }

  io.v_data1_out := bodyIndices
}


// package singlecycle

// import chisel3._
// import chisel3.util._
// import chisel3.stage.ChiselStage
 
// class Tail_Mask() extends Module {
//     val io = IO(new Bundle {
//         val v_data1 = Input(Vec(16, UInt(128.W)))
//         val tm_vl = Input(UInt(32.W))
//         val reg_sew_value = Input(UInt(3.W))
//         val v_data1_out = Output(Vec(16, UInt(128.W)))
//     })

//     val sew = Wire(UInt(7.W))
//     val prestartIndices = Wire(Vec(16, UInt(128.W)))
//     val bodyIndices = Wire(Vec(16, UInt(128.W)))
//     val tailIndices = Wire(Vec(16, UInt(128.W)))

//     when (io.reg_sew_value === "b000".U) {
//         sew := 8.U
//     }.elsewhen (io.reg_sew_value === "b001".U) {
//         sew := 16.U
//     }.elsewhen (io.reg_sew_value === "b010".U) {
//         sew := 32.U
//     }.elsewhen (io.reg_sew_value === "b011".U) {
//         sew := 64.U
//     }.otherwise {
//         sew := 0.U
//     }

//     val vstart = 4.U

//     prestartIndices := io.v_data1.take(vstart)
//     bodyIndices := io.v_data1.drop(vstart)

//     val tailIndicesMapped = (0 until 16).map { i =>
//         Mux(i.U < io.tm_vl, io.v_data1(i), 0.U) // No need to specify bit width for 0.U
//     }
//     tailIndices := VecInit(tailIndicesMapped)

//     io.v_data1_out := bodyIndices
// }