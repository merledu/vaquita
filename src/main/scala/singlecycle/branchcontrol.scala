package singlecycle
import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage
class brcntrl extends Bundle {
val aluc = Input ( UInt (5. W ) )
val branch = Input ( Bool () )
val arg_x = Input ( SInt (32. W ) )
val arg_y = Input ( SInt (32. W ) )
val br_taken = Output ( Bool () )
}
class BranchControl_ extends Module {
val io = IO (new brcntrl )
// Start Coding here
object ALUC {
val beq = "b10000".U
val bne = "b10011".U
val blt = "b10100".U
val bge = "b10101".U
val bltu = "b10110".U
val bgeu = "b10111".U}


import ALUC._
//val temp = RegInit(0.U)
io.br_taken := 0.B
switch ( io.aluc ) {
is (beq ) {
when (io.arg_x === io.arg_y){
    io.br_taken := 1.B & io.branch
}.otherwise{ 
io.br_taken := 0.B & io.branch
}}
is (bne ) {
when (io.arg_x =/= io.arg_y){
    io.br_taken := 1.B & io.branch
}.otherwise{ 
io.br_taken := 0.B & io.branch}
}
is (blt ) {
when (io.arg_x < io.arg_y){
    io.br_taken := 1.B & io.branch
}.otherwise{ 
io.br_taken := 0.B & io.branch}
}
is (bge ) {
when (io.arg_x >= io.arg_y){
    io.br_taken := 1.B & io.branch
}.otherwise{ 
io.br_taken := 0.B& io.branch }
}
is (bltu ) {
when (io.arg_x <= io.arg_y){
    io.br_taken := 1.B & io.branch
}.otherwise{ 
io.br_taken := 0.B & io.branch }
}
is (bgeu ) {
when (io.arg_x >= io.arg_y){
    io.br_taken := 1.B & io.branch
}.otherwise{ 
io.br_taken := 0.B & io.branch }
}
}}








// End your code here
//Well , you can actually write classes too . So , technically you have no
// limit ; )

//println (( new chisel3 . stage . ChiselStage ) . emitVerilog (new Branch_Control ) )
