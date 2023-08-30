package Vpractice

import chisel3._ 
import chisel3.util._ 
import ALUOP1_._

object ALUOP1_ {
    val ALU_ADD = 0.U(9.W)
    val ALU_ADDI = 0.U(9.W)
    val ALU_SW = 0.U(9.W)
    val ALU_LW = 0.U(9.W)
    val ALU_LUI = 0.U(9.W)
    val ALU_AUIPC = 0.U(9.W)
    val ALU_SLL = 1.U(9.W)
    val ALU_SLLI = 1.U(9.W)
    val ALU_SLT = 2.U(9.W)
    val ALU_SLTI = 2.U(9.W)
    val ALU_SLTU = 3.U(9.W)
    val ALU_SLTUI = 3.U(9.W)
    val ALU_XOR = 4.U(9.W)
    val ALU_XORI = 4.U(9.W)
    val ALU_SRL = 5.U(9.W)
    val ALU_SRLI = 5.U(9.W)
    val ALU_OR  = 6.U(9.W)
    val ALU_ORI  = 6.U(9.W)
    val ALU_AND = 7.U(9.W)
    val ALU_ANDI = 7.U(9.W)
    val ALU_SUB = 8.U(9.W)
    val ALU_SRA = 13.U(9.W)
    val ALU_SRAI = 13.U(9.W)
    val ALU_JAL = 31.U(9.W)
    val ALU_JALR = 31.U(9.W)

    val ALU_VSETVLI = 7.U(9.W)                           //vector
    val ALU_OPIVI = 3.U(9.W)
    val ALU_OPIVV = 0.U(9.W)
    val ALU_OPIVX = 188.U(9.W)
}

trait Config_{
    val WLEN = 32
    val ALUOP_SIG_LEN = 9
}

