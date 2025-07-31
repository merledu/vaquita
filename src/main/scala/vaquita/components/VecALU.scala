package vaquita.components
import chisel3._
import chisel3.util._
import ALUObj._
import vaquita.configparameter.VaquitaConfig
class VecALU(implicit val config: VaquitaConfig) extends Module{
    val io = IO(new Bundle{
    val vs1_in       = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs2_in       = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs3_in       = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs0_in       = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val sew          = Input(UInt(3.W))
    // val vl           = Input(UInt(32.W)) //remove this vl
    val vl_in        = Input(UInt(32.W)) 
    val alu_opcode   = Input(UInt(6.W))
    val mask_arith   = Input(Bool())
    val vsd_out      = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    // val vxrm_bits    = Input(UInt(32.W)) 
    })

    def fixed_round_mode(v:UInt,shifted: UInt, d: UInt, vxrm: UInt): UInt = {
    // Bit positions
      val bit_d   = v(d) // v[d]
      val bit_d1  = Mux(d === 0.U, 0.U, v(d - 1.U)) // v[d-1]

      val high_2 = Mux(d > 1.U, d - 2.U, 0.U)
      val mask_2 = "hffffffff".U >> high_2
      val bits_d2_to_0 = v & mask_2  // v[d-2:0]

      val high_1 = Mux(d > 1.U, d - 1.U, 0.U)
      val mask_1 = "hffffffff".U >> high_1
      val bits_d1_to_0 = v & mask_1          // v[d-1]

    // Rounding increment flags
    val rnu_inc = Mux(bit_d1 === 1.U,1.U,0.U)                          // vxrm = 00
    val rne_inc = Mux((bit_d1 === 1.U) && ((bits_d2_to_0 =/= 0.U) || (bit_d === 1.U)),1.U,0.U) // vxrm = 01
    val rdn_inc = 1.U                               // vxrm = 10
    val rod_inc = Mux((bit_d === 0.U) && (bits_d1_to_0 =/= 0.U),1.U,0.U) // vxrm = 11

    //   // Select rounding increment
        
      val rounding_inc = WireDefault(0.U(1.W))
      switch(vxrm) {
        is("b00".U) { rounding_inc := rnu_inc }
        is("b01".U) { rounding_inc := rne_inc }
        is("b10".U) { rounding_inc := rdn_inc }
        is("b11".U) { rounding_inc := rod_inc }
      }

      // Final result
      shifted + rounding_inc
  }

    // def slide_sew_selector(
    //     vstart: Int,
    //     maxStartOffset: SInt,
    //     vs2_in: SInt,
    //     vs3_in: SInt,
    //     slide_vec_wire: UInt,
    //     vs1_value: UInt,
    //     slide_i_value: UInt,
    //     sew: Int,
    //     count_sew: Int
    // ): SInt = {

    //     val valid_vl = io.vl_in > vstart.U
    //     val vstart_s = vstart.S

    //     Mux1H(Seq(
    //         (valid_vl && (vstart_s < maxStartOffset && vstart_s >= 0.S)) -> vs3_in,
    //         (valid_vl && (vstart_s >= maxStartOffset && vstart_s < io.vl_in.asSInt)) -> vslideup(
    //           vs2_in,
    //           slide_vec_wire % 8.U,
    //           vs0_mask(vstart),
    //           vs3_in,
    //           Mux(vs1_value === 0.U, slide_i_value, slide_vec_wire / 8.U),
    //           sew,
    //           count_sew
    //         ),
    //         valid_vl -> 0.S,
    //         (!valid_vl && (tail === 0.B)) -> vs3_in,
    //         !valid_vl -> Fill(32, 1.U).asSInt
    //     ))
    // }


      //convert into one array
    val vs0_mask = io.vs0_in.asUInt()(config.vlen,0)
  //To check active elements and send them to the comparison_func; otherwise, return the element according to the vector tailing concept.





    def comp_element_fn(sew:Int,counter:UInt):SInt={
      val cat_element      = WireInit(0.S(32.W))
      val comp_fn_value    = comparison_func(sew).asSInt
      val comp_shift       = 0
      val output_comp_Data = VecInit(Seq.tabulate(config.count_lanes)(i => comp_fn_value(32 * (i + 1) - 1, 32 * i)))
      val comp_1bt_cn      = WireInit(VecInit(Seq.fill(32)(0.U(32.W))))
      for (i <- 1 to 31) {
        comp_1bt_cn(i) := ((io.vl_in) - (32.U * counter))
        when(comp_1bt_cn(i) === i.U) {
          cat_element  := Cat(io.vs3_in(0)(counter)(31,i), output_comp_Data(counter)(i-1, 0)).asSInt
        }.elsewhen(comp_1bt_cn(i)===32.U || (comp_1bt_cn(i)/32.U)>0.U){
          cat_element := output_comp_Data(counter).asSInt 
        }
      }
      cat_element
    }
    def comparison_operators(vs1_in:SInt,vs2_in:SInt):Bool={
      val comparison_table = Seq(
        vmseq  -> (vs1_in===vs2_in),//vmseq
        vmsne  -> (vs1_in.asUInt =/= vs2_in.asUInt),//vmsne
        vmsltu -> (vs1_in.asUInt > vs2_in.asUInt),//vmsltu
        vmslt  -> (vs1_in > vs2_in),//vmslt
        vmsleu -> (vs1_in.asUInt >= vs2_in.asUInt),//vmsleu
        vmsle  -> (vs1_in >= vs2_in),//vmsle
        vmsgtu -> (vs1_in.asUInt < vs2_in.asUInt),//vmsgtu
        vmsgt  -> (vs1_in < vs2_in),//vmsgt
        vmadc  -> Mux((vs1_in +& vs2_in).asUInt < "hffffffff".U,1.B,0.B)//vmadc
        // "b011111".U -> (vs1_in < vs2_in)//vmsbc
      )
      MuxLookup(io.alu_opcode, 0.B, comparison_table)
    }

