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

val vlen = 128.U


when (io.vlmax_pin === 1.B) {
    // Decode v_lmul input to determine lmul value.
    lmul := MuxCase(0.U, Array(
    (io.v_lmul === "b000".U) -> 1.U,
    (io.v_lmul === "b001".U) -> 2.U,
    (io.v_lmul === "b010".U) -> 4.U,
    (io.v_lmul === "b011".U) -> 8.U
    ))

    // Decode v_sew input to determine sew value.
    sew := MuxCase(0.U, Array(
    (io.v_sew === "b000".U) -> 8.U,
    (io.v_sew === "b001".U) -> 16.U,
    (io.v_sew === "b010".U) -> 32.U,
    (io.v_sew === "b011".U) -> 64.U
    ))


    // Compute vlmax based on lmul and sew values (for lmul =1 and >1)
    io.vlmax := (lmul * vlen)/sew

}.otherwise {
    io.vlmax := 0.U
}

}