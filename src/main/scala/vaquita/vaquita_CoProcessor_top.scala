package vaquita
import chisel3._
import chisel3.util._

class vaquita_CoProcessor_top() extends Module {
  val io = IO(new Bundle {
    // val req_data   = Input(Bool())
    // val ready      = Output(Bool())
    val instr    = Input(UInt(32.W))
    val rs1_data = Input(SInt(32.W))

    // val vec_addr = Output(UInt(32.W))
    // val vec_data_write = Output(UInt(32.W))
    // val vec_active_byte_lane = Output(UInt(4.W))
    // val vec_write = Output(Bool())
    // val vec_data_read = Input(UInt(32.W))
  })
  val vec_top_module = Module(new vec_top)
    dontTouch(vec_top_module.io)

    vec_top_module.io.instr := io.instr
    vec_top_module.io.rs1_data := io.rs1_data
    vec_top_module.io.dmemRsp.valid := 1.B
    vec_top_module.io.dmemReq.ready := 1.B
    vec_top_module.io.dmemRsp.bits.dataResponse := 0.U


    // io.vec_addr := vec_top_module.io.vec_addr_out
    // io.vec_data_write := vec_top_module.io.vec_data_write_out
    // io.vec_active_byte_lane := vec_top_module.io.vec_active_byte_lane_out
    // io.vec_write := vec_top_module.io.vec_write_out
}
