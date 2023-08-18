package singlecycle

import chisel3._
import chisel3.util._

class Tail_Mask extends Module {
  val io = IO(new Bundle {
    val v_data1 = Input(Vec(16, UInt(128.W)))
    val tm_vl = Input(UInt(32.W))
    val vlmax = Input(UInt(32.W))
    val v_data1_out = Output(Vec(16, UInt(128.W)))
    val prestartIndices = Output(Vec(16, UInt(128.W)))
    val tailIndices = Output(Vec(16, UInt(128.W)))
  })

  val vstart = 4.U

io.prestartIndices := io.v_data1.zipWithIndex.map { case (elem, i) =>
    Mux(i.U < vstart, elem, 0.U)
  }

val bodyIndices = io.v_data1.zipWithIndex.map { case (elem , i) =>
    Mux(i.U >= ( vstart  )&& i.U < ( io.tm_vl ),elem , 0.U)
  }

io.tailIndices := io.v_data1.zipWithIndex.map { case (elem, i) =>
    Mux(i.U >= io.tm_vl && i.U < io.vlmax, elem, 0.U)
  }

  io.v_data1_out := bodyIndices
}


