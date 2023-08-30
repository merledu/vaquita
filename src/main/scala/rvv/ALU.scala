package rvv

import chisel3._
import chisel3.util._

object ALUOP {
    val ALU_ADD = "b00000".U(11.W)
    val ALU_SUB = "b00100000000".U(11.W)
    val ALU_AND = "b00000000111".U(11.W)
    val ALU_OR = "b00000000110".U(11.W)
    val ALU_XOR = "b00000000100".U(11.W)
    val ALU_SLT = "b00000000010".U(11.W)
    val ALU_SLL = "b00000000001".U(11.W)
    val ALU_SLTU = "b00000000011".U(11.W)
    val ALU_SRL = "b00000000101".U(11.W)
    val ALU_SRA = "b10100000101".U(11.W)
    val ALU_JALR = "b10100000111".U(11.W)
    val ALU_VSET = "b00000000111".U(11.W)
    val ALU_VADDI = "b00000000011".U(11.W)
    val ALU_VADD = "b00000000000".U(11.W)
}

trait Config {
    val VLEN = 128
    val WLEN = 32
    val ALUOP_SIG_LEN = 11
}

import ALUOP._
    class ALUIO extends Bundle with Config {
    val in_A = Input(SInt(WLEN.W))
    val in_B = Input(SInt(WLEN.W))
	val in_vA = Input(SInt(128.W))
	val in_vB = Input(SInt(128.W))
    val alu_op = Input(UInt(ALUOP_SIG_LEN.W))
	val sew = Input(UInt(3.W))
	val in_V = Input(Bool())
    val out = Output(SInt(WLEN.W))
	val v_out = Output(SInt(128.W))
}

class ALU extends Module with Config {
    val io = IO(new ALUIO)

    val sew_8_a = VecInit(Seq.fill(16)(0.S(8.W)))
    val sew_16_a = VecInit(Seq.fill(8)(0.S(16.W)))
    val sew_32_a = VecInit(Seq.fill(4)(0.S(32.W)))
    val sew_64_a = VecInit(Seq.fill(2)(0.S(64.W)))

    val sew_8_b = VecInit(Seq.fill(16)(0.S(8.W)))
    val sew_16_b = VecInit(Seq.fill(8)(0.S(16.W)))
    val sew_32_b = VecInit(Seq.fill(4)(0.S(32.W)))
    val sew_64_b = VecInit(Seq.fill(2)(0.S(64.W)))


    val out8 = VecInit(Seq.fill(16)(0.S(8.W)))
    val out16 = VecInit(Seq.fill(8)(0.S(16.W)))
    val out32 = VecInit(Seq.fill(4)(0.S(32.W)))
    val out64 = VecInit(Seq.fill(2)(0.S(64.W)))

    // define wires input a when sew = 8
    sew_8_a(0) := io.in_vA(7,0).asSInt
    sew_8_a(1) := io.in_vA(15,8).asSInt
    sew_8_a(2) := io.in_vA(23,16).asSInt
    sew_8_a(3) := io.in_vA(31,24).asSInt
    sew_8_a(4) := io.in_vA(39,32).asSInt
    sew_8_a(5) := io.in_vA(47,40).asSInt
    sew_8_a(6) := io.in_vA(55,48).asSInt
    sew_8_a(7) := io.in_vA(63,56).asSInt
    sew_8_a(8) := io.in_vA(71,64).asSInt
    sew_8_a(9) := io.in_vA(79,72).asSInt
    sew_8_a(10) := io.in_vA(87,80).asSInt
    sew_8_a(11) := io.in_vA(95,88).asSInt
    sew_8_a(12) := io.in_vA(103,96).asSInt
    sew_8_a(13) := io.in_vA(111,104).asSInt
    sew_8_a(14) := io.in_vA(119,112).asSInt
    sew_8_a(15) := io.in_vA(127,120).asSInt

    // define wires input b when sew = 8
    sew_8_b(0) := io.in_vB(7,0).asSInt
    sew_8_b(1) := io.in_vB(15,8).asSInt
    sew_8_b(2) := io.in_vB(23,16).asSInt
    sew_8_b(3) := io.in_vB(31,24).asSInt
    sew_8_b(4) := io.in_vB(39,32).asSInt
    sew_8_b(5) := io.in_vB(47,40).asSInt
    sew_8_b(6) := io.in_vB(55,48).asSInt
    sew_8_b(7) := io.in_vB(63,56).asSInt
    sew_8_b(8) := io.in_vB(71,64).asSInt
    sew_8_b(9) := io.in_vB(79,72).asSInt
    sew_8_b(10) := io.in_vB(87,80).asSInt
    sew_8_b(11) := io.in_vB(95,88).asSInt
    sew_8_b(12) := io.in_vB(103,96).asSInt
    sew_8_b(13) := io.in_vB(111,104).asSInt
    sew_8_b(14) := io.in_vB(119,112).asSInt
    sew_8_b(15) := io.in_vB(127,120).asSInt

    //define wires input a when sew = 16
    sew_16_a(0) := io.in_vA(15,0).asSInt
    sew_16_a(1) := io.in_vA(31,16).asSInt
    sew_16_a(2) := io.in_vA(47,32).asSInt
    sew_16_a(3) := io.in_vA(63,48).asSInt
    sew_16_a(4) := io.in_vA(79,64).asSInt
    sew_16_a(5) := io.in_vA(95,80).asSInt
    sew_16_a(6) := io.in_vA(111,96).asSInt
    sew_16_a(7) := io.in_vA(127,112).asSInt

