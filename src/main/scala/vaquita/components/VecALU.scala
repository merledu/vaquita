package vaquita.components
import chisel3._
import chisel3.util._
import ALUObj._
import vaquita.configparameter.VaquitaConfig
import vaquita.components.ALUClasses.{Arith,Permutation,Comparison,NarrowIns}
class VecALU(implicit val config: VaquitaConfig) extends Module{
    val io = IO(new Bundle{
    val vs1_in       = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs2_in       = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs3_in       = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs0_in       = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val sew          = Input(UInt(3.W))
    val vl_in        = Input(UInt(32.W)) 
    val rs1_in       = Input(UInt(32.W))
    val lmul         = Input(UInt(32.W))  
    val func3        =Input(UInt(3.W))
    val alu_opcode   = Input(UInt(6.W))
    val mask_arith   = Input(Bool())
    val vsd_out      = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    // val vxrm_bits    = Input(UInt(32.W)) 
    })



    val rs1_imm_value = WireInit(0.U(32.W))
    when(io.func3==="b100".U){
      rs1_imm_value := io.rs1_in
      }.elsewhen(io.func3==="b011".U){ //for imm
      rs1_imm_value := io.vs1_in(0)(0)(4,0).asUInt
      }.otherwise{
      rs1_imm_value := io.vs1_in(0)(0).asUInt        //////////////////////////////////////////////////////----------------------///////
      }

    //convert into one array
    val vs0_mask = io.vs0_in.asUInt()(config.vlen,0)
    // val vs0_mask_bool = Wire(Vec(256, Bool()))

