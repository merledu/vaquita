package vaquita.configparameter

import chisel3._

case class VaquitaConfig(
  vlen: Int      ,
  reg_count: Int ,
  XLEN: Int      ,
  count_lanes: Int,//vlen >> 5,
)