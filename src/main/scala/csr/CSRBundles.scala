package csr
import chisel3._
import chisel3.util._

class VTypeCSR extends Bundle {
    val in_vtype = Input(UInt(32.W))
    val out_vill = Output(Bool())
    val out_vma = Output(Bool())
    val out_vta = Output(Bool())
    val out_vsew = Output(UInt(3.W))
    val out_vlmul = Output(UInt(3.W))
  }
  
//   val vill = io.in_vtype(31)
//   val vma = io.in_vtype(7)
//   val vta = io.in_vtype(6)
//   val vsew = io.in_vtype(5, 3)
//   val vlmul = io.in_vtype(2, 0)

//   io.out_vill := vill
//   io.out_vma := vma
//   io.out_vta := vta
//   io.out_vsew := vsew
//   io.out_vlmul := vlmul
// }

class VlCSR extends Bundle {
  val in_vl = Input(UInt(32.W))
  val out_vl = Output(UInt(32.W))
}

class VlenbCSR extends Bundle {
  val out_vlenb = Output(UInt(32.W))  // vlen/8  value of vlen in bytes
}


class VStartCSR extends Bundle {
    val writeData = Input(UInt(32.W))
    val readData = Output(UInt(32.W))
    val write = Input(Bool())
}