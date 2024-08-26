package vaquita
import chisel3._
import chisel3.util._
import alu_obj._

class vec_alu(implicit val config: Vaquita_Config) extends Module{
  val io = IO(new Bundle{
  val vs1_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
  val vs2_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
  val vs3_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
  val vs0_in = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
  val sew = Input(UInt(3.W))
  val vl = Input(UInt(32.W)) //remove this vl
  val vl_in = Input(UInt(32.W)) 
  val alu_opcode = Input(UInt(6.W))
  // val rs1_hazard_alu_in = Input(UInt(32.W))
  val mask_arith = Input(Bool())
  // val config_mask = Input(Bool())
  val vsd_out = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))//set sew here

  })

// val abbc = WireInit(0.U(32.W))
// abbc := io.vl

// // val VL_Map = (1 to config.vlen*8).map(x => x.U(32.W) -> x).toMap
// // val vl_int = VL_Map.getOrElse(abbc, 3.U)

// val VL_Map = (1 to 10).map(x => x.U(32.W) -> x).toMap

// // Define the key you want to look up
// val key = 5.U(32.W)

// // Retrieve the value associated with the key
// val valueOption = VL_Map.get(key)
// println(VL_Map.keys.mkString(", "))

// println(valueOption,"yessssssssss")

// val scalaInt = UIntToIntConverter.convertUIntToInt(io.vl)
// println(scalaInt,"yess")
  
  // val vs0_out = Wire(Vec(8, Vec(config.count_lanes, Vec(32, UInt(1.W)))))

  // // Convert each 32-bit vector into 8 segments of 4 bits
  // for (i <- 0 until 8) {
  //   for (j <- 0 until config.count_lanes) {
  //     for (k <- 0 until 32) {
  //       // Extract each 4-bit segment from the 32-bit input
  //       vs0_out(i)(j)(k) := io.vs0_in(i)(j)(k) //4*k + 3, 4*k
  //     }
  //   }}

    //convert into one array
  val vs0_mask = Cat((for (i <- 0 to 7) yield {
  (for (j <- 0 until config.count_lanes) yield {
    io.vs0_in(i)(j)
  }).toSeq
}).flatten.reverse)
 dontTouch(vs0_mask)

  def Arithmatic(vs1_in: SInt, vs2_in: SInt): SInt = {
    val lookuptable = Seq(
      0.U -> (vs1_in + vs2_in),//add
      2.U -> (vs2_in - vs1_in),//sub
      3.U -> (vs1_in - vs2_in),//rsub
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

   def arith_32(vs1:SInt , vs2:SInt,vs3:SInt,mask_vs0:Bool):SInt={
    // val vec_sew32_a = WireInit(0.S(32.W))
    dontTouch(mask_vs0)
    val vsetvli_mask = 0.B
    val mask_bit_active_element = (mask_vs0===1.B && io.mask_arith===0.B) || io.mask_arith===1.B
    val mask_bit_undisturb = mask_vs0===0.B && io.mask_arith===0.B && vsetvli_mask===0.B
    // val mask_bit_active_agnostic = mask_vs0===0.B && io.mask_arith===0.B && vsetvli_mask===1.B
    val vec_sew32_b = WireInit(0.S(32.W))
    val vec_sew32_result = WireInit(0.S(config.XLEN.W))
    // vec_sew32_a := Arithmatic(vs1(63,32).asSInt, vs2(63,32).asSInt)
    vec_sew32_b := Mux(mask_bit_active_element===1.B,Arithmatic(vs1(31,0).asSInt, vs2(31,0).asSInt),Mux(mask_bit_undisturb===1.B,vs3,Fill(32,1.U).asSInt)).asSInt
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
// val mask = WireInit(0.U(32.W))
// dontTouch(arith_32(io.vs1_in(0)(0),io.vs2_in(0)(0)))



// def vec_main_alu(vs1_in:SInt ,vs2_in:SInt):SInt={
//   val arithmatic_wire = WireInit(0.S(config.XLEN.W))
//   dontTouch(arithmatic_wire)
//     when(io.sew==="b000".U){//for sew=8
//        arithmatic_wire:= arith_8(vs1_in, vs2_in)
//   }
//   .elsewhen(io.sew==="b001".U){//for sew=16
//         arithmatic_wire:=arith_16(vs1_in, vs2_in)
//   }.elsewhen(io.sew==="b010".U){//for sew=32
//         val mask = WireInit(0.U(32.W))
//         arithmatic_wire := arith_32(vs1_in, vs2_in)
//         }
//   arithmatic_wire
// }






val vl= 4
val tail = 0.B
// call main function
// when (io.sew==="b010".U){
// var concatenated_vs0: UInt = initialValue
var count_mask = 0.U

// for (i <- 0 to 7) { // for grouping = 8
//   for (j <- 0 until config.count_lanes) {
//     val mask = vs0_mask((i*config.count_lanes)+j) // Extract the lowest 2 bits
//     val vl_counter = (i*config.count_lanes)+j
//     if(io.vl >vl_counter){
//     io.vsd_out(i)(j) := arith_32(io.vs1_in(i)(j), io.vs2_in(i)(j),io.vs3_in(i)(j),mask)
//     count_mask = count_mask + 1.U
//     }
//     else{
//       io.vsd_out(i)(j) := Mux(tail===0.B,io.vs3_in(i)(j),Fill(32,1.U).asSInt)
//     }
//   }
// }
var vl_counter = 1
for (i <- 0 until 8) { // Loop through 8 groups
  for (j <- 0 until config.count_lanes) { // Loop through lanes
    val idx = (i * config.count_lanes) + j // Compute the index for mask and inputs
    val mask = vs0_mask(idx) // Extract the mask
     // Compute the vl_counter based on the current index
    
    // Use Mux for conditional assignments
    io.vsd_out(i)(j) := Mux(io.vl_in >= vl_counter.U,
      arith_32(io.vs1_in(i)(j), io.vs2_in(i)(j), io.vs3_in(i)(j), mask),
      Mux(tail === 0.B, io.vs3_in(i)(j), Fill(32, 1.U).asSInt)
    )
    vl_counter = vl_counter + 1
    
    // Increment count_mask using a separate assignment
    // count_mask := count_mask + Mux(io.vl > vl_counter.U, 1.U, 0.U)
  }
}













  //     }
  // .elsewhen(io.sew==="b001".U){
    // for (i <- 0 to 7) { // for grouping = 8
    //   for (j <- 0 until (config.count_lanes)) {
    //     io.vsd_out(i)(j) := vec_main_alu(io.vs1_in(i)(j),io.vs2_in(i)(j))
    //   }}}
  // .elsewhen(io.sew==="b000".U){
  //   for (i <- 0 to 7) { // for grouping = 8
  //     for (j <- 0 until (config.count_lanes)) {
  //       io.vsd_out(i)(j) := vec_main_alu(io.vs1_in(i)(j),io.vs2_in(i)(j))
  //     }}
  // }
  dontTouch(io.vsd_out)
  // io.vs1_out := arithmatic_mask(1.B)
  // io.vs1_out := 0.S





// var concatenated_vs0: UInt = initialValue

// for (i <- 0 until 8) { // Loop for grouping = 8
//   for (j <- 0 until config.count_lanes) {
//     // Extract the lowest bit of the concatenated value as the mask
//     var mask = concatenated_vs0(0)

//     // Call the arith_32 function with vs1, vs2, and mask
//     io.vsd_out(i)(j) := arith_32(io.vs1_in(i)(j), io.vs2_in(i)(j), mask)

//     // Shift right by 1 bit for the next iteration
//     concatenated_vs0 = concatenated_vs0 >> 1.U
//   }
// }


}

// here perform masking and sew logic