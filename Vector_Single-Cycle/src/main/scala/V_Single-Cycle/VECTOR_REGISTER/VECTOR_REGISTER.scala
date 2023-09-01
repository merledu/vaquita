package Vpractice

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.stage.ChiselStage

class V_RegFile extends Module {
  val io = IO (new Bundle {
    val vs1 = Input ( UInt (5.W ) )
    val vs2 = Input ( UInt (5.W ) )
    val V_reg_write = Input ( Bool () )
    val vd = Input ( UInt (5.W ) )
    val V_w_data = Input (SInt(128.W))

    val vdata1 = Output (SInt(128.W))
    val vdata2 = Output (SInt(128.W))  
    val vs0 = Output (SInt(128.W))                                   //for t&m
    val vd_data_previous = Output (SInt(128.W))          
  })

val register = RegInit(VecInit(Seq.fill(32)(0.S(128.W))))

io.vdata1 := register(io.vs1)
io.vdata2 := register(io.vs2)

io.vs0 := register(0.U)                                             //for t&m
io.vd_data_previous := register(io.vd)

when ( io.V_reg_write ) {
    register ( io.vd ) := io.V_w_data
    }
}

