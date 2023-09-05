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
    val ALU_OPIVX = 4.U(9.W)
    val ALU_OPIVX_SUB = 20.U(9.W)
    val ALU_OPIVV_SUB = 16.U(9.W)
    val ALU_OPIVX_MOVE_VS = 188.U(9.W)
    val ALU_OPIVX_MOVE_VI = 187.U(9.W)
    val ALU_OPIVX_MOVE_VV = 184.U(9.W)
    val ALU_OPIVI_BIT_AND_VI = 75.U(9.W)
    val ALU_OPIVX_BIT_AND_VX = 76.U(9.W)
    val ALU_OPIVV_BIT_AND_VV = 72.U(9.W)
    val ALU_OPIVI_BIT_OR_VI = 83.U(9.W)
    val ALU_OPIVX_BIT_OR_VX = 84.U(9.W)
    val ALU_OPIVV_BIT_OR_VV = 80.U(9.W)
    val ALU_OPIVI_BIT_XOR_VI = 91.U(9.W)
    val ALU_OPIVX_BIT_XOR_VX = 92.U(9.W)
    val ALU_OPIVV_BIT_XOR_VV = 88.U(9.W)
    val ALU_OPIVI_RSUB = 27.U(9.W)
    val ALU_OPIVX_RSUB = 28.U(9.W)
    val ALU_OPIVX_MINU_VX = 36.U(9.W)
    val ALU_OPIVV_MINU_VV = 32.U(9.W)
    val ALU_OPIVX_MINS_VX = 44.U(9.W)
    val ALU_OPIVV_MINS_VV = 40.U(9.W)
    val ALU_OPIVX_MAXU_VX = 52.U(9.W)
    val ALU_OPIVV_MAXU_VV = 48.U(9.W)
    val ALU_OPIVX_MAXS_VX = 60.U(9.W)
    val ALU_OPIVV_MAXS_VV = 56.U(9.W)

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
        val vd = Input (SInt (5.W))
        
        val out = Output( SInt(WLEN.W) )
        val V_out = Output(SInt (128.W))  
})

io.out := 0.S
io.V_out := 0.S

val h = 0.S

//make vector inputs into elements
val V_inA_8 = VecInit(Seq.fill(16)(0.S(8.W)))
val V_inA_16 = VecInit(Seq.fill(8)(0.S(16.W)))
val V_inA_32 = VecInit(Seq.fill(4)(0.S(32.W)))
val V_inA_64 = VecInit(Seq.fill(2)(0.S(64.W)))

val V_inB_8 = VecInit(Seq.fill(16)(0.S(8.W)))
val V_inB_16 = VecInit(Seq.fill(8)(0.S(16.W)))
val V_inB_32 = VecInit(Seq.fill(4)(0.S(32.W)))
val V_inB_64 = VecInit(Seq.fill(2)(0.S(64.W)))

//make outputs into elements
val out8 = VecInit(Seq.fill(16)(0.S(8.W)))
val out16 = VecInit(Seq.fill(8)(0.S(16.W)))
val out32 = VecInit(Seq.fill(4)(0.S(32.W)))
val out64 = VecInit(Seq.fill(2)(0.S(64.W)))


//when sew = 8
//vector's
V_inA_8(0) := io.V_in_A(7,0).asSInt
V_inA_8(1) := io.V_in_A(15,8).asSInt 
V_inA_8(2) := io.V_in_A(23,16).asSInt 
V_inA_8(3) := io.V_in_A(31,24).asSInt
V_inA_8(4) := io.V_in_A(39,32).asSInt 
V_inA_8(5) := io.V_in_A(47,40).asSInt
V_inA_8(6) := io.V_in_A(55,48).asSInt
V_inA_8(7) := io.V_in_A(63,56).asSInt 
V_inA_8(8) := io.V_in_A(71,64).asSInt 
V_inA_8(9) := io.V_in_A(79,72).asSInt 
V_inA_8(10) := io.V_in_A(87,80).asSInt 
V_inA_8(11) := io.V_in_A(95,88).asSInt 
V_inA_8(12) := io.V_in_A(103,96).asSInt
V_inA_8(13) := io.V_in_A(111,104).asSInt
V_inA_8(14) := io.V_in_A(119,112).asSInt
V_inA_8(15) := io.V_in_A(127,120).asSInt

