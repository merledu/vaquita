package singlecycle

import chisel3._
import chisel3.util._

class Tail_Mask extends Module {
  val io = IO(new Bundle {
    // val v_data1 = Input(UInt(128.W))
    val vl = Input(UInt(32.W))
    val vlmax = Input(UInt(32.W))
    
    val sew = Input(UInt(3.W))
    val vma =Input(UInt(1.W)) //vtype
    val vta =Input(UInt(1.W)) //vtype
    val vm =Input(UInt(1.W)) //umasked=0  , masked = 1
    val vs0 = Input(UInt(128.W)) // io.vs0 data
    val vd = Input(UInt(128.W))
    val vdata =Input(UInt(128.W))
    val v_data_out = Output(UInt(128.W))
  })

  // vd previous value of destination vector register 
    val sew_8_vd = VecInit(Seq.fill(16)(0.U(8.W)))
    val sew_16_vd = VecInit(Seq.fill(8)(0.U(16.W)))
    val sew_32_vd = VecInit(Seq.fill(4)(0.U(32.W)))
    val sew_64_vd = VecInit(Seq.fill(2)(0.U(64.W)))
  // output of alu 
    val sew_8_vdata = VecInit(Seq.fill(16)(0.U(8.W)))
    val sew_16_vdata = VecInit(Seq.fill(8)(0.U(16.W)))
    val sew_32_vdata = VecInit(Seq.fill(4)(0.U(32.W)))
    val sew_64_vdata = VecInit(Seq.fill(2)(0.U(64.W)))
  // for concat output a variable 
    val sew_8_v_data_out = VecInit(Seq.fill(16)(0.U(8.W)))
    val sew_16_v_data_out = VecInit(Seq.fill(8)(0.U(16.W)))
    val sew_32_v_data_out = VecInit(Seq.fill(4)(0.U(32.W)))
    val sew_64_v_data_out = VecInit(Seq.fill(2)(0.U(64.W)))

    //define wires input vd previous when sew = 16

    sew_8_vd(0) := io.vd(7,0)
    sew_8_vd(1) := io.vd(15,8)
    sew_8_vd(2) := io.vd(23,16)
    sew_8_vd(3) := io.vd(31,24)
    sew_8_vd(4) := io.vd(39,32)
    sew_8_vd(5) := io.vd(47,40)
    sew_8_vd(6) := io.vd(55,48)
    sew_8_vd(7) := io.vd(63,56)
    sew_8_vd(8) := io.vd(71,64)
    sew_8_vd(9) := io.vd(79,72)
    sew_8_vd(10) := io.vd(87,80)
    sew_8_vd(11) := io.vd(95,88)
    sew_8_vd(12) := io.vd(103,96)
    sew_8_vd(13) := io.vd(111,104)
    sew_8_vd(14) := io.vd(119,112)
    sew_8_vd(15) := io.vd(127,120)

   //define wires input vd previous when sew = 16
   
    sew_16_vd(0) := io.vd(15,0)
    sew_16_vd(1) := io.vd(31,16)
    sew_16_vd(2) := io.vd(47,32)
    sew_16_vd(3) := io.vd(63,48)
    sew_16_vd(4) := io.vd(79,64)
    sew_16_vd(5) := io.vd(95,80)
    sew_16_vd(6) := io.vd(111,96)
    sew_16_vd(7) := io.vd(127,112)

    //define wires input vd previous when sew = 32
    sew_32_vd(0) := io.vd(31,0)
    sew_32_vd(1) := io.vd(63,32)
    sew_32_vd(2) := io.vd(95,64)
    sew_32_vd(3) := io.vd(127,96)

    //define wires input vd when sew = 64
    sew_64_vd(0) := io.vd(63,0)
    sew_64_vd(1) := io.vd(127,64)

   //define wires input vdata previous when sew = 16

    sew_8_vdata(0) := io.vdata(7,0)
    sew_8_vdata(1) := io.vdata(15,8)
    sew_8_vdata(2) := io.vdata(23,16)
    sew_8_vdata(3) := io.vdata(31,24)
    sew_8_vdata(4) := io.vdata(39,32)
    sew_8_vdata(5) := io.vdata(47,40)
    sew_8_vdata(6) := io.vdata(55,48)
    sew_8_vdata(7) := io.vdata(63,56)
    sew_8_vdata(8) := io.vdata(71,64)
    sew_8_vdata(9) := io.vdata(79,72)
    sew_8_vdata(10) := io.vdata(87,80)
    sew_8_vdata(11) := io.vdata(95,88)
    sew_8_vdata(12) := io.vdata(103,96)
    sew_8_vdata(13) := io.vdata(111,104)
    sew_8_vdata(14) := io.vdata(119,112)
    sew_8_vdata(15) := io.vdata(127,120)

   //define wires input vdata when sew = 16
    sew_16_vdata(0) := io.vdata(15,0)
    sew_16_vdata(1) := io.vdata(31,16)
    sew_16_vdata(2) := io.vdata(47,32)
    sew_16_vdata(3) := io.vdata(63,48)
    sew_16_vdata(4) := io.vdata(79,64)
    sew_16_vdata(5) := io.vdata(95,80)
    sew_16_vdata(6) := io.vdata(111,96)
    sew_16_vdata(7) := io.vdata(127,112)

    //define wires input vdata when sew = 32
    sew_32_vdata(0) := io.vdata(31,0)
    sew_32_vdata(1) := io.vdata(63,32)
    sew_32_vdata(2) := io.vdata(95,64)
    sew_32_vdata(3) := io.vdata(127,96)