    def comparison_func(sew: Int): UInt = {
      val elementsPerLane = config.vlen / sew
      val comparison_vec_bit_wires = WireInit(VecInit(Seq.fill(config.vlen)(0.B)))
      val comp_1b = WireInit(VecInit(Seq.fill(config.vlen)(0.B)))
      val comp_0b = WireInit(VecInit(Seq.fill(config.vlen)(0.B)))
      val comp_vs3 = WireInit(VecInit(Seq.fill(config.vlen)(0.B)))
      val vs3_bit = io.vs3_in.asUInt
      var counter = 0
      for (i <- 0 until config.count_lanes) {
        for (elem_idx <- 0 until elementsPerLane) {
          val startBit = elem_idx * sew
          val endBit = (elem_idx + 1) * sew - 1
          if (endBit < io.vs1_in(i).getWidth && endBit < io.vs2_in(i).getWidth) {
            val vs1_elem = io.vs1_in(i).asUInt()(endBit, startBit)
            val vs2_elem = io.vs2_in(i).asUInt()(endBit, startBit)
            val comparison = comparison_operators(vs1_elem.asSInt, vs2_elem.asSInt)
            comp_1b(counter) := (io.mask_arith && comparison) || (!io.mask_arith && comparison && vs0_mask(counter))
            comp_vs3(counter) := (!vs0_mask(counter) && !io.mask_arith)
            comp_0b(counter) := (io.mask_arith && !comparison)
            comparison_vec_bit_wires(counter) := MuxCase(0.B, Array(
              (comp_0b(counter) === 1.B) -> 0.B,
              (comp_vs3(counter) === 1.B) -> vs3_bit(counter),
              (comp_1b(counter) === 1.B) -> 1.B
            ))
            counter += 1
          }
        }
      }
      comparison_vec_bit_wires.asUInt
    }

