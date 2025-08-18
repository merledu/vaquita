package vaquita.components.ALUClasses
import chisel3._
import chisel3.util._
import vaquita.components.ALUObj._
import vaquita.configparameter.VaquitaConfig
class Permutation(implicit val config: VaquitaConfig) {
    def slide_target_idx_md(alu_opcode:UInt ,elem_idx:UInt , vs1_idx : UInt): UInt = {
        val slide_target_idx = Wire(UInt(32.W))
        when(vslideup === alu_opcode) {
            slide_target_idx := elem_idx - vs1_idx
        }
        .elsewhen(vslidedown === alu_opcode) {
            slide_target_idx := elem_idx + vs1_idx
        }
        .elsewhen(vrgather===alu_opcode) {
            slide_target_idx := vs1_idx
        }.otherwise{
            slide_target_idx := 0.U
        }
        slide_target_idx
    }
    def slide_valid_md(alu_opcode:UInt ,elem_idx:UInt , vs1_idx : UInt,sew_lanes:UInt,slide_target_idx_down:UInt,lmul:UInt): Bool = {
        val valid_wire = Wire(Bool())
        val lmul_valid_cat = WireInit(1.U(32.W))
        switch(lmul) {
            is(0.U) { lmul_valid_cat := sew_lanes }
            is(1.U) { lmul_valid_cat := Cat(sew_lanes, 0.U(1.W)) }
            is(2.U) { lmul_valid_cat := Cat(sew_lanes, 0.U(2.W)) }
            is(3.U) { lmul_valid_cat := Cat(sew_lanes, 0.U(3.W)) }
        }
        when(vslideup === alu_opcode) {
            valid_wire := (vs1_idx <= elem_idx)
        }
        .elsewhen(vslidedown === alu_opcode) {
            valid_wire := slide_target_idx_down < lmul_valid_cat
        }
        .elsewhen(vrgather===alu_opcode) {
            valid_wire := (vs1_idx < lmul_valid_cat)
        }.otherwise{
            valid_wire := 0.B
        }
        valid_wire
    }
    def permutation(
        vs1: Vec[Vec[UInt]],
        vs2: Vec[Vec[UInt]],
        vs3: Vec[Vec[UInt]],
        mask: UInt,
        alu_opcode: UInt,
        rs1_per : UInt,
        vl : UInt,
        mask_arith25 : Bool,
        sew_lanes : Int,
        sew : Int,
        func3 : UInt,
        lmul:UInt
    ): Vec[Vec[UInt]] = {
        // for slide down idx
        // Some instructions such as vslidedown and vrgather may read indices past vl or even VLMAX in source vector register groups. The
        // general policy is to return the value 0 when the index is greater than VLMAX in the source vector register group.

        val vsetvli_mask = Wire(Bool())
        vsetvli_mask := 0.B
        val tail = Wire(Bool())
        tail := 0.B
        var elem_idx = 0
        val log2ByteWidth = Wire(UInt(32.W))
        val vs1_idx = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(sew_lanes)(0.U(config.XLEN.W))))))
        val result_r = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(sew_lanes)(0.U(sew.W))))))
        val slide_target_idx = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(sew_lanes)(0.U(sew.W))))))
        val valid_idx = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(sew_lanes)(0.B)))))
        val mask_bit_active_element1 = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(sew_lanes)(0.B)))))
        val mask_bit_undisturb1 = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(sew_lanes)(0.B)))))

        val slide_vec_idx  = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(sew_lanes)(0.U(sew.W))))))
        val slide_byte_idx = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(sew_lanes)(0.U(sew.W))))))
        val vs2_val        = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(sew_lanes)(0.U(sew.W))))))



        
        log2ByteWidth := (log2Ceil(sew_lanes).U)

        for (i <- 0 until 8) {
        for (j <- 0 until (sew_lanes)) {

            mask_bit_active_element1(i)(j) := (mask(elem_idx) === 1.B && mask_arith25 === 0.B) || mask_arith25 === 1.B
            mask_bit_undisturb1(i)(j)      := mask(elem_idx) === 0.B && mask_arith25 === 0.B && vsetvli_mask === 0.B
            val vs3_val = vs3(i)(j)  // old value
            val elem_idx_wire = Wire(UInt(33.W))
            val result_val = WireInit(0.U(32.W))
            vs1_idx(i)(j) := Mux(func3=== "b000".U, vs1(i)(j),rs1_per)
            elem_idx_wire := elem_idx.U
            slide_target_idx(i)(j) := slide_target_idx_md(alu_opcode ,elem_idx.U , vs1_idx(i)(j))
            valid_idx(i)(j) := slide_valid_md(alu_opcode ,elem_idx.U , vs1_idx(i)(j),sew_lanes.U,slide_target_idx(i)(j),lmul)
            slide_vec_idx(i)(j)  := slide_target_idx(i)(j) >> log2ByteWidth //for row
            slide_byte_idx(i)(j) := slide_target_idx(i)(j) & (sew_lanes.U - 1.U)  //for column
            vs2_val(i)(j)        := Mux(valid_idx(i)(j), vs2(slide_vec_idx(i)(j))(slide_byte_idx(i)(j)), 0.U)
            result_r(i)(j) := Mux(
                (vl > elem_idx.U && Mux(vslideup===alu_opcode,valid_idx(i)(j),1.B)),
                Mux(mask_bit_active_element1(i)(j), vs2_val(i)(j), Mux(mask_bit_undisturb1(i)(j), vs3_val, Fill(sew, 1.U))),
                Mux(tail === 0.B, vs3_val, Fill(sew, 1.U))
            )
                elem_idx += 1
            }
        }
        result_r
    }
}