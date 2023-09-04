package Vpractice

import chisel3._
import chisel3.util._
 
class Alu_Control ( ) extends Module {
    val io = IO (new Bundle {
        val func3 = Input ( UInt (3.W ) )
        val func7 = Input ( Bool () )
        val aluOp = Input ( UInt (4.W ) )
        val I_inst = Input ( Bool() )                    //vsetvli
        val V_inst = Input ( Bool() )
        val func6 = Input ( UInt (6.W) )                 //opivi

        val out = Output ( UInt ( 9.W ) )
        val out_V = Output ( Bool() )                    //vsetvli
})
when (io.I_inst === 1.B) {
    // R type
    when (io.aluOp === 0.U) {
        io.out := Cat("b00000".U, io.func7, io.func3)
        io.out_V := 0.U

    // I type
    }.elsewhen (io.aluOp === 1.U) {
        io.out := Cat("b000000".U, io.func3)
        io.out_V := 0.U

    // SB type
    }.elsewhen (io.aluOp === 2.U) {
        io.out := Cat("b0000".U ,1.U, 0.U, io.func3)
        io.out_V := 0.U

    // UJ type
    }.elsewhen (io.aluOp === 3.U) {
        io.out := "b000011111".U
        io.out_V := 0.U

    // Loads
    }.elsewhen (io.aluOp === 4.U) {
        io.out := "b000000000".U
        io.out_V := 0.U

    // S type
    }.elsewhen (io.aluOp === 5.U) {
        io.out := "b000000000".U
        io.out_V := 0.U

    // U type(lui)
    }.elsewhen (io.aluOp === 6.U) {
        io.out := "b000000000".U
        io.out_V := 0.U

    // U type(auipc)
    }.elsewhen (io.aluOp === 7.U) {
        io.out := "b000000000".U
        io.out_V := 0.U

    }.otherwise{
        io.out := 0.U
        io.out_V := 0.U
    }

}.elsewhen (io.V_inst === 1.B) {
    // vsetvli
    when (io.aluOp === 0.U) {
        io.out := Cat("b000000".U, io.func3)
        io.out_V := 1.B 
    
    //opivi (vaddi)                 //opivv (vadd.vv)   //opivx (vadd.vx)    //opivx (vsub.vx)
    }.elsewhen (io.aluOp === 1.U || io.aluOp === 2.U || io.aluOp === 3.U  || io.aluOp === 4.U || 
                //opivx (vsub.vv)   //opivx (move instruction(vmv.v.x)) 
                io.aluOp === 5.U || io.aluOp === 6.U || 
                //opivx (move instruction(vmv.v.i))     //opivx (move instruction(vmv.v.v))
                io.aluOp === 7.U                     || io.aluOp === 8.U  || 
                //Opivi (bitwise instruction(vand.vi))  //Opivx (bitwise instruction(vand.vx))
                io.aluOp === 9.U                     || io.aluOp === 10.U ||
                //Opivv (bitwise instruction(vand.vv))  //Opivi (bitwise instruction(vor.vi))
                io.aluOp === 11.U                    || io.aluOp === 12.U ||
                //Opivx (bitwise instruction(vor.vx))   //Opivv (bitwise instruction(vor.vv))
                io.aluOp === 13.U                    || io.aluOp === 14.U ||
                //Opivi (bitwise instruction(vxor.vi))  //Opivx (bitwise instruction(vxor.vx))
                io.aluOp === 15.U                     || io.aluOp === 16.U ||
                //Opivv (bitwise instruction(vxor.vv))  
                io.aluOp === 17.U) {
                
        io.out := Cat(io.func6, io.func3)
        io.out_V := 1.B 

    }.otherwise {
        io.out := 0.U
        io.out_V := 0.U
    }
 
}.otherwise {
    io.out := 0.U
    io.out_V := 0.U
}
}