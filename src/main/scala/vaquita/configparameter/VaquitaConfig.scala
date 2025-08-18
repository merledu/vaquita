package vaquita.configparameter

import chisel3._

case class VaquitaConfig(
    vlen: Int      = 256,
    reg_count: Int = 8,
    XLEN: Int     = 32,
    count_lanes: Int = 8 ,//  vlen/32=8
    lane8: Int     = 32,//vlen/8=32
    lane16: Int     = 16,//vlen/16=16
)