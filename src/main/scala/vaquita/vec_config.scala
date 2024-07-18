package vaquita

import chisel3._

trait Config {
  val vlen: Int = 128
  val reg_count = 32
  val debug: Boolean = true
}