class ALU_1 extends Module with Config_ {
    val io = IO(new Bundle{
        val in_A = Input( SInt(WLEN.W) )
        val in_B = Input( SInt(WLEN.W) )
        val alu_Op = Input( UInt(ALUOP_SIG_LEN.W) )
        val in_I = Input ( Bool() )                      //vsetvli
        val in_V = Input ( Bool() )
        val V_in_A = Input(SInt(128.W)) 
        val V_in_B = Input(SInt(128.W))
        val alu_sew = Input (UInt (3.W))                 //opivi
        val alu_lmul = Input(UInt(3.W)) 
        val alu_imm = Input (SInt (64.W))
        // val alu_vd = Input ( UInt (5.W ) )     
        
        val out = Output( SInt(WLEN.W) )
        val V_out = Output(SInt (128.W))  
})

io.out := 0.S
io.V_out := 0.S


val h = 0.S
val out8 = VecInit(Seq.fill(16)(0.S(8.W)))
val out16 = VecInit(Seq.fill(8)(0.S(16.W)))
val out32 = VecInit(Seq.fill(4)(0.S(32.W)))
val out64 = VecInit(Seq.fill(2)(0.S(64.W)))


when (io.in_I === 1.B ) {
    val out = 
        Mux(io.alu_Op === ALU_ADD || io.alu_Op === ALU_ADDI || io.alu_Op === ALU_SW || io.alu_Op === ALU_LW || io.alu_Op === ALU_LUI || io.alu_Op === ALU_AUIPC, (io.in_A + io.in_B),
        Mux(io.alu_Op === ALU_SLL || io.alu_Op === ALU_SLLI, (io.in_A.asUInt << io.in_B(18, 0).asUInt).asSInt,
        Mux(io.alu_Op === ALU_SLT || io.alu_Op === ALU_SLTI, Mux(io.in_A < io.in_B, 1.S, 0.S),
        Mux(io.alu_Op === ALU_SLTU || io.alu_Op === ALU_SLTUI, Mux(io.in_A < io.in_B, 1.S, 0.S),
        Mux(io.alu_Op === ALU_XOR || io.alu_Op === ALU_XORI, (io.in_A ^ io.in_B),
        Mux(io.alu_Op === ALU_SRL || io.alu_Op === ALU_SRLI, (io.in_A.asUInt >> io.in_B(18, 0).asUInt).asSInt,
        Mux(io.alu_Op === ALU_OR || io.alu_Op === ALU_ORI, (io.in_A | io.in_B),
        Mux(io.alu_Op === ALU_AND || io.alu_Op === ALU_ANDI, (io.in_A & io.in_B),
        Mux(io.alu_Op === ALU_SUB, (io.in_A - io.in_B),
        Mux(io.alu_Op === ALU_SRA || io.alu_Op === ALU_SRAI, (io.in_A.asUInt >> io.in_B(18, 0).asUInt).asSInt,
        Mux(io.alu_Op === ALU_JAL || io.alu_Op === ALU_JALR, io.in_A, 0.S)))))))))))
    
    io.out := out
    
    
}.elsewhen (io.in_V === 1.B ) {
    when (io.alu_Op === ALU_VSETVLI) {
        when(io.in_A <= io.in_B){
            io.out := io.in_A
        }.elsewhen(io.in_A > io.in_B){
            io.out := io.in_B
        }.otherwise{
            io.out := 0.S
        }
    
    //vector to immediate addition
    }.elsewhen (io.alu_Op === ALU_OPIVI && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val h =  io.alu_imm(63,0).asSInt
            out64(0) := (io.V_in_B(63,0) + h.asUInt).asSInt
            out64(1) := (io.V_in_B(127,64) + h.asUInt).asSInt
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val h =  io.alu_imm(31,0).asSInt
            out32(0) := (io.V_in_B(31,0) + h.asUInt).asSInt
            out32(1) := (io.V_in_B(63,32) + h.asUInt).asSInt
            out32(2) := (io.V_in_B(95,64) + h.asUInt).asSInt
            out32(3) := (io.V_in_B(127,96) + h.asUInt).asSInt
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val h =  io.alu_imm(15,0).asSInt
            out16(0) := (io.V_in_B(15,0) + h.asUInt).asSInt
            out16(1) := (io.V_in_B(31,16) + h.asUInt).asSInt
            out16(2) := (io.V_in_B(47,32) + h.asUInt).asSInt
            out16(3) := (io.V_in_B(63,48) + h.asUInt).asSInt
            out16(4) := (io.V_in_B(79,64) + h.asUInt).asSInt
            out16(5) := (io.V_in_B(95,80) + h.asUInt).asSInt
            out16(6) := (io.V_in_B(111,96) + h.asUInt).asSInt
            out16(7) := (io.V_in_B(127,112) + h.asUInt).asSInt
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val h =  io.alu_imm(7,0).asSInt
            out8(0) := (io.V_in_B(7,0) + h.asUInt).asSInt
            out8(1) := (io.V_in_B(15,8) + h.asUInt).asSInt
            out8(2) := (io.V_in_B(23,16) + h.asUInt).asSInt
            out8(3) := (io.V_in_B(31,24) + h.asUInt).asSInt
            out8(4) := (io.V_in_B(39,32) + h.asUInt).asSInt
            out8(5) := (io.V_in_B(47,40) + h.asUInt).asSInt
            out8(6) := (io.V_in_B(55,48) + h.asUInt).asSInt
            out8(7) := (io.V_in_B(63,56) + h.asUInt).asSInt
            out8(8) := (io.V_in_B(71,64) + h.asUInt).asSInt
            out8(9) := (io.V_in_B(79,72) + h.asUInt).asSInt
            out8(10) := (io.V_in_B(87,80) + h.asUInt).asSInt
            out8(11) := (io.V_in_B(95,88) + h.asUInt).asSInt
            out8(12) := (io.V_in_B(103,96) + h.asUInt).asSInt
            out8(13) := (io.V_in_B(111,104) + h.asUInt).asSInt
            out8(14) := (io.V_in_B(119,112) + h.asUInt).asSInt
            out8(15) := (io.V_in_B(127,120) + h.asUInt).asSInt
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to vector addition
    }.elsewhen (io.alu_Op === ALU_OPIVV && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            out64(0) := (io.V_in_A(63,0) + io.V_in_B(63,0)).asSInt
            out64(1) := (io.V_in_A(127,64) + io.V_in_B(127,64)).asSInt
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            out32(0) := (io.V_in_A(31,0) + io.V_in_B(31,0)).asSInt
            out32(1) := (io.V_in_A(63,32) + io.V_in_B(63,32)).asSInt
            out32(2) := (io.V_in_A(95,64) + io.V_in_B(95,64)).asSInt
            out32(3) := (io.V_in_A(127,96) + io.V_in_B(127,96)).asSInt
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            out16(0) := (io.V_in_A(15,0) + io.V_in_B(15,0)).asSInt
            out16(1) := (io.V_in_A(31,16) + io.V_in_B(31,16)).asSInt
            out16(2) := (io.V_in_A(47,32) + io.V_in_B(47,32)).asSInt
            out16(3) := (io.V_in_A(63,48) + io.V_in_B(63,48)).asSInt
            out16(4) := (io.V_in_A(79,64) + io.V_in_B(79,64)).asSInt
            out16(5) := (io.V_in_A(95,80) + io.V_in_B(95,80)).asSInt
            out16(6) := (io.V_in_A(111,96) + io.V_in_B(111,96)).asSInt
            out16(7) := (io.V_in_A(127,112) + io.V_in_B(127,112)).asSInt
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            out8(0) := (io.V_in_A(7,0) + io.V_in_B(7,0)).asSInt
            out8(1) := (io.V_in_A(15,8) + io.V_in_B(15,8)).asSInt
            out8(2) := (io.V_in_A(23,16) + io.V_in_B(23,16)).asSInt
            out8(3) := (io.V_in_A(31,24) + io.V_in_B(31,24)).asSInt
            out8(4) := (io.V_in_A(39,32) + io.V_in_B(39,32)).asSInt
            out8(5) := (io.V_in_A(47,40) + io.V_in_B(47,40)).asSInt
            out8(6) := (io.V_in_A(55,48) + io.V_in_B(55,48)).asSInt
            out8(7) := (io.V_in_A(63,56) + io.V_in_B(63,56)).asSInt
            out8(8) := (io.V_in_A(71,64) + io.V_in_B(71,64)).asSInt
            out8(9) := (io.V_in_A(79,72) + io.V_in_B(79,72)).asSInt
            out8(10) := (io.V_in_A(87,80) + io.V_in_B(87,80)).asSInt
            out8(11) := (io.V_in_A(95,88) + io.V_in_B(95,88)).asSInt
            out8(12) := (io.V_in_A(103,96) + io.V_in_B(103,96)).asSInt
            out8(13) := (io.V_in_A(111,104) + io.V_in_B(111,104)).asSInt
            out8(14) := (io.V_in_A(119,112) + io.V_in_B(119,112)).asSInt
            out8(15) := (io.V_in_A(127,120) + io.V_in_B(127,120)).asSInt
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }
    
    }.elsewhen (io.alu_Op === ALU_OPIVX) {               //(for move only) 
        val m = Cat(Fill(96, 0.U), io.in_A).asSInt
        io.V_out := m

    }.otherwise {
        io.out := 0.S
        io.V_out := 0.S
    }   


}.otherwise {
    io.out := 0.S
    io.V_out := 0.S
}

}

