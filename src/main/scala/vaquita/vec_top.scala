package vaquita
import chisel3._
import chisel3.util._

class top_file extends Module {
    val io = IO(new Bundle{
    })
    val IST = Module(new instr_status_table)

    val alu_module = Module(new alu_control)
    dontTouch(alu_module.io)
    val alu_module = Module(new vec_alu)

}