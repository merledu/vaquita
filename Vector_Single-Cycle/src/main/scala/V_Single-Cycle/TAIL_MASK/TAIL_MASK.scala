package Vpractice

import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage
 
class Tail_Mask ( ) extends Module {
    val io = IO (new Bundle {
        val V_out_alu = Input ( SInt (128.W) ) 
        val v0 = Input (SInt (128.W) )              
        val alu_vd_data_pre = Input (SInt (128.W) )
        val tm_sew = Input (UInt (3.W))
        val tm_vl = Input ( UInt(32.W) )
        val tm_vm = Input ( UInt (1.W) ) 
        val tm_vta = Input ( UInt (1.W) )
        val tm_vma = Input ( UInt (1.W) )

        val Vector_Out = Output ( SInt (128.W) )
})

// Define arrays to hold temporary values for different element sizes
val tm_out8 = VecInit(Seq.fill(16)(0.S(8.W)))
val tm_out16 = VecInit(Seq.fill(8)(0.S(16.W)))
val tm_out32 = VecInit(Seq.fill(4)(0.S(32.W)))
val tm_out64 = VecInit(Seq.fill(2)(0.S(64.W)))

val vd8 = VecInit(Seq.fill(16)(0.S(8.W)))
val vd16 = VecInit(Seq.fill(8)(0.S(16.W)))
val vd32 = VecInit(Seq.fill(4)(0.S(32.W)))
val vd64 = VecInit(Seq.fill(2)(0.S(64.W)))

val v_out8 = VecInit(Seq.fill(16)(0.S(8.W)))
val v_out16 = VecInit(Seq.fill(8)(0.S(16.W)))
val v_out32 = VecInit(Seq.fill(4)(0.S(32.W)))
val v_out64 = VecInit(Seq.fill(2)(0.S(64.W)))


// Logic for handling different vector element sizes:
//64
    tm_out64(0) := io.V_out_alu(63,0).asSInt
    tm_out64(1) := io.V_out_alu(127,64).asSInt

    vd64(0) := io.alu_vd_data_pre(63,0).asSInt
    vd64(1) := io.alu_vd_data_pre(127,64).asSInt

//32
    tm_out32(0) := io.V_out_alu(31,0).asSInt
    tm_out32(1) := io.V_out_alu(63,32).asSInt 
    tm_out32(2) := io.V_out_alu(95,64).asSInt 
    tm_out32(3) := io.V_out_alu(127,96).asSInt 

    vd32(0) := io.alu_vd_data_pre(31,0).asSInt
    vd32(1) := io.alu_vd_data_pre(63,32).asSInt 
    vd32(2) := io.alu_vd_data_pre(95,64).asSInt 
    vd32(3) := io.alu_vd_data_pre(127,96).asSInt 

//16
    tm_out16(0) := io.V_out_alu(15,0).asSInt 
    tm_out16(1) := io.V_out_alu(31,16).asSInt 
    tm_out16(2) := io.V_out_alu(47,32).asSInt 
    tm_out16(3) := io.V_out_alu(63,48).asSInt 
    tm_out16(4) := io.V_out_alu(79,64).asSInt 
    tm_out16(5) := io.V_out_alu(95,80).asSInt 
    tm_out16(6) := io.V_out_alu(111,96).asSInt 
    tm_out16(7) := io.V_out_alu(127,112).asSInt 
    
