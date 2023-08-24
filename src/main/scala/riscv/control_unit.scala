package riscv
import chisel3 . _
import chisel3 . util . _
class control_unit(val on : Bool =1.B, val off : Bool =0.B) extends Module {
    val io =  IO(new Bundle{
        val op_code =  Input(UInt(7.W))
        val rd = Input(UInt(5.W))
        val rs1 = Input(UInt(5.W))
        val fn3 = Input(UInt(3.W))

        val mem_write =  Output(Bool())
        val branch =  Output(Bool())
        val mem_read =  Output(Bool())
        val reg_write =  Output(Bool())
        val vec_write =  Output(Bool())
        val mem_data_sel =  Output(UInt(4.W))
        val operand_a =  Output(UInt(4.W))
        val operand_b =  Output(UInt(4.W))
        val extend_sel =  Output(UInt(4.W))
        val next_pc_selector =Output(UInt(4.W))
        val vector =Output(Bool())
        val vec_store = Output(Bool())
        val stall_true =Output(UInt(32.W))


    })
    //val op_code=io.control_instruction(7,0)
    //r type
    when(io.op_code==="b0110011".U){
        io.mem_write := off
        io.branch := off
        io.mem_read := off
        io.reg_write := 1.B
        io.vec_write := off
       io.mem_data_sel := "b00".U
        io.operand_a := 0.U
        io.operand_b := "b00".U
        io.extend_sel := 0.U
        io.next_pc_selector := 0.U
                io.stall_true := 0.U
        io.vector := 0.B
        io.vec_store := 0.B
    }

    //i_type
    .elsewhen(io.op_code==="b0010011".U){
        io.mem_write := off
        io.branch := off
        io.mem_read := off
        io.reg_write := on
        io.vec_write := off
       io.mem_data_sel := "b00".U
        io.operand_a := 0.U
        io.operand_b := "b01".U
        io.extend_sel := 0.U
        io.next_pc_selector := 0.U
                io.stall_true := 0.U
        io.vector := 0.B
        io.vec_store := 0.B

    }
    
    //stype
    .elsewhen(io.op_code==="b0100011".U){
        io.mem_write :=on
        io.branch := off
        io.mem_read := off
        io.reg_write := off
        io.vec_write := off
       io.mem_data_sel := "b00".U
        io.operand_a := 0.U
        io.operand_b := "b01".U
        io.extend_sel := "b11".U
        io.next_pc_selector := 0.U
                io.stall_true := 0.U
        io.vector := 0.B
        io.vec_store := 0.B
    }

    //b type
    .elsewhen(io.op_code==="b1100011".U){
        io.mem_write := off
        io.branch := on
        io.mem_read := off
        io.reg_write := off
        io.vec_write := off
       io.mem_data_sel := "b00".U
        io.operand_a := 0.U
        io.operand_b := "b00".U
        io.extend_sel := 0.U
        io.next_pc_selector := "b01".U
                io.stall_true := 0.U
        io.vector := 0.B
        io.vec_store := 0.B
    }

    //u type
    .elsewhen(io.op_code==="b0110111".U){
        io.mem_write := off
        io.branch := off
        io.mem_read := off
        io.reg_write := on
        io.vec_write := off
       io.mem_data_sel := "b00".U
        io.operand_a := 0.U
        io.operand_b := "b01".U
        io.extend_sel := 0.U
        io.next_pc_selector := 0.U
                io.stall_true := 0.U
        io.vector := 0.B
        io.vec_store := 0.B
    }
    //j type
    .elsewhen(io.op_code==="b1101111".U){
        io.mem_write := off
        io.branch := off
        io.mem_read := off
        io.reg_write := on
        io.vec_write := off
       io.mem_data_sel := "b00".U
        io.operand_a := 2.U
        io.operand_b := "b00".U
        io.extend_sel := 0.U
        io.next_pc_selector := "b10".U
                io.stall_true := 0.U
        io.vector := 0.B
        io.vec_store := 0.B
    }

    //jalr
    .elsewhen(io.op_code==="b1100111".U){
        io.mem_write := off
        io.branch := off
        io.mem_read := off
        io.reg_write := on
        io.vec_write := off
       io.mem_data_sel := "b00".U
        io.operand_a := "b10".U
        io.operand_b := "b00".U
        io.extend_sel := 0.U
        io.next_pc_selector := "b11".U
                io.stall_true := 0.U
        io.vector := 0.B
        io.vec_store := 0.B
    }