    def Arithmatic(vs1_in: SInt, vs2_in: SInt,vs3:SInt,sew:Int,v0_bit_mask:UInt): SInt = {
      val maxUInt32 = "hFFFFFFFF".U(32.W)
      val sum = WireInit(0.S(33.W))
      val sub = WireInit(0.S(33.W))
      val maxValue = (1.S << (sew - 1)) - 1.S 
      val minValue = -(1.S << (sew - 1)) 
      sub := (vs2_in -& vs1_in)
      sum := (vs1_in.asUInt +& vs2_in.asUInt).asSInt
      // Overflow for addition
      val positiveOverflowAdd = (vs1_in(sew - 1) === 0.U && vs2_in(sew - 1) === 0.U && sum(sew - 1) === 1.U)
      val negativeOverflowAdd = (vs1_in(sew - 1) === 1.U && vs2_in(sew - 1) === 1.U && sum(sew - 1) === 0.U)
      // Overflow for subtraction
      val positiveOverflowSub = (vs2_in(sew - 1) === 0.U && vs1_in(sew - 1) === 1.U && sub(sew - 1) === 1.U)
      val negativeOverflowSub = (vs2_in(sew - 1) === 1.U && vs1_in(sew - 1) === 0.U && sub(sew - 1) === 0.U)
      val wire_vs1 = WireInit(0.S(32.W))
      wire_vs1 := vs1_in
      val wire_vs2 = WireInit(0.S(32.W))
      wire_vs2 := vs2_in
      val vxrm = 0.U
      val shift_vs1_amount = WireInit(0.U(6.W))
      shift_vs1_amount := Mux(sew.U===16.U ,vs1_in(4,0), vs1_in(3,0)) //vnclip 16 and 8
      val vnclip_u   = WireInit(0.U(32.W))
      vnclip_u := fixed_round_mode(vs2_in.asUInt,(vs2_in.asUInt >> shift_vs1_amount),shift_vs1_amount,vxrm)
      val vnclip_s   = WireInit(0.S(32.W))
      vnclip_s := fixed_round_mode(vs2_in.asUInt,(vs2_in >> shift_vs1_amount).asUInt,shift_vs1_amount,vxrm).asSInt
      
      val result = WireInit(0.S(32.W))

      result := MuxLookup(io.alu_opcode, 0.S(32.W), Seq(
        vadd   -> (vs1_in + vs2_in),//add
        vsub   -> (vs2_in - vs1_in),//sub
        vrsub  -> (vs1_in - vs2_in),//rsub
        vand   -> (vs1_in & vs2_in),// and
        vor    -> (vs1_in | vs2_in),//or
        vxor   -> (vs1_in ^ vs2_in),//xor
        vsll   -> (vs2_in << (vs1_in.asUInt%sew.U)), //vsll
        vsrl   -> (vs2_in.asUInt >> (vs1_in.asUInt%sew.U)).asSInt, //vsrl
        vsra   -> ((vs2_in >> (vs1_in.asUInt%sew.U)).asSInt), //vsra
        vmv    -> (vs1_in), //vmv 
        vminu  -> Mux(vs1_in.asUInt < vs2_in.asUInt,vs1_in.asUInt,vs2_in.asUInt).asSInt,//minu
        vmin   -> Mux(vs1_in < vs2_in,vs1_in,vs2_in),//min
        vmaxu  -> Mux(vs1_in.asUInt > vs2_in.asUInt,vs1_in.asUInt,vs2_in.asUInt).asSInt,//maxu
        vmax   -> Mux(vs1_in > vs2_in,vs1_in,vs2_in),//max
        vsaddu -> Mux(sum(32), "hFFFFFFFF".U, sum(31,0)).asSInt,//vsaddu
        vsadd  -> (Mux(positiveOverflowAdd, maxValue, Mux(negativeOverflowAdd, minValue, sum))),//vsadd
        vssub  -> Mux(vs2_in.asUInt < vs1_in.asUInt, 0.U,vs2_in.asUInt - vs1_in.asUInt ).asSInt,//vssubu
        vssub  -> Mux(positiveOverflowSub, maxValue, Mux(negativeOverflowSub, minValue, sub(31, 0).asSInt)),//vssub
        vadc   -> (vs1_in.asUInt + vs2_in.asUInt + v0_bit_mask).asSInt, //vadc
        vsbc   -> (vs2_in.asUInt - vs1_in.asUInt - v0_bit_mask).asSInt, //vsbc
        vnsrl  -> (vs2_in.asUInt >> (vs1_in.asUInt%sew.U)).asSInt,
        vnsra  -> ((vs2_in >> (vs1_in.asUInt%sew.U)).asSInt),
        vssrl  ->  fixed_round_mode(vs2_in.asUInt,(vs2_in.asUInt >> vs1_in(3,0)).asUInt,vs1_in(3,0),vxrm).asSInt,//fixed_round_mode(vs2_in.asUInt,(vs2_in.asUInt >> ((Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0))))).asUInt,(Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0))),vxrm).asSInt,
        vssra  ->  fixed_round_mode(vs2_in.asUInt,(vs2_in  >> vs1_in(3,0)).asUInt,vs1_in(3,0),vxrm).asSInt,      //fixed_round_mode(vs2_in.asUInt,(vs2_in >> ((Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0))))).asUInt,(Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0))),vxrm).asSInt,
        vnsrl ->   (vs2_in.asUInt >> (Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0)))).asSInt,
        vnsra ->   (vs2_in >> (Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0)))).asSInt,  //("habcd45".U.asSInt >> 2.U).asSInt  //
        vnclipu  ->  Mux(sew.U===16.U,(Mux(vnclip_u>=65535.U,65535.U,vnclip_u).asSInt),(Mux(vnclip_u>=255.U,255.U,vnclip_u).asSInt)) ,   //Mux(sew.U===8.U,Mux(vnclip_u>255.U,255.U,vnclip_u),Mux(sew.U===16.U,Mux(vnclip_u>=65535.U,65535.U,vnclip_u),0.U)).asSInt,
        vnclip   ->  Mux(vnclip_s > maxValue, maxValue,Mux(vnclip_s < minValue, minValue, vnclip_s))

        
        // fixed_round_mode(vs2_in.asUInt,(vs2_in >> ((Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0))))).asUInt,(Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0))),vxrm).asSInt
        // "b101010".U ->  vs1_in
      ))
      // printf(p"vs1 = 0x${Hexadecimal(wire_vs1(4,0))}  , vs2 = 0x${Hexadecimal(wire_vs2)} ,  result =  0x${Hexadecimal(result)}  , sew = 0x${Hexadecimal(sew.U)} \n")
      result
    }
    def arith_32(vs1:SInt , vs2:SInt,vs3:SInt,mask_vs0:Bool):SInt={
      val vsetvli_mask = 0.B
      val mask_bit_active_element = (mask_vs0===1.B && io.mask_arith===0.B) || io.mask_arith===1.B
      val mask_bit_undisturb = mask_vs0===0.B && io.mask_arith===0.B && vsetvli_mask===0.B
      val vec_sew32_b = WireInit(0.S(32.W))
      val vec_sew32_result = WireInit(0.S(config.XLEN.W))
      when(io.alu_opcode==="b010000".U || io.alu_opcode==="b010010".U){
        vec_sew32_b := (Arithmatic(vs1, vs2,vs3,32,mask_vs0.asUInt)).asSInt
        }.otherwise{
        vec_sew32_b := Mux(mask_bit_active_element===1.B,Arithmatic(vs1, vs2,vs3,32,mask_vs0.asUInt),Mux(mask_bit_undisturb===1.B,vs3,Fill(32,1.U).asSInt)).asSInt
        }
      vec_sew32_result := vec_sew32_b
      vec_sew32_result
    }

    def arith_16(vs1:SInt , vs2_in:SInt,vs3:SInt,mask_vs0:Bool):SInt={
      val vsetvli_mask = 0.B
      val mask_bit_active_element = (mask_vs0===1.B && io.mask_arith===0.B) || io.mask_arith===1.B
      val mask_bit_undisturb = mask_vs0===0.B && io.mask_arith===0.B && vsetvli_mask===0.B
      val vec_sew16_result = WireInit(0.S(32.W))
      val vs2 = WireInit(0.S(32.W))
      vs2 := vs2_in
      when(io.alu_opcode==="b010000".U || io.alu_opcode==="b010010".U){
        vec_sew16_result := (Arithmatic(vs1.asSInt, vs2.asSInt,vs3,16,mask_vs0.asUInt)).asSInt
        }.otherwise{
        vec_sew16_result := Mux(mask_bit_active_element===1.B,Arithmatic(vs1.asSInt, vs2.asSInt,vs3,16,mask_vs0.asUInt),Mux(mask_bit_undisturb===1.B,vs3,Fill(16,1.U).asSInt)).asSInt
        }
        // printf(p"vec_sew16_result = 0x${Hexadecimal(vec_sew16_result)} , vs2 = 0x${Hexadecimal(vs2)}\n")
        
      vec_sew16_result(15,0).asSInt
    }

    def arith_8(vs1:SInt , vs2:SInt,vs3:SInt,mask_vs0:Bool):SInt={
      dontTouch(mask_vs0)
      val vsetvli_mask = 0.B
      val mask_bit_active_element = (mask_vs0===1.B && io.mask_arith===0.B) || io.mask_arith===1.B
      val mask_bit_undisturb = mask_vs0===0.B && io.mask_arith===0.B && vsetvli_mask===0.B
      val vec_sew8_result = WireInit(0.S(8.W))
      dontTouch(vec_sew8_result)
      when(io.alu_opcode==="b010000".U || io.alu_opcode==="b010010".U){
        vec_sew8_result := (Arithmatic(vs1.asSInt, vs2.asSInt,vs3,8,mask_vs0.asUInt)).asSInt
        }.otherwise{
        vec_sew8_result := Mux(mask_bit_active_element===1.B,Arithmatic(vs1.asSInt, vs2.asSInt,vs3,8,mask_vs0.asUInt),Mux(mask_bit_undisturb===1.B,vs3,Fill(16,1.U).asSInt)).asSInt
        }
      vec_sew8_result 
    }
    val slide_instr =  "b001110".U === io.alu_opcode || "b001111".U === io.alu_opcode
    val vl= 4
    val tail = 0.B
    val narrow_bit = WireInit(0.B)
    narrow_bit := vnsrl===io.alu_opcode || vnsra===io.alu_opcode || vnclipu===io.alu_opcode || vnclip===io.alu_opcode
  // call main function
    var count_mask = 0.U
    val comp_bit = "b011000".U === io.alu_opcode || "b011001".U === io.alu_opcode || "b011010".U === io.alu_opcode || "b011011".U === io.alu_opcode || "b011100".U === io.alu_opcode || "b011101".U === io.alu_opcode || "b011110".U === io.alu_opcode || "b011111".U === io.alu_opcode
    //code changes
   
   
   
    when(io.sew==="b000".U){
      // when(comp_bit===0.B){

      when (narrow_bit && !comp_bit && slide_instr===0.B){
          var vl_counter = 0
          var i_widening = 0
          for (i <- 0 until 4) {
          var j_widening = 0
          for (j <- 0 until config.count_lanes) {
            val idx = (i * config.count_lanes) + j
            io.vsd_out(i)(j) := Cat(Mux(io.vl_in > vl_counter.U+3.U,
            arith_8(io.vs1_in(i)(j)(31,24).asSInt, io.vs2_in(i_widening)(j_widening+1)(31,16).asSInt, io.vs3_in(i)(j)(31,24).asSInt, vs0_mask(vl_counter+3)),
            Mux(tail === 0.B, io.vs3_in(i)(j)(31,24).asSInt, Fill(8, 1.U).asSInt)),

            Mux(io.vl_in > vl_counter.U +2.U,
            arith_8(io.vs1_in(i)(j)(23,16).asSInt, io.vs2_in(i_widening)(j_widening+1)(15,0).asSInt, io.vs3_in(i)(j)(23,16).asSInt, vs0_mask(vl_counter+2)),
            Mux(tail === 0.B, io.vs3_in(i)(j)(23,16).asSInt, Fill(8, 1.U).asSInt)),
            
            Mux(io.vl_in > vl_counter.U+1.U,
            arith_8(io.vs1_in(i)(j)(15,8).asSInt, io.vs2_in(i_widening)(j_widening)(31,16).asSInt, io.vs3_in(i)(j)(15,8).asSInt, vs0_mask(vl_counter+1)),
            Mux(tail === 0.B, io.vs3_in(i)(j)(15,8).asSInt, Fill(8, 1.U).asSInt)),

            Mux(io.vl_in > vl_counter.U,
            arith_8(io.vs1_in(i)(j)(7,0).asSInt, io.vs2_in(i_widening)(j_widening)(15,0).asSInt, io.vs3_in(i)(j)(7,0).asSInt, vs0_mask(vl_counter)),
            Mux(tail === 0.B, io.vs3_in(i)(j)(7,0).asSInt, Fill(8, 1.U).asSInt))
            ).asSInt
            vl_counter = vl_counter + 4                // lsb
            // printf(p"i =  ${i}  , j =  ${j} , i =  ${i_widening}  , j =  ${j_widening} ,vs1 = 0x${Hexadecimal(io.vs1_in(i)(j)(15,0).asSInt)}  , vs2 = 0x${Hexadecimal(io.vs2_in(i_widening)(j_widening))} -----> i =  ${i}  , j =  ${j+1} , i =  ${i_widening}  , j =  ${j_widening+1} ,vs1 = 0x${Hexadecimal(io.vs1_in(i)(j)(31,16).asSInt)}  , vs2 = 0x${Hexadecimal(io.vs2_in(i_widening)(j_widening+1))} \n")
            // println(s"i =  ${i}  , j =  ${j} , i =  ${i_widening}  , j =  ${j_widening}")
           if ((j == (config.count_lanes/2)-1) || (j == (config.count_lanes)-1)) {
              j_widening = 0
              i_widening = i_widening + 1
            } else {
              j_widening = j_widening + 2
            }
          }
        }
        for (i <- 4 until 8) {
        for (j <- 0 until config.count_lanes) {
          io.vsd_out(i)(j) := 0.S
          }}

      }
      // .elsewhen(!narrow_bit && comp_bit && !slide_instr){
      //   var vl_counter1 = 1
      //   var counter2 = 0
      //   for (j <- 0 until config.count_lanes) {
      //     io.vsd_out(0)(j) := Mux(io.vl_in > vl_counter1.U,comp_element_fn(8,counter2.U), Mux(tail === 0.B, io.vs3_in(0)(j), Fill(32, 1.U).asSInt))
      //     vl_counter1    = vl_counter1 + 32
      //     counter2 = counter2 + 1
      //     }
      //     for (i <- 1 until 8) {
      //       for (j <- 0 until config.count_lanes) {
      //         io.vsd_out(i)(j) := Mux(tail === 0.B, io.vs3_in(i)(j), Fill(32, 1.U).asSInt)
      //       }
      //     }
        // }
        .elsewhen (!narrow_bit && !comp_bit && slide_instr){
          val tail = 0.B
          val vsetvli_mask = 0.B
          val vs2_sew8 = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(config.vlen / 8)(0.U(8.W))))))