    vd16(0) := io.alu_vd_data_pre(15,0).asSInt 
    vd16(1) := io.alu_vd_data_pre(31,16).asSInt 
    vd16(2) := io.alu_vd_data_pre(47,32).asSInt 
    vd16(3) := io.alu_vd_data_pre(63,48).asSInt 
    vd16(4) := io.alu_vd_data_pre(79,64).asSInt 
    vd16(5) := io.alu_vd_data_pre(95,80).asSInt 
    vd16(6) := io.alu_vd_data_pre(111,96).asSInt 
    vd16(7) := io.alu_vd_data_pre(127,112).asSInt 

//8
    tm_out8(0) := io.V_out_alu(7,0).asSInt 
    tm_out8(1) := io.V_out_alu(15,8).asSInt 
    tm_out8(2) := io.V_out_alu(23,16).asSInt 
    tm_out8(3) := io.V_out_alu(31,24).asSInt 
    tm_out8(4) := io.V_out_alu(39,32).asSInt 
    tm_out8(5) := io.V_out_alu(47,40).asSInt 
    tm_out8(6) := io.V_out_alu(55,48).asSInt 
    tm_out8(7) := io.V_out_alu(63,56).asSInt 
    tm_out8(8) := io.V_out_alu(71,64).asSInt 
    tm_out8(9) := io.V_out_alu(79,72).asSInt 
    tm_out8(10) := io.V_out_alu(87,80).asSInt 
    tm_out8(11) := io.V_out_alu(95,88).asSInt 
    tm_out8(12) := io.V_out_alu(103,96).asSInt 
    tm_out8(13) := io.V_out_alu(111,104).asSInt 
    tm_out8(14) := io.V_out_alu(119,112).asSInt 
    tm_out8(15) := io.V_out_alu(127,120).asSInt 

