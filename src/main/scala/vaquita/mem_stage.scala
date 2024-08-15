package vaquita
import chisel3._
import chisel3.util._


class mem_stage(implicit val config: Vaquita_Config) extends Module {
  val io = IO (new Bundle {
    val mem_vsd_data_in = Input(Vec(8, Vec(config.count_lanes, SInt(64.W))))
    val mem_vsd_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(64.W))))
    val mem_instr_in = Input(UInt(32.W))
    val mem_instr_out = Output(UInt(32.W))
    val write_en = Input(Bool())
    val read_en = Input(Bool())
    val mem_stage_write_en = Output(Bool())
    val mem_stage_read_en = Output(Bool())
    val mem_read_en_out = Output(Bool())
    val mem_reg_write_in = Input(Bool())
    val mem_reg_write_out = Output(Bool())
    // val mem_vd = Output(UInt(5.W))
    val mem_stage_addr = Output(UInt(32.W))
    val mem_rs1_data_in = Input(SInt(32.W))
    val mem_vs1_data_vs3_in = Input(Vec(8, Vec(config.count_lanes, SInt(64.W))))
    val vec_read_data_load  = Output(Vec(8, Vec(config.count_lanes, SInt(64.W))))
    val vs3_data_out = Output(Vec(8, Vec(config.count_lanes, SInt(64.W))))
    // val vec_read_data = Input

    })
    // val vec_mem_module = Module(new vec_mem_fetch)
    // dontTouch(vec_mem_module.io)
  
    val initValue = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(64.W)))))
    val vsd_data = RegNext(WireDefault(initValue))

    val initValue_vs3 = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(64.W)))))
    val vs3_data = RegNext(WireDefault(initValue))
    

    for (i <- 0 to 7) { // for grouping = 8
        for (j <- 0 until (config.vlen >> 6)) {
            vsd_data(i)(j) := io.mem_vsd_data_in(i)(j)
            io.mem_vsd_data_out(i)(j) := vsd_data(i)(j)
            vs3_data(i)(j) := io.mem_vs1_data_vs3_in(i)(j)
            io.vs3_data_out(i)(j) := vs3_data(i)(j)
            io.vec_read_data_load(i)(j) := 0.S
          }
    }
    io.mem_instr_out := RegNext(io.mem_instr_in)
    io.mem_stage_write_en := RegNext(io.write_en)
    io.mem_stage_read_en := RegNext(io.read_en)
    io.mem_stage_addr := RegNext(io.mem_rs1_data_in.asUInt)
    io.mem_reg_write_out := RegNext(io.mem_reg_write_in)
    io.mem_read_en_out := RegNext(io.read_en)

    // io.mem_vd := RegNext(io.mem_instr_in(11,7))
    
}