    //define wires input vdata when sew = 64
    sew_64_vdata(0) := io.vdata(63,0)
    sew_64_vdata(1) := io.vdata(127,64)


  val vstart = 0.U

  when (io.sew === "b011".U){
    for (i <- 0 until 2) {
              when (i.U <= vstart){//prestart 
          sew_64_v_data_out(i) := sew_64_vd(i)

        }.elsewhen(i.U > vstart && i.U <= io.vl  ){ //bodyelements
      when (io.vm === 0.U){

          when(io.vs0(i) === 0.U && io.vma === 0.U ){
              sew_64_v_data_out(i) := sew_64_vd(i)

          }.elsewhen( io.vs0(i) === 0.U && io.vma === 1.U){
            sew_64_v_data_out(i) := "b1111111111111111111111111111111111111111111111111111111111111111".U

          }.otherwise { //io.vs0[i] == 1 so vector alu result 
            sew_64_v_data_out(i) := sew_64_vdata(i)
          }
        }.otherwise{
        sew_64_v_data_out(i) := sew_64_vdata(i)
    } 
    
    }.elsewhen(i.U > io.vl ){//tail elements
          when (io.vta ===0.U){
            sew_64_v_data_out(i) := sew_64_vd(i)
          }.elsewhen (io.vta === 1.U ){
            sew_64_v_data_out(i) := "b1111111111111111111111111111111111111111111111111111111111111111".U
        }}}
      io.v_data_out := Cat(sew_64_v_data_out(1),sew_64_v_data_out(0))
      
  }.elsewhen(io.sew === "b010".U){
    for (i <- 0 until 4) {
      when (i.U <= vstart){//pre start elements
          sew_32_v_data_out(i) := sew_32_vd(i)
        }.elsewhen(i.U > vstart && i.U <= io.vl  ){//body elements
            when (io.vm === 0.U){
              when(io.vs0(i) === 0.U && io.vma === 0.U ){
                sew_32_v_data_out(i) := sew_32_vd(i)

              }.elsewhen( io.vs0(i) === 0.U && io.vma === 1.U){
                sew_32_v_data_out(i) := "b11111111111111111111111111111111".U

              }.otherwise { //io.vs0[i] == 1 so vector alu result 
                sew_32_v_data_out(i) := sew_32_vdata(i)
              }
        
            }.otherwise{
              sew_32_v_data_out(i) := sew_32_vdata(i)
            }
        }.elsewhen(i.U > io.vl){//tail elements
            when (io.vta ===0.U){
              sew_32_v_data_out(i) := sew_32_vd(i)
            }.elsewhen (io.vta === 1.U ){
              sew_32_v_data_out(i) := "b11111111111111111111111111111111".U}
        }}
      io.v_data_out := Cat(sew_32_v_data_out(3),sew_32_v_data_out(2),sew_32_v_data_out(1),sew_32_v_data_out(0))
  }.elsewhen(io.sew === "b001".U){
    for (i <- 0 until 8) {
      when (i.U <= vstart){//prestart elems
        sew_16_v_data_out(i) := sew_16_vd(i)
      }.elsewhen(i.U > vstart && i.U <= io.vl  ){ //body elems 
        when (io.vm === 0.U){
          when(io.vs0(i) === 0.U && io.vma === 0.U ){
            sew_16_v_data_out(i) := sew_16_vd(i)
          }.elsewhen( io.vs0(i) === 0.U && io.vma === 1.U){
            sew_16_v_data_out(i) := "b1111111111111111".U
          }.otherwise { //io.vs0[i] == 1 so vector alu result 
            sew_16_v_data_out(i) := sew_16_vdata(i)
          }
        
        }.otherwise{
          sew_16_v_data_out(i) := sew_16_vdata(i)
        }
      }.elsewhen(i.U > io.vl ){//tail elements
        when (io.vta ===0.U){
          sew_16_v_data_out(i) := sew_16_vd(i)
        }.elsewhen (io.vta === 1.U ){
          sew_16_v_data_out(i) := "b1111111111111111".U}
      }
      }
    io.v_data_out := Cat(sew_16_v_data_out(7),sew_16_v_data_out(6),sew_16_v_data_out(5),sew_16_v_data_out(4),sew_16_v_data_out(3),sew_16_v_data_out(2),sew_16_v_data_out(1),sew_16_v_data_out(0))
  }.elsewhen(io.sew === "b0".U){
        for (i <- 0 until 8) {
      when (io.vm === 0.U){
        
          when(io.vs0(i) === 0.U && io.vma === 0.U ){
              sew_8_v_data_out(i) := sew_8_vd(i)

          }.elsewhen( io.vs0(i) === 0.U && io.vma === 1.U){
            sew_8_v_data_out(i) := 1.U

          }.otherwise { //io.vs0[i] == 1 so vector alu result 
            sew_8_v_data_out(i) := sew_8_vdata(i)
          }
        
      }.otherwise{
        sew_8_v_data_out(i) := sew_8_vdata(i)
      }
      }
      io.v_data_out := Cat(sew_8_v_data_out(15),sew_8_v_data_out(14),sew_8_v_data_out(13),sew_8_v_data_out(12),sew_8_v_data_out(11),sew_8_v_data_out(10),sew_8_v_data_out(9),sew_8_v_data_out(8),sew_8_v_data_out(7),sew_8_v_data_out(6),sew_8_v_data_out(5),sew_8_v_data_out(4),sew_8_v_data_out(3),sew_8_v_data_out(2),sew_8_v_data_out(1),sew_8_v_data_out(0))
  }.otherwise{
    io.v_data_out := io.vdata
  }


}