val vsd_sew8 = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(config.vlen / 8)(0.U(8.W))))))
val vsout_sew8 = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(config.vlen / 8)(0.U(8.W))))))

// 1. Split XLEN-wide data into 8-bit chunks
for (i <- 0 until 8) {
  for (j <- 0 until config.count_lanes) {
    for (k <- 0 until (config.XLEN / 8)) {
      val idx = j * (config.XLEN / 8) + k
      vs2_sew8(i)(idx) := io.vs2_in(i)(j).asUInt()(8*(k+1)-1, 8*k)
      vsd_sew8(i)(idx) := io.vs3_in(i)(j).asUInt()(8*(k+1)-1, 8*k)
    }
  }
}

// 2. Perform vector operation based on io.aluopcode (SEW = 8 level)
val slide_amount = io.vs1_in(0)(0).asUInt  // used by vslideup/vslidedown
val gather_indices = io.vs1_in             // used by vrgather
var elem_idx = 0
val byteWidth8 = config.vlen / 8
val byteWidth = Wire(UInt(32.W))
byteWidth := (byteWidth8).U
val log2ByteWidth = Wire(UInt(32.W))

 log2ByteWidth := (log2Ceil(byteWidth8).U)
val vlen_wire = Wire(UInt(32.W))
vlen_wire :=  (config.vlen.U)