V_inB_8(0) := io.V_in_B(7,0).asSInt 
V_inB_8(1) := io.V_in_B(15,8).asSInt 
V_inB_8(2) := io.V_in_B(23,16).asSInt 
V_inB_8(3) := io.V_in_B(31,24).asSInt 
V_inB_8(4) := io.V_in_B(39,32).asSInt 
V_inB_8(5) := io.V_in_B(47,40).asSInt 
V_inB_8(6) := io.V_in_B(55,48).asSInt 
V_inB_8(7) := io.V_in_B(63,56).asSInt 
V_inB_8(8) := io.V_in_B(71,64).asSInt 
V_inB_8(9) := io.V_in_B(79,72).asSInt 
V_inB_8(10) := io.V_in_B(87,80).asSInt 
V_inB_8(11) := io.V_in_B(95,88).asSInt 
V_inB_8(12) := io.V_in_B(103,96).asSInt 
V_inB_8(13) := io.V_in_B(111,104).asSInt 
V_inB_8(14) := io.V_in_B(119,112).asSInt 
V_inB_8(15) := io.V_in_B(127,120).asSInt

//when sew = 16
//vector's
V_inA_16(0) := io.V_in_A(15,0).asSInt 
V_inA_16(1) := io.V_in_A(31,16).asSInt
V_inA_16(2) := io.V_in_A(47,32).asSInt
V_inA_16(3) := io.V_in_A(63,48).asSInt 
V_inA_16(4) := io.V_in_A(79,64).asSInt 
V_inA_16(5) := io.V_in_A(95,80).asSInt 
V_inA_16(6) := io.V_in_A(111,96).asSInt 
V_inA_16(7) := io.V_in_A(127,112).asSInt

V_inB_16(0) := io.V_in_B(15,0).asSInt 
V_inB_16(1) := io.V_in_B(31,16).asSInt 
V_inB_16(2) := io.V_in_B(47,32).asSInt 
V_inB_16(3) := io.V_in_B(63,48).asSInt 
V_inB_16(4) := io.V_in_B(79,64).asSInt 
V_inB_16(5) := io.V_in_B(95,80).asSInt 
V_inB_16(6) := io.V_in_B(111,96).asSInt 
V_inB_16(7) := io.V_in_B(127,112).asSInt 

//when sew = 32
//vector's
V_inA_32(0) := io.V_in_A(31,0).asSInt 
V_inA_32(1) := io.V_in_A(63,32).asSInt
V_inA_32(2) := io.V_in_A(95,64).asSInt
V_inA_32(3) := io.V_in_A(127,96).asSInt

V_inB_32(0) := io.V_in_B(31,0).asSInt 
V_inB_32(1) := io.V_in_B(63,32).asSInt 
V_inB_32(2) := io.V_in_B(95,64).asSInt 
V_inB_32(3) := io.V_in_B(127,96).asSInt

//when sew = 64
//vector's
V_inA_64(0) := io.V_in_A(63,0).asSInt 
V_inA_64(1) := io.V_in_A(127,64).asSInt