    //define wires input b when sew = 16
    sew_16_b(0) := io.in_vB(15,0).asSInt
    sew_16_b(1) := io.in_vB(31,16).asSInt
    sew_16_b(2) := io.in_vB(47,32).asSInt
    sew_16_b(3) := io.in_vB(63,48).asSInt
    sew_16_b(4) := io.in_vB(79,64).asSInt
    sew_16_b(5) := io.in_vB(95,80).asSInt
    sew_16_b(6) := io.in_vB(111,96).asSInt
    sew_16_b(7) := io.in_vB(127,112).asSInt

    //define wires input a when sew = 32
    sew_32_a(0) := io.in_vA(31,0).asSInt
    sew_32_a(1) := io.in_vA(63,32).asSInt
    sew_32_a(2) := io.in_vA(95,64).asSInt
    sew_32_a(3) := io.in_vA(127,96).asSInt

    //define wires input b when sew = 32
    sew_32_b(0) := io.in_vB(31,0).asSInt
    sew_32_b(1) := io.in_vB(63,32).asSInt
    sew_32_b(2) := io.in_vB(95,64).asSInt
    sew_32_b(3) := io.in_vB(127,96).asSInt

    //define wires input a when sew = 64
    sew_64_a(0) := io.in_vA(63,0).asSInt
    sew_64_a(1) := io.in_vA(127,64).asSInt

    //define wires input b when sew = 64
    sew_64_b(0) := io.in_vB(63,0).asSInt
    sew_64_b(1) := io.in_vB(127,64).asSInt

    io.v_out := 0.S

    io.out := 0.S

    when (io.in_V =/= 1.B){

	    when(io.alu_op === ALU_ADD){ 								
		    io.out := io.in_A + io.in_B
	    }.elsewhen(io.alu_op === ALU_SLL){ 							
		    io.out:= (io.in_A << io.in_B(4,0))
	    }.elsewhen(io.alu_op === ALU_SLT){							
		    when(io.in_A < io.in_B){
			    io.out := 1.S
		    }.otherwise{
			    io.out := 0.S
		    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
	    }.elsewhen(io.alu_op === ALU_SLTU){			
		    val Ua = io.in_A.asUInt
		    val Ub = io.in_B.asUInt
		    when(Ua < Ub){
			    io.out := 1.S
		    }.otherwise{
			    io.out := 0.S
		    }
	    }.elsewhen(io.alu_op === ALU_XOR){							
		    io.out := io.in_A ^ io.in_B
	    }.elsewhen(io.alu_op === ALU_SRL){							
			
		    val shift = io.in_A.asUInt >> (io.in_B(4,0)).asUInt
		    io.out := shift.asSInt
	    }.elsewhen(io.alu_op === ALU_OR){							
		    io.out := io.in_A | io.in_B
	    }.elsewhen(io.alu_op === ALU_AND){							
		    io.out := io.in_A & io.in_B
	    }.elsewhen(io.alu_op === ALU_SUB){							
		    io.out := io.in_A - io.in_B
	    }.elsewhen(io.alu_op === ALU_SRA){							
		    io.out := (io.in_A >> io.in_B(4,0)).asSInt
	    }
    }.otherwise{
        when(io.alu_op === ALU_VSET){  //VSETVL
            when(io.in_A <= io.in_B){
                io.out := io.in_A
            }.elsewhen(io.in_A >= (io.in_B * 2.S)){
                io.out := io.in_B
            }.otherwise{
                io.out := 0.S
            }
        }.elsewhen (io.sew === "b011".U && io.alu_op === ALU_VADD){  //sew = 64
		    for (i <- 0 until 2) {
                out64(i) := sew_64_a(i) + sew_64_b(i)
            }
		    io.v_out := Cat(out64(1),out64(0)).asSInt
	    }.elsewhen (io.sew === "b010".U && io.alu_op === ALU_VADD){ // sew = 32
            for (i <- 0 until 4) {
                out32(i) := sew_32_a(i) + sew_32_b(i)
            }
            io.v_out := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
        }.elsewhen(io.sew === "b001".U && io.alu_op === ALU_VADD){ //sew = 16
		    for (i <- 0 until 8) {
                out16(i) := sew_16_a(i) + sew_16_b(i)
            }
		    io.v_out := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
	    }.elsewhen(io.sew === "b000".U && io.alu_op === ALU_VADD){ //sew = 8
		    for (i <- 0 until 16) {
                out8(i) := sew_8_a(i) + sew_8_b(i)
            }
		    io.v_out := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
	    }.elsewhen(io.sew === "b011".U && io.alu_op === ALU_VADDI){
		    val imm = Cat(0.S(32.W), io.in_B).asSInt
		    for (i <- 0 until 2) {
                out64(i) := sew_64_b(i) + imm
            }
		    io.v_out := Cat(out64(1),out64(0)).asSInt
        }.elsewhen(io.sew === "b010".U && io.alu_op === ALU_VADDI){
		    for (i <- 0 until 4) {
                out32(i) := sew_32_b(i) + io.in_B
            }
            io.v_out := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	    }.elsewhen(io.sew === "b000".U && io.alu_op === ALU_VADDI){
		    val imm = io.in_B(7,0).asSInt
		    for (i <- 0 until 16) {
                out8(i) := sew_8_b(i) + imm
            }
		    io.v_out := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
	    }.elsewhen (io.sew === "b001".U && io.alu_op === ALU_VADDI){
		    val imm = io.in_B(15,0).asSInt
		    for (i <- 0 until 8) {
                out16(i) := sew_16_b(i) + imm}
		    io.v_out := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
	    }
    }
}
