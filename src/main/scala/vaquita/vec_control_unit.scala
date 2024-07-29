package vaquita
import chisel3._
import chisel3.util._


class vec_control_unit(implicit val config: Config,val on : Bool =1.B, val off : Bool =0.B) extends Module {
  val io = IO (new Bundle {
    val instr = Input(UInt(32.W))
    val reg_write =  Output(Bool())
    val mem_write =  Output(Bool())
    val mem_read =  Output(Bool())
    val mem_to_reg =  Output(Bool())
    val operand_type =  Output(UInt(2.W))
    val vec_config = Output(Bool())
    })
    //config 
        when(io.instr(6,0)==="b1010111".U && io.instr(14,12)==="b111".U){
            io.mem_write := off
            io.operand_type := "b11".U
            io.mem_read := off
            io.reg_write := off
            io.mem_to_reg := off
            io.vec_config := on
            

        }
        //vec to vec
        .elsewhen(io.instr(6,0)==="b1010111".U && io.instr(14,12)==="b000".U){
            io.mem_write := off
            io.operand_type := "b00".U
            io.mem_read := off
            io.reg_write := on
            io.mem_to_reg := off
            io.vec_config := off
            

        }
        //vec to scalar
        .elsewhen(io.instr(6,0)==="b1010111".U && io.instr(14,12)==="b100".U){
            io.mem_write := off
            io.operand_type := "b01".U
            io.mem_read := off
            io.reg_write := on
            io.mem_to_reg := off
            io.vec_config := off
            

        }
        //vec to immediate
        .elsewhen(io.instr(6,0)==="b1010111".U && io.instr(14,12)==="b011".U){
            io.mem_write := off
            io.operand_type := "b10".U
            io.mem_read := off
            io.reg_write := on
            io.mem_to_reg := off
            io.vec_config := off
        }

        //store
        .elsewhen(io.instr(6,0)==="b0100111".U){
            io.mem_write := on
            io.operand_type := "b11".U
            io.mem_read := off
            io.reg_write := off
            io.mem_to_reg := off
            io.vec_config := off
            

        }

        //load
        .elsewhen(io.instr(6,0)==="b0000111".U){
            io.mem_write := off
            io.operand_type := "b11".U
            io.mem_read := on
            io.reg_write := on
            io.mem_to_reg := on
            io.vec_config := off
        }

        .otherwise{
        io.mem_write := off
        io.operand_type := "b11".U
        io.mem_read := off
        io.reg_write := off
        io.mem_to_reg := off
        io.vec_config := off
        
    }




    }