package rvv

import chisel3._
import chisel3.util._

class Vlmax extends Module {
    val io = IO (new Bundle{
        val v_lmul = Input (UInt(3.W))
        val v_sew = Input (UInt(3.W))
        val csr_write = Input(Bool())
        val vlmax = Output ( SInt (32.W) )
})
    when(io.csr_write === 1.B){
        val lmul = Wire(SInt(4.W))
        val sew = Wire(SInt(7.W))

    when (io.v_lmul === "b000".U) {
        lmul := 1.S
    }.elsewhen (io.v_lmul === "b001".U) {
        lmul := 2.S
    }.elsewhen (io.v_lmul === "b010".U) {
        lmul := 4.S
    }.elsewhen (io.v_lmul === "b011".U) {
        lmul := 8.S
    }.otherwise {
        lmul := DontCare
    }


    when (io.v_sew === "b000".U) {
        sew := 8.S
    }.elsewhen (io.v_sew === "b001".U) {
        sew := 16.S
    }.elsewhen (io.v_sew === "b010".U) {
        sew := 32.S
    }.elsewhen (io.v_sew === "b011".U) {
        sew := 64.S
    }.otherwise {
        sew := DontCare
    }


        when(lmul === 1.S && sew === 8.S) {               //lmul = 1, sew = 8
            io.vlmax := 16.S
        }.elsewhen (lmul === 2.S && sew === 8.S) {         //lmul = 2, sew = 8
            io.vlmax := 32.S
        }.elsewhen (lmul === 4.S && sew === 8.S) {         //lmul = 4, sew = 8
            io.vlmax := 64.S
        }.elsewhen (lmul === 8.S && sew === 8.S) {         //lmul = 8, sew = 8
            io.vlmax := 128.S
        }.elsewhen (lmul === 1.S && sew === 16.S) {         //lmul = 1, sew = 16
            io.vlmax := 8.S
        }.elsewhen (lmul === 2.S && sew === 16.S) {         //lmul = 2, sew = 16
            io.vlmax := 16.S
        }.elsewhen (lmul === 4.S && sew === 16.S) {         //lmul = 4, sew = 16
            io.vlmax := 32.S
        }.elsewhen (lmul === 8.S && sew === 16.S) {         //lmul = 8, sew = 16
            io.vlmax := 64.S
        }.elsewhen (lmul === 1.S && sew === 32.S) {         //lmul = 1, sew = 32
            io.vlmax := 4.S
        }.elsewhen (lmul === 2.S && sew === 32.S) {         //lmul = 2, sew = 32
            io.vlmax := 8.S
        }.elsewhen (lmul === 4.S && sew === 32.S) {         //lmul = 4, sew = 32
            io.vlmax := 16.S
        }.elsewhen (lmul === 8.S && sew === 32.S) {         //lmul = 8, sew = 32
            io.vlmax := 32.S
        }.elsewhen (lmul === 1.S && sew === 64.S) {         //lmul = 1, sew = 64
            io.vlmax := 2.S
        }.elsewhen (lmul === 2.S && sew === 64.S) {         //lmul = 2, sew = 64
            io.vlmax := 4.S
        }.elsewhen (lmul === 4.S && sew === 64.S) {         //lmul = 4, sew = 64
            io.vlmax := 8.S
        }.elsewhen (lmul === 8.S && sew === 64.S) {         //lmul = 8, sew = 64
            io.vlmax := 16.S
        }.otherwise {
            io.vlmax := 0.S
        }
    }.otherwise{
        io.vlmax := DontCare
    }
}