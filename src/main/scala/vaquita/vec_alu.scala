package vaquita
import chisel3._
import chisel3.util._
import alu_obj._

class vec_alu(implicit val config: Vaquita_Config) extends Module{
  val io = IO(new Bundle{
  val vs1_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
  val vs2_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
  val sew = Input(UInt(3.W))
  val alu_opcode = Input(UInt(6.W))
  // val rs1_hazard_alu_in = Input(UInt(32.W))
  // val mask_arith = Input(Bool())
  // val config_mask = Input(Bool())
  val vsd_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))//set sew here

  })

  def Arithmatic(vs1_in: SInt, vs2_in: SInt): SInt = {
    val lookuptable = Seq(
      0.U -> (vs1_in + vs2_in),//add
      2.U -> (vs1_in - vs2_in),//sub
      3.U -> (vs2_in - vs1_in),//rsub
      9.U -> (vs1_in & vs2_in),// and
      10.U -> (vs1_in | vs2_in),//or
      11.U -> (vs1_in ^ vs2_in),//xor
      37.U -> (vs1_in >> vs2_in(7,0)), //vsll

      "b101000".U -> (vs1_in >> vs2_in(7,0)), //vsrl
      "b101001".U -> (vs1_in << vs2_in(7,0)), //vsra
      "b010111".U -> (vs1_in), //vmv
      "b000100".U -> ((vs1_in.asUInt < vs2_in.asUInt).asSInt),//minu
      "b000101".U -> (vs1_in < vs2_in).asSInt,//min
      "b000110".U -> ((vs1_in.asUInt < vs2_in.asUInt).asSInt),//maxu
      "b000111".U -> (vs1_in < vs2_in).asSInt,//max
      // bit wise
      "b011000".U -> (vs1_in === vs2_in).asSInt,//vmseq
      "b011001".U -> (vs1_in =/= vs2_in).asSInt,//vmsne
      "b011010".U -> (vs1_in > vs2_in).asSInt,//vmsltu
      "b011011".U -> (vs1_in > vs2_in).asSInt,//vmslt
      "b011100".U -> (vs1_in >= vs2_in).asSInt,//vmsleu
      "b011101".U -> (vs1_in >= vs2_in).asSInt,//vmsle
      "b011110".U -> (vs1_in < vs2_in).asSInt,//vmsgtu
      "b011111".U -> (vs1_in < vs2_in).asSInt//vmsgt
    )
    MuxLookup(io.alu_opcode, 0.S, lookuptable)
  }
  def arith_8(vs1:SInt , vs2:SInt):SInt={
    val vec_sew8_a = WireInit(0.S(8.W))
    val vec_sew8_b = WireInit(0.S(8.W))
    val vec_sew8_c = WireInit(0.S(8.W))
    val vec_sew8_d = WireInit(0.S(8.W))
    val vec_sew8_e = WireInit(0.S(8.W))
    val vec_sew8_f = WireInit(0.S(8.W))
    val vec_sew8_g = WireInit(0.S(8.W))
    val vec_sew8_h = WireInit(0.S(8.W))
    val vec_sew8_result = WireInit(0.S(config.XLEN.W))
    // vec_sew8_a := Arithmatic(vs1(63,56).asSInt, vs2(63,56).asSInt)
    // vec_sew8_b := Arithmatic(vs1(55,48).asSInt, vs2(55,48).asSInt)
    // vec_sew8_c := Arithmatic(vs1(47,40).asSInt, vs2(47,40).asSInt)
    // vec_sew8_d := Arithmatic(vs1(39,32).asSInt, vs2(39,32).asSInt)
    vec_sew8_e := Arithmatic(vs1(31,24).asSInt, vs2(31,24).asSInt)
    vec_sew8_f := Arithmatic(vs1(23,16).asSInt, vs2(23,16).asSInt)
    vec_sew8_g := Arithmatic(vs1(15,8).asSInt, vs2(15,8).asSInt)
    vec_sew8_h := Arithmatic(vs1(7,0).asSInt, vs2(7,0).asSInt)
    vec_sew8_result := Cat(vec_sew8_e,vec_sew8_f,vec_sew8_g,vec_sew8_h).asSInt//Cat(vec_sew8_a,vec_sew8_b,vec_sew8_c,vec_sew8_d,vec_sew8_e,vec_sew8_f,vec_sew8_g,vec_sew8_h).asSInt
    vec_sew8_result
  }

     def arith_16(vs1:SInt , vs2:SInt):SInt={
      // val vec_sew16_a = WireInit(0.S(16.W))
      // val vec_sew16_b = WireInit(0.S(16.W))
      val vec_sew16_c = WireInit(0.S(16.W))
      val vec_sew16_d = WireInit(0.S(16.W))
      val vec_sew16_result = WireInit(0.S(config.XLEN.W))
      // vec_sew16_a := Arithmatic(vs1(63,48).asSInt, vs2(63,48).asSInt)
      // vec_sew16_b := Arithmatic(vs1(47,32).asSInt, vs2(47,32).asSInt)
      vec_sew16_c := Arithmatic(vs1(31,16).asSInt, vs2(31,16).asSInt)
      vec_sew16_d := Arithmatic(vs1(15,0).asSInt, vs2(15,0).asSInt)
      vec_sew16_result := Cat(vec_sew16_c,vec_sew16_d).asSInt//Cat(vec_sew16_a,vec_sew16_b,vec_sew16_c,vec_sew16_d).asSInt
      vec_sew16_result
  }

   def arith_32(vs1:SInt , vs2:SInt):SInt={
    // val vec_sew32_a = WireInit(0.S(32.W))
    val vec_sew32_b = WireInit(0.S(32.W))
    val vec_sew32_result = WireInit(0.S(config.XLEN.W))
    // vec_sew32_a := Arithmatic(vs1(63,32).asSInt, vs2(63,32).asSInt)
    vec_sew32_b := Arithmatic(vs1(31,0).asSInt, vs2(31,0).asSInt)
    // // dontTouch(vec_sew32_a)
    // // dontTouch(vec_sew32_b)
    // vec_sew32_result := Cat(vec_sew32_a,vec_sew32_b).asSInt
    vec_sew32_result := vec_sew32_b
    vec_sew32_result
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
  
  // for (i <- 0 to 7) { // for grouping = 8
  // for (j <- 0 until (config.count_lanes)) {
  //   io.vsd_out(i)(j) := arith_32(io.vs1_in(i)(j), io.vs2_in(i)(j))
  // }
// }
dontTouch(arith_32(io.vs1_in(0)(0),io.vs2_in(0)(0)))
def vec_main_alu(vs1_in:SInt ,vs2_in:SInt):SInt={
  val arithmatic_wire = WireInit(0.S(config.XLEN.W))
  dontTouch(arithmatic_wire)
    when(io.sew==="b000".U){//for sew=8
       arithmatic_wire:= arith_8(vs1_in, vs2_in)
  }
      .elsewhen(io.sew==="b001".U){//for sew=16
        arithmatic_wire:=arith_16(vs1_in, vs2_in)
  }
      .elsewhen(io.sew==="b010".U){//for sew=32
        arithmatic_wire := arith_32(vs1_in, vs2_in)
  }
  arithmatic_wire
}

// call main function
    for (i <- 0 to 7) { // for grouping = 8
      for (j <- 0 until (config.count_lanes)) {
        io.vsd_out(i)(j) := vec_main_alu(io.vs1_in(i)(j),io.vs2_in(i)(j))
      }}
  dontTouch(io.vsd_out)
  // io.vs1_out := arithmatic_mask(1.B)
  // io.vs1_out := 0.S
}

// here perform masking and sew logic