    // for (i <- 0 until 256) {
    //   vs0_mask_bool(i) := vs0_mask(i) // picks bit i as Bool
    // }

// *****************convert into 1 D array to vector register *************************
    val vs1_in = Wire(Vec(8, UInt((config.vlen).W)))
    val vs2_in = Wire(Vec(8, UInt((config.vlen).W)))
    val vs3_in = Wire(Vec(8, UInt((config.vlen).W)))
    // val vsd_out = Wire(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    for (i <- 0 until 8) {
      vs1_in(i) := io.vs1_in(i).asUInt
      vs2_in(i) := io.vs2_in(i).asUInt
      vs3_in(i) := io.vs3_in(i).asUInt
    }
    // ********************* convert into 2d vectors (8 bit elements) *********************

    val vs1_8  = Wire(Vec(8, Vec(config.lane8, UInt(8.W))))
    val vs2_8  = Wire(Vec(8, Vec(config.lane8, UInt(8.W))))
    val vs3_8  = Wire(Vec(8, Vec(config.lane8, UInt(8.W))))
    // val vsd_8  = Wire(Vec(8, Vec(config.lane8, UInt(8.W))))
    dontTouch(vs1_8)
    dontTouch(vs2_8)
    dontTouch(vs3_8)
    // dontTouch(vsd_8)

    for (i <- 0 until 8) {
      var high = 7
      var low  = 0
      for (j <- 0 until config.lane8) {
        vs1_8(i)(j) := vs1_in(i)(high, low)
        vs2_8(i)(j) := vs2_in(i)(high, low)
        vs3_8(i)(j) := vs3_in(i)(high, low)
        high += 8
        low  += 8
      }
    }

    // ******************* convert into 2d vectors (16 bit elements) *************

    val vs1_16  = Wire(Vec(8, Vec(config.lane16, UInt(16.W))))
    val vs2_16  = Wire(Vec(8, Vec(config.lane16, UInt(16.W))))
    val vs3_16  = Wire(Vec(8, Vec(config.lane16, UInt(16.W))))
    // val vsd_16  = Wire(Vec(8, Vec(config.lane16, UInt(16.W))))

    for (i <- 0 until 8) {
      var high = 15
      var low  = 0
      for (j <- 0 until config.lane16) {
        vs1_16(i)(j) := vs1_in(i)(high, low)
        vs2_16(i)(j) := vs2_in(i)(high, low)
        vs3_16(i)(j) := vs3_in(i)(high, low)
        high += 16
        low  += 16
      }
    }
    dontTouch(vs2_16)

        // ******************* convert into Unsign (32 bit elements Unsign) *************

    val vs1_32  = Wire(Vec(8, Vec(config.count_lanes, UInt(32.W))))
    val vs2_32  = Wire(Vec(8, Vec(config.count_lanes, UInt(32.W))))
    val vs3_32  = Wire(Vec(8, Vec(config.count_lanes, UInt(32.W))))
    // val vsd_16  = Wire(Vec(8, Vec(config.lane16, UInt(16.W))))

    for (i <- 0 until 8) {
      for (j <- 0 until config.count_lanes) {
        vs1_32(i)(j) := io.vs1_in(i)(j).asUInt
        vs2_32(i)(j) := io.vs2_in(i)(j).asUInt
        vs3_32(i)(j) := io.vs3_in(i)(j).asUInt
      }
    }

    val narrow_ins  = Wire(Bool())
    val slide_ins   = Wire(Bool())
    val comp_ins    = Wire(Bool())
    val red_sum_ins = Wire(Bool())

    val narrow_valid  = Wire(Bool())
    val slide_valid   = Wire(Bool())
    val comp_valid    = Wire(Bool())
    val red_sum_valid = Wire(Bool())
    val arith_valid   = Wire(Bool())

    slide_ins       :=  "b001110".U === io.alu_opcode || "b001111".U === io.alu_opcode || vrgather === io.alu_opcode
    comp_ins        := "b011000".U === io.alu_opcode || "b011001".U === io.alu_opcode || "b011010".U === io.alu_opcode || "b011011".U === io.alu_opcode || "b011100".U === io.alu_opcode || "b011101".U === io.alu_opcode || "b011110".U === io.alu_opcode || "b011111".U === io.alu_opcode
    narrow_ins      := vnsrl===io.alu_opcode || vnsra===io.alu_opcode || vnclipu===io.alu_opcode || vnclip===io.alu_opcode
    red_sum_ins     := vwredsumu===io.alu_opcode || vwredsum===io.alu_opcode
    
    narrow_valid    := narrow_ins  && !slide_ins && !comp_ins && !red_sum_ins
    slide_valid     := !narrow_ins  && slide_ins && !comp_ins && !red_sum_ins
    comp_valid      := !narrow_ins  && !slide_ins && comp_ins && !red_sum_ins
    red_sum_valid   := !narrow_ins  && !slide_ins && !comp_ins && red_sum_ins
    arith_valid     := !narrow_ins  && !slide_ins && !comp_ins && !red_sum_ins



    val vl= 4
    val tail = 0.B
   
    
  // call main function
    var count_mask = 0.U
    //code changes
    val comp_8 = Module(new Comparison()(config))
    val arith_8 = Module(new Arith()(config))
    val narrow_8 = Module(new NarrowIns()(config))
    val Permutation_8 = new Permutation()(config)

    val comp_16 = Module(new Comparison()(config))
    val arith_16 = Module(new Arith()(config))
    val narrow_16 = Module(new NarrowIns()(config))
    val Permutation_16 = new Permutation()(config)

    val comp_32 = Module(new Comparison()(config))
    val arith_32 = Module(new Arith()(config))
    val Permutation_32 = new Permutation()(config)

    val result_8 = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(config.lane8)(0.U(8.W))))))
    val result_16 = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(config.lane16)(0.U(16.W))))))
    val result_32 = WireInit(VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.U(32.W))))))
    // dontTouch(comp_8)
    when(io.sew==="b000".U){
    //   when (arith_valid){
    //     result_8 <> arith_8.arith_8_result(vs1_8,vs2_8,vs3_8,vs0_mask,io.alu_opcode,rs1_imm_value,io.vl_in,io.mask_arith,config.lane8,8)
    //   }
      // .else
      when(slide_valid){
        result_8 <> Permutation_8.permutation(vs1_8,vs2_8,vs3_8,vs0_mask,io.alu_opcode,rs1_imm_value,io.vl_in,io.mask_arith,config.lane8,8,io.func3,io.lmul)
      }
      // .elsewhen (narrow_valid){
      //   result_8 <> narrow_8.narrow_result(vs1_8,vs2_16,vs3_8,vs0_mask,io.alu_opcode,rs1_imm_value,io.vl_in,io.mask_arith,config.lane8,8)
      // }
      // .elsewhen(comp_valid){
      //   result_8 <> comp_8.main_comp(vs1_8,vs2_8,vs3_8,vs0_mask,io.alu_opcode,rs1_imm_value,io.vl_in,io.mask_arith,config.lane8,8)
      // }
      // connect wires with io.vsd out***********************
      for (i <- 0 until 8) {
        var base = 0 
        for (j <- 0 until config.count_lanes) {
          io.vsd_out(i)(j) := Cat(
            result_8(i)(base + 3),
            result_8(i)(base + 2),
            result_8(i)(base + 1),
            result_8(i)(base)
          ).asSInt
          base = base + 4
        }
      }
    }
    // .elsewhen(io.sew==="b001".U){
    //   when (arith_valid){
    //     result_16 <> arith_16.arith_8_result(vs1_16,vs2_16,vs3_16,vs0_mask,io.alu_opcode,rs1_imm_value,io.vl_in,io.mask_arith,config.lane16,16)
    //   }
    //   // .elsewhen(slide_valid){
    //   //   result_16 <> Permutation_8.permutation(vs1_16,vs2_16,vs3_16,vs0_mask,io.alu_opcode,rs1_imm_value,io.vl_in,io.mask_arith,config.lane16,16,io.func3,io.lmul)
    //   // }
    //   // .elsewhen (narrow_valid){
    //   //   result_16 <> narrow_16.narrow_result(vs1_16,vs2_32,vs3_16,vs0_mask,io.alu_opcode,rs1_imm_value,io.vl_in,io.mask_arith,config.lane16,16)
    //   // }
    //   .elsewhen(comp_valid){
    //     result_16 <> comp_16.main_comp(vs1_16,vs2_16,vs3_16,vs0_mask,io.alu_opcode,rs1_imm_value,io.vl_in,io.mask_arith,config.lane16,16)
    //   }
    // //   // connect wires with io.vsd out***********************
    //   for (i <- 0 until 8) {
    //     var base = 0 
    //     for (j <- 0 until config.count_lanes) {
    //       io.vsd_out(i)(j) := Cat(
    //         result_16(i)(base + 1),
    //         result_16(i)(base)
    //       ).asSInt
    //       base = base + 2
    //     }
    //   }
    // }
    // .else
    // when(io.sew==="b010".U){
    //   when (arith_valid){
    //     result_32 <> arith_32.arith_8_result(vs1_32,vs2_32,vs3_32,vs0_mask,io.alu_opcode,rs1_imm_value,io.vl_in,io.mask_arith,config.count_lanes,32)
        
    //   }
    //   // .else
    // when(slide_valid){
    //     val Permutation_8 = new Permutation()(config)
    //     result_32 <> Permutation_8.permutation(vs1_32,vs2_32,vs3_32,vs0_mask,io.alu_opcode,rs1_imm_value,io.vl_in,io.mask_arith,config.count_lanes,32,io.func3,io.lmul)
    //   }
    // //   .elsewhen(comp_valid){
    // //     result_32 <> comp_32.main_comp(vs1_32,vs2_32,vs3_32,vs0_mask,io.alu_opcode,rs1_imm_value,io.vl_in,io.mask_arith,config.count_lanes,32)
    // //   }
    // //   // connect wires with io.vsd out***********************
    //   for (i <- 0 until 8) {
    //     for (j <- 0 until config.count_lanes) {
    //       io.vsd_out(i)(j) := result_32(i)(j).asSInt
    //     }
    //   }
    // }
    .otherwise{
    for (i <- 0 until 8) {
      for (j <- 0 until config.count_lanes) {
        io.vsd_out(i)(j) :=("h0000ffff".U).asSInt 
      }
    }
  }
}