for (i <- 0 until 8) {
  for (j <- 0 until (config.vlen / 8)) {
    val mask_bit_active_element = (vs0_mask(elem_idx) === 1.B && io.mask_arith === 0.B) || io.mask_arith === 1.B
    val mask_bit_undisturb = vs0_mask(elem_idx) === 0.B && io.mask_arith === 0.B && vsetvli_mask === 0.B

    val vs3_val = vsd_sew8(i)(j)  // old value
    val elem_idx_wire = Wire(UInt(33.W))
        elem_idx_wire := elem_idx.U
    
    

    // Default output is tail value
    var result_val = WireInit(0.U(32.W))

      when(vslideup === io.alu_opcode) {
        val slide_target_idx = elem_idx.U - slide_amount
        // val slide_vec_idx  = slide_target_idx / (config.vlen / 8).U
        // val slide_byte_idx = slide_target_idx % (config.vlen / 8).U
        val slide_vec_idx  = slide_target_idx >> log2ByteWidth //for row
        val slide_byte_idx = slide_target_idx & (byteWidth - 1.U)  //for column
        val slide_valid = (slide_amount <= elem_idx.U)
        val vs2_val = Mux(slide_valid, vs2_sew8(slide_vec_idx)(slide_byte_idx), 0.U)
        

        result_val := Mux(
          slide_valid && (io.vl_in > elem_idx.U),
          Mux(mask_bit_active_element, vs2_val, Mux(mask_bit_undisturb, vs3_val, Fill(8, 1.U))),
          Mux(tail === 0.B, vs3_val, Fill(8, 1.U))
        )
      }
      // Some instructions such as vslidedown and vrgather may read indices past vl or even VLMAX in source vector register groups. The
      // general policy is to return the value 0 when the index is greater than VLMAX in the source vector register group.

      .elsewhen(vslidedown === io.alu_opcode) {
        val slide_target_idx_down  = Wire(UInt(33.W))
        
          slide_target_idx_down := elem_idx_wire + slide_amount
          val slide_valid = slide_target_idx_down < vlen_wire 
          val slide_vec_idx  = slide_target_idx_down >> log2ByteWidth //for row
          val slide_byte_idx = slide_target_idx_down & (byteWidth - 1.U)  //for column

          val vs2_val = Mux(slide_valid,
            vs2_sew8(slide_vec_idx)(slide_byte_idx),
            0.U // fallback value if out-of-bounds
          )

          result_val := Mux(
            elem_idx.U >= io.vl_in, // Elements beyond VL (set to tail or undisturbed)
            Mux(tail === 0.B, vs3_val, Fill(8, 1.U)),
            Mux(mask_bit_active_element, vs2_val,
              Mux(mask_bit_undisturb, vs3_val, Fill(8, 1.U)))
        )







        // val slide_target_idx = elem_idx.U + slide_amount
        // val slide_valid = (slide_target_idx < (config.vlen).U)
        // val vs2_val = Mux(slide_valid, vs2_sew8(slide_target_idx / (config.vlen / 8).U)(slide_target_idx % (config.vlen / 8).U), 0.U)

        // result_val := Mux(
        //   slide_valid && (io.vl_in > elem_idx.U),
        //   Mux(mask_bit_active_element, vs2_val, Mux(mask_bit_undisturb, vs3_val, Fill(8, 1.U))),
        //   Mux(tail === 0.B, vs3_val, Fill(8, 1.U))
        // )
      }

      // .elsewhen(vrgather===io.alu_opcode) {
      //   val gather_idx = gather_indices(i)(j).asUInt
      //   val gather_valid = (gather_idx < config.vlen.U)
      //   val vs2_val = Mux(gather_valid, vs2_sew8(gather_idx / (config.vlen / 8).U)(gather_idx % (config.vlen / 8).U), 0.U)

      //   result_val := Mux(
      //     gather_valid && (io.vl_in > vl_counter.U),
      //     Mux(mask_bit_active_element, vs2_val, Mux(mask_bit_undisturb, vs3_val, Fill(8, 1.U))),
      //     Mux(tail === 0.B, vs3_val, Fill(8, 1.U))
      //   )
      // }
      .otherwise{
        result_val := Mux(tail === 0.B, vs3_val, Fill(8, 1.U))
      }
    

    vsout_sew8(i)(j) := result_val
    elem_idx += 1
  }
}




// // 2. Perform vslideup on SEW=8 level
// var vl_counter = 0
// val slide_amount = io.vs1_in(0)(0).asUInt
// for (i <- 0 until 8) {
//   for (j <- 0 until (config.vlen / 8)) {
//     val elem_idx = i * (config.vlen / 8) + j
//     val slide_target_idx = elem_idx.U - slide_amount

//     val mask_bit_active_element = (vs0_mask(elem_idx) === 1.B && io.mask_arith === 0.B) || io.mask_arith === 1.B
//     val mask_bit_undisturb = vs0_mask(elem_idx) === 0.B && io.mask_arith === 0.B && vsetvli_mask === 0.B
//     val slide_valid = (slide_amount <= elem_idx.U)
//     val vs2_val = Mux(slide_valid, vs2_sew8(slide_target_idx/(config.vlen/8).U)(slide_target_idx%(config.vlen / 8).U), vsd_sew8(i)(j))
//     val vs3_val = vsd_sew8(i)(j)
//     vsout_sew8(i)(j) := Mux(
//       slide_valid && (io.vl_in > vl_counter.U),
//       Mux(mask_bit_active_element, vs2_val, Mux(mask_bit_undisturb, vs3_val, Fill(8, 1.U))),
//       Mux(tail === 0.B, vs3_val, Fill(8, 1.U))
//     )
//     vl_counter = vl_counter + 1
//   }
// }

