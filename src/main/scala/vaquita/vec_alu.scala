package vaquita
import chisel3._
import chisel3.util._
import alu_obj._
// trait Config1 {
//   val WLEN = 32
//   val ALUOP_SIG_LEN = 9
// }

class vec_alu(implicit val config: Config) extends Module{
  val io = IO(new Bundle{
  val vs1_in = Input(SInt(config.vlen.W))
  val vs2_in = Input(SInt(32.W))
  val mask_arith = Input(Bool())
  val config_mask = Input(Bool())
  val vs1_out = Output(SInt(32.W))//set sew here

  })
  //
  def Arithmatic(vs1_in: SInt, vs2_in: SInt): SInt = {
    val lookuptable = Seq(
      0.U -> (vs1_in + vs2_in),//add
      2.U -> (vs1_in - vs2_in),//sub
      3.U -> (vs2_in - vs1_in),//rsub
      9.U -> (vs1_in & vs2_in),// and
      10.U -> (vs1_in | vs2_in),//or
      11.U -> (vs1_in ^ vs2_in),//xor
      // 37.U -> (vs1_in << vs2_in) //vsll
      
    )
    MuxLookup(2.U, 0.S, lookuptable)
  }
  def arithmatic_mask(mask:Bool):SInt={
    val mask_logic = io.mask_arith & io.config_mask
    Mux(mask_logic,Arithmatic(io.vs1_in, io.vs2_in),Mux(!mask_logic,Fill(32,1.U).asSInt,0.S))
  }
  
  io.vs1_out := arithmatic_mask(1.B)
}