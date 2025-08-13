package vaquita.components.ALUClasses
import chisel3._
import chisel3.util._
import vaquita.components.ALUObj._
import vaquita.configparameter.VaquitaConfig

class NarrowIns(implicit val config: VaquitaConfig) extends Module {

    def narrow_ins(vs1_in: SInt, vs2_in: SInt,vs3:SInt,sew:Int,v0_bit_mask:UInt,alu_opcode: UInt, rs1_in : UInt): SInt = {
      val fixed_round_mode = new FixedRoundMode()
      val maxValue = (1.S << (sew - 1)) - 1.S 
      val minValue = -(1.S << (sew - 1)) 
      val vxrm = 0.U
      val shift_vs1_amount = WireInit(0.U(6.W))
      shift_vs1_amount := Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0)) //vnclip 16 and 8
      val vnclip_u   = WireInit(0.U(32.W))
      vnclip_u := fixed_round_mode.fixed_round_mode(vs2_in.asUInt,(vs2_in.asUInt >> shift_vs1_amount),shift_vs1_amount,vxrm)
      val vnclip_s   = WireInit(0.S(32.W))
      vnclip_s := fixed_round_mode.fixed_round_mode(vs2_in.asUInt,(vs2_in >> shift_vs1_amount).asUInt,shift_vs1_amount,vxrm).asSInt
      val result = WireInit(0.S(32.W))
      result := MuxLookup(alu_opcode, 0.S(32.W), Seq(
        // vnsrl  -> (vs2_in.asUInt >> (rs1_in%sew.U)).asSInt,
        // vnsra  -> ((vs2_in >> (rs1_in%sew.U)).asSInt),
        vnsrl  ->   (vs2_in.asUInt >> (Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0)))).asSInt,
        vnsra  ->   (vs2_in >> (Mux(sew.U===8.U ,vs1_in(3,0), vs1_in(4,0)))).asSInt,  //("habcd45".U.asSInt >> 2.U).asSInt  //
        vnclipu ->  Mux(sew.U===16.U,(Mux(vnclip_u>=65535.U,65535.U,vnclip_u).asSInt),(Mux(vnclip_u>=255.U,255.U,vnclip_u).asSInt)) ,   //Mux(sew.U===8.U,Mux(vnclip_u>255.U,255.U,vnclip_u),Mux(sew.U===16.U,Mux(vnclip_u>=65535.U,65535.U,vnclip_u),0.U)).asSInt,
        vnclip  ->  Mux(vnclip_s > maxValue, maxValue,Mux(vnclip_s < minValue, minValue, vnclip_s))
      ))
      // printf(p"vs1 = 0x${Hexadecimal(wire_vs1(4,0))}  , vs2 = 0x${Hexadecimal(wire_vs2)} ,  result =  0x${Hexadecimal(result)}  , sew = 0x${Hexadecimal(sew.U)} \n")
      result
    }
    def narrow_mask(vs1:UInt , vs2:UInt,vs3:UInt,mask_vs0:Bool,alu_opcode: UInt, rs1 : UInt,mask_arith25 : Bool,sew : Int):UInt={
      dontTouch(mask_vs0)
      val vsetvli_mask = WireInit(0.B)
      val mask_bit_active_element = Wire(Bool())
      val mask_bit_undisturb = Wire(Bool())
      val vec_sew8_result = WireInit(0.U(sew.W))
      mask_bit_active_element := (mask_vs0===1.B && mask_arith25===0.B) || mask_arith25===1.B
      mask_bit_undisturb := mask_vs0===0.B && mask_arith25===0.B && vsetvli_mask===0.B
      dontTouch(vec_sew8_result)
      vec_sew8_result := Mux(mask_bit_active_element===1.B,narrow_ins(vs1.asSInt, vs2.asSInt,vs3.asSInt,sew,mask_vs0.asUInt,alu_opcode,rs1).asUInt,Mux(mask_bit_undisturb===1.B,vs3,Fill(16,1.U))).asUInt
      vec_sew8_result.asUInt
    }
    def narrow_result(
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
      var i_widening = 0
      for (i <- 0 until 4) {
        var j_widening = 0
        for (j <- 0 until sew_lanes) {
          result_8(i)(j) := narrow_mask(vs1(i)(j), vs2(i_widening)(j_widening), vs3(i)(j), mask(vl_counter).asBool,alu_opcode,rs1,mask_arith25,sew)
          result_r(i)(j) := Mux(vl > vl_counter.U, result_8(i)(j),Mux(tail === 0.B, vs3(i)(j), Fill(sew, 1.U)))
          vl_counter = vl_counter +1
          if ((j == (sew_lanes/2-1)) || (j == (sew_lanes-1))) { //15  31   when sew =8
            j_widening = 0                            //7   15   when sew =16
            i_widening = i_widening + 1
          } else {
            j_widening = j_widening + 1
          }
        }
      }
    for (i <- 4 until 8) {
        for (j <- 0 until sew_lanes) {
          result_r(i)(j) := 0.U
          }}
      result_r
    }
}