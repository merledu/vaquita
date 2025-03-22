package vaquita.components
import chisel3._
import chisel3.util._


class VecControlUnit(implicit val config: VaquitaConfig) extends Module {
  val io = IO (new Bundle {
    val instr            = Input(UInt(32.W))
    val reg_write        =  Output(Bool())
    val mem_write        =  Output(Bool())
    val mem_read         =  Output(Bool())
    val mem_to_reg       =  Output(Bool())
    val operand_type     =  Output(UInt(2.W))
    val vec_config       = Output(Bool())
    val store_vs3_to_mem = Output(Bool())
    })
    //config 
        when(io.instr(6,0)==="b1010111".U && io.instr(14,12)==="b111".U){
            io.mem_write    := 0.B
            io.operand_type := "b11".U
            io.mem_read     := 0.B
            io.reg_write    := 0.B
            io.mem_to_reg := 0.B
            io.vec_config := 1.B
            io.store_vs3_to_mem := 0.B
            

        }
        //vec to vec
        .elsewhen(io.instr(6,0)==="b1010111".U && io.instr(14,12)==="b000".U){
            io.mem_write := 0.B
            io.operand_type := "b00".U
            io.mem_read := 0.B
            io.reg_write := 1.B
            io.mem_to_reg := 0.B
            io.vec_config := 0.B
            io.store_vs3_to_mem := 0.B
            

        }
        //vec to scalar
        .elsewhen(io.instr(6,0)==="b1010111".U && io.instr(14,12)==="b100".U){
            io.mem_write := 0.B
            io.operand_type := "b01".U
            io.mem_read := 0.B
            io.reg_write := 1.B
            io.mem_to_reg := 0.B
            io.vec_config := 0.B
            io.store_vs3_to_mem := 0.B
            

        }
        //vec to immediate
        .elsewhen(io.instr(6,0)==="b1010111".U && io.instr(14,12)==="b011".U){
            io.mem_write := 0.B
            io.operand_type := "b10".U
            io.mem_read := 0.B
            io.reg_write := 1.B
            io.mem_to_reg := 0.B
            io.vec_config := 0.B
            io.store_vs3_to_mem := 0.B
        }

        //store
        .elsewhen(io.instr(6,0)==="b0100111".U){
            io.mem_write := 1.B
            io.operand_type := "b00".U
            io.mem_read := 0.B
            io.reg_write := 0.B
            io.mem_to_reg := 0.B
            io.vec_config := 0.B
            io.store_vs3_to_mem := 1.B
            

        }

        //load
        .elsewhen(io.instr(6,0)==="b0000111".U){
            io.mem_write := 0.B
            io.operand_type := "b11".U
            io.mem_read := 1.B
            io.reg_write := 1.B
            io.mem_to_reg := 1.B
            io.vec_config := 0.B
            io.store_vs3_to_mem := 0.B
        }

        .otherwise{
        io.mem_write := 0.B
        io.operand_type := "b11".U
        io.mem_read := 0.B
        io.reg_write := 0.B
        io.mem_to_reg := 0.B
        io.vec_config := 0.B
        io.store_vs3_to_mem := 0.B
        
    }
}