package vaquita

import chisel3._

case class VaquitaConfig(
  vlen: Int        = 256,
  reg_count: Int   = 32,
  XLEN: Int        = 32,
  count_lanes: Int = 8,//vlen >> 5,
  debug: Boolean   = true
)