// 3. Reconstruct back into XLEN-wide outputs
for (i <- 0 until 8) {
  for (j <- 0 until config.count_lanes) {
    val assembled = Wire(Vec(config.XLEN / 8, UInt(8.W)))
    for (k <- 0 until config.XLEN / 8) {
      assembled(k) := vsout_sew8(i)(j * (config.XLEN / 8) + k)
    }
    io.vsd_out(i)(j) := assembled.reverse.reduce(Cat(_,_)).asSInt
  }
}

        }













        .otherwise{
        var vl_counter = 0
        for (i <- 0 until 8) {
          for (j <- 0 until config.count_lanes) {
            val idx = (i * config.count_lanes) + j
            io.vsd_out(i)(j) := Cat(Mux(io.vl_in > vl_counter.U+3.U,
            arith_8(io.vs1_in(i)(j)(31,24).asSInt, io.vs2_in(i)(j)(31,24).asSInt, io.vs3_in(i)(j)(31,24).asSInt, vs0_mask(vl_counter+3)),
            Mux(tail === 0.B, io.vs3_in(i)(j)(31,24).asSInt, Fill(8, 1.U).asSInt)),

            Mux(io.vl_in > vl_counter.U +2.U,
            arith_8(io.vs1_in(i)(j)(23,16).asSInt, io.vs2_in(i)(j)(23,16).asSInt, io.vs3_in(i)(j)(23,16).asSInt, vs0_mask(vl_counter+2)),
            Mux(tail === 0.B, io.vs3_in(i)(j)(23,16).asSInt, Fill(8, 1.U).asSInt)),
            
            Mux(io.vl_in > vl_counter.U+1.U,
            arith_8(io.vs1_in(i)(j)(15,8).asSInt, io.vs2_in(i)(j)(15,8).asSInt, io.vs3_in(i)(j)(15,8).asSInt, vs0_mask(vl_counter+1)),
            Mux(tail === 0.B, io.vs3_in(i)(j)(15,8).asSInt, Fill(8, 1.U).asSInt)),

            Mux(io.vl_in > vl_counter.U,
            arith_8(io.vs1_in(i)(j)(7,0).asSInt, io.vs2_in(i)(j)(7,0).asSInt, io.vs3_in(i)(j)(7,0).asSInt, vs0_mask(vl_counter)),
            Mux(tail === 0.B, io.vs3_in(i)(j)(7,0).asSInt, Fill(8, 1.U).asSInt))
            ).asSInt
            vl_counter = vl_counter + 4
          }
        }
      }
      }.elsewhen(










      // ......................

        (io.sew==="b001".U && slide_instr===0.B) && narrow_bit===1.B){//sew=16     narrow
        var vl_counter = 0
        var i_widening = 0
        
        
        for (i <- 0 until 4) {
          var j_widening = 0
          for (j <- 0 until config.count_lanes) {
            val idx = (i * config.count_lanes) + j
            
            io.vsd_out(i)(j) :=        // true condition for vector narrow instruction
            Cat(Mux(io.vl_in > vl_counter.U+1.U,
            arith_16(io.vs1_in(i)(j)(31,16).asSInt, io.vs2_in(i_widening)(j_widening+1), io.vs3_in(i)(j)(31,16).asSInt, vs0_mask(vl_counter+1)),
            Mux(tail === 0.B, io.vs3_in(i)(j)(31,16).asSInt, Fill(16, 1.U).asSInt))(15,0),           //msb

            Mux(io.vl_in > vl_counter.U,
            arith_16(io.vs1_in(i)(j)(15,0).asSInt, io.vs2_in(i_widening)(j_widening), io.vs3_in(i)(j)(15,0).asSInt, vs0_mask(vl_counter)),
            Mux(tail === 0.B, io.vs3_in(i)(j)(15,0).asSInt, Fill(16, 1.U).asSInt))).asSInt                // lsb
            vl_counter = vl_counter + 2 //counter_of_2 * 2
            if ((j == (config.count_lanes/2)-1) || (j == (config.count_lanes)-1)) {
              j_widening = 0
              i_widening = i_widening + 1
            } else {
              j_widening = j_widening+2
            }
            // println(s"i =  ${i}  , j =  ${j} , i =  ${i_widening}  , j =  ${j_widening}")

          }
        }
        for (i <- 4 until 8) {
        for (j <- 0 until config.count_lanes) {
          io.vsd_out(i)(j) := 0.S
          }}

          }
          
        //   .elsewhen(io.sew==="b001".U && slide_instr===0.B && narrow_bit===0.B){
        // var vl_counter = 0
        //   for (i <- 0 until 8) {
        //   for (j <- 0 until config.count_lanes) {
        //     val idx = (i * config.count_lanes) + j
            
        //     io.vsd_out(i)(j) :=
        //     // not narrow operation
        //     Cat(Mux(io.vl_in > vl_counter.U+1.U,
        //     arith_16(io.vs1_in(i)(j)(31,16).asSInt, io.vs2_in(i)(j)(31,16).asSInt, io.vs3_in(i)(j)(31,16).asSInt, vs0_mask(vl_counter+1)),
        //     Mux(tail === 0.B, io.vs3_in(i)(j)(31,16).asSInt, Fill(16, 1.U).asSInt)),
        //     Mux(io.vl_in > vl_counter.U,
        //     arith_16(io.vs1_in(i)(j)(15,0).asSInt, io.vs2_in(i)(j)(15,0).asSInt, io.vs3_in(i)(j)(15,0).asSInt, vs0_mask(vl_counter)),
        //     Mux(tail === 0.B, io.vs3_in(i)(j)(15,0).asSInt, Fill(16, 1.U).asSInt))).asSInt
        //     vl_counter = vl_counter + 2 //counter_of_2 * 2
        //   }
        // }
        // }





