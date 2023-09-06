package rvv

import chisel3._
import chisel3.util._

class Vlmax extends Module {
    val io = IO (new Bundle{
        val v_lmul = Input ( UInt (3.W ) )
        val v_sew = Input ( UInt (3.W ) )
        val vlmax_pin = Input ( Bool() )

        val vlmax = Output ( UInt (32.W) )
})

val lmul = Wire(UInt(4.W))
val sew = Wire(UInt(7.W))

lmul := 0.U
sew := 0.U

when (io.vlmax_pin === 1.B) {
    // Decode v_lmul input to determine lmul value.
    when (io.v_lmul === "b000".U) {
        lmul := 1.U
    }.elsewhen (io.v_lmul === "b001".U) {
        lmul := 2.U
    }.elsewhen (io.v_lmul === "b010".U) {
        lmul := 4.U
    }.elsewhen (io.v_lmul === "b011".U) {
        lmul := 8.U
    }.otherwise {
        lmul := 0.U
    }


    // Decode v_sew input to determine sew value.
    when (io.v_sew === "b000".U) {
        sew := 8.U
    }.elsewhen (io.v_sew === "b001".U) {
        sew := 16.U
    }.elsewhen (io.v_sew === "b010".U) {
        sew := 32.U
    }.elsewhen (io.v_sew === "b011".U) {
        sew := 64.U
    }.otherwise {
        sew := 0.U
    }


    // Compute vlmax based on lmul and sew values.
    when (lmul === 1.U && sew === 8.U) {                //lmul = 1, sew = 8
        io.vlmax := 16.U
    }.elsewhen (lmul === 2.U && sew === 8.U) {          //lmul = 2, sew = 8
        io.vlmax := 32.U
    }.elsewhen (lmul === 4.U && sew === 8.U) {          //lmul = 4, sew = 8
        io.vlmax := 64.U
    }.elsewhen (lmul === 8.U && sew === 8.U) {          //lmul = 8, sew = 8
        io.vlmax := 128.U
    }.elsewhen (lmul === 1.U && sew === 16.U) {         //lmul = 1, sew = 16
        io.vlmax := 8.U
    }.elsewhen (lmul === 2.U && sew === 16.U) {         //lmul = 2, sew = 16
        io.vlmax := 16.U
    }.elsewhen (lmul === 4.U && sew === 16.U) {         //lmul = 4, sew = 16
        io.vlmax := 32.U
    }.elsewhen (lmul === 8.U && sew === 16.U) {         //lmul = 8, sew = 16
        io.vlmax := 64.U
    }.elsewhen (lmul === 1.U && sew === 32.U) {         //lmul = 1, sew = 32
        io.vlmax := 4.U
    }.elsewhen (lmul === 2.U && sew === 32.U) {         //lmul = 2, sew = 32
        io.vlmax := 8.U
    }.elsewhen (lmul === 4.U && sew === 32.U) {         //lmul = 4, sew = 32
        io.vlmax := 16.U
    }.elsewhen (lmul === 8.U && sew === 32.U) {         //lmul = 8, sew = 32
        io.vlmax := 32.U
    }.elsewhen (lmul === 1.U && sew === 64.U) {         //lmul = 1, sew = 64
        io.vlmax := 2.U
    }.elsewhen (lmul === 2.U && sew === 64.U) {         //lmul = 2, sew = 64
        io.vlmax := 4.U
    }.elsewhen (lmul === 4.U && sew === 64.U) {         //lmul = 4, sew = 64
        io.vlmax := 8.U
    }.elsewhen (lmul === 8.U && sew === 64.U) {         //lmul = 8, sew = 64
        io.vlmax := 16.U
    }.otherwise {
        io.vlmax := 0.U
    }

}.otherwise {
    io.vlmax := 0.U
}
}