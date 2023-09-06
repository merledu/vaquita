package rvv

import chisel3._
import chisel3.util._

class Control extends Module{
    val io = IO(new Bundle{
        val opcode = Input( UInt(7.W) )
        val rs1_no = Input( UInt (5.W ) )             //vsetvli
        val rd_no = Input ( UInt (5.W ) )             //vsetvli
        val fun3 = Input ( UInt (3.W ) )
        val fun6 = Input ( UInt (6.W ) )

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
        val is_I = Output ( Bool () )                  //vsetvli
        val is_V = Output ( Bool() )                   //vsetvli
        val csr_reg_write = Output ( Bool() )          //vsetvli
        val vlcsr_reg_Write = Output ( Bool() )        //vsetvli
        val vlamx_writepin = Output ( Bool() )         //vsetvli
        val V_opeA = Output( UInt(2.W) )               //opivi
        val V_opeB = Output( UInt(2.W) )               //opivi
        val V_imm = Output( UInt(2.W) )                //opivi
        val V_men_to_reg = Output( Bool())             //opivi
 
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
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 0.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

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
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 0.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

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
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 0.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

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
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 0.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

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
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 0.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

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
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 0.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

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
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 0.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

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
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 0.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

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
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 0.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Configurations Instructions:    
//vsetvli
}.elsewhen ( io.opcode === 87.U && io.fun3 === 7.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 0.U
    io.operand_A := 4.U                   
    io.operand_B := 2.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B                                //vsetvli
    io.csr_reg_write := 1.B
    io.vlcsr_reg_Write := 1.B
    io.vlamx_writepin := 1.B
    io.V_opeA := 0.U
    io.V_opeB := 0.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B
    
    when (io.rs1_no =/= 0.U) {
        io.avl_ope := 0.U
    }.elsewhen ( io.rs1_no === 0.U && io.rd_no =/= 0.U) {
        io.avl_ope := 1.U
    }.elsewhen ( io.rs1_no === 0.U && io.rd_no === 0.U) {
        io.avl_ope := 2.U
    }.otherwise {
        io.avl_ope := 0.U
    }

//Arithmetic Instructions:     
//ADD:  
//Opivi (vaddi)
}.elsewhen ( io.opcode === 87.U && io.fun3 === 3.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 1.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 1.U
    io.V_men_to_reg := 0.B

//Opivv (vadd.vv)
}.elsewhen ( io.opcode === 87.U && io.fun3 === 0.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 2.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 1.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Opivx (vadd.vx)
}.elsewhen ( io.opcode === 87.U && io.fun3 === 4.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 3.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//SUBTRACT:
//Opivx (vsub.vx)
}.elsewhen ( io.opcode === 87.U && io.fun3 === 4.U && io.fun6 === 2.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 4.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Opivv (vsub.vv)
}.elsewhen ( io.opcode === 87.U && io.fun3 === 0.U && io.fun6 === 2.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 5.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 1.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B   

//MOVE INSTRUCTION:
//Opivx (move instruction(vmv.v.x))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 4.U && io.fun6 === 23.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 6.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Opivi (move instruction(vmv.v.i))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 3.U && io.fun6 === 23.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 7.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 0.U
    io.V_imm := 1.U
    io.V_men_to_reg := 0.B

//Opivv (move instruction(vmv.v.v))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 0.U && io.fun6 === 23.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 8.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 1.U
    io.V_opeB := 0.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//BITWISE INSTRUCTION:
//AND:    
//Opivi (bitwise instruction(vand.vi))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 3.U && io.fun6 === 9.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 9.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 1.U
    io.V_men_to_reg := 0.B

//Opivx (bitwise instruction(vand.vx))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 4.U && io.fun6 === 9.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 10.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Opivv (bitwise instruction(vand.vv))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 0.U && io.fun6 === 9.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 11.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 1.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//OR:
//Opivi (bitwise instruction(vor.vi))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 3.U && io.fun6 === 10.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 12.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 1.U
    io.V_men_to_reg := 0.B

//Opivx (bitwise instruction(vor.vx))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 4.U && io.fun6 === 10.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 13.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Opivv (bitwise instruction(vor.vv))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 0.U && io.fun6 === 10.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 14.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 1.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//XOR:
//Opivi (bitwise instruction(vxor.vi))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 3.U && io.fun6 === 11.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 15.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 1.U
    io.V_men_to_reg := 0.B

//Opivx (bitwise instruction(vxor.vx))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 4.U && io.fun6 === 11.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 16.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Opivv (bitwise instruction(vxor.vv))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 0.U && io.fun6 === 11.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 17.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 1.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//REVERSE SUBTRACT:    
//Opivi (vrsub.vi)
}.elsewhen ( io.opcode === 87.U && io.fun3 === 3.U && io.fun6 === 3.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 18.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 1.U
    io.V_men_to_reg := 0.B

//Opivx (vrsub.vx)
}.elsewhen ( io.opcode === 87.U && io.fun3 === 4.U && io.fun6 === 3.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 19.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B 

//MIN & MAX INSTRUCTIONS:
//MIN:    
//Opivx (U_min instruction(vminu.vx))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 4.U && io.fun6 === 4.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 20.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Opivv (U_min instruction(vminu.vv))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 0.U && io.fun6 === 4.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 21.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 1.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Opivx (S_min instruction(vmin.vx))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 4.U && io.fun6 === 5.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 22.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Opivv (S_min instruction(vmin.vv))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 0.U && io.fun6 === 5.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 23.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 1.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//MAX:    
//Opivx (U_max instruction(vmaxu.vx))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 4.U && io.fun6 === 6.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 24.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Opivv (U_max instruction(vmaxu.vv))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 0.U && io.fun6 === 6.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 25.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 1.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Opivx (S_max instruction(vmax.vx))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 4.U && io.fun6 === 7.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 26.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

//Opivv (S_max instruction(vmax.vv))
}.elsewhen ( io.opcode === 87.U && io.fun3 === 0.U && io.fun6 === 7.U) {
    io.mem_write := 0.B
    io.branch := 0.B
    io.mem_read := 0.B
    io.reg_write := 1.B
    io.men_to_reg := 0.B
    io.alu_operation := 27.U
    io.operand_A := 0.U                   
    io.operand_B := 0.U                   
    io.extend := 0.U
    io.next_pc_sel := 0.U
    io.avl_ope := 0.U
    io.is_I := 0.B                                //vsetvli
    io.is_V := 1.B       
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 1.U
    io.V_opeB := 1.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B

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
    io.csr_reg_write := 0.B
    io.vlcsr_reg_Write := 0.B
    io.vlamx_writepin := 0.B
    io.V_opeA := 0.U
    io.V_opeB := 0.U
    io.V_imm := 0.U
    io.V_men_to_reg := 0.B
}
}