// ..........................



      // }
    // .otherwise{     // comparison instruction change with else when condition
    //     var vl_counter1 = 1
    //     var counter2 = 0
    //     for (j <- 0 until config.count_lanes) {
    //       io.vsd_out(0)(j) := Mux(io.vl_in > vl_counter1.U,comp_element_fn(16,counter2.U), Mux(tail === 0.B, io.vs3_in(0)(j), Fill(32, 1.U).asSInt))
    //       vl_counter1    = vl_counter1 + 32
    //       counter2 = counter2 + 1
    //       }
    //       for (i <- 1 until 8) {
    //         for (j <- 0 until config.count_lanes) {
    //           io.vsd_out(i)(j) := Mux(tail === 0.B, io.vs3_in(i)(j), Fill(32, 1.U).asSInt)
    //         }
    //       }
    //     }
      // }
      .elsewhen(io.sew==="b010".U  && slide_instr===0.B){//sew = 32    
        // when(comp_bit === 0.B) {
        var vl_counter = 1
        for (i <- 0 until 8) {
          for (j <- 0 until config.count_lanes) {
            val idx = (i * config.count_lanes) + j
            val mask = vs0_mask(idx)
           
            io.vsd_out(i)(j) := Mux(io.vl_in >= vl_counter.U,
              MuxLookup(io.alu_opcode, arith_32(io.vs1_in(i)(j),io.vs2_in(i)(j), io.vs3_in(i)(j), mask), Seq(
                "b001110".U ->    0.S//Mux(io.vs1_in(i)(j) < 8.S,vslideup(io.vs2_in(i)(j), slide_value,mask,io.vs3_in(i)(j),"b001110".U),io.vs3_in(i)(j)),
                // "b001111".U -> vslidedown(io.vs1_in(i)(j), vl_counter.U)
                // "b001100".U -> vrgather(io.vs1_in(i)(j), io.vs2_in(i)(j))
              )),
              Mux(tail === 0.B, io.vs3_in(i)(j), Fill(32, 1.U).asSInt)
            )     
            vl_counter = vl_counter + 1
          }
        }
      }
      // .otherwise{
      //   var vl_counter1 = 1
      //   var counter2 = 0
      //   for (j <- 0 until config.count_lanes) {
      //     io.vsd_out(0)(j) := Mux(io.vl_in > vl_counter1.U,comp_element_fn(32,counter2.U), Mux(tail === 0.B, io.vs3_in(0)(j), Fill(32, 1.U).asSInt))
      //     vl_counter1    = vl_counter1 + 32
      //     counter2 = counter2 + 1
      //     }
      //     for (i <- 1 until 8) {
      //       for (j <- 0 until config.count_lanes) {
      //         io.vsd_out(i)(j) := Mux(tail === 0.B, io.vs3_in(i)(j), Fill(32, 1.U).asSInt)
      //       }
      //     }
      //   }
      // }  
    // .elsewhen(slide_instr===1.B && io.sew === "b000".U){ //for slide instructions and sew 8
    //   var vl_counter = 1  
    //   var vstart = 0  
    //   val slidedown_value = WireInit(0.U(33.W))
    //   var j_slide_count = 0
    //   val vs1_value = WireInit(0.U(33.W))
    //   val slide_vec_wire11 = WireInit(VecInit(Seq.fill(8){VecInit(Seq.fill(8) {0.U(32.W)})}))
    //   // val maxStartOffset = WireInit(VecInit(Seq.fill(8){VecInit(Seq.fill(8) {0.S(32.W)})}))
    //   vs1_value := io.vs1_in(0)(0).asUInt
    //   for (i <- 0 until 8) {
    //     for (j <- 0 until config.count_lanes) {
    //       slidedown_value := (vs1_value+vl_counter.U-1.U)
    //       // maxStartOffset(i)(j) := Mux((vstart.S) > vs1_value.asSInt, (vstart.S), vs1_value.asSInt)
    //       slide_vec_wire11(i)(j) := (j_slide_count.U) - vs1_value(7,0)                        // (vstart.U) - vs1_value
    //       when(io.alu_opcode==="b001110".U){ // for slide up //   Mux(i.U>0.U && j.U===0.U && vs1_value=/=0.U,,(j.U-vs1_value))("b1111".U).asSInt
    //         io.vsd_out(i)(j) := Cat(
    //           slide_sew_selector(vstart+3,Mux((vstart.S + 3.S) > vs1_value.asSInt, (vstart.S + 3.S), vs1_value.asSInt) ,io.vs2_in(i)(j)(31,24).asSInt,io.vs3_in(i)(j)(31,24).asSInt,       (vstart.U) - vs1_value      ,vs1_value,i.U,8,4)(7,0).asSInt,
    //           slide_sew_selector(vstart+2,Mux((vstart.S + 2.S) > vs1_value.asSInt, (vstart.S + 2.S), vs1_value.asSInt) ,io.vs2_in(i)(j)(23,16).asSInt,io.vs3_in(i)(j)(23,16).asSInt,       (vstart.U) - vs1_value      ,vs1_value,i.U,8,3)(7,0).asSInt,
    //           slide_sew_selector(vstart+1,Mux((vstart.S + 1.S) > vs1_value.asSInt, (vstart.S + 1.S), vs1_value.asSInt) ,io.vs2_in(i)(j)(15,8).asSInt,io.vs3_in(i)(j)(15,8).asSInt,         (vstart.U) - vs1_value      ,vs1_value,i.U,8,2)(7,0).asSInt,
    //           slide_sew_selector(vstart,  Mux((vstart.S      ) > vs1_value.asSInt, (vstart.S      ), vs1_value.asSInt) ,io.vs2_in(i)(j)(7,0).asSInt ,io.vs3_in(i)(j)(7,0).asSInt,          (vstart.U) - vs1_value      ,vs1_value,i.U,8,1)(7,0).asSInt).asSInt
    //           Mux(vs1_value =/=0.U && vstart.S + 3.S >= (Mux((vstart.S + 3.S) > vs1_value.asSInt, (vstart.S + 3.S), vs1_value.asSInt)) && vstart.S + 3.S < io.vl_in.asSInt,slide_vec_wire11(i)(j)+1.U,slide_vec_wire11(i)(j)
    //         )                     // Mux((vstart.U + 3.U) - vs1_value(7,0) %4.U===3.U,(vstart.U + 3.U) - vs1_value(7,0)+1.U,(vstart.U + 3.U) - vs1_value(7,0))
    //       }.otherwise{ /// for slide down
    //         io.vsd_out(i)(j) := 0.S//Mux(io.vl_in >= vl_counter.U, vslideup(io.vs2_in(i)(j), slidedown_value,(vs0_mask((i * config.count_lanes) + j)),io.vs3_in(i)(j),i.U),
    //             // Mux(tail === 0.B, io.vs3_in(i)(j), Fill(32, 1.U).asSInt))
    //       }    
    //       vl_counter = vl_counter + 4
    //       vstart = vstart + 4
    //       j_slide_count = j_slide_count + 1
    //     }
    //   }
    // }
    // .elsewhen(slide_instr===1.B && io.sew === "b01".U){ //for slide instructions and sew 16
    //   var vl_counter = 1  
    //   var vstart = 0  
    //   val slidedown_value = WireInit(0.U(33.W))
    //   val vs1_value = WireInit(0.U(33.W))
    //   val slide_vec_wire = WireInit(VecInit(Seq.fill(8){VecInit(Seq.fill(8) {0.U(32.W)})}))
    //   val maxStartOffset = WireInit(VecInit(Seq.fill(8){VecInit(Seq.fill(8) {0.S(32.W)})}))
    //   vs1_value := io.vs1_in(0)(0).asUInt
    //   for (i <- 0 until 8) {
    //     for (j <- 0 until config.count_lanes) {
    //       slidedown_value := (vs1_value+vl_counter.U-1.U)
    //       maxStartOffset(i)(j) := Mux((vstart.S) > vs1_value.asSInt, (vstart.S), vs1_value.asSInt)
    //       slide_vec_wire(i)(j) := (vstart.U) - vs1_value
    //       when(io.alu_opcode==="b001110".U){ // for slide up //   Mux(i.U>0.U && j.U===0.U && vs1_value=/=0.U,,(j.U-vs1_value))("b1111".U).asSInt
    //         io.vsd_out(i)(j) := Cat(
    //           slide_sew_selector(vstart+1,Mux((vstart.S + 1.S) > vs1_value.asSInt, (vstart.S + 1.S), vs1_value.asSInt) ,io.vs2_in(i)(j)(15,8).asSInt,io.vs3_in(i)(j)(31,0).asSInt,  (vstart.U+1.U) - vs1_value,vs1_value,i.U,16,2)(31,16),
    //           slide_sew_selector(vstart,  Mux((vstart.S      ) > vs1_value.asSInt, (vstart.S      ), vs1_value.asSInt) ,io.vs2_in(i)(j)(7,0).asSInt ,io.vs3_in(i)(j)(15,0).asSInt,   (vstart.U   ) - vs1_value,vs1_value,i.U,16,1)(15,0)).asSInt                
    //       }.otherwise{ /// for slide down
    //         io.vsd_out(i)(j) := 0.S//Mux(io.vl_in >= vl_counter.U, vslideup(io.vs2_in(i)(j), slidedown_value,(vs0_mask((i * config.count_lanes) + j)),io.vs3_in(i)(j),i.U),
    //             // Mux(tail === 0.B, io.vs3_in(i)(j), Fill(32, 1.U).asSInt))
    //       }  
    //       vl_counter = vl_counter + 2
    //       vstart = vstart + 2
    //     }
    //   }
    // }
    
    // .elsewhen(slide_instr===1.B && io.sew === "b10".U){ //for slide instructions and sew 32
    //   var vl_counter = 1  
    //   var vstart = 0  
    //   val slidedown_value = WireInit(0.U(33.W))
    //   val vs1_value = WireInit(0.U(33.W))
    //   vs1_value := io.vs1_in(0)(0).asUInt
    //   val slide_vec_wire = WireInit(VecInit(Seq.fill(8){VecInit(Seq.fill(8) {0.U(32.W)})}))
    //   val maxStartOffset = WireInit(VecInit(Seq.fill(8){VecInit(Seq.fill(8) {0.S(32.W)})}))
    //   for (i <- 0 until 8) {
    //     for (j <- 0 until config.count_lanes) {
    //       slidedown_value := (vs1_value+vl_counter.U-1.U)
    //       maxStartOffset(i)(j) := Mux((vstart.S) > vs1_value.asSInt, (vstart.S), vs1_value.asSInt)
    //       slide_vec_wire(i)(j) := (vstart.U) - vs1_value
    //       when(io.alu_opcode==="b001110".U){ // for slide up //   Mux(i.U>0.U && j.U===0.U && vs1_value=/=0.U,,(j.U-vs1_value))("b1111".U).asSInt
    //         io.vsd_out(i)(j) := slide_sew_selector(vstart,maxStartOffset(i)(j) ,io.vs2_in(i)(j),io.vs3_in(i)(j),slide_vec_wire(i)(j),vs1_value,i.U,32,1)
    //       }.otherwise{ /// for slide down
    //         io.vsd_out(i)(j) := 0.S//Mux(io.vl_in >= vl_counter.U, vslideup(io.vs2_in(i)(j), slidedown_value,(vs0_mask((i * config.count_lanes) + j)),io.vs3_in(i)(j),i.U),
    //       // Mux(tail === 0.B, io.vs3_in(i)(j), Fill(32, 1.U).asSInt))
    //       }
    //     vl_counter = vl_counter + 1
    //     vstart = vstart + 1
    //     }
    //   }
    // }
    .otherwise{
      var vl_counter = 1
      for (i <- 0 until 8) {
        for (j <- 0 until config.count_lanes) {
          val idx = (i * config.count_lanes) + j
          val mask = vs0_mask(idx)
          io.vsd_out(i)(j) :=("h0000ffff".U).asSInt //Mux(io.vl_in >= vl_counter.U,
            // arith_32(io.vs1_in(i)(j), io.vs2_in(i)(j), io.vs3_in(i)(j), mask),
            // Mux(tail === 0.B, io.vs3_in(i)(j), Fill(32, 1.U).asSInt)
          // )
          vl_counter = vl_counter + 1
        }
      }
    }
}

// Function for vslidedown
    // def vslidedown(input: SInt, slide_amount: UInt): SInt = {
    //   val shifted = WireInit(0.S(32.W))
    // // shifted := Mux(mask===1.B && io.mask_arith===0.B || io.mask_arith===1.B,(io.vs2_in(in_i)(in_j)).asSInt, vs3)
    //   shifted
    // }

  // // Function for vrgather
  //   def vrgather(input: Vec[Vec[SInt]], indices: Vec[Vec[UInt]], i: Int, j: Int): SInt = {
  //   // Gathers element from input based on indices provided in indices vector
  //   // Ensures index is within bounds, else returns zero
  //     val index = indices(i)(j)
  //     Mux(index < input.length.U, input(i)(index), 0.S)
  //   }