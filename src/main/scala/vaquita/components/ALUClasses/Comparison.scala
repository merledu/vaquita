package vaquita.components.ALUClasses
import chisel3._
import chisel3.util._
import vaquita.components.ALUObj._
import vaquita.configparameter.VaquitaConfig

class Comparison(implicit val config: VaquitaConfig)extends Module {
    def comparison_operators(vs1_in:SInt,vs2_in:SInt,alu_opcode:UInt):Bool={
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
      MuxLookup(alu_opcode, 0.B, comparison_table)
    }
    def main_comp(
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
        val result_val = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(sew_lanes)(0.U(sew.W))))))
        val vsetvli_mask = Wire(Bool())
        vsetvli_mask := 0.B
        val tail = Wire(Bool())
        val comp_bool = WireInit(VecInit(Seq.fill(config.vlen)(false.B)))
        val comp_wire = Wire(UInt(config.vlen.W))
        comp_wire := comp_bool.asUInt
        tail := 0.B
        var elem_idx = 0
        for (i <- 0 until 8) {
            for (j <- 0 until (sew_lanes)) {
                
                val mask_bit_active_element = (mask(elem_idx) === 1.B && mask_arith25 === 0.B) || mask_arith25 === 1.B
                val mask_bit_undisturb = mask(elem_idx) === 0.B && mask_arith25 === 0.B && vsetvli_mask === 0.B
                comp_bool(elem_idx) := Mux(
                (vl > elem_idx.U),
                Mux(mask_bit_active_element,comparison_operators(vs1(i)(j).asSInt,vs2(i)(j).asSInt,alu_opcode), Mux(mask_bit_undisturb, (vs3(0).asUInt)(elem_idx).asBool, 1.B)),
                Mux(tail === 0.B, (vs3(0).asUInt)(elem_idx).asBool, 1.B)
                )
                elem_idx = elem_idx +1
            }
        }
        var high = sew-1
        var low  = 0
        for (j <- 0 until sew_lanes) {
            result_val(0)(j) := comp_wire(high, low)
            high += sew
            low  += sew
        }
        for (i <- 1 until 8) {
            for (j <- 0 until sew_lanes) {
                result_val(i)(j) := Mux(tail === 0.B, vs3(i)(j).asUInt, Fill(sew, 1.U)) //vs3(i)(j).asUInt
            }
        }
        result_val
    }
}
