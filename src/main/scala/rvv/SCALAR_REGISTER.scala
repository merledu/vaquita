package rvv

import chisel3._
import chisel3.util._

class RegFile extends Module {
    val io = IO (new Bundle{
        val rs1 = Input ( UInt (5.W ) )
        val rs2 = Input ( UInt (5.W ) )
        val reg_write = Input ( Bool () )
        val w_reg = Input ( UInt (5.W ) )
        val w_data = Input ( SInt ( 32.W ) )
        val rdata1 = Output ( SInt ( 32.W ) )
        val rdata2 = Output ( SInt ( 32.W ) )
})
val regs = RegInit( VecInit( Seq.fill(32) (0.S (32.W))))     // Initialize an array of registers with zeros.

io.rdata1 := Mux (( io.rs1 .orR ) , regs ( io.rs1 ) , 0.S )  // Read data from the register file based on the rs1 and rs2 inputs.
io.rdata2 := Mux (( io.rs2 .orR) , regs ( io.rs2 ) , 0.S )

when ( io.reg_write & io.w_reg .orR ) {                      // Conditionally write data into the register file when reg_write 
    regs ( io.w_reg ) := io.w_data                           //is asserted and w_reg is not zero.
    }
}

