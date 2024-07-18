package vaquita

import chisel3._
import chisel3.util._

class stages extends Module {
  val io = IO(new Bundle {
    // execute stage input



    // execute stage output




    // mem stage input



    // mem stage output




    // wb stage input



    // wb stage output


    

    val bit1 = Input(Bool())
    val bits_32_s = Input(SInt(32.W))
    val bits_32_u = Input(UInt(32.W))
    val bits_32_s_out = Output(SInt(32.W))
    val bits_32_u_out = Output(UInt(32.W))
    val bit1_out = Output(Bool())
  })

  def one_bit(input: Bool): Bool = {
    val a = RegNext(input)
    a
  }

  def bits32_S(input: SInt): SInt = {
    val a = RegNext(input)
    a
  }

  def bits32_U(input: UInt): UInt = {
    val a = RegNext(input)
    a
  }

  io.bit1_out := one_bit(io.bit1)
  io.bits_32_s_out := bits32_S(io.bits_32_s)
  io.bits_32_u_out := bits32_U(io.bits_32_u)

  io.bit1_out := one_bit(io.bit1)
  io.bits_32_s_out := bits32_S(io.bits_32_s)
  io.bits_32_u_out := bits32_U(io.bits_32_u)
}


// object stagesMain extends App {
//   chisel3.Driver.execute(args, () => new stages)
// }