    //load
    .elsewhen(io.op_code==="b0000011".U){
        io.mem_write := off
        io.branch := off
        io.mem_read := on
        io.reg_write := on
        io.vec_write := off
       io.mem_data_sel := "b01".U
        io.operand_a := 0.U
        io.operand_b := "b01".U
        io.extend_sel := "b00".U
        io.next_pc_selector := 0.U
                io.stall_true := 0.U
        io.vector := 0.B
        io.vec_store := 0.B

    }
    //vector configure
    .elsewhen(io.op_code==="b1010111".U && io.fn3==="b111".U){
        io.mem_write := off
        io.branch := off
        io.mem_read := off
        io.reg_write := on
        io.vec_write := off
       io.mem_data_sel := "b00".U
        io.operand_b := "b10".U
        io.extend_sel := "b00".U
        io.next_pc_selector := 0.U
                io.stall_true := 0.U
        io.vector := 1.B
        io.vec_store := 0.B

        when (io.rs1 === 0.U && io.rd===0.U){
            io.operand_a := 0.U
        }
        .elsewhen(io.rs1 === 0.U & io.rd =/= 0.U){
            io.operand_a := 0.U
        }
        .otherwise{
            io.operand_a := 0.U
        }

    }
    // vector load
    .elsewhen((io.op_code==="b0000111".U)){
        io.mem_write := off
        io.branch := off
        io.mem_read := on
        io.reg_write := off
       io.mem_data_sel := "b10".U
        io.operand_a := 0.U
        io.operand_b := "b10".U
        io.extend_sel := "b00".U
        io.vector := 1.B
        io.vec_store := 0.B
        
        val reg123 = RegInit(3.U(32.W))
        when(reg123 > 0.U && io.op_code==="b0000111".U){
            io.next_pc_selector := 4.U
            reg123 := reg123 -1.U
            io.vec_write := off
            io.stall_true := reg123

        }
        .otherwise{
            reg123 := 3.U
            io.vec_write := on
            io.next_pc_selector := 0.U
            io.stall_true := 0.U
        }
    }
    //vector store
    .elsewhen((io.op_code==="b0100111".U)){
        io.mem_write := on
        io.branch := off
        io.mem_read := off
        io.reg_write := off
       io.mem_data_sel := "b10".U
        io.operand_a := 0.U
        io.operand_b := "b01".U
        io.extend_sel := "b11".U
        io.vector := 1.B
        io.vec_store := 1.B
        
        val reg123 = RegInit(3.U(32.W))
        when(reg123 > 0.U && io.op_code==="b0100111".U){
            io.next_pc_selector := 4.U
            reg123 := reg123 -1.U
            io.vec_write := off
            io.stall_true := reg123

        }
        .otherwise{
            reg123 := 3.U
            io.vec_write := off
            io.next_pc_selector := 0.U
            io.stall_true := 0.U
        }
    }

    //vector to vector
    .elsewhen(io.op_code==="b1010111".U && io.fn3==="b000".U){
        io.mem_write :=off
        io.branch := off
        io.mem_read := off
        io.reg_write := off
        io.vec_write := on
       io.mem_data_sel := "b11".U
        io.operand_a := 4.U
        io.operand_b := "b11".U
        io.extend_sel := "b00".U
        io.next_pc_selector := 0.U
        io.stall_true := 0.U
        io.vector := 1.B
        io.vec_store := 0.B
    }
    //vector to scalar
    .elsewhen(io.op_code==="b1010111".U && io.fn3==="b100".U){
        io.mem_write :=off
        io.branch := off
        io.mem_read := off
        io.reg_write := off
        io.vec_write := on
       io.mem_data_sel := "b11".U
        io.operand_a := 0.U
        io.operand_b := "b11".U
        io.extend_sel := "b00".U
        io.next_pc_selector := 0.U
        io.stall_true := 0.U
        io.vector := 1.B
        io.vec_store := 0.B
    }
    
    .otherwise{
        io.mem_write := 0.B
        io.branch := 0.B
        io.mem_read := 0.B
        io.reg_write := 0.B
        io.vec_write := off
        io.mem_data_sel := 0.B
        io.operand_a := 0.U
        io.operand_b := "b11".U
        io.extend_sel := 0.U
        io.next_pc_selector :=0.U
                io.stall_true := 0.U
        io.vector := 1.B
        io.vec_store := 0.B
    }

}
//io.mem_write := off