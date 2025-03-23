package vaquita
import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage
import vaquita.pipeline.{DecodeStage,ExcuteStage,MemStage,WBStage}
import vaquita.components.{VecMemFetch,ForwardingUnit,MemRequestIO,MemResponseIO}
import vaquita.configparameter.VaquitaConfig

class VaquitaTop extends Module {
    val io = IO(new Bundle{
        val instr = Input(UInt(32.W))
        val rs1_data = Input(SInt(32.W))
        val dmemReq = Decoupled(new MemRequestIO)
        val dmemRsp = Flipped(Decoupled(new MemResponseIO))
        val hazard_rs1_data_in = Input(UInt(32.W))
        val vl_rs1_out = Output(UInt(32.W))
        
    })
    implicit val vec_config = VaquitaConfig (256,32,32,8)
    val de_stage = Module(new DecodeStage()(vec_config))
    val DE        = de_stage.io
    val excute_stage = Module(new ExcuteStage()(vec_config))
    val EX        = excute_stage.io
    val mem_stage = Module(new MemStage()(vec_config))
    val MEM        = mem_stage.io
    val vec_mem_fetch_module = Module(new VecMemFetch)
    val MemFetch        = vec_mem_fetch_module.io
    val wb_stage = Module(new WBStage()(vec_config))
    val WB        = wb_stage.io
    val fu_module = Module(new ForwardingUnit)
    val FU        = fu_module.io

    MemFetch.mem_vs3_data <> MEM.vs3_data_out
    MemFetch.write_en := MEM.mem_stage_write_en
    MemFetch.read_en := MEM.mem_stage_read_en
    MemFetch.addr := RegNext(io.hazard_rs1_data_in)
        // vec_mem_module.io.dccmReq.ready := 1.B

// -----------------decode stage ---------------------------------
    DE.de_io.instr := io.instr
    DE.de_io.rs1_data := io.rs1_data
    DE.de_io.wb_reg_write_in  := WB.wb_reg_write_out

    // -----------------excute stage ---------------------------------

    // ************forwording unit***********************
    DE.de_io.vl_rs1_in := RegNext(EX.vl_rs1_out.asUInt)
    EX.ex_lmul_in := DE.de_io.lmul_out
    
    EX.vl_in := DE.de_io.vl_out
    io.vl_rs1_out := EX.vl_rs1_out
    EX.hazard_rs1 := io.hazard_rs1_data_in
    FU.mem_vd := MEM.mem_instr_out(11,7)
    FU.wb_vd := WB.wb_instr_out(11,7)
    FU.instr_in := EX.ex_instr_out
    FU.mem_regWrite := MEM.mem_reg_write_out
    FU.wb_regWrite := WB.wb_reg_write_out
    when(FU.forward_a===1.U){
        EX.ex_vs1_data_in <> MEM.mem_vsd_data_out
    }
    .elsewhen(FU.forward_a===2.U){
        EX.ex_vs1_data_in <> WB.wb_vsd_data_out
    }
    .otherwise{
            EX.ex_vs1_data_in <> RegNext(DE.de_vec_io.vs1_data_out)//directly wire from excute stage
    }
    when(FU.forward_b===1.U){

            EX.ex_vs2_data_in <> MEM.mem_vsd_data_out

    }.elsewhen(FU.forward_b===2.U){
        
            EX.ex_vs2_data_in <> WB.wb_vsd_data_out
    }.otherwise{
  
            EX.ex_vs2_data_in <> RegNext(DE.de_vec_io.vs2_data_out)
    }
    //for vs3
    when(FU.forward_c===1.U){
        
            EX.ex_vs3_data_in <> MEM.mem_vsd_data_out
    }.elsewhen(FU.forward_c===2.U){
 
            EX.ex_vs3_data_in <> WB.wb_vsd_data_out
    }.otherwise{
        
            EX.ex_vs3_data_in <> RegNext(DE.de_vec_io.vs3_data_out)
    }
    //for vs0
    when(FU.forward_d===1.U){
        
            EX.ex_vs0_data_in <> MEM.mem_vsd_data_out
    }.elsewhen(FU.forward_d===2.U){
        EX.ex_vs0_data_in <> WB.wb_vsd_data_out
    }.otherwise{
        EX.ex_vs0_data_in <> RegNext(DE.de_vec_io.vs0_data_out)
    }
    
    EX.ex_sew_in := DE.de_io.sew_out
    EX.ex_alu_op_in := DE.de_io.alu_op_out
    EX.ex_instr_in := io.instr
    EX.ex_read_en_in := DE.de_io.de_read_en
    EX.ex_write_en_in := DE.de_io.de_write_en
    EX.ex_rs1_data_in := io.rs1_data
    EX.ex_reg_write_in := DE.de_io.de_reg_write

    // -----------------memory stage ---------------------------------
    // val comparison_bit_f6 = MEM.mem_instr_out(31,26)==="b011000".U || MEM.mem_instr_out(31,26)==="b011001".U || MEM.mem_instr_out(31,26)==="b011010".U || MEM.mem_instr_out(31,26)==="b011011".U || MEM.mem_instr_out(31,26)==="b011100".U || MEM.mem_instr_out(31,26)==="b011101".U || MEM.mem_instr_out(31,26)==="b011110".U || MEM.mem_instr_out(31,26)==="b011111".U
    // val comparison_bit_f3 = MEM.mem_instr_out(14,12)==="b000".U || MEM.mem_instr_out(14,12)==="b011".U || MEM.mem_instr_out(14,12)==="b100".U
    io.dmemReq           <> MemFetch.dccmReq
    MemFetch.dccmRsp     <> io.dmemRsp
    MemFetch.mem_lmul_in := EX.ex_lmul_out
    // MemFetch.vec_comparison_bit := comparison_bit_f6 && comparison_bit_f3

    val wb_vs3_data_in_store = VecInit(Seq.fill(8)(VecInit(Seq.fill(vec_config.count_lanes)(0.S(vec_config.XLEN.W)))))
    
    MEM.mem_vsd_data_in     <> EX.vsd_data_out
    MEM.mem_instr_in        := EX.ex_instr_out
    MEM.write_en            := EX.ex_write_en_out
    MEM.read_en             := EX.ex_read_en_out
    MEM.mem_rs1_data_in     := EX.ex_rs1_data_out
    MEM.mem_reg_write_in    := EX.ex_reg_write_out
    WB.wb_vsd_data_in       <> MEM.mem_vsd_data_out
    WB.wb_vs3_data_in_store <> wb_vs3_data_in_store
    MEM.mem_vs1_data_vs3_in <> EX.ex_vs1_data_out_vs3
    // send to register file
    WB.wb_vs3_data_in_store       <> MemFetch.vec_read_data_load
    WB.wb_vs3_data_in_store(0)(0) := MemFetch.vec_read_data_load(0)(0)
    WB.mem_to_reg                 := MEM.mem_read_en_out
    // -----------------write back stage ---------------------------------
    WB.wb_instr_in := MEM.mem_instr_out
    DE.de_vec_io.vsd_data_in <> WB.wb_vsd_data_out
    DE.de_io.wb_de_instr_in := WB.wb_instr_out
    WB.wb_reg_write_in := MEM.mem_reg_write_out
    
    dontTouch(DE)
    dontTouch(MEM)
    dontTouch(EX)
    dontTouch(MemFetch)
    dontTouch(WB)
    dontTouch(FU)
}



object VaquitaDriver {
  // generate verilog
  def main(args: Array[String]): Unit = {
      new ChiselStage().emitVerilog(new VaquitaTop())
  }
}