    vd8(0) := io.alu_vd_data_pre(7,0).asSInt 
    vd8(1) := io.alu_vd_data_pre(15,8).asSInt 
    vd8(2) := io.alu_vd_data_pre(23,16).asSInt 
    vd8(3) := io.alu_vd_data_pre(31,24).asSInt 
    vd8(4) := io.alu_vd_data_pre(39,32).asSInt 
    vd8(5) := io.alu_vd_data_pre(47,40).asSInt 
    vd8(6) := io.alu_vd_data_pre(55,48).asSInt 
    vd8(7) := io.alu_vd_data_pre(63,56).asSInt 
    vd8(8) := io.alu_vd_data_pre(71,64).asSInt
    vd8(9) := io.alu_vd_data_pre(79,72).asSInt 
    vd8(10) := io.alu_vd_data_pre(87,80).asSInt 
    vd8(11) := io.alu_vd_data_pre(95,88).asSInt 
    vd8(12) := io.alu_vd_data_pre(103,96).asSInt 
    vd8(13) := io.alu_vd_data_pre(111,104).asSInt 
    vd8(14) := io.alu_vd_data_pre(119,112).asSInt 
    vd8(15) := io.alu_vd_data_pre(127,120).asSInt 


val vstart = 0.U

when (io.tm_sew === "b011".U) {                                //64
    for (i <- 0 until 2) {
        when (i.U < vstart) {                                                 //prestart
            v_out64(i) := tm_out64(i)

        }.elsewhen (i.U >= vstart && i.U < io.tm_vl) {                        //body
            when (io.tm_vm === 0.U) {
                when (io.v0(i) === 0.U && io.tm_vma === 0.U) {
                    v_out64(i) := vd64(i)
                }.elsewhen (io.v0(i) === 0.U && io.tm_vma === 1.U) {
                    v_out64(i) := ("b1111111111111111111111111111111111111111111111111111111111111111".U).asSInt
                }.elsewhen (io.v0(i) === 1.U ) {
                    v_out64(i) := tm_out64(i)
                }
            }.otherwise {
                v_out64(i) := tm_out64(i)
            }
        
        }.elsewhen (i.U >= io.tm_vl && i.U < 2.U) {                           //tail
            when (io.tm_vta === 0.U) {
                v_out64(i) := vd64(i)
            }.otherwise {
                v_out64(i) := ("b1111111111111111111111111111111111111111111111111111111111111111".U).asSInt
            }

        }.otherwise {
            v_out64(i) := 0.S
        }
    }
    io.Vector_Out := (Cat(v_out64(1), v_out64(0))).asSInt 

}.elsewhen (io.tm_sew === "b010".U) {                          //32
    for (i <- 0 until 4) {
        when (i.U < vstart) {                                                 //prestart
            v_out32(i) := tm_out32(i)

        }.elsewhen (i.U >= vstart && i.U < io.tm_vl) {                        //body
            when (io.tm_vm === 0.U) {
                when (io.v0(i) === 0.U && io.tm_vma === 0.U) {
                    v_out32(i) := vd32(i)
                }.elsewhen (io.v0(i) === 0.U && io.tm_vma === 1.U) {
                    v_out32(i) := ("b11111111111111111111111111111111".U).asSInt
                }.elsewhen (io.v0(i) === 1.U ) {
                    v_out32(i) := tm_out32(i)
                }
            }.otherwise {
                v_out32(i) := tm_out32(i)
            }
        
        }.elsewhen (i.U >= io.tm_vl && i.U < 4.U) {                           //tail
            when (io.tm_vta === 0.U) {
                v_out32(i) := vd32(i)
            }.otherwise {
                v_out32(i) := ("b11111111111111111111111111111111".U).asSInt
            }

        }.otherwise {
            v_out32(i) := 0.S
        }

    }
    io.Vector_Out := (Cat(v_out32(3) ,v_out32(2) ,v_out32(1), v_out32(0))).asSInt 
    

}.elsewhen (io.tm_sew === "b001".U) {                          //16
    for (i <- 0 until 8) {
        when (i.U < vstart) {                                                 //prestart
            v_out16(i) := tm_out16(i)

        }.elsewhen (i.U >= vstart && i.U < io.tm_vl) {                        //body
            when (io.tm_vm === 0.U) {
                when (io.v0(i) === 0.U && io.tm_vma === 0.U) {
                    v_out16(i) := vd16(i)
                }.elsewhen (io.v0(i) === 0.U && io.tm_vma === 1.U) {
                    v_out16(i) := ("b1111111111111111".U).asSInt
                }.elsewhen (io.v0(i) === 1.U ) {
                    v_out16(i) := tm_out16(i)
                }
            }.otherwise {
                v_out16(i) := tm_out16(i)
            }
        
        }.elsewhen (i.U >= io.tm_vl && i.U < 8.U) {                           //tail
            when (io.tm_vta === 0.U) {
                v_out16(i) := vd16(i)
            }.otherwise {
                v_out16(i) := ("b1111111111111111".U).asSInt
            }

        }.otherwise {
            v_out16(i) := 0.S
        }

    }
    io.Vector_Out := (Cat(v_out16(7), v_out16(6), v_out16(5), v_out16(4), v_out16(3), v_out16(2), v_out16(1), v_out16(0))).asSInt

}.elsewhen (io.tm_sew === "b000".U) {                          //8
    for (i <- 0 until 16) {
        when (i.U < vstart) {                                                 //prestart
            v_out8(i) := tm_out8(i)

        }.elsewhen (i.U >= vstart && i.U < io.tm_vl) {                        //body
            when (io.tm_vm === 0.U) {
                when (io.v0(i) === 0.U && io.tm_vma === 0.U) {
                    v_out8(i) := vd8(i)
                }.elsewhen (io.v0(i) === 0.U && io.tm_vma === 1.U) {
                    v_out8(i) := ("b11111111".U).asSInt
                }.elsewhen (io.v0(i) === 1.U ) {
                    v_out8(i) := tm_out8(i)
                }
            }.otherwise {
                v_out8(i) := tm_out8(i)
            }
        
        }.elsewhen (i.U >= io.tm_vl && i.U < 16.U) {                           //tail
            when (io.tm_vta === 0.U) {
                v_out8(i) := vd8(i)
            }.otherwise {
                v_out8(i) := ("b11111111".U).asSInt
            }

        }.otherwise {
            v_out8(i) := 0.S
        }

    }
    io.Vector_Out := (Cat(v_out8(15), v_out8(14), v_out8(13), v_out8(12), v_out8(11), v_out8(10), v_out8(9), v_out8(8), v_out8(7), v_out8(6), v_out8(5), v_out8(4), v_out8(3), v_out8(2), v_out8(1), v_out8(0))).asSInt

}.otherwise {
    io.Vector_Out := 0.S
}

}

