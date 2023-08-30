package rvv

import chisel3._
import chisel3.util._

class v_csr extends Module {
    val io = IO (new Bundle{
        val zimm = Input(UInt(11.W))                //In vtype 9 bits, but 2 reserved.
        val vl_writeback = Input(UInt(32.W))
        val csr_Write = Input(Bool())
        val vl_out = Output(UInt(32.W))
        val v_settings = Output(UInt(32.W))

    })

    val vtype_encod = Cat(Fill(21, 0.U), io.zimm)
    val vtypeReg = RegInit(0.U(32.W))

    when (io.csr_Write === 1.B) {
        vtypeReg := vtype_encod
    }

    val vlReg = RegInit(0.U(32.W))
    vlReg := io.vl_writeback

    io.vl_out := vlReg
    io.v_settings := vtypeReg
}