V_inB_64(0) := io.V_in_B(63,0).asSInt 
V_inB_64(1) := io.V_in_B(127,64).asSInt



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
//configuration instructions:
    //vsetvli
    when (io.alu_Op === ALU_VSETVLI) {
        when(io.in_A <= io.in_B){
            io.out := io.in_A
        }.elsewhen(io.in_A > io.in_B){
            io.out := io.in_B
        }.otherwise{
            io.out := 0.S
        }
    

//Arithmethic Instructions:
  //Vector Single-Width Integer:
    //ADD:
    //vector to immediate addition
    }.elsewhen (io.alu_Op === ALU_OPIVI && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val h =  io.alu_imm(63,0).asSInt
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) + h).asSInt
            }
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val h =  io.alu_imm(31,0).asSInt
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) + h).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val h =  io.alu_imm(15,0).asSInt
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) + h).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val h =  io.alu_imm(7,0).asSInt
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) + h).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to vector addition
    }.elsewhen (io.alu_Op === ALU_OPIVV && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) + V_inA_64(i)).asSInt
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) + V_inA_32(i)).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) + V_inA_16(i)).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) + V_inA_8(i)).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }
    
    //vector to scalar addition
    }.elsewhen (io.alu_Op === ALU_OPIVX && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val a = Cat(Fill(32, 0.U), io.in_A).asSInt
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) + a).asSInt
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val a = io.in_A(31, 0).asSInt
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) + a).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val a = io.in_A(15, 0).asSInt
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) + a).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val a = io.in_A(7, 0).asSInt
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) + a).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    // SUBTRACT:    
    // vector to scalar subtraction
    }.elsewhen (io.alu_Op === ALU_OPIVX_SUB && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val a = Cat(Fill(32, 0.U), io.in_A).asSInt
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) - a).asSInt
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val a = io.in_A(31, 0).asSInt
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) - a).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val a = io.in_A(15, 0).asSInt
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) - a).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val a = io.in_A(7, 0).asSInt
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) - a).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to vector subtraction
    }.elsewhen (io.alu_Op === ALU_OPIVV_SUB && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) - V_inA_64(i)).asSInt
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) - V_inA_32(i)).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) - V_inA_16(i)).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) - V_inA_8(i)).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //REVERSE_SUBTRACT:    
    //vector to immediate subtraction
    }.elsewhen (io.alu_Op === ALU_OPIVI_RSUB && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val h =  io.alu_imm(63,0).asSInt
            for (i <- 0 until 2) { 
                out64(i) := (h - V_inB_64(i)).asSInt
            }
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val h =  io.alu_imm(31,0).asSInt
            for (i <- 0 until 4) { 
                out32(i) := (h - V_inB_32(i)).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val h =  io.alu_imm(15,0).asSInt
            for (i <- 0 until 8) { 
                out16(i) := (h - V_inB_16(i)).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val h =  io.alu_imm(7,0).asSInt
            for (i <- 0 until 16) { 
                out8(i) := (h - V_inB_8(i)).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to scalar subtraction
    }.elsewhen (io.alu_Op === ALU_OPIVX_RSUB && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val a = Cat(Fill(32, 0.U), io.in_A).asSInt
            for (i <- 0 until 2) { 
                out64(i) := (a - V_inB_64(i)).asSInt
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val a = io.in_A(31, 0).asSInt
            for (i <- 0 until 4) { 
                out32(i) := (a - V_inB_32(i)).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val a = io.in_A(15, 0).asSInt
            for (i <- 0 until 8) { 
                out16(i) := (a - V_inB_16(i)).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val a = io.in_A(7, 0).asSInt
            for (i <- 0 until 16) { 
                out8(i) := (a - V_inB_8(i)).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }


  //Vector Integer Move:
    //Vector & Scalar
    }.elsewhen (io.alu_Op === ALU_OPIVX_MOVE_VS && io.alu_lmul === "b000".U) {  
        when (io.vd === 0.S) {
                io.V_out := Cat(Fill(96, 0.U), io.in_A).asSInt
        }.otherwise {        
            when (io.alu_sew === "b011".U) {                                //64
                val a = Cat(Fill(32, 0.U), io.in_A).asSInt
                for (i <- 0 until 2) { 
                    out64(i) := a.asSInt
                }                          
                io.V_out := (Cat(out64(1), out64(0))).asSInt
            }.elsewhen (io.alu_sew === "b010".U) {                          //32
                val a = io.in_A(31, 0).asSInt
                for (i <- 0 until 4) { 
                    out32(i) := a.asSInt
                }
                io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
            }.elsewhen (io.alu_sew === "b001".U) {                          //16
                val a = io.in_A(15, 0).asSInt
                for (i <- 0 until 8) { 
                    out16(i) := a.asSInt
                }
                io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
            }.elsewhen (io.alu_sew === "b000".U) {                          //8
                val a = io.in_A(7, 0).asSInt
                for (i <- 0 until 16) { 
                    out8(i) := a.asSInt
                }
                io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
            }.otherwise {
                io.V_out := 0.S
            }
        }

    //Vector & Imm
    }.elsewhen (io.alu_Op === ALU_OPIVX_MOVE_VI && io.alu_lmul === "b000".U) {     
        when (io.alu_sew === "b011".U) {                                //64
            val h =  io.alu_imm(63,0).asSInt
            for (i <- 0 until 2) { 
                out64(i) := h.asSInt
            }
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val h =  io.alu_imm(31,0).asSInt
            for (i <- 0 until 4) { 
                out32(i) := h.asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val h =  io.alu_imm(15,0).asSInt
            for (i <- 0 until 8) { 
                out16(i) := h.asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val h =  io.alu_imm(7,0).asSInt
            for (i <- 0 until 16) { 
                out8(i) := h.asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //Vector & Vector
    }.elsewhen (io.alu_Op === ALU_OPIVX_MOVE_VV && io.alu_lmul === "b000".U) {           
        when (io.alu_sew === "b011".U) {                                //64
            for (i <- 0 until 2) { 
                out64(i) := V_inA_64(i).asSInt
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            for (i <- 0 until 4) { 
                out32(i) := V_inA_32(i).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            for (i <- 0 until 8) { 
                out16(i) := V_inA_16(i).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            for (i <- 0 until 16) { 
                out8(i) := V_inA_8(i).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }


  //Vector Bitwise Logical:
    //AND:
    //vector to immediate 
    }.elsewhen (io.alu_Op === ALU_OPIVI_BIT_AND_VI && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val h =  io.alu_imm(63,0).asSInt
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) & h).asSInt
            }
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val h =  io.alu_imm(31,0).asSInt
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) & h).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val h =  io.alu_imm(15,0).asSInt
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) & h).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val h =  io.alu_imm(7,0).asSInt
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) & h).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to scalar 
    }.elsewhen (io.alu_Op === ALU_OPIVX_BIT_AND_VX && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val a = Cat(Fill(32, 0.U), io.in_A).asSInt
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) & a).asSInt
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val a = io.in_A(31, 0).asSInt
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) & a).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val a = io.in_A(15, 0).asSInt
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) & a).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val a = io.in_A(7, 0).asSInt
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) & a).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to vector 
    }.elsewhen (io.alu_Op === ALU_OPIVV_BIT_AND_VV && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) & V_inA_64(i)).asSInt
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) & V_inA_32(i)).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) & V_inA_16(i)).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) & V_inA_8(i)).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //OR:
    //vector to immediate 
    }.elsewhen (io.alu_Op === ALU_OPIVI_BIT_OR_VI && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val h =  io.alu_imm(63,0).asSInt
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) | h).asSInt
            }
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val h =  io.alu_imm(31,0).asSInt
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) | h).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val h =  io.alu_imm(15,0).asSInt
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) | h).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val h =  io.alu_imm(7,0).asSInt
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) | h).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to scalar 
    }.elsewhen (io.alu_Op === ALU_OPIVX_BIT_OR_VX && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val a = Cat(Fill(32, 0.U), io.in_A).asSInt
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) | a).asSInt
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val a = io.in_A(31, 0).asSInt
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) | a).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val a = io.in_A(15, 0).asSInt
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) | a).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val a = io.in_A(7, 0).asSInt
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) | a).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to vector 
    }.elsewhen (io.alu_Op === ALU_OPIVV_BIT_OR_VV && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) | V_inA_64(i)).asSInt
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) | V_inA_32(i)).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) | V_inA_16(i)).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) | V_inA_8(i)).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //XOR:
    //vector to immediate 
    }.elsewhen (io.alu_Op === ALU_OPIVI_BIT_XOR_VI && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val h =  io.alu_imm(63,0).asSInt
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) ^ h).asSInt
            }
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val h =  io.alu_imm(31,0).asSInt
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) ^ h).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val h =  io.alu_imm(15,0).asSInt
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) ^ h).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val h =  io.alu_imm(7,0).asSInt
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) ^ h).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to scalar 
    }.elsewhen (io.alu_Op === ALU_OPIVX_BIT_XOR_VX && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val a = Cat(Fill(32, 0.U), io.in_A).asSInt
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) ^ a).asSInt
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val a = io.in_A(31, 0).asSInt
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) ^ a).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val a = io.in_A(15, 0).asSInt
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) ^ a).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val a = io.in_A(7, 0).asSInt
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) ^ a).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to vector 
    }.elsewhen (io.alu_Op === ALU_OPIVV_BIT_XOR_VV && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            for (i <- 0 until 2) { 
                out64(i) := (V_inB_64(i) ^ V_inA_64(i)).asSInt
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            for (i <- 0 until 4) { 
                out32(i) := (V_inB_32(i) ^ V_inA_32(i)).asSInt
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            for (i <- 0 until 8) { 
                out16(i) := (V_inB_16(i) ^ V_inA_16(i)).asSInt
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            for (i <- 0 until 16) { 
                out8(i) := (V_inB_8(i) ^ V_inA_8(i)).asSInt
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }


  //Vector Min & Max:
    //MIN:
        //Unsigned:
    //vector to scalar 
    }.elsewhen (io.alu_Op === ALU_OPIVX_MINU_VX && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val a = Cat(Fill(32, 0.U), io.in_A).asSInt
            for (i <- 0 until 2) { 
                when (V_inB_64(i) <= a) {
                    out64(i) := (V_inB_64(i).asUInt).asSInt
                }.otherwise {
                    out64(i) := (a.asUInt).asSInt
                }
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val a = io.in_A(31, 0).asSInt
            for (i <- 0 until 4) { 
                when (V_inB_32(i) <= a) {
                    out32(i) := (V_inB_32(i).asUInt).asSInt
                }.otherwise {
                    out32(i) := (a.asUInt).asSInt
                }
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val a = io.in_A(15, 0).asSInt
            for (i <- 0 until 8) { 
                when (V_inB_16(i) <= a) {
                    out16(i) := (V_inB_16(i).asUInt).asSInt
                }.otherwise {
                    out16(i) := (a.asUInt).asSInt
                }
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val a = io.in_A(7, 0).asSInt
            for (i <- 0 until 16) { 
                when (V_inB_8(i) <= a) {
                    out8(i) := (V_inB_8(i).asUInt).asSInt
                }.otherwise {
                    out8(i) := (a.asUInt).asSInt
                }
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to vector 
    }.elsewhen (io.alu_Op === ALU_OPIVV_MINU_VV  && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            for (i <- 0 until 2) { 
                when (V_inB_64(i) <= V_inA_64(i)) {
                    out64(i) := (V_inB_64(i).asUInt).asSInt
                }.otherwise {
                    out64(i) := (V_inA_64(i).asUInt).asSInt
                }
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            for (i <- 0 until 4) { 
                when (V_inB_32(i) <= V_inA_32(i)) {
                    out32(i) := (V_inB_32(i).asUInt).asSInt
                }.otherwise {
                    out32(i) := (V_inA_32(i).asUInt).asSInt
                }
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            for (i <- 0 until 8) { 
                when (V_inB_16(i) <= V_inA_16(i)) {
                    out16(i) := (V_inB_16(i).asUInt).asSInt
                }.otherwise {
                    out16(i) := (V_inA_16(i).asUInt).asSInt
                }
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            for (i <- 0 until 16) { 
                when (V_inB_8(i) <= V_inA_8(i)) {
                    out8(i) := (V_inB_8(i).asUInt).asSInt
                }.otherwise {
                    out8(i) := (V_inA_8(i).asUInt).asSInt
                }
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

        //Signed:
    //vector to scalar 
    }.elsewhen (io.alu_Op === ALU_OPIVX_MINS_VX && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val a = Cat(Fill(32, 0.U), io.in_A).asSInt
            for (i <- 0 until 2) { 
                when (V_inB_64(i) <= a) {
                    out64(i) := V_inB_64(i).asSInt
                }.otherwise {
                    out64(i) := a.asSInt
                }
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val a = io.in_A(31, 0).asSInt
            for (i <- 0 until 4) { 
                when (V_inB_32(i) <= a) {
                    out32(i) := V_inB_32(i).asSInt
                }.otherwise {
                    out32(i) := a.asSInt
                }
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val a = io.in_A(15, 0).asSInt
            for (i <- 0 until 8) { 
                when (V_inB_16(i) <= a) {
                    out16(i) := V_inB_16(i).asSInt
                }.otherwise {
                    out16(i) := a.asSInt
                }
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val a = io.in_A(7, 0).asSInt
            for (i <- 0 until 16) { 
                when (V_inB_8(i) <= a) {
                    out8(i) := V_inB_8(i).asSInt
                }.otherwise {
                    out8(i) := a.asSInt
                }
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to vector 
    }.elsewhen (io.alu_Op === ALU_OPIVV_MINS_VV  && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            for (i <- 0 until 2) { 
                when (V_inB_64(i) <= V_inA_64(i)) {
                    out64(i) := V_inB_64(i).asSInt
                }.otherwise {
                    out64(i) := V_inA_64(i).asSInt
                }
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            for (i <- 0 until 4) { 
                when (V_inB_32(i) <= V_inA_32(i)) {
                    out32(i) := V_inB_32(i).asSInt
                }.otherwise {
                    out32(i) := V_inA_32(i).asSInt
                }
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            for (i <- 0 until 8) { 
                when (V_inB_16(i) <= V_inA_16(i)) {
                    out16(i) := V_inB_16(i).asSInt
                }.otherwise {
                    out16(i) := V_inA_16(i).asSInt
                }
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            for (i <- 0 until 16) { 
                when (V_inB_8(i) <= V_inA_8(i)) {
                    out8(i) := V_inB_8(i).asSInt
                }.otherwise {
                    out8(i) := V_inA_8(i).asSInt
                }
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //MAX:
        //Unsigned:
    //vector to scalar 
    }.elsewhen (io.alu_Op === ALU_OPIVX_MAXU_VX && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val a = Cat(Fill(32, 0.U), io.in_A).asSInt
            for (i <- 0 until 2) { 
                when (V_inB_64(i) >= a) {
                    out64(i) := (V_inB_64(i).asUInt).asSInt
                }.otherwise {
                    out64(i) := (a.asUInt).asSInt
                }
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val a = io.in_A(31, 0).asSInt
            for (i <- 0 until 4) { 
                when (V_inB_32(i) >= a) {
                    out32(i) := (V_inB_32(i).asUInt).asSInt
                }.otherwise {
                    out32(i) := (a.asUInt).asSInt
                }
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val a = io.in_A(15, 0).asSInt
            for (i <- 0 until 8) { 
                when (V_inB_16(i) >= a) {
                    out16(i) := (V_inB_16(i).asUInt).asSInt
                }.otherwise {
                    out16(i) := (a.asUInt).asSInt
                }
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val a = io.in_A(7, 0).asSInt
            for (i <- 0 until 16) { 
                when (V_inB_8(i) >= a) {
                    out8(i) := (V_inB_8(i).asUInt).asSInt
                }.otherwise {
                    out8(i) := (a.asUInt).asSInt
                }
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to vector 
    }.elsewhen (io.alu_Op === ALU_OPIVV_MAXU_VV  && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            for (i <- 0 until 2) { 
                when (V_inB_64(i) >= V_inA_64(i)) {
                    out64(i) := (V_inB_64(i).asUInt).asSInt
                }.otherwise {
                    out64(i) := (V_inA_64(i).asUInt).asSInt
                }
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            for (i <- 0 until 4) { 
                when (V_inB_32(i) >= V_inA_32(i)) {
                    out32(i) := (V_inB_32(i).asUInt).asSInt
                }.otherwise {
                    out32(i) := (V_inA_32(i).asUInt).asSInt
                }
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            for (i <- 0 until 8) { 
                when (V_inB_16(i) >= V_inA_16(i)) {
                    out16(i) := (V_inB_16(i).asUInt).asSInt
                }.otherwise {
                    out16(i) := (V_inA_16(i).asUInt).asSInt
                }
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            for (i <- 0 until 16) { 
                when (V_inB_8(i) >= V_inA_8(i)) {
                    out8(i) := (V_inB_8(i).asUInt).asSInt
                }.otherwise {
                    out8(i) := (V_inA_8(i).asUInt).asSInt
                }
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

        //Signed:
    //vector to scalar 
    }.elsewhen (io.alu_Op === ALU_OPIVX_MAXS_VX && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            val a = Cat(Fill(32, 0.U), io.in_A).asSInt
            for (i <- 0 until 2) { 
                when (V_inB_64(i) >= a) {
                    out64(i) := V_inB_64(i).asSInt
                }.otherwise {
                    out64(i) := a.asSInt
                }
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            val a = io.in_A(31, 0).asSInt
            for (i <- 0 until 4) { 
                when (V_inB_32(i) >= a) {
                    out32(i) := V_inB_32(i).asSInt
                }.otherwise {
                    out32(i) := a.asSInt
                }
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            val a = io.in_A(15, 0).asSInt
            for (i <- 0 until 8) { 
                when (V_inB_16(i) >= a) {
                    out16(i) := V_inB_16(i).asSInt
                }.otherwise {
                    out16(i) := a.asSInt
                }
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            val a = io.in_A(7, 0).asSInt
            for (i <- 0 until 16) { 
                when (V_inB_8(i) >= a) {
                    out8(i) := V_inB_8(i).asSInt
                }.otherwise {
                    out8(i) := a.asSInt
                }
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }

    //vector to vector 
    }.elsewhen (io.alu_Op === ALU_OPIVV_MAXS_VV  && io.alu_lmul === "b000".U) {
        when (io.alu_sew === "b011".U) {                                //64
            for (i <- 0 until 2) { 
                when (V_inB_64(i) >= V_inA_64(i)) {
                    out64(i) := V_inB_64(i).asSInt
                }.otherwise {
                    out64(i) := V_inA_64(i).asSInt
                }
            }                          
            io.V_out := (Cat(out64(1), out64(0))).asSInt
        }.elsewhen (io.alu_sew === "b010".U) {                          //32
            for (i <- 0 until 4) { 
                when (V_inB_32(i) >= V_inA_32(i)) {
                    out32(i) := V_inB_32(i).asSInt
                }.otherwise {
                    out32(i) := V_inA_32(i).asSInt
                }
            }
            io.V_out := (Cat(out32(3), out32(2), out32(1), out32(0))).asSInt
        }.elsewhen (io.alu_sew === "b001".U) {                          //16
            for (i <- 0 until 8) { 
                when (V_inB_16(i) >= V_inA_16(i)) {
                    out16(i) := V_inB_16(i).asSInt
                }.otherwise {
                    out16(i) := V_inA_16(i).asSInt
                }
            }
            io.V_out := (Cat(out16(7), out16(6), out16(5), out16(4), out16(3), out16(2), out16(1), out16(0))).asSInt
        }.elsewhen (io.alu_sew === "b000".U) {                          //8
            for (i <- 0 until 16) { 
                when (V_inB_8(i) >= V_inA_8(i)) {
                    out8(i) := V_inB_8(i).asSInt
                }.otherwise {
                    out8(i) := V_inA_8(i).asSInt
                }
            }
            io.V_out := (Cat(out8(15), out8(14), out8(13), out8(12), out8(11), out8(10), out8(9), out8(8), out8(7), out8(6), out8(5), out8(4), out8(3), out8(2), out8(1), out8(0))).asSInt
        }.otherwise {
            io.V_out := 0.S
        }


    }.otherwise {
        io.out := 0.S
        io.V_out := 0.S
    }   


}.otherwise {
    io.out := 0.S
    io.V_out := 0.S
}

}

