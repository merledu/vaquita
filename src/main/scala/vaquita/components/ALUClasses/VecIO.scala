package vaquita.components.ALUClasses
import chisel3._
import chisel3.util._
import vaquita.configparameter.VaquitaConfig

class DecodeStageVecIO(implicit val config: VaquitaConfig) extends Bundle {
    val vs1_data = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs2_data = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs3_data = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vs0_data = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vsd_data  = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
}