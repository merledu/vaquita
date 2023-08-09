package Vpractice

import chisel3._
import chisel3.util._

class Control extends Module{
    val io = IO(new Bundle{
        val opcode = Input( UInt(7.W) )
        val rs1_no = Input( UInt (5.W ) )             //vsetvli
        val rd_no = Input ( UInt (5.W ) )             //vsetvli

        val mem_write = Output( Bool() ) 
        val branch = Output( Bool() ) 
        val mem_read = Output( Bool() ) 
        val reg_write = Output( Bool() ) 
        val men_to_reg = Output( Bool()) 
        val alu_operation = Output( UInt(4.W) )
        val operand_A = Output( UInt(3.W) )            //change width due to vsetvli
        val operand_B = Output( UInt(2.W) )            //change width due to vsetvli
        val extend = Output( UInt(2.W) ) 
        val next_pc_sel = Output( UInt(2.W) ) 
        val avl_ope = Output( UInt(2.W) )              //vsetvli
        val is_I = Output ( Bool () )                   //vsetvli
        val is_V = Output ( Bool() )                    //vsetvli
 
})

io.men_to_reg := 0.U
// R type
when ( io.opcode === 51.U ) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 0.U
    io.operand_A := 0.U
    io.operand_B := 0.U
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U                             //vsetvli
    io.is_I := 1.B                                //vsetvli
    io.is_V := 0.B                                //vsetvli
// I type
}.elsewhen ( io.opcode === 19.U ) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 1.U
    io.operand_A := 0.U
    io.operand_B := 1.U
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 1.B                                //vsetvli
    io.is_V := 0.B                                //vsetvli
// S type
}.elsewhen ( io.opcode === 35.U ) {
    io.mem_write := 1.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 0.B
    io.men_to_reg := 0.B
    io.alu_operation := 5.U
    io.operand_A := 0.U
    io.operand_B := 1.U
    io.extend := 1.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 1.B                                //vsetvli
    io.is_V := 0.B                                //vsetvli
// Load
}.elsewhen ( io.opcode === 3.U ) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 1.B
    io.reg_write := 1.B
    io.men_to_reg := 1.B
    io.alu_operation := 4.U
    io.operand_A := 0.U
    io.operand_B := 1.U
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 1.B                                //vsetvli
    io.is_V := 0.B                                //vsetvli
// SB type
}.elsewhen ( io.opcode === 99.U ) {
    io.mem_write := 0.B
    io.branch := 1.B
    io.mem_read := 0.B
    io.reg_write := 0.B
    io.men_to_reg := 0.B
    io.alu_operation := 2.U
    io.operand_A := 0.U
    io.operand_B := 0.U
    io.extend := 0.U
    io.next_pc_sel := 1.U
    io.avl_ope := 0.U
    io.is_I := 1.B                                //vsetvli
    io.is_V := 0.B                                //vsetvli
// UJ type
}.elsewhen ( io.opcode === 111.U ) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 3.U
    io.operand_A := 1.U
    io.operand_B := 0.U
    io.extend := 0.U
    io.next_pc_sel := 2.U
    io.avl_ope := 0.U
    io.is_I := 1.B                                //vsetvli
    io.is_V := 0.B                                //vsetvli
// Jalr 
}.elsewhen ( io.opcode === 103.U ) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 3.U
    io.operand_A := 1.U
    io.operand_B := 0.U
    io.extend := 0.U
    io.next_pc_sel := 3.U
    io.avl_ope := 0.U
    io.is_I := 1.B                                //vsetvli
    io.is_V := 0.B                                //vsetvli
// U type (lui)   
}.elsewhen ( io.opcode === 55.U ) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 6.U
    io.operand_A := 3.U
    io.operand_B := 1.U
    io.extend := 2.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 1.B                                //vsetvli
    io.is_V := 0.B                                //vsetvli
// U type (auipc)   
}.elsewhen ( io.opcode === 23.U ) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 7.U
    io.operand_A := 2.U
    io.operand_B := 1.U
    io.extend := 2.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 1.B                                //vsetvli
    io.is_V := 0.B                                //vsetvli
//vsetvli
}.elsewhen ( io.opcode === 87.U ) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 8.U
    io.operand_A := 4.U                   
    io.operand_B := 2.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B                                //vsetvli
    
    when (io.rs1_no =/= 0.U) {
        io.avl_ope := 0.U
    }.elsewhen ( io.rs1_no === 0.U && io.rd_no =/= 0.U) {
        io.avl_ope := 1.U
    }.elsewhen ( io.rs1_no === 0.U && io.rd_no === 0.U) {
        io.avl_ope := 2.U
    }.otherwise {
        io.avl_ope := 0.U
    }


}.otherwise {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 0.B
    io.men_to_reg := 0.B
    io.alu_operation := 0.U
    io.operand_A := 0.U
    io.operand_B := 0.B
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 0.B                                //vsetvli
}
}
