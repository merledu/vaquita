package vaquita.components.ALUClasses
import chisel3._
import chisel3.util._
import vaquita.components.ALUObj._
import vaquita.configparameter.VaquitaConfig

class Arith(implicit val config: VaquitaConfig) extends Module {
    def Arithmatic(vs1_in: SInt, vs2_in: SInt,vs3:SInt,sew:Int,v0_bit_mask:UInt,alu_opcode: UInt, rs1_in : UInt): SInt = {
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
      // val vnclip_u   = WireInit(0.U(32.W))
      // vnclip_u := fixed_round_mode(vs2_in.asUInt,(vs2_in.asUInt >> shift_vs1_amount),shift_vs1_amount,vxrm)
      // val vnclip_s   = WireInit(0.S(32.W))
      // vnclip_s := fixed_round_mode(vs2_in.asUInt,(vs2_in >> shift_vs1_amount).asUInt,shift_vs1_amount,vxrm).asSInt

      // val multi = WireInit(0.S(33.W))
      // multi := fixed_round_mode(vs2_in.asUInt,(vs2_in * vs1_in).asUInt,vs1_in.asUInt,vxrm).asSInt
      
      val result = WireInit(0.S(32.W))

      result := MuxLookup(alu_opcode, 0.S(32.W), Seq(
        vadd   -> (vs1_in + vs2_in),//add
        vsub   -> (vs2_in - vs1_in),//sub
        vrsub  -> (vs1_in - vs2_in),//rsub
        vand   -> (vs1_in & vs2_in),// and
        vor    -> (vs1_in | vs2_in),//or
        vxor   -> (vs1_in ^ vs2_in),//xor
        vsll   -> (vs2_in << (rs1_in%sew.U)), //vsll
        vsrl   -> (vs2_in.asUInt >> (rs1_in%sew.U)).asSInt, //vsrl
        vsra   -> ((vs2_in >> (rs1_in%sew.U)).asSInt), //vsra
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
        // vnsrl  -> (vs2_in.asUInt >> (rs1_in%sew.U)).asSInt,
        // vnsra  -> ((vs2_in >> (rs1_in%sew.U)).asSInt),
        // vssrl  ->  fixed_round_mode(vs2_in.asUInt,(vs2_in.asUInt >> vs1_in(3,0)).asUInt,vs1_in(3,0),vxrm).asSInt,//fixed_round_mode(vs2_in.asUInt,(vs2_in.asUInt >> ((Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0))))).asUInt,(Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0))),vxrm).asSInt,
        // vssra  ->  fixed_round_mode(vs2_in.asUInt,(vs2_in  >> vs1_in(3,0)).asUInt,vs1_in(3,0),vxrm).asSInt,      //fixed_round_mode(vs2_in.asUInt,(vs2_in >> ((Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0))))).asUInt,(Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0))),vxrm).asSInt,
        // vnsrl ->   (vs2_in.asUInt >> (Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0)))).asSInt,
        // vnsra ->   (vs2_in >> (Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0)))).asSInt,  //("habcd45".U.asSInt >> 2.U).asSInt  //
        // vnclipu  ->  Mux(sew.U===16.U,(Mux(vnclip_u>=65535.U,65535.U,vnclip_u).asSInt),(Mux(vnclip_u>=255.U,255.U,vnclip_u).asSInt)) ,   //Mux(sew.U===8.U,Mux(vnclip_u>255.U,255.U,vnclip_u),Mux(sew.U===16.U,Mux(vnclip_u>=65535.U,65535.U,vnclip_u),0.U)).asSInt,
        // vnclip   ->  Mux(vnclip_s > maxValue, maxValue,Mux(vnclip_s < minValue, minValue, vnclip_s)),
        // vsmul    -> Mux(multi > maxValue, maxValue,Mux(multi < minValue, minValue, multi))//vsaddu

        
        // fixed_round_mode(vs2_in.asUInt,(vs2_in >> ((Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0))))).asUInt,(Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0))),vxrm).asSInt
        // "b101010".U ->  vs1_in
      ))
      // printf(p"vs1 = 0x${Hexadecimal(wire_vs1(4,0))}  , vs2 = 0x${Hexadecimal(wire_vs2)} ,  result =  0x${Hexadecimal(result)}  , sew = 0x${Hexadecimal(sew.U)} \n")
      result
    }
    def arith_8(vs1:UInt , vs2:UInt,vs3:UInt,mask_vs0:Bool,alu_opcode: UInt, rs1 : UInt,mask_arith25 : Bool,sew:Int):UInt={
      dontTouch(mask_vs0)
      val vsetvli_mask = WireInit(0.B)
      val mask_bit_active_element = Wire(Bool())
      val mask_bit_undisturb = Wire(Bool())
      val vec_sew8_result = WireInit(0.U(sew.W))
      mask_bit_active_element := (mask_vs0===1.B && mask_arith25===0.B) || mask_arith25===1.B
      mask_bit_undisturb := mask_vs0===0.B && mask_arith25===0.B && vsetvli_mask===0.B
      dontTouch(vec_sew8_result)
      when(alu_opcode==="b010000".U || alu_opcode==="b010010".U){
        vec_sew8_result := (Arithmatic(vs1.asSInt, vs2.asSInt,vs3.asSInt,sew,mask_vs0.asUInt,alu_opcode,rs1)).asUInt
        }.otherwise{
        vec_sew8_result := Mux(mask_bit_active_element===1.B,Arithmatic(vs1.asSInt, vs2.asSInt,vs3.asSInt,sew,mask_vs0.asUInt,alu_opcode,rs1).asUInt,Mux(mask_bit_undisturb===1.B,vs3,Fill(16,1.U))).asUInt
        }
      vec_sew8_result.asUInt
    }
    def arith_8_result(
      vs1: Vec[Vec[UInt]],
      vs2: Vec[Vec[UInt]],
      vs3: Vec[Vec[UInt]],
      mask: UInt,
      alu_opcode: UInt,
      rs1 : UInt,
      vl : UInt,
      mask_arith25 : Bool,
      sew_lanes : Int,
      sew : Int
    ): Vec[Vec[UInt]] = {
      val tail = Wire(Bool())
      tail := 0.B
      val result_8 = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(sew_lanes)(0.U(sew.W))))))
      val result_r = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(sew_lanes)(0.U(sew.W))))))
      var vl_counter = 0
      for (i <- 0 until 8) {
        for (j <- 0 until sew_lanes) {
          result_8(i)(j) := arith_8(vs1(i)(j), vs2(i)(j), vs3(i)(j), mask(vl_counter).asBool,alu_opcode,rs1,mask_arith25,sew)
          result_r(i)(j) := Mux(vl > vl_counter.U, result_8(i)(j),Mux(tail === 0.B, vs3(i)(j), Fill(sew, 1.U))).asUInt
          vl_counter = vl_counter +1
        }
      }
      result_r
    }
}