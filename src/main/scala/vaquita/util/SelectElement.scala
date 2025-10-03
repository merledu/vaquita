package vaquita.util
import chisel3._
import chisel3.util._
import vaquita.configparameter.VaquitaConfig
class SewSelector {
        /** "Generate an element based on SEW from a 5-bit immediate value */
    def sew_selector_with_element(sew:UInt,rs1:SInt):SInt={

        val element_return = WireInit(0.S(32.W))
        val sew8_element   =   WireInit(0.S(8.W))
        val sew16_element  =  WireInit(0.S(16.W))
        val sew32_element  =  WireInit(0.S(32.W))
        sew8_element  := Cat(Mux(rs1(4)===1.B,Fill(3,1.U),Fill(3,0.U)),rs1).asSInt
        sew16_element := Cat(Mux(rs1(4)===1.B,Fill(11,1.U),Fill(11,0.U)),rs1).asSInt
        sew32_element := Cat(Mux(rs1(4)===1.B,Fill(27,1.U),Fill(27,0.U)),rs1).asSInt

        when(sew==="b000".U){
           element_return:= Cat(sew8_element,sew8_element,sew8_element,sew8_element).asSInt
        }.elsewhen(sew==="b001".U){
           element_return:= Cat(sew16_element,sew16_element).asSInt
        }.elsewhen(sew==="b010".U){
           element_return:= sew32_element
        }
        .otherwise{
            element_return:= 0.S
        }
        element_return
    }
}