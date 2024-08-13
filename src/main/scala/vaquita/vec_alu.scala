package vaquita
import chisel3._
import chisel3.util._
import alu_obj._

class vec_alu(implicit val config: Config) extends Module{
  val io = IO(new Bundle{
  val vs1_in = Input(Vec(8, Vec(config.count_lanes, SInt(64.W))))
  val vs2_in = Input(Vec(8, Vec(config.count_lanes, SInt(64.W))))
  val sew = Input(UInt(5.W))
  val alu_opcode = Input(UInt(6.W))
  // val mask_arith = Input(Bool())
  // val config_mask = Input(Bool())
  val vsd_out = Output(Vec(8, Vec(config.count_lanes, SInt(64.W))))//set sew here

  })

  def Arithmatic(vs1_in: SInt, vs2_in: SInt): SInt = {
    val lookuptable = Seq(
      0.U -> (vs1_in + vs2_in),//add
      2.U -> (vs1_in - vs2_in),//sub
      3.U -> (vs2_in - vs1_in),//rsub
      9.U -> (vs1_in & vs2_in),// and
      10.U -> (vs1_in | vs2_in),//or
      11.U -> (vs1_in ^ vs2_in),//xor
      37.U -> (vs1_in >> vs2_in(10,0)), //vsll
      "b101000".U -> (vs1_in >> vs2_in(10,0)), //vsrl
      "b101001".U -> (vs1_in << vs2_in(10,0)), //vsra
      // bit wise
      "b000100".U -> ((vs1_in.asUInt < vs2_in.asUInt).asSInt),//minu
      "b000101".U -> (vs1_in < vs2_in).asSInt,//min
      "b000110".U -> ((vs1_in.asUInt < vs2_in.asUInt).asSInt),//maxu
      "b000111".U -> (vs1_in < vs2_in).asSInt//max

    )
    MuxLookup(io.alu_opcode, 0.S, lookuptable)
  }
  // def arith_8(vs1:SInt , vs2:SInt):SInt={
  //   val a = Arithmatic(vs1(63,56).asSInt, vs2(63,56).asSInt)
  //   val b = Arithmatic(vs1(55,48).asSInt, vs2(55,48).asSInt)
  //   val c = Arithmatic(vs1(47,40).asSInt, vs2(47,40).asSInt)
  //   val d = Arithmatic(vs1(39,32).asSInt, vs2(39,32).asSInt)
  //   val e = Arithmatic(vs1(31,24).asSInt, vs2(31,24).asSInt)
  //   val f = Arithmatic(vs1(23,16).asSInt, vs2(23,16).asSInt)
  //   val g = Arithmatic(vs1(15,8).asSInt, vs2(15,8).asSInt)
  //   val h = Arithmatic(vs1(7,0).asSInt, vs2(7,0).asSInt)
  //   Cat(a,b,c,d,e,f,g,h).asSInt
  // }

   def arith_32(vs1:SInt , vs2:SInt):SInt={
    val a = Arithmatic(vs1(63,32).asSInt, vs2(63,32).asSInt)
    val b = Arithmatic(vs1(31,0).asSInt, vs2(31,0).asSInt)
    Cat(a,b).asSInt
  }

  // def arithmatic_mask(mask:Bool):SInt={
  //   val mask_logic = io.mask_arith & io.config_mask
  //   Mux(mask_logic,Arithmatic(io.vs1_in, io.vs2_in),Mux(!mask_logic,Fill(32,1.U).asSInt,0.S))
  // }
  // when(io.sew==="b000".U){
  //   for (i <- 0 to 7) {
  //  val a =  Arithmatic(io.vs1_in(0)(0), io.vs2_in(1)(1)
  //  )
  //   }
  // }
  
  for (i <- 0 to 7) { // for grouping = 8
  for (j <- 0 until (config.count_lanes)) {
    io.vsd_out(i)(j) := arith_32(io.vs1_in(i)(j), io.vs2_in(i)(j))
  }
}
  

  
  // io.vs1_out := arithmatic_mask(1.B)
  // io.vs1_out := 0.S
}