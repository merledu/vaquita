module InstructionFetch(
  input         reset,
  input  [31:0] io_address,
  output [31:0] io_instruction,
  input         io_stall,
  input         io_coreInstrReq_ready,
  output        io_coreInstrReq_valid,
  output [31:0] io_coreInstrReq_bits_addrRequest,
  output [31:0] io_coreInstrReq_bits_dataRequest,
  output [3:0]  io_coreInstrReq_bits_activeByteLane,
  output        io_coreInstrReq_bits_isWrite,
  output        io_coreInstrResp_ready,
  input         io_coreInstrResp_valid,
  input  [31:0] io_coreInstrResp_bits_dataResponse
);
  assign io_instruction = io_coreInstrResp_valid ? io_coreInstrResp_bits_dataResponse : 32'h0; // @[InstructionFetch.scala 29:24]
  assign io_coreInstrReq_valid = reset | io_stall ? 1'h0 : 1'h1; // @[InstructionFetch.scala 27:31]
  assign io_coreInstrReq_bits_addrRequest = {{2'd0}, io_address[31:2]}; // @[InstructionFetch.scala 26:50]
  assign io_coreInstrReq_bits_dataRequest = 32'h0;
  assign io_coreInstrReq_bits_activeByteLane = 4'hf; // @[InstructionFetch.scala 22:39]
  assign io_coreInstrReq_bits_isWrite = 1'h0; // @[InstructionFetch.scala 23:32]
  assign io_coreInstrResp_ready = 1'h1; // @[InstructionFetch.scala 18:26]
endmodule
module CSRRegFile(
  input         clock,
  input         reset,
  input  [31:0] io_MISA_i_value,
  input  [31:0] io_MHARTID_i_value,
  input  [1:0]  io_CSR_i_opr,
  output [31:0] io_CSR_o_data,
  input  [31:0] io_CSR_i_data,
  input  [11:0] io_CSR_i_addr,
  input         io_CSR_i_w_en,
  output        io_FCSR_nx,
  output        io_FCSR_uf,
  output        io_FCSR_of,
  output        io_FCSR_dz,
  output        io_FCSR_nv,
  output [2:0]  io_FCSR_frm
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] MISA_REG; // @[CSRRegFile.scala 18:38]
  reg [31:0] MHARTID_REG; // @[CSRRegFile.scala 19:38]
  reg [31:0] MCAUSE_REG; // @[CSRRegFile.scala 20:38]
  reg [31:0] MTVEC_REG; // @[CSRRegFile.scala 21:38]
  reg [31:0] MEPC_REG; // @[CSRRegFile.scala 22:38]
  reg [31:0] MIE_REG; // @[CSRRegFile.scala 23:38]
  reg  MSTATUS_TW_REG; // @[CSRRegFile.scala 26:38]
  reg  MSTATUS_MPRV_REG; // @[CSRRegFile.scala 27:38]
  reg [1:0] MSTATUS_MPP_REG; // @[CSRRegFile.scala 28:38]
  reg  MSTATUS_MPIE_REG; // @[CSRRegFile.scala 29:38]
  reg  MSTATUS_MIE_REG; // @[CSRRegFile.scala 30:38]
  reg  FCSR_NX_REG; // @[CSRRegFile.scala 33:38]
  reg  FCSR_UF_REG; // @[CSRRegFile.scala 34:38]
  reg  FCSR_OF_REG; // @[CSRRegFile.scala 35:38]
  reg  FCSR_DZ_REG; // @[CSRRegFile.scala 36:38]
  reg  FCSR_NV_REG; // @[CSRRegFile.scala 37:38]
  reg [2:0] FCSR_FRM_REG; // @[CSRRegFile.scala 38:38]
  wire [10:0] lo = {3'h0,MSTATUS_MPIE_REG,3'h0,MSTATUS_MIE_REG,3'h0}; // @[Cat.scala 30:58]
  wire [31:0] MSTATUS_WIRE = {10'h0,MSTATUS_TW_REG,3'h0,MSTATUS_MPRV_REG,4'h0,MSTATUS_MPP_REG,lo}; // @[Cat.scala 30:58]
  wire [31:0] FFLAGS_WIRE = {27'h0,FCSR_NV_REG,FCSR_DZ_REG,FCSR_OF_REG,FCSR_UF_REG,FCSR_NX_REG}; // @[Cat.scala 30:58]
  wire [31:0] FRM_WIRE = {29'h0,FCSR_FRM_REG}; // @[Cat.scala 30:58]
  wire [31:0] FCSR_WIRE = {24'h0,FCSR_FRM_REG,FCSR_NV_REG,FCSR_DZ_REG,FCSR_OF_REG,FCSR_UF_REG,FCSR_NX_REG}; // @[Cat.scala 30:58]
  wire [31:0] _T_9 = 12'h301 == io_CSR_i_addr ? MISA_REG : 32'h0; // @[Mux.scala 80:57]
  wire [31:0] _T_11 = 12'hf14 == io_CSR_i_addr ? MHARTID_REG : _T_9; // @[Mux.scala 80:57]
  wire  _T_12 = 12'h300 == io_CSR_i_addr; // @[Mux.scala 80:60]
  wire [31:0] _T_13 = 12'h300 == io_CSR_i_addr ? MSTATUS_WIRE : _T_11; // @[Mux.scala 80:57]
  wire  _T_14 = 12'h342 == io_CSR_i_addr; // @[Mux.scala 80:60]
  wire [31:0] _T_15 = 12'h342 == io_CSR_i_addr ? MCAUSE_REG : _T_13; // @[Mux.scala 80:57]
  wire  _T_16 = 12'h305 == io_CSR_i_addr; // @[Mux.scala 80:60]
  wire [31:0] _T_17 = 12'h305 == io_CSR_i_addr ? MTVEC_REG : _T_15; // @[Mux.scala 80:57]
  wire  _T_18 = 12'h341 == io_CSR_i_addr; // @[Mux.scala 80:60]
  wire [31:0] _T_19 = 12'h341 == io_CSR_i_addr ? MEPC_REG : _T_17; // @[Mux.scala 80:57]
  wire  _T_20 = 12'h304 == io_CSR_i_addr; // @[Mux.scala 80:60]
  wire [31:0] _T_21 = 12'h304 == io_CSR_i_addr ? MIE_REG : _T_19; // @[Mux.scala 80:57]
  wire  _T_22 = 12'h1 == io_CSR_i_addr; // @[Mux.scala 80:60]
  wire [31:0] _T_23 = 12'h1 == io_CSR_i_addr ? FFLAGS_WIRE : _T_21; // @[Mux.scala 80:57]
  wire  _T_24 = 12'h2 == io_CSR_i_addr; // @[Mux.scala 80:60]
  wire [31:0] _T_25 = 12'h2 == io_CSR_i_addr ? FRM_WIRE : _T_23; // @[Mux.scala 80:57]
  wire  _T_26 = 12'h3 == io_CSR_i_addr; // @[Mux.scala 80:60]
  wire [31:0] r_data = 12'h3 == io_CSR_i_addr ? FCSR_WIRE : _T_25; // @[Mux.scala 80:57]
  wire [31:0] set_data = r_data | io_CSR_i_data; // @[CSRRegFile.scala 90:29]
  wire [31:0] _T_28 = ~io_CSR_i_data; // @[CSRRegFile.scala 91:31]
  wire [31:0] clear_data = r_data & _T_28; // @[CSRRegFile.scala 91:29]
  wire [31:0] _T_30 = 2'h1 == io_CSR_i_opr ? io_CSR_i_data : 32'h0; // @[Mux.scala 80:57]
  wire [31:0] _T_32 = 2'h2 == io_CSR_i_opr ? set_data : _T_30; // @[Mux.scala 80:57]
  wire [31:0] w_data = 2'h3 == io_CSR_i_opr ? clear_data : _T_32; // @[Mux.scala 80:57]
  wire [2:0] _GEN_0 = _T_24 ? w_data[2:0] : FCSR_FRM_REG; // @[Conditional.scala 39:67 CSRRegFile.scala 138:34 CSRRegFile.scala 38:38]
  wire  _GEN_1 = _T_22 ? w_data[0] : FCSR_NX_REG; // @[Conditional.scala 39:67 CSRRegFile.scala 131:34 CSRRegFile.scala 33:38]
  wire  _GEN_2 = _T_22 ? w_data[1] : FCSR_UF_REG; // @[Conditional.scala 39:67 CSRRegFile.scala 132:34 CSRRegFile.scala 34:38]
  wire  _GEN_3 = _T_22 ? w_data[2] : FCSR_OF_REG; // @[Conditional.scala 39:67 CSRRegFile.scala 133:34 CSRRegFile.scala 35:38]
  wire  _GEN_4 = _T_22 ? w_data[3] : FCSR_DZ_REG; // @[Conditional.scala 39:67 CSRRegFile.scala 134:34 CSRRegFile.scala 36:38]
  wire  _GEN_5 = _T_22 ? w_data[4] : FCSR_NV_REG; // @[Conditional.scala 39:67 CSRRegFile.scala 135:34 CSRRegFile.scala 37:38]
  wire [2:0] _GEN_6 = _T_22 ? FCSR_FRM_REG : _GEN_0; // @[Conditional.scala 39:67 CSRRegFile.scala 38:38]
  wire  _GEN_7 = _T_26 ? w_data[0] : _GEN_1; // @[Conditional.scala 39:67 CSRRegFile.scala 123:34]
  wire  _GEN_8 = _T_26 ? w_data[1] : _GEN_2; // @[Conditional.scala 39:67 CSRRegFile.scala 124:34]
  wire  _GEN_9 = _T_26 ? w_data[2] : _GEN_3; // @[Conditional.scala 39:67 CSRRegFile.scala 125:34]
  wire  _GEN_10 = _T_26 ? w_data[3] : _GEN_4; // @[Conditional.scala 39:67 CSRRegFile.scala 126:34]
  wire  _GEN_11 = _T_26 ? w_data[4] : _GEN_5; // @[Conditional.scala 39:67 CSRRegFile.scala 127:34]
  wire [2:0] _GEN_12 = _T_26 ? w_data[7:5] : _GEN_6; // @[Conditional.scala 39:67 CSRRegFile.scala 128:34]
  wire [31:0] _GEN_13 = _T_20 ? w_data : MIE_REG; // @[Conditional.scala 39:67 CSRRegFile.scala 120:34 CSRRegFile.scala 23:38]
  wire  _GEN_14 = _T_20 ? FCSR_NX_REG : _GEN_7; // @[Conditional.scala 39:67 CSRRegFile.scala 33:38]
  wire  _GEN_15 = _T_20 ? FCSR_UF_REG : _GEN_8; // @[Conditional.scala 39:67 CSRRegFile.scala 34:38]
  wire  _GEN_16 = _T_20 ? FCSR_OF_REG : _GEN_9; // @[Conditional.scala 39:67 CSRRegFile.scala 35:38]
  wire  _GEN_17 = _T_20 ? FCSR_DZ_REG : _GEN_10; // @[Conditional.scala 39:67 CSRRegFile.scala 36:38]
  wire  _GEN_18 = _T_20 ? FCSR_NV_REG : _GEN_11; // @[Conditional.scala 39:67 CSRRegFile.scala 37:38]
  wire [2:0] _GEN_19 = _T_20 ? FCSR_FRM_REG : _GEN_12; // @[Conditional.scala 39:67 CSRRegFile.scala 38:38]
  wire [31:0] _GEN_20 = _T_18 ? w_data : MEPC_REG; // @[Conditional.scala 39:67 CSRRegFile.scala 117:34 CSRRegFile.scala 22:38]
  wire [31:0] _GEN_21 = _T_18 ? MIE_REG : _GEN_13; // @[Conditional.scala 39:67 CSRRegFile.scala 23:38]
  wire  _GEN_22 = _T_18 ? FCSR_NX_REG : _GEN_14; // @[Conditional.scala 39:67 CSRRegFile.scala 33:38]
  wire  _GEN_23 = _T_18 ? FCSR_UF_REG : _GEN_15; // @[Conditional.scala 39:67 CSRRegFile.scala 34:38]
  wire  _GEN_24 = _T_18 ? FCSR_OF_REG : _GEN_16; // @[Conditional.scala 39:67 CSRRegFile.scala 35:38]
  wire  _GEN_25 = _T_18 ? FCSR_DZ_REG : _GEN_17; // @[Conditional.scala 39:67 CSRRegFile.scala 36:38]
  wire  _GEN_26 = _T_18 ? FCSR_NV_REG : _GEN_18; // @[Conditional.scala 39:67 CSRRegFile.scala 37:38]
  wire [2:0] _GEN_27 = _T_18 ? FCSR_FRM_REG : _GEN_19; // @[Conditional.scala 39:67 CSRRegFile.scala 38:38]
  wire [31:0] _GEN_28 = _T_16 ? w_data : MTVEC_REG; // @[Conditional.scala 39:67 CSRRegFile.scala 114:34 CSRRegFile.scala 21:38]
  wire [31:0] _GEN_29 = _T_16 ? MEPC_REG : _GEN_20; // @[Conditional.scala 39:67 CSRRegFile.scala 22:38]
  wire [31:0] _GEN_30 = _T_16 ? MIE_REG : _GEN_21; // @[Conditional.scala 39:67 CSRRegFile.scala 23:38]
  wire  _GEN_31 = _T_16 ? FCSR_NX_REG : _GEN_22; // @[Conditional.scala 39:67 CSRRegFile.scala 33:38]
  wire  _GEN_32 = _T_16 ? FCSR_UF_REG : _GEN_23; // @[Conditional.scala 39:67 CSRRegFile.scala 34:38]
  wire  _GEN_33 = _T_16 ? FCSR_OF_REG : _GEN_24; // @[Conditional.scala 39:67 CSRRegFile.scala 35:38]
  wire  _GEN_34 = _T_16 ? FCSR_DZ_REG : _GEN_25; // @[Conditional.scala 39:67 CSRRegFile.scala 36:38]
  wire  _GEN_35 = _T_16 ? FCSR_NV_REG : _GEN_26; // @[Conditional.scala 39:67 CSRRegFile.scala 37:38]
  wire [2:0] _GEN_36 = _T_16 ? FCSR_FRM_REG : _GEN_27; // @[Conditional.scala 39:67 CSRRegFile.scala 38:38]
  assign io_CSR_o_data = 12'h3 == io_CSR_i_addr ? FCSR_WIRE : _T_25; // @[Mux.scala 80:57]
  assign io_FCSR_nx = FCSR_NX_REG; // @[CSRRegFile.scala 45:29]
  assign io_FCSR_uf = FCSR_UF_REG; // @[CSRRegFile.scala 46:29]
  assign io_FCSR_of = FCSR_OF_REG; // @[CSRRegFile.scala 47:29]
  assign io_FCSR_dz = FCSR_DZ_REG; // @[CSRRegFile.scala 48:29]
  assign io_FCSR_nv = FCSR_NV_REG; // @[CSRRegFile.scala 49:29]
  assign io_FCSR_frm = FCSR_FRM_REG; // @[CSRRegFile.scala 50:29]
  always @(posedge clock) begin
    if (reset) begin // @[CSRRegFile.scala 18:38]
      MISA_REG <= 32'h0; // @[CSRRegFile.scala 18:38]
    end else begin
      MISA_REG <= io_MISA_i_value; // @[CSRRegFile.scala 41:29]
    end
    if (reset) begin // @[CSRRegFile.scala 19:38]
      MHARTID_REG <= 32'h0; // @[CSRRegFile.scala 19:38]
    end else begin
      MHARTID_REG <= io_MHARTID_i_value; // @[CSRRegFile.scala 42:29]
    end
    if (reset) begin // @[CSRRegFile.scala 20:38]
      MCAUSE_REG <= 32'h0; // @[CSRRegFile.scala 20:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_T_12)) begin // @[Conditional.scala 40:58]
        if (_T_14) begin // @[Conditional.scala 39:67]
          MCAUSE_REG <= w_data; // @[CSRRegFile.scala 111:34]
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 21:38]
      MTVEC_REG <= 32'h0; // @[CSRRegFile.scala 21:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_T_12)) begin // @[Conditional.scala 40:58]
        if (!(_T_14)) begin // @[Conditional.scala 39:67]
          MTVEC_REG <= _GEN_28;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 22:38]
      MEPC_REG <= 32'h0; // @[CSRRegFile.scala 22:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_T_12)) begin // @[Conditional.scala 40:58]
        if (!(_T_14)) begin // @[Conditional.scala 39:67]
          MEPC_REG <= _GEN_29;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 23:38]
      MIE_REG <= 32'h0; // @[CSRRegFile.scala 23:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_T_12)) begin // @[Conditional.scala 40:58]
        if (!(_T_14)) begin // @[Conditional.scala 39:67]
          MIE_REG <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 26:38]
      MSTATUS_TW_REG <= 1'h0; // @[CSRRegFile.scala 26:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (_T_12) begin // @[Conditional.scala 40:58]
        MSTATUS_TW_REG <= w_data[21]; // @[CSRRegFile.scala 104:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 27:38]
      MSTATUS_MPRV_REG <= 1'h0; // @[CSRRegFile.scala 27:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (_T_12) begin // @[Conditional.scala 40:58]
        MSTATUS_MPRV_REG <= w_data[17]; // @[CSRRegFile.scala 105:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 28:38]
      MSTATUS_MPP_REG <= 2'h0; // @[CSRRegFile.scala 28:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (_T_12) begin // @[Conditional.scala 40:58]
        MSTATUS_MPP_REG <= w_data[12:11]; // @[CSRRegFile.scala 106:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 29:38]
      MSTATUS_MPIE_REG <= 1'h0; // @[CSRRegFile.scala 29:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (_T_12) begin // @[Conditional.scala 40:58]
        MSTATUS_MPIE_REG <= w_data[7]; // @[CSRRegFile.scala 107:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 30:38]
      MSTATUS_MIE_REG <= 1'h0; // @[CSRRegFile.scala 30:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (_T_12) begin // @[Conditional.scala 40:58]
        MSTATUS_MIE_REG <= w_data[3]; // @[CSRRegFile.scala 108:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 33:38]
      FCSR_NX_REG <= 1'h0; // @[CSRRegFile.scala 33:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_T_12)) begin // @[Conditional.scala 40:58]
        if (!(_T_14)) begin // @[Conditional.scala 39:67]
          FCSR_NX_REG <= _GEN_31;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 34:38]
      FCSR_UF_REG <= 1'h0; // @[CSRRegFile.scala 34:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_T_12)) begin // @[Conditional.scala 40:58]
        if (!(_T_14)) begin // @[Conditional.scala 39:67]
          FCSR_UF_REG <= _GEN_32;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 35:38]
      FCSR_OF_REG <= 1'h0; // @[CSRRegFile.scala 35:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_T_12)) begin // @[Conditional.scala 40:58]
        if (!(_T_14)) begin // @[Conditional.scala 39:67]
          FCSR_OF_REG <= _GEN_33;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 36:38]
      FCSR_DZ_REG <= 1'h0; // @[CSRRegFile.scala 36:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_T_12)) begin // @[Conditional.scala 40:58]
        if (!(_T_14)) begin // @[Conditional.scala 39:67]
          FCSR_DZ_REG <= _GEN_34;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 37:38]
      FCSR_NV_REG <= 1'h0; // @[CSRRegFile.scala 37:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_T_12)) begin // @[Conditional.scala 40:58]
        if (!(_T_14)) begin // @[Conditional.scala 39:67]
          FCSR_NV_REG <= _GEN_35;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 38:38]
      FCSR_FRM_REG <= 3'h0; // @[CSRRegFile.scala 38:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_T_12)) begin // @[Conditional.scala 40:58]
        if (!(_T_14)) begin // @[Conditional.scala 39:67]
          FCSR_FRM_REG <= _GEN_36;
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  MISA_REG = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  MHARTID_REG = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  MCAUSE_REG = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  MTVEC_REG = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  MEPC_REG = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  MIE_REG = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  MSTATUS_TW_REG = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  MSTATUS_MPRV_REG = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  MSTATUS_MPP_REG = _RAND_8[1:0];
  _RAND_9 = {1{`RANDOM}};
  MSTATUS_MPIE_REG = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  MSTATUS_MIE_REG = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  FCSR_NX_REG = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  FCSR_UF_REG = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  FCSR_OF_REG = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  FCSR_DZ_REG = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  FCSR_NV_REG = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  FCSR_FRM_REG = _RAND_16[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module CSR(
  input         clock,
  input         reset,
  input  [31:0] io_i_misa_value,
  input  [31:0] io_i_mhartid_value,
  input  [31:0] io_i_data,
  input  [4:0]  io_i_imm,
  output [31:0] io_o_data,
  input  [2:0]  io_i_opr,
  input  [11:0] io_i_addr,
  input         io_i_w_en,
  output [31:0] io_fcsr_o_data
);
  wire  csrRegFile_clock; // @[CSR.scala 20:28]
  wire  csrRegFile_reset; // @[CSR.scala 20:28]
  wire [31:0] csrRegFile_io_MISA_i_value; // @[CSR.scala 20:28]
  wire [31:0] csrRegFile_io_MHARTID_i_value; // @[CSR.scala 20:28]
  wire [1:0] csrRegFile_io_CSR_i_opr; // @[CSR.scala 20:28]
  wire [31:0] csrRegFile_io_CSR_o_data; // @[CSR.scala 20:28]
  wire [31:0] csrRegFile_io_CSR_i_data; // @[CSR.scala 20:28]
  wire [11:0] csrRegFile_io_CSR_i_addr; // @[CSR.scala 20:28]
  wire  csrRegFile_io_CSR_i_w_en; // @[CSR.scala 20:28]
  wire  csrRegFile_io_FCSR_nx; // @[CSR.scala 20:28]
  wire  csrRegFile_io_FCSR_uf; // @[CSR.scala 20:28]
  wire  csrRegFile_io_FCSR_of; // @[CSR.scala 20:28]
  wire  csrRegFile_io_FCSR_dz; // @[CSR.scala 20:28]
  wire  csrRegFile_io_FCSR_nv; // @[CSR.scala 20:28]
  wire [2:0] csrRegFile_io_FCSR_frm; // @[CSR.scala 20:28]
  wire [2:0] lo = {csrRegFile_io_FCSR_of,csrRegFile_io_FCSR_uf,csrRegFile_io_FCSR_nx}; // @[Cat.scala 30:58]
  wire [28:0] hi = {24'h0,csrRegFile_io_FCSR_frm,csrRegFile_io_FCSR_nv,csrRegFile_io_FCSR_dz}; // @[Cat.scala 30:58]
  CSRRegFile csrRegFile ( // @[CSR.scala 20:28]
    .clock(csrRegFile_clock),
    .reset(csrRegFile_reset),
    .io_MISA_i_value(csrRegFile_io_MISA_i_value),
    .io_MHARTID_i_value(csrRegFile_io_MHARTID_i_value),
    .io_CSR_i_opr(csrRegFile_io_CSR_i_opr),
    .io_CSR_o_data(csrRegFile_io_CSR_o_data),
    .io_CSR_i_data(csrRegFile_io_CSR_i_data),
    .io_CSR_i_addr(csrRegFile_io_CSR_i_addr),
    .io_CSR_i_w_en(csrRegFile_io_CSR_i_w_en),
    .io_FCSR_nx(csrRegFile_io_FCSR_nx),
    .io_FCSR_uf(csrRegFile_io_FCSR_uf),
    .io_FCSR_of(csrRegFile_io_FCSR_of),
    .io_FCSR_dz(csrRegFile_io_FCSR_dz),
    .io_FCSR_nv(csrRegFile_io_FCSR_nv),
    .io_FCSR_frm(csrRegFile_io_FCSR_frm)
  );
  assign io_o_data = csrRegFile_io_CSR_o_data; // @[CSR.scala 30:37]
  assign io_fcsr_o_data = {hi,lo}; // @[Cat.scala 30:58]
  assign csrRegFile_clock = clock;
  assign csrRegFile_reset = reset;
  assign csrRegFile_io_MISA_i_value = io_i_misa_value; // @[CSR.scala 25:37]
  assign csrRegFile_io_MHARTID_i_value = io_i_mhartid_value; // @[CSR.scala 26:37]
  assign csrRegFile_io_CSR_i_opr = io_i_opr[1:0]; // @[CSR.scala 24:37]
  assign csrRegFile_io_CSR_i_data = io_i_opr[2] ? {{27'd0}, io_i_imm} : io_i_data; // @[CSR.scala 23:43]
  assign csrRegFile_io_CSR_i_addr = io_i_addr; // @[CSR.scala 27:37]
  assign csrRegFile_io_CSR_i_w_en = io_i_w_en; // @[CSR.scala 28:37]
endmodule
module CSRController(
  input        io_regWrExecute,
  input  [4:0] io_rdSelExecute,
  input        io_csrWrExecute,
  input        io_regWrMemory,
  input  [4:0] io_rdSelMemory,
  input        io_csrWrMemory,
  input        io_regWrWriteback,
  input  [4:0] io_rdSelWriteback,
  input        io_csrWrWriteback,
  input  [4:0] io_rs1SelDecode,
  input        io_csrInstDecode,
  output [2:0] io_forwardRS1
);
  wire  _T = io_regWrExecute & io_csrInstDecode; // @[CSRController.scala 33:44]
  wire  _T_3 = |io_rdSelExecute; // @[CSRController.scala 36:44]
  wire  _T_4 = _T & _T_3; // @[CSRController.scala 35:46]
  wire  _T_5 = ~io_csrWrExecute; // @[CSRController.scala 37:28]
  wire  _T_6 = _T_4 & _T_5; // @[CSRController.scala 36:48]
  wire  _T_7 = io_rdSelExecute == io_rs1SelDecode; // @[CSRController.scala 38:44]
  wire  hazard_DecEx = _T_6 & _T_7; // @[CSRController.scala 37:45]
  wire  _T_9 = io_regWrMemory & io_csrInstDecode; // @[CSRController.scala 42:44]
  wire  _T_12 = |io_rdSelMemory; // @[CSRController.scala 45:43]
  wire  _T_13 = _T_9 & _T_12; // @[CSRController.scala 44:46]
  wire  _T_14 = ~io_csrWrMemory; // @[CSRController.scala 46:28]
  wire  _T_15 = _T_13 & _T_14; // @[CSRController.scala 45:47]
  wire  _T_16 = io_rdSelMemory == io_rs1SelDecode; // @[CSRController.scala 47:43]
  wire  _T_17 = _T_15 & _T_16; // @[CSRController.scala 46:44]
  wire  _T_18 = ~hazard_DecEx; // @[CSRController.scala 48:28]
  wire  hazard_DecMem = _T_17 & _T_18; // @[CSRController.scala 47:63]
  wire  _T_20 = io_regWrWriteback & io_csrInstDecode; // @[CSRController.scala 52:46]
  wire  _T_23 = |io_rdSelWriteback; // @[CSRController.scala 55:46]
  wire  _T_24 = _T_20 & _T_23; // @[CSRController.scala 54:46]
  wire  _T_25 = ~io_csrWrWriteback; // @[CSRController.scala 56:28]
  wire  _T_26 = _T_24 & _T_25; // @[CSRController.scala 55:50]
  wire  _T_27 = io_rdSelWriteback == io_rs1SelDecode; // @[CSRController.scala 57:46]
  wire  _T_28 = _T_26 & _T_27; // @[CSRController.scala 56:47]
  wire  _T_30 = _T_28 & _T_18; // @[CSRController.scala 57:66]
  wire  hazard_DecWb = _T_30 & hazard_DecMem; // @[CSRController.scala 58:42]
  wire  _T_37 = _T_4 & io_csrWrExecute; // @[CSRController.scala 66:48]
  wire  csrHazard_DecEx = _T_37 & _T_7; // @[CSRController.scala 67:44]
  wire  _T_45 = _T_13 & io_csrWrMemory; // @[CSRController.scala 75:47]
  wire  _T_47 = _T_45 & _T_16; // @[CSRController.scala 76:43]
  wire  _T_48 = ~csrHazard_DecEx; // @[CSRController.scala 78:28]
  wire  csrHazard_DecMem = _T_47 & _T_48; // @[CSRController.scala 77:63]
  wire  _T_55 = _T_24 & io_csrWrWriteback; // @[CSRController.scala 85:50]
  wire  _T_57 = _T_55 & _T_27; // @[CSRController.scala 86:46]
  wire  _T_59 = _T_57 & _T_48; // @[CSRController.scala 87:66]
  wire  csrHazard_DecWb = _T_59 & csrHazard_DecMem; // @[CSRController.scala 88:45]
  wire [1:0] _T_64 = hazard_DecMem ? 2'h2 : {{1'd0}, hazard_DecEx}; // @[Mux.scala 80:57]
  wire [1:0] _T_66 = hazard_DecWb ? 2'h3 : _T_64; // @[Mux.scala 80:57]
  wire [2:0] _T_68 = csrHazard_DecEx ? 3'h4 : {{1'd0}, _T_66}; // @[Mux.scala 80:57]
  wire [2:0] _T_70 = csrHazard_DecMem ? 3'h5 : _T_68; // @[Mux.scala 80:57]
  assign io_forwardRS1 = csrHazard_DecWb ? 3'h6 : _T_70; // @[Mux.scala 80:57]
endmodule
module HazardUnit(
  input        io_id_ex_memRead,
  input        io_ex_mem_memRead,
  input        io_id_ex_branch,
  input  [4:0] io_id_ex_rd,
  input  [4:0] io_ex_mem_rd,
  input  [4:0] io_id_rs1,
  input  [4:0] io_id_rs2,
  input        io_taken,
  input  [1:0] io_jump,
  input        io_branch,
  output       io_if_reg_write,
  output       io_pc_write,
  output       io_ctl_mux,
  output       io_ifid_flush,
  output       io_take_branch
);
  wire  _T_3 = io_id_ex_rd == io_id_rs1 | io_id_ex_rd == io_id_rs2; // @[HazardUnit.scala 35:34]
  wire  _T_4 = (io_id_ex_memRead | io_branch) & _T_3; // @[HazardUnit.scala 34:37]
  wire  _T_5 = io_id_ex_rd != 5'h0; // @[HazardUnit.scala 36:21]
  wire  _T_10 = _T_5 & io_id_rs2 != 5'h0; // @[HazardUnit.scala 37:28]
  wire  _T_11 = io_id_ex_rd != 5'h0 & io_id_rs1 != 5'h0 | _T_10; // @[HazardUnit.scala 36:51]
  wire  _T_12 = _T_4 & _T_11; // @[HazardUnit.scala 35:65]
  wire  _T_13 = ~io_id_ex_branch; // @[HazardUnit.scala 38:7]
  wire  _T_14 = _T_12 & _T_13; // @[HazardUnit.scala 37:51]
  wire  _GEN_0 = _T_14 ? 1'h0 : 1'h1; // @[HazardUnit.scala 40:3 HazardUnit.scala 41:16 HazardUnit.scala 26:14]
  assign io_if_reg_write = io_ex_mem_memRead & io_branch & (io_ex_mem_rd == io_id_rs1 | io_ex_mem_rd == io_id_rs2) ? 1'h0
     : _GEN_0; // @[HazardUnit.scala 47:101 HazardUnit.scala 48:16]
  assign io_pc_write = io_ex_mem_memRead & io_branch & (io_ex_mem_rd == io_id_rs1 | io_ex_mem_rd == io_id_rs2) ? 1'h0 :
    _GEN_0; // @[HazardUnit.scala 47:101 HazardUnit.scala 48:16]
  assign io_ctl_mux = io_ex_mem_memRead & io_branch & (io_ex_mem_rd == io_id_rs1 | io_ex_mem_rd == io_id_rs2) ? 1'h0 :
    _GEN_0; // @[HazardUnit.scala 47:101 HazardUnit.scala 48:16]
  assign io_ifid_flush = io_taken | io_jump != 2'h0; // @[HazardUnit.scala 55:17]
  assign io_take_branch = io_ex_mem_memRead & io_branch & (io_ex_mem_rd == io_id_rs1 | io_ex_mem_rd == io_id_rs2) ? 1'h0
     : _GEN_0; // @[HazardUnit.scala 47:101 HazardUnit.scala 48:16]
endmodule
module Control(
  input  [31:0] io_in,
  output        io_aluSrc,
  output [1:0]  io_memToReg,
  output        io_regWrite,
  output        io_memRead,
  output        io_memWrite,
  output        io_branch,
  output [1:0]  io_aluOp,
  output [1:0]  io_jump,
  output [1:0]  io_aluSrc1
);
  wire [31:0] _T = io_in & 32'h7f; // @[Lookup.scala 31:38]
  wire  _T_1 = 32'h33 == _T; // @[Lookup.scala 31:38]
  wire  _T_3 = 32'h13 == _T; // @[Lookup.scala 31:38]
  wire  _T_5 = 32'h73 == _T; // @[Lookup.scala 31:38]
  wire  _T_7 = 32'h3 == _T; // @[Lookup.scala 31:38]
  wire  _T_9 = 32'h23 == _T; // @[Lookup.scala 31:38]
  wire  _T_11 = 32'h63 == _T; // @[Lookup.scala 31:38]
  wire  _T_13 = 32'h37 == _T; // @[Lookup.scala 31:38]
  wire  _T_15 = 32'h17 == _T; // @[Lookup.scala 31:38]
  wire  _T_17 = 32'h6f == _T; // @[Lookup.scala 31:38]
  wire  _T_19 = 32'h67 == _T; // @[Lookup.scala 31:38]
  wire  _T_25 = _T_9 ? 1'h0 : _T_11; // @[Lookup.scala 33:37]
  wire  _T_26 = _T_7 ? 1'h0 : _T_25; // @[Lookup.scala 33:37]
  wire  _T_27 = _T_5 ? 1'h0 : _T_26; // @[Lookup.scala 33:37]
  wire  _T_28 = _T_3 ? 1'h0 : _T_27; // @[Lookup.scala 33:37]
  wire [1:0] _T_29 = _T_19 ? 2'h2 : 2'h0; // @[Lookup.scala 33:37]
  wire [1:0] _T_30 = _T_17 ? 2'h2 : _T_29; // @[Lookup.scala 33:37]
  wire [1:0] _T_31 = _T_15 ? 2'h0 : _T_30; // @[Lookup.scala 33:37]
  wire [1:0] _T_32 = _T_13 ? 2'h0 : _T_31; // @[Lookup.scala 33:37]
  wire [1:0] _T_33 = _T_11 ? 2'h0 : _T_32; // @[Lookup.scala 33:37]
  wire [1:0] _T_34 = _T_9 ? 2'h0 : _T_33; // @[Lookup.scala 33:37]
  wire [1:0] _T_35 = _T_7 ? 2'h1 : _T_34; // @[Lookup.scala 33:37]
  wire [1:0] _T_36 = _T_5 ? 2'h0 : _T_35; // @[Lookup.scala 33:37]
  wire [1:0] _T_37 = _T_3 ? 2'h0 : _T_36; // @[Lookup.scala 33:37]
  wire  _T_42 = _T_11 ? 1'h0 : _T_13 | (_T_15 | (_T_17 | _T_19)); // @[Lookup.scala 33:37]
  wire  _T_43 = _T_9 ? 1'h0 : _T_42; // @[Lookup.scala 33:37]
  wire  _T_54 = _T_5 ? 1'h0 : _T_7; // @[Lookup.scala 33:37]
  wire  _T_55 = _T_3 ? 1'h0 : _T_54; // @[Lookup.scala 33:37]
  wire  _T_62 = _T_7 ? 1'h0 : _T_9; // @[Lookup.scala 33:37]
  wire  _T_63 = _T_5 ? 1'h0 : _T_62; // @[Lookup.scala 33:37]
  wire  _T_64 = _T_3 ? 1'h0 : _T_63; // @[Lookup.scala 33:37]
  wire [1:0] _T_75 = _T_17 ? 2'h1 : _T_29; // @[Lookup.scala 33:37]
  wire [1:0] _T_76 = _T_15 ? 2'h0 : _T_75; // @[Lookup.scala 33:37]
  wire [1:0] _T_77 = _T_13 ? 2'h0 : _T_76; // @[Lookup.scala 33:37]
  wire [1:0] _T_78 = _T_11 ? 2'h0 : _T_77; // @[Lookup.scala 33:37]
  wire [1:0] _T_79 = _T_9 ? 2'h0 : _T_78; // @[Lookup.scala 33:37]
  wire [1:0] _T_80 = _T_7 ? 2'h0 : _T_79; // @[Lookup.scala 33:37]
  wire [1:0] _T_81 = _T_5 ? 2'h0 : _T_80; // @[Lookup.scala 33:37]
  wire [1:0] _T_82 = _T_3 ? 2'h0 : _T_81; // @[Lookup.scala 33:37]
  wire [1:0] _T_90 = _T_5 ? 2'h2 : 2'h0; // @[Lookup.scala 33:37]
  wire [1:0] _T_91 = _T_3 ? 2'h2 : _T_90; // @[Lookup.scala 33:37]
  wire [1:0] _T_95 = _T_13 ? 2'h2 : {{1'd0}, _T_15}; // @[Lookup.scala 33:37]
  wire [1:0] _T_96 = _T_11 ? 2'h0 : _T_95; // @[Lookup.scala 33:37]
  wire [1:0] _T_97 = _T_9 ? 2'h0 : _T_96; // @[Lookup.scala 33:37]
  wire [1:0] _T_98 = _T_7 ? 2'h0 : _T_97; // @[Lookup.scala 33:37]
  wire [1:0] _T_99 = _T_5 ? 2'h0 : _T_98; // @[Lookup.scala 33:37]
  wire [1:0] _T_100 = _T_3 ? 2'h0 : _T_99; // @[Lookup.scala 33:37]
  assign io_aluSrc = _T_1 | _T_28; // @[Lookup.scala 33:37]
  assign io_memToReg = _T_1 ? 2'h0 : _T_37; // @[Lookup.scala 33:37]
  assign io_regWrite = _T_1 | (_T_3 | (_T_5 | (_T_7 | _T_43))); // @[Lookup.scala 33:37]
  assign io_memRead = _T_1 ? 1'h0 : _T_55; // @[Lookup.scala 33:37]
  assign io_memWrite = _T_1 ? 1'h0 : _T_64; // @[Lookup.scala 33:37]
  assign io_branch = _T_1 ? 1'h0 : _T_28; // @[Lookup.scala 33:37]
  assign io_aluOp = _T_1 ? 2'h2 : _T_91; // @[Lookup.scala 33:37]
  assign io_jump = _T_1 ? 2'h0 : _T_82; // @[Lookup.scala 33:37]
  assign io_aluSrc1 = _T_1 ? 2'h0 : _T_100; // @[Lookup.scala 33:37]
endmodule
module controldec(
  input  [31:0] io_Instruction,
  output        io_RegWrite,
  output        io_opBsel,
  output [3:0]  io_Ex_sel,
  output [4:0]  io_aluop,
  output        io_vset,
  output [3:0]  io_v_load,
  output        io_v_ins,
  output        io_RegRead
);
  wire [1:0] configtype = io_Instruction[31:30]; // @[Vcontrol.scala 27:36]
  wire [6:0] opcode = io_Instruction[6:0]; // @[Vcontrol.scala 28:32]
  wire [2:0] func3 = io_Instruction[14:12]; // @[Vcontrol.scala 29:31]
  wire  _T = 7'h57 == opcode; // @[Conditional.scala 37:30]
  wire  _T_1 = func3 == 3'h7; // @[Vcontrol.scala 35:25]
  wire  _T_11 = _T_1 & configtype == 2'h3; // @[Vcontrol.scala 46:42]
  wire  _T_14 = func3 == 3'h3; // @[Vcontrol.scala 61:31]
  wire [2:0] _GEN_1 = func3 == 3'h3 ? 3'h4 : 3'h0; // @[Vcontrol.scala 61:45 Vcontrol.scala 65:26 Vcontrol.scala 20:15]
  wire  _GEN_3 = func3 == 3'h4 | _T_14; // @[Vcontrol.scala 56:45 Vcontrol.scala 57:28]
  wire [1:0] _GEN_4 = func3 == 3'h4 ? 2'h3 : {{1'd0}, _T_14}; // @[Vcontrol.scala 56:45 Vcontrol.scala 58:25]
  wire [2:0] _GEN_5 = func3 == 3'h4 ? 3'h4 : _GEN_1; // @[Vcontrol.scala 56:45 Vcontrol.scala 59:26]
  wire  _GEN_6 = func3 == 3'h4 ? 1'h0 : _T_14; // @[Vcontrol.scala 56:45 Vcontrol.scala 19:15]
  wire  _GEN_8 = func3 == 3'h0 | _GEN_3; // @[Vcontrol.scala 50:45 Vcontrol.scala 51:28]
  wire [1:0] _GEN_9 = func3 == 3'h0 ? 2'h2 : _GEN_4; // @[Vcontrol.scala 50:45 Vcontrol.scala 52:25]
  wire [2:0] _GEN_10 = func3 == 3'h0 ? 3'h4 : _GEN_5; // @[Vcontrol.scala 50:45 Vcontrol.scala 53:26]
  wire  _GEN_12 = func3 == 3'h0 ? 1'h0 : _GEN_6; // @[Vcontrol.scala 50:45 Vcontrol.scala 19:15]
  wire  _GEN_13 = _T_1 & configtype == 2'h3 | _GEN_8; // @[Vcontrol.scala 46:67 Vcontrol.scala 47:28]
  wire [2:0] _GEN_14 = _T_1 & configtype == 2'h3 ? 3'h3 : _GEN_10; // @[Vcontrol.scala 46:67 Vcontrol.scala 48:26]
  wire [1:0] _GEN_16 = _T_1 & configtype == 2'h3 ? 2'h0 : _GEN_9; // @[Vcontrol.scala 46:67 Vcontrol.scala 21:14]
  wire  _GEN_18 = _T_1 & configtype == 2'h3 ? 1'h0 : _GEN_8; // @[Vcontrol.scala 46:67 Vcontrol.scala 25:16]
  wire  _GEN_19 = _T_1 & configtype == 2'h3 ? 1'h0 : _GEN_12; // @[Vcontrol.scala 46:67 Vcontrol.scala 19:15]
  wire  _GEN_20 = _T_1 & configtype == 2'h2 | _GEN_13; // @[Vcontrol.scala 40:67 Vcontrol.scala 41:28]
  wire [1:0] _GEN_21 = _T_1 & configtype == 2'h2 ? 2'h1 : _GEN_16; // @[Vcontrol.scala 40:67 Vcontrol.scala 42:25]
  wire  _GEN_22 = _T_1 & configtype == 2'h2 | _GEN_19; // @[Vcontrol.scala 40:67 Vcontrol.scala 43:26]
  wire [2:0] _GEN_23 = _T_1 & configtype == 2'h2 ? 3'h3 : _GEN_14; // @[Vcontrol.scala 40:67 Vcontrol.scala 44:26]
  wire  _GEN_24 = _T_1 & configtype == 2'h2 | _T_11; // @[Vcontrol.scala 40:67 Vcontrol.scala 45:25]
  wire  _GEN_26 = _T_1 & configtype == 2'h2 ? 1'h0 : _GEN_18; // @[Vcontrol.scala 40:67 Vcontrol.scala 25:16]
  wire  _GEN_27 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) | _GEN_20; // @[Vcontrol.scala 35:90 Vcontrol.scala 36:28]
  wire  _GEN_28 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) | _GEN_22; // @[Vcontrol.scala 35:90 Vcontrol.scala 37:26]
  wire [2:0] _GEN_29 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) ? 3'h3 : _GEN_23; // @[Vcontrol.scala 35:90 Vcontrol.scala 38:26]
  wire  _GEN_30 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) | _GEN_24; // @[Vcontrol.scala 35:90 Vcontrol.scala 39:25]
  wire [1:0] _GEN_31 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) ? 2'h0 : _GEN_21; // @[Vcontrol.scala 35:90 Vcontrol.scala 21:14]
  wire  _GEN_33 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) ? 1'h0 : _GEN_26; // @[Vcontrol.scala 35:90 Vcontrol.scala 25:16]
  wire [2:0] _GEN_37 = _T ? _GEN_29 : 3'h0; // @[Conditional.scala 40:58 Vcontrol.scala 20:15]
  wire [1:0] _GEN_39 = _T ? _GEN_31 : 2'h0; // @[Conditional.scala 40:58 Vcontrol.scala 21:14]
  assign io_RegWrite = _T & _GEN_27; // @[Conditional.scala 40:58 Vcontrol.scala 18:17]
  assign io_opBsel = _T & _GEN_28; // @[Conditional.scala 40:58 Vcontrol.scala 19:15]
  assign io_Ex_sel = {{1'd0}, _GEN_37}; // @[Conditional.scala 40:58 Vcontrol.scala 20:15]
  assign io_aluop = {{3'd0}, _GEN_39}; // @[Conditional.scala 40:58 Vcontrol.scala 21:14]
  assign io_vset = _T & _GEN_30; // @[Conditional.scala 40:58 Vcontrol.scala 22:13]
  assign io_v_load = 4'h0; // @[Vcontrol.scala 23:15]
  assign io_v_ins = 7'h57 == opcode; // @[Conditional.scala 37:30]
  assign io_RegRead = _T & _GEN_33; // @[Conditional.scala 40:58 Vcontrol.scala 25:16]
endmodule
module Registers(
  input         clock,
  input         reset,
  input  [4:0]  io_readAddress_0,
  input  [4:0]  io_readAddress_1,
  input         io_writeEnable,
  input  [4:0]  io_writeAddress,
  input  [31:0] io_writeData,
  output [31:0] io_readData_0,
  output [31:0] io_readData_1
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] reg_0; // @[Registers.scala 14:20]
  reg [31:0] reg_1; // @[Registers.scala 14:20]
  reg [31:0] reg_2; // @[Registers.scala 14:20]
  reg [31:0] reg_3; // @[Registers.scala 14:20]
  reg [31:0] reg_4; // @[Registers.scala 14:20]
  reg [31:0] reg_5; // @[Registers.scala 14:20]
  reg [31:0] reg_6; // @[Registers.scala 14:20]
  reg [31:0] reg_7; // @[Registers.scala 14:20]
  reg [31:0] reg_8; // @[Registers.scala 14:20]
  reg [31:0] reg_9; // @[Registers.scala 14:20]
  reg [31:0] reg_10; // @[Registers.scala 14:20]
  reg [31:0] reg_11; // @[Registers.scala 14:20]
  reg [31:0] reg_12; // @[Registers.scala 14:20]
  reg [31:0] reg_13; // @[Registers.scala 14:20]
  reg [31:0] reg_14; // @[Registers.scala 14:20]
  reg [31:0] reg_15; // @[Registers.scala 14:20]
  reg [31:0] reg_16; // @[Registers.scala 14:20]
  reg [31:0] reg_17; // @[Registers.scala 14:20]
  reg [31:0] reg_18; // @[Registers.scala 14:20]
  reg [31:0] reg_19; // @[Registers.scala 14:20]
  reg [31:0] reg_20; // @[Registers.scala 14:20]
  reg [31:0] reg_21; // @[Registers.scala 14:20]
  reg [31:0] reg_22; // @[Registers.scala 14:20]
  reg [31:0] reg_23; // @[Registers.scala 14:20]
  reg [31:0] reg_24; // @[Registers.scala 14:20]
  reg [31:0] reg_25; // @[Registers.scala 14:20]
  reg [31:0] reg_26; // @[Registers.scala 14:20]
  reg [31:0] reg_27; // @[Registers.scala 14:20]
  reg [31:0] reg_28; // @[Registers.scala 14:20]
  reg [31:0] reg_29; // @[Registers.scala 14:20]
  reg [31:0] reg_30; // @[Registers.scala 14:20]
  reg [31:0] reg_31; // @[Registers.scala 14:20]
  wire [31:0] _GEN_65 = 5'h1 == io_readAddress_0 ? reg_1 : reg_0; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_66 = 5'h2 == io_readAddress_0 ? reg_2 : _GEN_65; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_67 = 5'h3 == io_readAddress_0 ? reg_3 : _GEN_66; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_68 = 5'h4 == io_readAddress_0 ? reg_4 : _GEN_67; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_69 = 5'h5 == io_readAddress_0 ? reg_5 : _GEN_68; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_70 = 5'h6 == io_readAddress_0 ? reg_6 : _GEN_69; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_71 = 5'h7 == io_readAddress_0 ? reg_7 : _GEN_70; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_72 = 5'h8 == io_readAddress_0 ? reg_8 : _GEN_71; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_73 = 5'h9 == io_readAddress_0 ? reg_9 : _GEN_72; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_74 = 5'ha == io_readAddress_0 ? reg_10 : _GEN_73; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_75 = 5'hb == io_readAddress_0 ? reg_11 : _GEN_74; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_76 = 5'hc == io_readAddress_0 ? reg_12 : _GEN_75; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_77 = 5'hd == io_readAddress_0 ? reg_13 : _GEN_76; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_78 = 5'he == io_readAddress_0 ? reg_14 : _GEN_77; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_79 = 5'hf == io_readAddress_0 ? reg_15 : _GEN_78; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_80 = 5'h10 == io_readAddress_0 ? reg_16 : _GEN_79; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_81 = 5'h11 == io_readAddress_0 ? reg_17 : _GEN_80; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_82 = 5'h12 == io_readAddress_0 ? reg_18 : _GEN_81; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_83 = 5'h13 == io_readAddress_0 ? reg_19 : _GEN_82; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_84 = 5'h14 == io_readAddress_0 ? reg_20 : _GEN_83; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_85 = 5'h15 == io_readAddress_0 ? reg_21 : _GEN_84; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_86 = 5'h16 == io_readAddress_0 ? reg_22 : _GEN_85; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_87 = 5'h17 == io_readAddress_0 ? reg_23 : _GEN_86; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_88 = 5'h18 == io_readAddress_0 ? reg_24 : _GEN_87; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_89 = 5'h19 == io_readAddress_0 ? reg_25 : _GEN_88; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_90 = 5'h1a == io_readAddress_0 ? reg_26 : _GEN_89; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_91 = 5'h1b == io_readAddress_0 ? reg_27 : _GEN_90; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_92 = 5'h1c == io_readAddress_0 ? reg_28 : _GEN_91; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_93 = 5'h1d == io_readAddress_0 ? reg_29 : _GEN_92; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_94 = 5'h1e == io_readAddress_0 ? reg_30 : _GEN_93; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_95 = 5'h1f == io_readAddress_0 ? reg_31 : _GEN_94; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_98 = 5'h1 == io_readAddress_1 ? reg_1 : reg_0; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_99 = 5'h2 == io_readAddress_1 ? reg_2 : _GEN_98; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_100 = 5'h3 == io_readAddress_1 ? reg_3 : _GEN_99; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_101 = 5'h4 == io_readAddress_1 ? reg_4 : _GEN_100; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_102 = 5'h5 == io_readAddress_1 ? reg_5 : _GEN_101; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_103 = 5'h6 == io_readAddress_1 ? reg_6 : _GEN_102; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_104 = 5'h7 == io_readAddress_1 ? reg_7 : _GEN_103; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_105 = 5'h8 == io_readAddress_1 ? reg_8 : _GEN_104; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_106 = 5'h9 == io_readAddress_1 ? reg_9 : _GEN_105; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_107 = 5'ha == io_readAddress_1 ? reg_10 : _GEN_106; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_108 = 5'hb == io_readAddress_1 ? reg_11 : _GEN_107; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_109 = 5'hc == io_readAddress_1 ? reg_12 : _GEN_108; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_110 = 5'hd == io_readAddress_1 ? reg_13 : _GEN_109; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_111 = 5'he == io_readAddress_1 ? reg_14 : _GEN_110; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_112 = 5'hf == io_readAddress_1 ? reg_15 : _GEN_111; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_113 = 5'h10 == io_readAddress_1 ? reg_16 : _GEN_112; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_114 = 5'h11 == io_readAddress_1 ? reg_17 : _GEN_113; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_115 = 5'h12 == io_readAddress_1 ? reg_18 : _GEN_114; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_116 = 5'h13 == io_readAddress_1 ? reg_19 : _GEN_115; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_117 = 5'h14 == io_readAddress_1 ? reg_20 : _GEN_116; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_118 = 5'h15 == io_readAddress_1 ? reg_21 : _GEN_117; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_119 = 5'h16 == io_readAddress_1 ? reg_22 : _GEN_118; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_120 = 5'h17 == io_readAddress_1 ? reg_23 : _GEN_119; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_121 = 5'h18 == io_readAddress_1 ? reg_24 : _GEN_120; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_122 = 5'h19 == io_readAddress_1 ? reg_25 : _GEN_121; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_123 = 5'h1a == io_readAddress_1 ? reg_26 : _GEN_122; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_124 = 5'h1b == io_readAddress_1 ? reg_27 : _GEN_123; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_125 = 5'h1c == io_readAddress_1 ? reg_28 : _GEN_124; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_126 = 5'h1d == io_readAddress_1 ? reg_29 : _GEN_125; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_127 = 5'h1e == io_readAddress_1 ? reg_30 : _GEN_126; // @[Registers.scala 23:22 Registers.scala 23:22]
  wire [31:0] _GEN_128 = 5'h1f == io_readAddress_1 ? reg_31 : _GEN_127; // @[Registers.scala 23:22 Registers.scala 23:22]
  assign io_readData_0 = io_readAddress_0 == 5'h0 ? 32'h0 : _GEN_95; // @[Registers.scala 20:37 Registers.scala 21:22 Registers.scala 23:22]
  assign io_readData_1 = io_readAddress_1 == 5'h0 ? 32'h0 : _GEN_128; // @[Registers.scala 20:37 Registers.scala 21:22 Registers.scala 23:22]
  always @(posedge clock) begin
    if (reset) begin // @[Registers.scala 14:20]
      reg_0 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h0 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_0 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_1 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h1 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_1 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_2 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h2 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_2 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_3 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h3 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_3 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_4 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h4 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_4 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_5 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h5 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_5 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_6 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h6 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_6 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_7 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h7 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_7 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_8 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h8 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_8 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_9 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h9 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_9 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_10 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'ha == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_10 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_11 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'hb == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_11 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_12 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'hc == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_12 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_13 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'hd == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_13 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_14 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'he == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_14 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_15 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'hf == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_15 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_16 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h10 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_16 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_17 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h11 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_17 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_18 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h12 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_18 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_19 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h13 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_19 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_20 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h14 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_20 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_21 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h15 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_21 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_22 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h16 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_22 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_23 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h17 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_23 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_24 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h18 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_24 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_25 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h19 == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_25 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_26 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h1a == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_26 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_27 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h1b == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_27 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_28 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h1c == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_28 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_29 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h1d == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_29 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_30 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h1e == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_30 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
    if (reset) begin // @[Registers.scala 14:20]
      reg_31 <= 32'h0; // @[Registers.scala 14:20]
    end else if (io_writeEnable) begin // @[Registers.scala 16:24]
      if (5'h1f == io_writeAddress) begin // @[Registers.scala 17:26]
        reg_31 <= io_writeData; // @[Registers.scala 17:26]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  reg_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  reg_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  reg_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  reg_4 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  reg_5 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  reg_6 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  reg_7 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  reg_8 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  reg_9 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  reg_10 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  reg_11 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  reg_12 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  reg_13 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  reg_14 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  reg_15 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  reg_16 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  reg_17 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  reg_18 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  reg_19 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  reg_20 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  reg_21 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  reg_22 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  reg_23 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  reg_24 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  reg_25 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  reg_26 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  reg_27 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  reg_28 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  reg_29 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  reg_30 = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  reg_31 = _RAND_31[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module vregfile(
  input          clock,
  input          reset,
  input  [4:0]   io_vs1_addr,
  input  [4:0]   io_vs2_addr,
  input  [4:0]   io_vd_addr,
  input  [3:0]   io_lmul_count,
  input  [3:0]   io_lmul_vs1in_vs2in,
  output [127:0] io_vs0_data,
  output [127:0] io_vs1_data,
  output [127:0] io_vs2_data,
  output [127:0] io_vddata_o,
  input  [127:0] io_vd_data,
  input          io_reg_write,
  input          io_reg_read
);
`ifdef RANDOMIZE_REG_INIT
  reg [127:0] _RAND_0;
  reg [127:0] _RAND_1;
  reg [127:0] _RAND_2;
  reg [127:0] _RAND_3;
  reg [127:0] _RAND_4;
  reg [127:0] _RAND_5;
  reg [127:0] _RAND_6;
  reg [127:0] _RAND_7;
  reg [127:0] _RAND_8;
  reg [127:0] _RAND_9;
  reg [127:0] _RAND_10;
  reg [127:0] _RAND_11;
  reg [127:0] _RAND_12;
  reg [127:0] _RAND_13;
  reg [127:0] _RAND_14;
  reg [127:0] _RAND_15;
  reg [127:0] _RAND_16;
  reg [127:0] _RAND_17;
  reg [127:0] _RAND_18;
  reg [127:0] _RAND_19;
  reg [127:0] _RAND_20;
  reg [127:0] _RAND_21;
  reg [127:0] _RAND_22;
  reg [127:0] _RAND_23;
  reg [127:0] _RAND_24;
  reg [127:0] _RAND_25;
  reg [127:0] _RAND_26;
  reg [127:0] _RAND_27;
  reg [127:0] _RAND_28;
  reg [127:0] _RAND_29;
  reg [127:0] _RAND_30;
  reg [127:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [127:0] register_0; // @[Vreg.scala 26:25]
  reg [127:0] register_1; // @[Vreg.scala 26:25]
  reg [127:0] register_2; // @[Vreg.scala 26:25]
  reg [127:0] register_3; // @[Vreg.scala 26:25]
  reg [127:0] register_4; // @[Vreg.scala 26:25]
  reg [127:0] register_5; // @[Vreg.scala 26:25]
  reg [127:0] register_6; // @[Vreg.scala 26:25]
  reg [127:0] register_7; // @[Vreg.scala 26:25]
  reg [127:0] register_8; // @[Vreg.scala 26:25]
  reg [127:0] register_9; // @[Vreg.scala 26:25]
  reg [127:0] register_10; // @[Vreg.scala 26:25]
  reg [127:0] register_11; // @[Vreg.scala 26:25]
  reg [127:0] register_12; // @[Vreg.scala 26:25]
  reg [127:0] register_13; // @[Vreg.scala 26:25]
  reg [127:0] register_14; // @[Vreg.scala 26:25]
  reg [127:0] register_15; // @[Vreg.scala 26:25]
  reg [127:0] register_16; // @[Vreg.scala 26:25]
  reg [127:0] register_17; // @[Vreg.scala 26:25]
  reg [127:0] register_18; // @[Vreg.scala 26:25]
  reg [127:0] register_19; // @[Vreg.scala 26:25]
  reg [127:0] register_20; // @[Vreg.scala 26:25]
  reg [127:0] register_21; // @[Vreg.scala 26:25]
  reg [127:0] register_22; // @[Vreg.scala 26:25]
  reg [127:0] register_23; // @[Vreg.scala 26:25]
  reg [127:0] register_24; // @[Vreg.scala 26:25]
  reg [127:0] register_25; // @[Vreg.scala 26:25]
  reg [127:0] register_26; // @[Vreg.scala 26:25]
  reg [127:0] register_27; // @[Vreg.scala 26:25]
  reg [127:0] register_28; // @[Vreg.scala 26:25]
  reg [127:0] register_29; // @[Vreg.scala 26:25]
  reg [127:0] register_30; // @[Vreg.scala 26:25]
  reg [127:0] register_31; // @[Vreg.scala 26:25]
  wire [4:0] _GEN_332 = {{1'd0}, io_lmul_vs1in_vs2in}; // @[Vreg.scala 27:27]
  wire [4:0] vs1_in = io_vs1_addr + _GEN_332; // @[Vreg.scala 27:27]
  wire [4:0] vs2_in = io_vs2_addr + _GEN_332; // @[Vreg.scala 28:27]
  wire [4:0] _GEN_334 = {{1'd0}, io_lmul_count}; // @[Vreg.scala 29:26]
  wire [4:0] vsd_in = io_vd_addr + _GEN_334; // @[Vreg.scala 29:26]
  wire [127:0] _GEN_1 = 5'h1 == vs1_in ? $signed(register_1) : $signed(register_0); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_2 = 5'h2 == vs1_in ? $signed(register_2) : $signed(_GEN_1); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_3 = 5'h3 == vs1_in ? $signed(register_3) : $signed(_GEN_2); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_4 = 5'h4 == vs1_in ? $signed(register_4) : $signed(_GEN_3); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_5 = 5'h5 == vs1_in ? $signed(register_5) : $signed(_GEN_4); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_6 = 5'h6 == vs1_in ? $signed(register_6) : $signed(_GEN_5); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_7 = 5'h7 == vs1_in ? $signed(register_7) : $signed(_GEN_6); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_8 = 5'h8 == vs1_in ? $signed(register_8) : $signed(_GEN_7); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_9 = 5'h9 == vs1_in ? $signed(register_9) : $signed(_GEN_8); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_10 = 5'ha == vs1_in ? $signed(register_10) : $signed(_GEN_9); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_11 = 5'hb == vs1_in ? $signed(register_11) : $signed(_GEN_10); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_12 = 5'hc == vs1_in ? $signed(register_12) : $signed(_GEN_11); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_13 = 5'hd == vs1_in ? $signed(register_13) : $signed(_GEN_12); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_14 = 5'he == vs1_in ? $signed(register_14) : $signed(_GEN_13); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_15 = 5'hf == vs1_in ? $signed(register_15) : $signed(_GEN_14); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_16 = 5'h10 == vs1_in ? $signed(register_16) : $signed(_GEN_15); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_17 = 5'h11 == vs1_in ? $signed(register_17) : $signed(_GEN_16); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_18 = 5'h12 == vs1_in ? $signed(register_18) : $signed(_GEN_17); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_19 = 5'h13 == vs1_in ? $signed(register_19) : $signed(_GEN_18); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_20 = 5'h14 == vs1_in ? $signed(register_20) : $signed(_GEN_19); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_21 = 5'h15 == vs1_in ? $signed(register_21) : $signed(_GEN_20); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_22 = 5'h16 == vs1_in ? $signed(register_22) : $signed(_GEN_21); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_23 = 5'h17 == vs1_in ? $signed(register_23) : $signed(_GEN_22); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_24 = 5'h18 == vs1_in ? $signed(register_24) : $signed(_GEN_23); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_25 = 5'h19 == vs1_in ? $signed(register_25) : $signed(_GEN_24); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_26 = 5'h1a == vs1_in ? $signed(register_26) : $signed(_GEN_25); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_27 = 5'h1b == vs1_in ? $signed(register_27) : $signed(_GEN_26); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_28 = 5'h1c == vs1_in ? $signed(register_28) : $signed(_GEN_27); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_29 = 5'h1d == vs1_in ? $signed(register_29) : $signed(_GEN_28); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_30 = 5'h1e == vs1_in ? $signed(register_30) : $signed(_GEN_29); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_31 = 5'h1f == vs1_in ? $signed(register_31) : $signed(_GEN_30); // @[Vreg.scala 34:13 Vreg.scala 34:13]
  wire [127:0] _GEN_33 = 5'h1 == vs2_in ? $signed(register_1) : $signed(register_0); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_34 = 5'h2 == vs2_in ? $signed(register_2) : $signed(_GEN_33); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_35 = 5'h3 == vs2_in ? $signed(register_3) : $signed(_GEN_34); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_36 = 5'h4 == vs2_in ? $signed(register_4) : $signed(_GEN_35); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_37 = 5'h5 == vs2_in ? $signed(register_5) : $signed(_GEN_36); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_38 = 5'h6 == vs2_in ? $signed(register_6) : $signed(_GEN_37); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_39 = 5'h7 == vs2_in ? $signed(register_7) : $signed(_GEN_38); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_40 = 5'h8 == vs2_in ? $signed(register_8) : $signed(_GEN_39); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_41 = 5'h9 == vs2_in ? $signed(register_9) : $signed(_GEN_40); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_42 = 5'ha == vs2_in ? $signed(register_10) : $signed(_GEN_41); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_43 = 5'hb == vs2_in ? $signed(register_11) : $signed(_GEN_42); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_44 = 5'hc == vs2_in ? $signed(register_12) : $signed(_GEN_43); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_45 = 5'hd == vs2_in ? $signed(register_13) : $signed(_GEN_44); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_46 = 5'he == vs2_in ? $signed(register_14) : $signed(_GEN_45); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_47 = 5'hf == vs2_in ? $signed(register_15) : $signed(_GEN_46); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_48 = 5'h10 == vs2_in ? $signed(register_16) : $signed(_GEN_47); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_49 = 5'h11 == vs2_in ? $signed(register_17) : $signed(_GEN_48); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_50 = 5'h12 == vs2_in ? $signed(register_18) : $signed(_GEN_49); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_51 = 5'h13 == vs2_in ? $signed(register_19) : $signed(_GEN_50); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_52 = 5'h14 == vs2_in ? $signed(register_20) : $signed(_GEN_51); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_53 = 5'h15 == vs2_in ? $signed(register_21) : $signed(_GEN_52); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_54 = 5'h16 == vs2_in ? $signed(register_22) : $signed(_GEN_53); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_55 = 5'h17 == vs2_in ? $signed(register_23) : $signed(_GEN_54); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_56 = 5'h18 == vs2_in ? $signed(register_24) : $signed(_GEN_55); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_57 = 5'h19 == vs2_in ? $signed(register_25) : $signed(_GEN_56); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_58 = 5'h1a == vs2_in ? $signed(register_26) : $signed(_GEN_57); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_59 = 5'h1b == vs2_in ? $signed(register_27) : $signed(_GEN_58); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_60 = 5'h1c == vs2_in ? $signed(register_28) : $signed(_GEN_59); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_61 = 5'h1d == vs2_in ? $signed(register_29) : $signed(_GEN_60); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_62 = 5'h1e == vs2_in ? $signed(register_30) : $signed(_GEN_61); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_63 = 5'h1f == vs2_in ? $signed(register_31) : $signed(_GEN_62); // @[Vreg.scala 35:13 Vreg.scala 35:13]
  wire [127:0] _GEN_65 = 5'h1 == vsd_in ? $signed(register_1) : $signed(register_0); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_66 = 5'h2 == vsd_in ? $signed(register_2) : $signed(_GEN_65); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_67 = 5'h3 == vsd_in ? $signed(register_3) : $signed(_GEN_66); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_68 = 5'h4 == vsd_in ? $signed(register_4) : $signed(_GEN_67); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_69 = 5'h5 == vsd_in ? $signed(register_5) : $signed(_GEN_68); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_70 = 5'h6 == vsd_in ? $signed(register_6) : $signed(_GEN_69); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_71 = 5'h7 == vsd_in ? $signed(register_7) : $signed(_GEN_70); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_72 = 5'h8 == vsd_in ? $signed(register_8) : $signed(_GEN_71); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_73 = 5'h9 == vsd_in ? $signed(register_9) : $signed(_GEN_72); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_74 = 5'ha == vsd_in ? $signed(register_10) : $signed(_GEN_73); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_75 = 5'hb == vsd_in ? $signed(register_11) : $signed(_GEN_74); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_76 = 5'hc == vsd_in ? $signed(register_12) : $signed(_GEN_75); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_77 = 5'hd == vsd_in ? $signed(register_13) : $signed(_GEN_76); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_78 = 5'he == vsd_in ? $signed(register_14) : $signed(_GEN_77); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_79 = 5'hf == vsd_in ? $signed(register_15) : $signed(_GEN_78); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_80 = 5'h10 == vsd_in ? $signed(register_16) : $signed(_GEN_79); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_81 = 5'h11 == vsd_in ? $signed(register_17) : $signed(_GEN_80); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_82 = 5'h12 == vsd_in ? $signed(register_18) : $signed(_GEN_81); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_83 = 5'h13 == vsd_in ? $signed(register_19) : $signed(_GEN_82); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_84 = 5'h14 == vsd_in ? $signed(register_20) : $signed(_GEN_83); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_85 = 5'h15 == vsd_in ? $signed(register_21) : $signed(_GEN_84); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_86 = 5'h16 == vsd_in ? $signed(register_22) : $signed(_GEN_85); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_87 = 5'h17 == vsd_in ? $signed(register_23) : $signed(_GEN_86); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_88 = 5'h18 == vsd_in ? $signed(register_24) : $signed(_GEN_87); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_89 = 5'h19 == vsd_in ? $signed(register_25) : $signed(_GEN_88); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_90 = 5'h1a == vsd_in ? $signed(register_26) : $signed(_GEN_89); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_91 = 5'h1b == vsd_in ? $signed(register_27) : $signed(_GEN_90); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_92 = 5'h1c == vsd_in ? $signed(register_28) : $signed(_GEN_91); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_93 = 5'h1d == vsd_in ? $signed(register_29) : $signed(_GEN_92); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_94 = 5'h1e == vsd_in ? $signed(register_30) : $signed(_GEN_93); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_95 = 5'h1f == vsd_in ? $signed(register_31) : $signed(_GEN_94); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_96 = 5'h0 == vsd_in ? $signed(io_vd_data) : $signed(register_0); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_97 = 5'h1 == vsd_in ? $signed(io_vd_data) : $signed(register_1); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_98 = 5'h2 == vsd_in ? $signed(io_vd_data) : $signed(register_2); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_99 = 5'h3 == vsd_in ? $signed(io_vd_data) : $signed(register_3); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_100 = 5'h4 == vsd_in ? $signed(io_vd_data) : $signed(register_4); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_101 = 5'h5 == vsd_in ? $signed(io_vd_data) : $signed(register_5); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_102 = 5'h6 == vsd_in ? $signed(io_vd_data) : $signed(register_6); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_103 = 5'h7 == vsd_in ? $signed(io_vd_data) : $signed(register_7); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_104 = 5'h8 == vsd_in ? $signed(io_vd_data) : $signed(register_8); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_105 = 5'h9 == vsd_in ? $signed(io_vd_data) : $signed(register_9); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_106 = 5'ha == vsd_in ? $signed(io_vd_data) : $signed(register_10); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_107 = 5'hb == vsd_in ? $signed(io_vd_data) : $signed(register_11); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_108 = 5'hc == vsd_in ? $signed(io_vd_data) : $signed(register_12); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_109 = 5'hd == vsd_in ? $signed(io_vd_data) : $signed(register_13); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_110 = 5'he == vsd_in ? $signed(io_vd_data) : $signed(register_14); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_111 = 5'hf == vsd_in ? $signed(io_vd_data) : $signed(register_15); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_112 = 5'h10 == vsd_in ? $signed(io_vd_data) : $signed(register_16); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_113 = 5'h11 == vsd_in ? $signed(io_vd_data) : $signed(register_17); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_114 = 5'h12 == vsd_in ? $signed(io_vd_data) : $signed(register_18); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_115 = 5'h13 == vsd_in ? $signed(io_vd_data) : $signed(register_19); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_116 = 5'h14 == vsd_in ? $signed(io_vd_data) : $signed(register_20); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_117 = 5'h15 == vsd_in ? $signed(io_vd_data) : $signed(register_21); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_118 = 5'h16 == vsd_in ? $signed(io_vd_data) : $signed(register_22); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_119 = 5'h17 == vsd_in ? $signed(io_vd_data) : $signed(register_23); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_120 = 5'h18 == vsd_in ? $signed(io_vd_data) : $signed(register_24); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_121 = 5'h19 == vsd_in ? $signed(io_vd_data) : $signed(register_25); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_122 = 5'h1a == vsd_in ? $signed(io_vd_data) : $signed(register_26); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_123 = 5'h1b == vsd_in ? $signed(io_vd_data) : $signed(register_27); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_124 = 5'h1c == vsd_in ? $signed(io_vd_data) : $signed(register_28); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_125 = 5'h1d == vsd_in ? $signed(io_vd_data) : $signed(register_29); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_126 = 5'h1e == vsd_in ? $signed(io_vd_data) : $signed(register_30); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_127 = 5'h1f == vsd_in ? $signed(io_vd_data) : $signed(register_31); // @[Vreg.scala 40:42 Vreg.scala 40:42 Vreg.scala 26:25]
  wire [127:0] _GEN_256 = io_reg_write & io_reg_read ? $signed(_GEN_31) : $signed(128'sh0); // @[Vreg.scala 50:58 Vreg.scala 52:17 Vreg.scala 57:17]
  wire [127:0] _GEN_257 = io_reg_write & io_reg_read ? $signed(_GEN_63) : $signed(128'sh0); // @[Vreg.scala 50:58 Vreg.scala 53:17 Vreg.scala 58:17]
  wire [127:0] _GEN_258 = io_reg_write & io_reg_read ? $signed(register_0) : $signed(128'sh0); // @[Vreg.scala 50:58 Vreg.scala 54:17 Vreg.scala 59:17]
  wire [127:0] _GEN_259 = io_reg_write & io_reg_read ? $signed(_GEN_95) : $signed(128'sh0); // @[Vreg.scala 50:58 Vreg.scala 55:17 Vreg.scala 60:17]
  wire [127:0] _GEN_260 = ~io_reg_write & io_reg_read ? $signed(_GEN_31) : $signed(_GEN_256); // @[Vreg.scala 45:58 Vreg.scala 46:17]
  wire [127:0] _GEN_261 = ~io_reg_write & io_reg_read ? $signed(_GEN_63) : $signed(_GEN_257); // @[Vreg.scala 45:58 Vreg.scala 47:17]
  wire [127:0] _GEN_262 = ~io_reg_write & io_reg_read ? $signed(register_0) : $signed(_GEN_258); // @[Vreg.scala 45:58 Vreg.scala 48:17]
  wire [127:0] _GEN_263 = ~io_reg_write & io_reg_read ? $signed(_GEN_95) : $signed(_GEN_259); // @[Vreg.scala 45:58 Vreg.scala 49:17]
  assign io_vs0_data = io_reg_write & ~io_reg_read ? $signed(128'sh0) : $signed(_GEN_262); // @[Vreg.scala 39:54 Vreg.scala 43:19]
  assign io_vs1_data = io_reg_write & ~io_reg_read ? $signed(128'sh0) : $signed(_GEN_260); // @[Vreg.scala 39:54 Vreg.scala 41:19]
  assign io_vs2_data = io_reg_write & ~io_reg_read ? $signed(128'sh0) : $signed(_GEN_261); // @[Vreg.scala 39:54 Vreg.scala 42:19]
  assign io_vddata_o = io_reg_write & ~io_reg_read ? $signed(128'sh0) : $signed(_GEN_263); // @[Vreg.scala 39:54 Vreg.scala 44:19]
  always @(posedge clock) begin
    if (reset) begin // @[Vreg.scala 26:25]
      register_0 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_0 <= _GEN_96;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_0 <= _GEN_96;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_1 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_1 <= _GEN_97;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_1 <= _GEN_97;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_2 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_2 <= _GEN_98;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_2 <= _GEN_98;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_3 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_3 <= _GEN_99;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_3 <= _GEN_99;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_4 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_4 <= _GEN_100;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_4 <= _GEN_100;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_5 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_5 <= _GEN_101;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_5 <= _GEN_101;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_6 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_6 <= _GEN_102;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_6 <= _GEN_102;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_7 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_7 <= _GEN_103;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_7 <= _GEN_103;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_8 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_8 <= _GEN_104;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_8 <= _GEN_104;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_9 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_9 <= _GEN_105;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_9 <= _GEN_105;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_10 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_10 <= _GEN_106;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_10 <= _GEN_106;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_11 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_11 <= _GEN_107;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_11 <= _GEN_107;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_12 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_12 <= _GEN_108;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_12 <= _GEN_108;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_13 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_13 <= _GEN_109;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_13 <= _GEN_109;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_14 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_14 <= _GEN_110;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_14 <= _GEN_110;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_15 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_15 <= _GEN_111;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_15 <= _GEN_111;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_16 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_16 <= _GEN_112;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_16 <= _GEN_112;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_17 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_17 <= _GEN_113;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_17 <= _GEN_113;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_18 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_18 <= _GEN_114;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_18 <= _GEN_114;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_19 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_19 <= _GEN_115;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_19 <= _GEN_115;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_20 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_20 <= _GEN_116;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_20 <= _GEN_116;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_21 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_21 <= _GEN_117;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_21 <= _GEN_117;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_22 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_22 <= _GEN_118;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_22 <= _GEN_118;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_23 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_23 <= _GEN_119;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_23 <= _GEN_119;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_24 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_24 <= _GEN_120;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_24 <= _GEN_120;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_25 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_25 <= _GEN_121;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_25 <= _GEN_121;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_26 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_26 <= _GEN_122;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_26 <= _GEN_122;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_27 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_27 <= _GEN_123;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_27 <= _GEN_123;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_28 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_28 <= _GEN_124;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_28 <= _GEN_124;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_29 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_29 <= _GEN_125;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_29 <= _GEN_125;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_30 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_30 <= _GEN_126;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_30 <= _GEN_126;
      end
    end
    if (reset) begin // @[Vreg.scala 26:25]
      register_31 <= 128'sh0; // @[Vreg.scala 26:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 39:54]
      register_31 <= _GEN_127;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 45:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 50:58]
        register_31 <= _GEN_127;
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {4{`RANDOM}};
  register_0 = _RAND_0[127:0];
  _RAND_1 = {4{`RANDOM}};
  register_1 = _RAND_1[127:0];
  _RAND_2 = {4{`RANDOM}};
  register_2 = _RAND_2[127:0];
  _RAND_3 = {4{`RANDOM}};
  register_3 = _RAND_3[127:0];
  _RAND_4 = {4{`RANDOM}};
  register_4 = _RAND_4[127:0];
  _RAND_5 = {4{`RANDOM}};
  register_5 = _RAND_5[127:0];
  _RAND_6 = {4{`RANDOM}};
  register_6 = _RAND_6[127:0];
  _RAND_7 = {4{`RANDOM}};
  register_7 = _RAND_7[127:0];
  _RAND_8 = {4{`RANDOM}};
  register_8 = _RAND_8[127:0];
  _RAND_9 = {4{`RANDOM}};
  register_9 = _RAND_9[127:0];
  _RAND_10 = {4{`RANDOM}};
  register_10 = _RAND_10[127:0];
  _RAND_11 = {4{`RANDOM}};
  register_11 = _RAND_11[127:0];
  _RAND_12 = {4{`RANDOM}};
  register_12 = _RAND_12[127:0];
  _RAND_13 = {4{`RANDOM}};
  register_13 = _RAND_13[127:0];
  _RAND_14 = {4{`RANDOM}};
  register_14 = _RAND_14[127:0];
  _RAND_15 = {4{`RANDOM}};
  register_15 = _RAND_15[127:0];
  _RAND_16 = {4{`RANDOM}};
  register_16 = _RAND_16[127:0];
  _RAND_17 = {4{`RANDOM}};
  register_17 = _RAND_17[127:0];
  _RAND_18 = {4{`RANDOM}};
  register_18 = _RAND_18[127:0];
  _RAND_19 = {4{`RANDOM}};
  register_19 = _RAND_19[127:0];
  _RAND_20 = {4{`RANDOM}};
  register_20 = _RAND_20[127:0];
  _RAND_21 = {4{`RANDOM}};
  register_21 = _RAND_21[127:0];
  _RAND_22 = {4{`RANDOM}};
  register_22 = _RAND_22[127:0];
  _RAND_23 = {4{`RANDOM}};
  register_23 = _RAND_23[127:0];
  _RAND_24 = {4{`RANDOM}};
  register_24 = _RAND_24[127:0];
  _RAND_25 = {4{`RANDOM}};
  register_25 = _RAND_25[127:0];
  _RAND_26 = {4{`RANDOM}};
  register_26 = _RAND_26[127:0];
  _RAND_27 = {4{`RANDOM}};
  register_27 = _RAND_27[127:0];
  _RAND_28 = {4{`RANDOM}};
  register_28 = _RAND_28[127:0];
  _RAND_29 = {4{`RANDOM}};
  register_29 = _RAND_29[127:0];
  _RAND_30 = {4{`RANDOM}};
  register_30 = _RAND_30[127:0];
  _RAND_31 = {4{`RANDOM}};
  register_31 = _RAND_31[127:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ImmediateGen(
  input  [31:0] io_instruction,
  output [31:0] io_out
);
  wire [6:0] opcode = io_instruction[6:0]; // @[ImmediateGen.scala 11:30]
  wire  _T_10 = opcode == 7'h3 | opcode == 7'hf | opcode == 7'h13 | opcode == 7'h1b | opcode == 7'h67 | opcode == 7'h73; // @[ImmediateGen.scala 15:97]
  wire [11:0] lo = io_instruction[31:20]; // @[ImmediateGen.scala 17:31]
  wire [19:0] hi = lo[11] ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_13 = {hi,lo}; // @[Cat.scala 30:58]
  wire [19:0] hi_1 = io_instruction[31:12]; // @[ImmediateGen.scala 24:33]
  wire [31:0] _T_17 = {hi_1,12'h0}; // @[Cat.scala 30:58]
  wire [6:0] hi_2 = io_instruction[31:25]; // @[ImmediateGen.scala 30:37]
  wire [4:0] lo_2 = io_instruction[11:7]; // @[ImmediateGen.scala 30:61]
  wire [11:0] lo_3 = {hi_2,lo_2}; // @[Cat.scala 30:58]
  wire [19:0] hi_3 = lo_3[11] ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_21 = {hi_3,hi_2,lo_2}; // @[Cat.scala 30:58]
  wire  hi_hi = io_instruction[31]; // @[ImmediateGen.scala 37:23]
  wire  hi_lo = io_instruction[7]; // @[ImmediateGen.scala 38:23]
  wire [5:0] lo_hi = io_instruction[30:25]; // @[ImmediateGen.scala 39:23]
  wire [3:0] lo_lo = io_instruction[11:8]; // @[ImmediateGen.scala 40:23]
  wire [11:0] hi_lo_1 = {hi_hi,hi_lo,lo_hi,lo_lo}; // @[Cat.scala 30:58]
  wire [18:0] hi_hi_1 = hi_lo_1[11] ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_25 = {hi_hi_1,hi_hi,hi_lo,lo_hi,lo_lo,1'h0}; // @[Cat.scala 30:58]
  wire [7:0] hi_lo_2 = io_instruction[19:12]; // @[ImmediateGen.scala 50:21]
  wire  lo_hi_1 = io_instruction[20]; // @[ImmediateGen.scala 51:21]
  wire [9:0] lo_lo_1 = io_instruction[30:21]; // @[ImmediateGen.scala 52:21]
  wire [19:0] hi_lo_3 = {hi_hi,hi_lo_2,lo_hi_1,lo_lo_1}; // @[Cat.scala 30:58]
  wire [10:0] hi_hi_3 = hi_lo_3[19] ? 11'h7ff : 11'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_28 = {hi_hi_3,hi_hi,hi_lo_2,lo_hi_1,lo_lo_1,1'h0}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_0 = opcode == 7'h63 ? _T_25 : _T_28; // @[ImmediateGen.scala 35:32 ImmediateGen.scala 43:14 ImmediateGen.scala 55:12]
  wire [31:0] _GEN_1 = opcode == 7'h23 ? _T_21 : _GEN_0; // @[ImmediateGen.scala 29:32 ImmediateGen.scala 32:14]
  wire [31:0] _GEN_2 = opcode == 7'h17 | opcode == 7'h37 ? _T_17 : _GEN_1; // @[ImmediateGen.scala 23:51 ImmediateGen.scala 26:14]
  assign io_out = _T_10 ? _T_13 : _GEN_2; // @[ImmediateGen.scala 16:5 ImmediateGen.scala 19:12]
endmodule
module ImmdValGen1(
  input  [31:0] io_instruction,
  output [31:0] io_z_imm,
  output [31:0] io_addi_imm
);
  wire [20:0] hi = io_instruction[30] ? 21'h1fffff : 21'h0; // @[Bitwise.scala 72:12]
  wire [10:0] lo = io_instruction[30:20]; // @[Vimmgen.scala 14:67]
  wire [4:0] lo_1 = io_instruction[19:15]; // @[Vimmgen.scala 15:57]
  assign io_z_imm = {hi,lo}; // @[Vimmgen.scala 14:77]
  assign io_addi_imm = {27'h0,lo_1}; // @[Vimmgen.scala 15:66]
endmodule
module v_csr(
  input         clock,
  input         reset,
  input  [10:0] io_vtypei,
  input  [31:0] io_vl,
  input         io_vset,
  output [31:0] io_vl_out,
  output [31:0] io_vtype_out,
  output [31:0] io_vstart_out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] vtypeReg; // @[Vcsr.scala 17:23]
  reg [31:0] vlReg; // @[Vcsr.scala 18:20]
  wire [30:0] _T_2 = {20'h0,io_vtypei}; // @[Vcsr.scala 22:47]
  assign io_vl_out = vlReg; // @[Vcsr.scala 26:11]
  assign io_vtype_out = vtypeReg; // @[Vcsr.scala 27:14]
  assign io_vstart_out = 32'sh0; // @[Vcsr.scala 28:15]
  always @(posedge clock) begin
    if (reset) begin // @[Vcsr.scala 17:23]
      vtypeReg <= 32'sh0; // @[Vcsr.scala 17:23]
    end else if (io_vset) begin // @[Vcsr.scala 21:24]
      vtypeReg <= {{1{_T_2[30]}},_T_2}; // @[Vcsr.scala 22:14]
    end
    if (reset) begin // @[Vcsr.scala 18:20]
      vlReg <= 32'sh0; // @[Vcsr.scala 18:20]
    end else if (io_vset) begin // @[Vcsr.scala 21:24]
      vlReg <= io_vl; // @[Vcsr.scala 23:11]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  vtypeReg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  vlReg = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module BranchUnit(
  input         io_branch,
  input  [2:0]  io_funct3,
  input  [31:0] io_rd1,
  input  [31:0] io_rd2,
  input         io_take_branch,
  output        io_taken
);
  wire  _T = 3'h0 == io_funct3; // @[Conditional.scala 37:30]
  wire  _T_2 = 3'h1 == io_funct3; // @[Conditional.scala 37:30]
  wire  _T_4 = 3'h4 == io_funct3; // @[Conditional.scala 37:30]
  wire  _T_8 = 3'h5 == io_funct3; // @[Conditional.scala 37:30]
  wire  _T_12 = 3'h6 == io_funct3; // @[Conditional.scala 37:30]
  wire  _T_15 = io_rd1 >= io_rd2; // @[BranchUnit.scala 28:32]
  wire  _GEN_1 = _T_12 ? io_rd1 < io_rd2 : _T_15; // @[Conditional.scala 39:67 BranchUnit.scala 27:21]
  wire  _GEN_2 = _T_8 ? $signed(io_rd1) >= $signed(io_rd2) : _GEN_1; // @[Conditional.scala 39:67 BranchUnit.scala 26:21]
  wire  _GEN_3 = _T_4 ? $signed(io_rd1) < $signed(io_rd2) : _GEN_2; // @[Conditional.scala 39:67 BranchUnit.scala 25:21]
  wire  _GEN_4 = _T_2 ? io_rd1 != io_rd2 : _GEN_3; // @[Conditional.scala 39:67 BranchUnit.scala 24:21]
  wire  check = _T ? io_rd1 == io_rd2 : _GEN_4; // @[Conditional.scala 40:58 BranchUnit.scala 23:21]
  assign io_taken = check & io_branch & io_take_branch; // @[BranchUnit.scala 31:33]
endmodule
module InstructionDecode(
  input          clock,
  input          reset,
  input  [31:0]  io_id_instruction,
  input  [31:0]  io_writeData,
  input  [4:0]   io_writeReg,
  input  [31:0]  io_pcAddress,
  input          io_ctl_writeEnable,
  input          io_id_ex_mem_read,
  input          io_ex_mem_mem_read,
  input          io_dmem_resp_valid,
  input  [4:0]   io_id_ex_rd,
  input  [4:0]   io_ex_mem_rd,
  input          io_id_ex_branch,
  input  [31:0]  io_ex_mem_ins,
  input  [31:0]  io_mem_wb_ins,
  input  [31:0]  io_ex_ins,
  input  [31:0]  io_ex_result,
  input  [31:0]  io_ex_mem_result,
  input  [31:0]  io_mem_wb_result,
  input          io_id_ex_regWr,
  input          io_ex_mem_regWr,
  input          io_csr_Ex,
  input          io_csr_Mem,
  input          io_csr_Wb,
  input  [31:0]  io_csr_Ex_data,
  input  [31:0]  io_csr_Mem_data,
  input  [31:0]  io_csr_Wb_data,
  input  [31:0]  io_dmem_data,
  output [31:0]  io_immediate,
  output [4:0]   io_writeRegAddress,
  output [31:0]  io_readData1,
  output [31:0]  io_readData2,
  output [6:0]   io_func7,
  output [2:0]   io_func3,
  output [5:0]   io_func6,
  output         io_ctl_aluSrc,
  output [1:0]   io_ctl_memToReg,
  output         io_ctl_regWrite,
  output         io_ctl_memRead,
  output         io_ctl_memWrite,
  output         io_ctl_branch,
  output [1:0]   io_ctl_aluOp,
  output [1:0]   io_ctl_jump,
  output         io_ctl_v_RegWrite,
  output         io_ctl_v_opBsel,
  output [3:0]   io_ctl_v_Ex_sel,
  output [4:0]   io_ctl_v_aluop,
  output         io_ctl_v_vset,
  output [3:0]   io_ctl_v_load,
  output         io_ctl_v_ins,
  input  [127:0] io_write_data,
  input  [4:0]   io_wb_addr,
  input          io_wb_RegWrite,
  input  [3:0]   io_id_lmul_count,
  input  [3:0]   io_id_lmul_vs1in_vs2in,
  output [127:0] io_vs0_data,
  output [127:0] io_vs1_data,
  output [127:0] io_vs2_data,
  output         io_reg_write,
  output [4:0]   io_vs1_addr,
  output [4:0]   io_vs2_addr,
  output [4:0]   io_vd_addr,
  output [127:0] io_vd_data,
  output [31:0]  io_v_z_imm,
  output [31:0]  io_v_addi_imm,
  input  [10:0]  io_vtypei,
  output [10:0]  io_vtypei_out,
  input  [31:0]  io_vl,
  input          io_ctl_vset,
  output [31:0]  io_vl_out,
  output [31:0]  io_vstart_out,
  output [1:0]   io_ctl_aluSrc1,
  output         io_hdu_pcWrite,
  output         io_hdu_if_reg_write,
  output         io_pcSrc,
  output [31:0]  io_pcPlusOffset,
  output         io_ifid_flush,
  output         io_stall,
  input  [31:0]  io_csr_i_misa,
  input  [31:0]  io_csr_i_mhartid,
  output [31:0]  io_csr_o_data,
  output         io_is_csr,
  output [31:0]  io_fscr_o_data,
  output [4:0]   io_rs_addr_0,
  output [4:0]   io_rs_addr_1
);
  wire  csr_clock; // @[InstructionDecode.scala 112:19]
  wire  csr_reset; // @[InstructionDecode.scala 112:19]
  wire [31:0] csr_io_i_misa_value; // @[InstructionDecode.scala 112:19]
  wire [31:0] csr_io_i_mhartid_value; // @[InstructionDecode.scala 112:19]
  wire [31:0] csr_io_i_data; // @[InstructionDecode.scala 112:19]
  wire [4:0] csr_io_i_imm; // @[InstructionDecode.scala 112:19]
  wire [31:0] csr_io_o_data; // @[InstructionDecode.scala 112:19]
  wire [2:0] csr_io_i_opr; // @[InstructionDecode.scala 112:19]
  wire [11:0] csr_io_i_addr; // @[InstructionDecode.scala 112:19]
  wire  csr_io_i_w_en; // @[InstructionDecode.scala 112:19]
  wire [31:0] csr_io_fcsr_o_data; // @[InstructionDecode.scala 112:19]
  wire  csrController_io_regWrExecute; // @[InstructionDecode.scala 124:29]
  wire [4:0] csrController_io_rdSelExecute; // @[InstructionDecode.scala 124:29]
  wire  csrController_io_csrWrExecute; // @[InstructionDecode.scala 124:29]
  wire  csrController_io_regWrMemory; // @[InstructionDecode.scala 124:29]
  wire [4:0] csrController_io_rdSelMemory; // @[InstructionDecode.scala 124:29]
  wire  csrController_io_csrWrMemory; // @[InstructionDecode.scala 124:29]
  wire  csrController_io_regWrWriteback; // @[InstructionDecode.scala 124:29]
  wire [4:0] csrController_io_rdSelWriteback; // @[InstructionDecode.scala 124:29]
  wire  csrController_io_csrWrWriteback; // @[InstructionDecode.scala 124:29]
  wire [4:0] csrController_io_rs1SelDecode; // @[InstructionDecode.scala 124:29]
  wire  csrController_io_csrInstDecode; // @[InstructionDecode.scala 124:29]
  wire [2:0] csrController_io_forwardRS1; // @[InstructionDecode.scala 124:29]
  wire  hdu_io_id_ex_memRead; // @[InstructionDecode.scala 139:19]
  wire  hdu_io_ex_mem_memRead; // @[InstructionDecode.scala 139:19]
  wire  hdu_io_id_ex_branch; // @[InstructionDecode.scala 139:19]
  wire [4:0] hdu_io_id_ex_rd; // @[InstructionDecode.scala 139:19]
  wire [4:0] hdu_io_ex_mem_rd; // @[InstructionDecode.scala 139:19]
  wire [4:0] hdu_io_id_rs1; // @[InstructionDecode.scala 139:19]
  wire [4:0] hdu_io_id_rs2; // @[InstructionDecode.scala 139:19]
  wire  hdu_io_taken; // @[InstructionDecode.scala 139:19]
  wire [1:0] hdu_io_jump; // @[InstructionDecode.scala 139:19]
  wire  hdu_io_branch; // @[InstructionDecode.scala 139:19]
  wire  hdu_io_if_reg_write; // @[InstructionDecode.scala 139:19]
  wire  hdu_io_pc_write; // @[InstructionDecode.scala 139:19]
  wire  hdu_io_ctl_mux; // @[InstructionDecode.scala 139:19]
  wire  hdu_io_ifid_flush; // @[InstructionDecode.scala 139:19]
  wire  hdu_io_take_branch; // @[InstructionDecode.scala 139:19]
  wire [31:0] control_io_in; // @[InstructionDecode.scala 154:23]
  wire  control_io_aluSrc; // @[InstructionDecode.scala 154:23]
  wire [1:0] control_io_memToReg; // @[InstructionDecode.scala 154:23]
  wire  control_io_regWrite; // @[InstructionDecode.scala 154:23]
  wire  control_io_memRead; // @[InstructionDecode.scala 154:23]
  wire  control_io_memWrite; // @[InstructionDecode.scala 154:23]
  wire  control_io_branch; // @[InstructionDecode.scala 154:23]
  wire [1:0] control_io_aluOp; // @[InstructionDecode.scala 154:23]
  wire [1:0] control_io_jump; // @[InstructionDecode.scala 154:23]
  wire [1:0] control_io_aluSrc1; // @[InstructionDecode.scala 154:23]
  wire [31:0] Vcontrol_io_Instruction; // @[InstructionDecode.scala 171:24]
  wire  Vcontrol_io_RegWrite; // @[InstructionDecode.scala 171:24]
  wire  Vcontrol_io_opBsel; // @[InstructionDecode.scala 171:24]
  wire [3:0] Vcontrol_io_Ex_sel; // @[InstructionDecode.scala 171:24]
  wire [4:0] Vcontrol_io_aluop; // @[InstructionDecode.scala 171:24]
  wire  Vcontrol_io_vset; // @[InstructionDecode.scala 171:24]
  wire [3:0] Vcontrol_io_v_load; // @[InstructionDecode.scala 171:24]
  wire  Vcontrol_io_v_ins; // @[InstructionDecode.scala 171:24]
  wire  Vcontrol_io_RegRead; // @[InstructionDecode.scala 171:24]
  wire  registers_clock; // @[InstructionDecode.scala 183:25]
  wire  registers_reset; // @[InstructionDecode.scala 183:25]
  wire [4:0] registers_io_readAddress_0; // @[InstructionDecode.scala 183:25]
  wire [4:0] registers_io_readAddress_1; // @[InstructionDecode.scala 183:25]
  wire  registers_io_writeEnable; // @[InstructionDecode.scala 183:25]
  wire [4:0] registers_io_writeAddress; // @[InstructionDecode.scala 183:25]
  wire [31:0] registers_io_writeData; // @[InstructionDecode.scala 183:25]
  wire [31:0] registers_io_readData_0; // @[InstructionDecode.scala 183:25]
  wire [31:0] registers_io_readData_1; // @[InstructionDecode.scala 183:25]
  wire  v_registers_clock; // @[InstructionDecode.scala 199:27]
  wire  v_registers_reset; // @[InstructionDecode.scala 199:27]
  wire [4:0] v_registers_io_vs1_addr; // @[InstructionDecode.scala 199:27]
  wire [4:0] v_registers_io_vs2_addr; // @[InstructionDecode.scala 199:27]
  wire [4:0] v_registers_io_vd_addr; // @[InstructionDecode.scala 199:27]
  wire [3:0] v_registers_io_lmul_count; // @[InstructionDecode.scala 199:27]
  wire [3:0] v_registers_io_lmul_vs1in_vs2in; // @[InstructionDecode.scala 199:27]
  wire [127:0] v_registers_io_vs0_data; // @[InstructionDecode.scala 199:27]
  wire [127:0] v_registers_io_vs1_data; // @[InstructionDecode.scala 199:27]
  wire [127:0] v_registers_io_vs2_data; // @[InstructionDecode.scala 199:27]
  wire [127:0] v_registers_io_vddata_o; // @[InstructionDecode.scala 199:27]
  wire [127:0] v_registers_io_vd_data; // @[InstructionDecode.scala 199:27]
  wire  v_registers_io_reg_write; // @[InstructionDecode.scala 199:27]
  wire  v_registers_io_reg_read; // @[InstructionDecode.scala 199:27]
  wire [31:0] immediate_io_instruction; // @[InstructionDecode.scala 246:25]
  wire [31:0] immediate_io_out; // @[InstructionDecode.scala 246:25]
  wire [31:0] v_immediate_io_instruction; // @[InstructionDecode.scala 250:27]
  wire [31:0] v_immediate_io_z_imm; // @[InstructionDecode.scala 250:27]
  wire [31:0] v_immediate_io_addi_imm; // @[InstructionDecode.scala 250:27]
  wire  vec_csr_clock; // @[InstructionDecode.scala 256:23]
  wire  vec_csr_reset; // @[InstructionDecode.scala 256:23]
  wire [10:0] vec_csr_io_vtypei; // @[InstructionDecode.scala 256:23]
  wire [31:0] vec_csr_io_vl; // @[InstructionDecode.scala 256:23]
  wire  vec_csr_io_vset; // @[InstructionDecode.scala 256:23]
  wire [31:0] vec_csr_io_vl_out; // @[InstructionDecode.scala 256:23]
  wire [31:0] vec_csr_io_vtype_out; // @[InstructionDecode.scala 256:23]
  wire [31:0] vec_csr_io_vstart_out; // @[InstructionDecode.scala 256:23]
  wire  bu_io_branch; // @[InstructionDecode.scala 289:18]
  wire [2:0] bu_io_funct3; // @[InstructionDecode.scala 289:18]
  wire [31:0] bu_io_rd1; // @[InstructionDecode.scala 289:18]
  wire [31:0] bu_io_rd2; // @[InstructionDecode.scala 289:18]
  wire  bu_io_take_branch; // @[InstructionDecode.scala 289:18]
  wire  bu_io_taken; // @[InstructionDecode.scala 289:18]
  wire [31:0] _T_17 = io_csr_Wb ? io_csr_Wb_data : io_writeData; // @[InstructionDecode.scala 194:34]
  wire [31:0] _GEN_5 = io_id_instruction[19:15] == 5'h0 ? 32'h0 : io_writeData; // @[InstructionDecode.scala 227:30 InstructionDecode.scala 228:20 InstructionDecode.scala 230:20]
  wire [31:0] _GEN_7 = io_id_instruction[24:20] == 5'h0 ? 32'h0 : io_writeData; // @[InstructionDecode.scala 236:30 InstructionDecode.scala 237:20 InstructionDecode.scala 239:20]
  wire [10:0] _T_31 = io_id_instruction[30:20]; // @[InstructionDecode.scala 262:43]
  wire  _T_33 = io_id_instruction[19:15] == io_ex_mem_ins[11:7]; // @[InstructionDecode.scala 271:20]
  wire  _T_35 = io_id_instruction[19:15] == io_mem_wb_ins[11:7]; // @[InstructionDecode.scala 273:26]
  wire [31:0] _GEN_9 = io_id_instruction[19:15] == io_mem_wb_ins[11:7] ? io_mem_wb_result : io_readData1; // @[InstructionDecode.scala 273:52 InstructionDecode.scala 274:14 InstructionDecode.scala 277:14]
  wire [31:0] _GEN_11 = io_id_instruction[24:20] == io_mem_wb_ins[11:7] ? io_mem_wb_result : io_readData2; // @[InstructionDecode.scala 281:52 InstructionDecode.scala 282:14 InstructionDecode.scala 285:14]
  wire  _T_42 = io_id_instruction[19:15] == io_ex_ins[11:7]; // @[InstructionDecode.scala 299:22]
  wire [31:0] _GEN_13 = _T_42 ? io_ex_result : io_readData1; // @[InstructionDecode.scala 305:47 InstructionDecode.scala 306:14 InstructionDecode.scala 308:16]
  wire [31:0] _GEN_14 = _T_35 ? io_mem_wb_result : _GEN_13; // @[InstructionDecode.scala 303:52 InstructionDecode.scala 304:14]
  wire [31:0] _GEN_15 = _T_33 ? io_ex_mem_result : _GEN_14; // @[InstructionDecode.scala 301:54 InstructionDecode.scala 302:14]
  wire [31:0] j_offset = io_id_instruction[19:15] == io_ex_ins[11:7] ? io_ex_result : _GEN_15; // @[InstructionDecode.scala 299:43 InstructionDecode.scala 300:16]
  wire [31:0] _T_51 = io_pcAddress + io_immediate; // @[InstructionDecode.scala 313:37]
  wire [31:0] _T_54 = j_offset + io_immediate; // @[InstructionDecode.scala 315:35]
  wire [31:0] _T_56 = io_pcAddress + immediate_io_out; // @[InstructionDecode.scala 318:39]
  wire [31:0] _GEN_17 = io_ctl_jump == 2'h2 ? _T_54 : _T_56; // @[InstructionDecode.scala 314:35 InstructionDecode.scala 315:23 InstructionDecode.scala 318:23]
  wire  _T_66 = io_func3 == 3'h5; // @[InstructionDecode.scala 333:107]
  wire [31:0] _T_79 = io_ex_mem_mem_read ? io_dmem_data : io_ex_mem_result; // @[InstructionDecode.scala 343:15]
  wire [31:0] _T_81 = 3'h1 == csrController_io_forwardRS1 ? io_ex_result : registers_io_readData_1; // @[Mux.scala 80:57]
  wire [31:0] _T_83 = 3'h2 == csrController_io_forwardRS1 ? _T_79 : _T_81; // @[Mux.scala 80:57]
  wire [31:0] _T_85 = 3'h3 == csrController_io_forwardRS1 ? io_writeData : _T_83; // @[Mux.scala 80:57]
  wire [31:0] _T_87 = 3'h4 == csrController_io_forwardRS1 ? io_csr_Ex_data : _T_85; // @[Mux.scala 80:57]
  wire [31:0] _T_89 = 3'h5 == csrController_io_forwardRS1 ? io_csr_Mem_data : _T_87; // @[Mux.scala 80:57]
  CSR csr ( // @[InstructionDecode.scala 112:19]
    .clock(csr_clock),
    .reset(csr_reset),
    .io_i_misa_value(csr_io_i_misa_value),
    .io_i_mhartid_value(csr_io_i_mhartid_value),
    .io_i_data(csr_io_i_data),
    .io_i_imm(csr_io_i_imm),
    .io_o_data(csr_io_o_data),
    .io_i_opr(csr_io_i_opr),
    .io_i_addr(csr_io_i_addr),
    .io_i_w_en(csr_io_i_w_en),
    .io_fcsr_o_data(csr_io_fcsr_o_data)
  );
  CSRController csrController ( // @[InstructionDecode.scala 124:29]
    .io_regWrExecute(csrController_io_regWrExecute),
    .io_rdSelExecute(csrController_io_rdSelExecute),
    .io_csrWrExecute(csrController_io_csrWrExecute),
    .io_regWrMemory(csrController_io_regWrMemory),
    .io_rdSelMemory(csrController_io_rdSelMemory),
    .io_csrWrMemory(csrController_io_csrWrMemory),
    .io_regWrWriteback(csrController_io_regWrWriteback),
    .io_rdSelWriteback(csrController_io_rdSelWriteback),
    .io_csrWrWriteback(csrController_io_csrWrWriteback),
    .io_rs1SelDecode(csrController_io_rs1SelDecode),
    .io_csrInstDecode(csrController_io_csrInstDecode),
    .io_forwardRS1(csrController_io_forwardRS1)
  );
  HazardUnit hdu ( // @[InstructionDecode.scala 139:19]
    .io_id_ex_memRead(hdu_io_id_ex_memRead),
    .io_ex_mem_memRead(hdu_io_ex_mem_memRead),
    .io_id_ex_branch(hdu_io_id_ex_branch),
    .io_id_ex_rd(hdu_io_id_ex_rd),
    .io_ex_mem_rd(hdu_io_ex_mem_rd),
    .io_id_rs1(hdu_io_id_rs1),
    .io_id_rs2(hdu_io_id_rs2),
    .io_taken(hdu_io_taken),
    .io_jump(hdu_io_jump),
    .io_branch(hdu_io_branch),
    .io_if_reg_write(hdu_io_if_reg_write),
    .io_pc_write(hdu_io_pc_write),
    .io_ctl_mux(hdu_io_ctl_mux),
    .io_ifid_flush(hdu_io_ifid_flush),
    .io_take_branch(hdu_io_take_branch)
  );
  Control control ( // @[InstructionDecode.scala 154:23]
    .io_in(control_io_in),
    .io_aluSrc(control_io_aluSrc),
    .io_memToReg(control_io_memToReg),
    .io_regWrite(control_io_regWrite),
    .io_memRead(control_io_memRead),
    .io_memWrite(control_io_memWrite),
    .io_branch(control_io_branch),
    .io_aluOp(control_io_aluOp),
    .io_jump(control_io_jump),
    .io_aluSrc1(control_io_aluSrc1)
  );
  controldec Vcontrol ( // @[InstructionDecode.scala 171:24]
    .io_Instruction(Vcontrol_io_Instruction),
    .io_RegWrite(Vcontrol_io_RegWrite),
    .io_opBsel(Vcontrol_io_opBsel),
    .io_Ex_sel(Vcontrol_io_Ex_sel),
    .io_aluop(Vcontrol_io_aluop),
    .io_vset(Vcontrol_io_vset),
    .io_v_load(Vcontrol_io_v_load),
    .io_v_ins(Vcontrol_io_v_ins),
    .io_RegRead(Vcontrol_io_RegRead)
  );
  Registers registers ( // @[InstructionDecode.scala 183:25]
    .clock(registers_clock),
    .reset(registers_reset),
    .io_readAddress_0(registers_io_readAddress_0),
    .io_readAddress_1(registers_io_readAddress_1),
    .io_writeEnable(registers_io_writeEnable),
    .io_writeAddress(registers_io_writeAddress),
    .io_writeData(registers_io_writeData),
    .io_readData_0(registers_io_readData_0),
    .io_readData_1(registers_io_readData_1)
  );
  vregfile v_registers ( // @[InstructionDecode.scala 199:27]
    .clock(v_registers_clock),
    .reset(v_registers_reset),
    .io_vs1_addr(v_registers_io_vs1_addr),
    .io_vs2_addr(v_registers_io_vs2_addr),
    .io_vd_addr(v_registers_io_vd_addr),
    .io_lmul_count(v_registers_io_lmul_count),
    .io_lmul_vs1in_vs2in(v_registers_io_lmul_vs1in_vs2in),
    .io_vs0_data(v_registers_io_vs0_data),
    .io_vs1_data(v_registers_io_vs1_data),
    .io_vs2_data(v_registers_io_vs2_data),
    .io_vddata_o(v_registers_io_vddata_o),
    .io_vd_data(v_registers_io_vd_data),
    .io_reg_write(v_registers_io_reg_write),
    .io_reg_read(v_registers_io_reg_read)
  );
  ImmediateGen immediate ( // @[InstructionDecode.scala 246:25]
    .io_instruction(immediate_io_instruction),
    .io_out(immediate_io_out)
  );
  ImmdValGen1 v_immediate ( // @[InstructionDecode.scala 250:27]
    .io_instruction(v_immediate_io_instruction),
    .io_z_imm(v_immediate_io_z_imm),
    .io_addi_imm(v_immediate_io_addi_imm)
  );
  v_csr vec_csr ( // @[InstructionDecode.scala 256:23]
    .clock(vec_csr_clock),
    .reset(vec_csr_reset),
    .io_vtypei(vec_csr_io_vtypei),
    .io_vl(vec_csr_io_vl),
    .io_vset(vec_csr_io_vset),
    .io_vl_out(vec_csr_io_vl_out),
    .io_vtype_out(vec_csr_io_vtype_out),
    .io_vstart_out(vec_csr_io_vstart_out)
  );
  BranchUnit bu ( // @[InstructionDecode.scala 289:18]
    .io_branch(bu_io_branch),
    .io_funct3(bu_io_funct3),
    .io_rd1(bu_io_rd1),
    .io_rd2(bu_io_rd2),
    .io_take_branch(bu_io_take_branch),
    .io_taken(bu_io_taken)
  );
  assign io_immediate = immediate_io_out; // @[InstructionDecode.scala 248:16]
  assign io_writeRegAddress = io_id_instruction[11:7]; // @[InstructionDecode.scala 330:42]
  assign io_readData1 = io_ctl_writeEnable & io_writeReg == io_id_instruction[19:15] ? _GEN_5 : registers_io_readData_0; // @[InstructionDecode.scala 226:60 InstructionDecode.scala 233:18]
  assign io_readData2 = io_ctl_writeEnable & io_writeReg == io_id_instruction[24:20] ? _GEN_7 : registers_io_readData_1; // @[InstructionDecode.scala 235:60 InstructionDecode.scala 242:18]
  assign io_func7 = io_id_instruction[6:0] == 7'h33 | io_id_instruction[6:0] == 7'h13 & io_func3 == 3'h5 ?
    io_id_instruction[31:25] : 7'h0; // @[InstructionDecode.scala 333:117 InstructionDecode.scala 334:14 InstructionDecode.scala 336:14]
  assign io_func3 = io_id_instruction[14:12]; // @[InstructionDecode.scala 331:32]
  assign io_func6 = io_id_instruction[31:26]; // @[InstructionDecode.scala 332:32]
  assign io_ctl_aluSrc = control_io_aluSrc; // @[InstructionDecode.scala 157:17]
  assign io_ctl_memToReg = control_io_memToReg; // @[InstructionDecode.scala 161:19]
  assign io_ctl_regWrite = hdu_io_ctl_mux & io_id_instruction != 32'h13 & control_io_regWrite; // @[InstructionDecode.scala 163:57 InstructionDecode.scala 165:21 InstructionDecode.scala 168:21]
  assign io_ctl_memRead = control_io_memRead; // @[InstructionDecode.scala 160:18]
  assign io_ctl_memWrite = hdu_io_ctl_mux & io_id_instruction != 32'h13 & control_io_memWrite; // @[InstructionDecode.scala 163:57 InstructionDecode.scala 164:21 InstructionDecode.scala 167:21]
  assign io_ctl_branch = control_io_branch; // @[InstructionDecode.scala 159:17]
  assign io_ctl_aluOp = control_io_aluOp; // @[InstructionDecode.scala 156:16]
  assign io_ctl_jump = control_io_jump; // @[InstructionDecode.scala 162:15]
  assign io_ctl_v_RegWrite = Vcontrol_io_RegWrite; // @[InstructionDecode.scala 174:21]
  assign io_ctl_v_opBsel = Vcontrol_io_opBsel; // @[InstructionDecode.scala 175:19]
  assign io_ctl_v_Ex_sel = Vcontrol_io_Ex_sel; // @[InstructionDecode.scala 176:19]
  assign io_ctl_v_aluop = Vcontrol_io_aluop; // @[InstructionDecode.scala 177:18]
  assign io_ctl_v_vset = Vcontrol_io_vset; // @[InstructionDecode.scala 178:17]
  assign io_ctl_v_load = Vcontrol_io_v_load; // @[InstructionDecode.scala 179:17]
  assign io_ctl_v_ins = Vcontrol_io_v_ins; // @[InstructionDecode.scala 180:16]
  assign io_vs0_data = v_registers_io_vs0_data; // @[InstructionDecode.scala 208:15]
  assign io_vs1_data = v_registers_io_vs1_data; // @[InstructionDecode.scala 209:15]
  assign io_vs2_data = v_registers_io_vs2_data; // @[InstructionDecode.scala 210:15]
  assign io_reg_write = Vcontrol_io_RegWrite; // @[InstructionDecode.scala 212:16]
  assign io_vs1_addr = io_id_instruction[19:15]; // @[InstructionDecode.scala 213:35]
  assign io_vs2_addr = io_id_instruction[24:20]; // @[InstructionDecode.scala 214:35]
  assign io_vd_addr = io_id_instruction[11:7]; // @[InstructionDecode.scala 215:34]
  assign io_vd_data = v_registers_io_vddata_o; // @[InstructionDecode.scala 211:14]
  assign io_v_z_imm = {{21{_T_31[10]}},_T_31}; // @[InstructionDecode.scala 262:43]
  assign io_v_addi_imm = v_immediate_io_addi_imm; // @[InstructionDecode.scala 253:17]
  assign io_vtypei_out = vec_csr_io_vtype_out[10:0]; // @[InstructionDecode.scala 264:17]
  assign io_vl_out = vec_csr_io_vl_out; // @[InstructionDecode.scala 263:13]
  assign io_vstart_out = vec_csr_io_vstart_out; // @[InstructionDecode.scala 265:17]
  assign io_ctl_aluSrc1 = control_io_aluSrc1; // @[InstructionDecode.scala 158:18]
  assign io_hdu_pcWrite = hdu_io_pc_write; // @[InstructionDecode.scala 150:18]
  assign io_hdu_if_reg_write = hdu_io_if_reg_write; // @[InstructionDecode.scala 151:23]
  assign io_pcSrc = bu_io_taken | io_ctl_jump != 2'h0; // @[InstructionDecode.scala 321:20]
  assign io_pcPlusOffset = io_ctl_jump == 2'h1 ? _T_51 : _GEN_17; // @[InstructionDecode.scala 312:29 InstructionDecode.scala 313:21]
  assign io_ifid_flush = hdu_io_ifid_flush; // @[InstructionDecode.scala 328:17]
  assign io_stall = io_func7 == 7'h1 & (io_func3 == 3'h4 | _T_66 | io_func3 == 3'h6 | io_func3 == 3'h7); // @[InstructionDecode.scala 339:32]
  assign io_csr_o_data = csr_io_o_data; // @[InstructionDecode.scala 121:31]
  assign io_is_csr = io_id_instruction[6:0] == 7'h73; // @[InstructionDecode.scala 120:58]
  assign io_fscr_o_data = csr_io_fcsr_o_data; // @[InstructionDecode.scala 122:31]
  assign io_rs_addr_0 = io_id_instruction[19:15]; // @[InstructionDecode.scala 185:38]
  assign io_rs_addr_1 = io_id_instruction[24:20]; // @[InstructionDecode.scala 186:38]
  assign csr_clock = clock;
  assign csr_reset = reset;
  assign csr_io_i_misa_value = io_csr_i_misa; // @[InstructionDecode.scala 113:31]
  assign csr_io_i_mhartid_value = io_csr_i_mhartid; // @[InstructionDecode.scala 114:31]
  assign csr_io_i_data = 3'h6 == csrController_io_forwardRS1 ? io_csr_Wb_data : _T_89; // @[Mux.scala 80:57]
  assign csr_io_i_imm = io_id_instruction[19:15]; // @[InstructionDecode.scala 115:51]
  assign csr_io_i_opr = io_id_instruction[14:12]; // @[InstructionDecode.scala 116:51]
  assign csr_io_i_addr = io_id_instruction[31:20]; // @[InstructionDecode.scala 117:51]
  assign csr_io_i_w_en = io_is_csr & io_id_instruction[19:15] != 5'h0; // @[InstructionDecode.scala 118:44]
  assign csrController_io_regWrExecute = io_id_ex_regWr; // @[InstructionDecode.scala 125:36]
  assign csrController_io_rdSelExecute = io_id_ex_rd; // @[InstructionDecode.scala 126:36]
  assign csrController_io_csrWrExecute = io_csr_Ex; // @[InstructionDecode.scala 127:36]
  assign csrController_io_regWrMemory = io_ex_mem_regWr; // @[InstructionDecode.scala 128:36]
  assign csrController_io_rdSelMemory = io_ex_mem_rd; // @[InstructionDecode.scala 129:36]
  assign csrController_io_csrWrMemory = io_csr_Mem; // @[InstructionDecode.scala 130:36]
  assign csrController_io_regWrWriteback = io_ctl_writeEnable; // @[InstructionDecode.scala 131:36]
  assign csrController_io_rdSelWriteback = io_writeReg; // @[InstructionDecode.scala 132:36]
  assign csrController_io_csrWrWriteback = io_csr_Wb; // @[InstructionDecode.scala 133:36]
  assign csrController_io_rs1SelDecode = io_id_instruction[19:15]; // @[InstructionDecode.scala 134:56]
  assign csrController_io_csrInstDecode = io_id_instruction[6:0] == 7'h73; // @[InstructionDecode.scala 135:63]
  assign hdu_io_id_ex_memRead = io_id_ex_mem_read; // @[InstructionDecode.scala 141:24]
  assign hdu_io_ex_mem_memRead = io_ex_mem_mem_read; // @[InstructionDecode.scala 142:25]
  assign hdu_io_id_ex_branch = io_id_ex_branch; // @[InstructionDecode.scala 144:23]
  assign hdu_io_id_ex_rd = io_id_ex_rd; // @[InstructionDecode.scala 143:19]
  assign hdu_io_ex_mem_rd = io_ex_mem_rd; // @[InstructionDecode.scala 145:20]
  assign hdu_io_id_rs1 = io_id_instruction[19:15]; // @[InstructionDecode.scala 146:37]
  assign hdu_io_id_rs2 = io_id_instruction[24:20]; // @[InstructionDecode.scala 147:37]
  assign hdu_io_taken = bu_io_taken; // @[InstructionDecode.scala 295:16]
  assign hdu_io_jump = io_ctl_jump; // @[InstructionDecode.scala 148:15]
  assign hdu_io_branch = io_ctl_branch; // @[InstructionDecode.scala 149:17]
  assign control_io_in = io_id_instruction; // @[InstructionDecode.scala 155:17]
  assign Vcontrol_io_Instruction = io_id_instruction; // @[InstructionDecode.scala 173:27]
  assign registers_clock = clock;
  assign registers_reset = reset;
  assign registers_io_readAddress_0 = io_id_instruction[19:15]; // @[InstructionDecode.scala 185:38]
  assign registers_io_readAddress_1 = io_id_instruction[24:20]; // @[InstructionDecode.scala 186:38]
  assign registers_io_writeEnable = io_ctl_vset ? io_ctl_vset : io_ctl_writeEnable | io_csr_Wb; // @[InstructionDecode.scala 189:28 InstructionDecode.scala 190:30 InstructionDecode.scala 195:30]
  assign registers_io_writeAddress = io_ctl_vset ? io_wb_addr : io_writeReg; // @[InstructionDecode.scala 189:28 InstructionDecode.scala 192:31 InstructionDecode.scala 196:31]
  assign registers_io_writeData = io_ctl_vset ? io_vl : _T_17; // @[InstructionDecode.scala 189:28 InstructionDecode.scala 191:28 InstructionDecode.scala 194:28]
  assign v_registers_clock = clock;
  assign v_registers_reset = reset;
  assign v_registers_io_vs1_addr = io_id_instruction[19:15]; // @[InstructionDecode.scala 202:47]
  assign v_registers_io_vs2_addr = io_id_instruction[24:20]; // @[InstructionDecode.scala 203:47]
  assign v_registers_io_vd_addr = io_wb_addr; // @[InstructionDecode.scala 204:26]
  assign v_registers_io_lmul_count = io_id_lmul_count; // @[InstructionDecode.scala 216:29]
  assign v_registers_io_lmul_vs1in_vs2in = io_id_lmul_vs1in_vs2in; // @[InstructionDecode.scala 217:35]
  assign v_registers_io_vd_data = io_write_data; // @[InstructionDecode.scala 201:26]
  assign v_registers_io_reg_write = io_wb_RegWrite; // @[InstructionDecode.scala 205:28]
  assign v_registers_io_reg_read = Vcontrol_io_RegRead; // @[InstructionDecode.scala 206:27]
  assign immediate_io_instruction = io_id_instruction; // @[InstructionDecode.scala 247:28]
  assign v_immediate_io_instruction = io_id_instruction; // @[InstructionDecode.scala 252:30]
  assign vec_csr_clock = clock;
  assign vec_csr_reset = reset;
  assign vec_csr_io_vtypei = io_vtypei; // @[InstructionDecode.scala 259:21]
  assign vec_csr_io_vl = io_vl; // @[InstructionDecode.scala 258:17]
  assign vec_csr_io_vset = io_ctl_vset; // @[InstructionDecode.scala 260:19]
  assign bu_io_branch = io_ctl_branch; // @[InstructionDecode.scala 290:16]
  assign bu_io_funct3 = io_id_instruction[14:12]; // @[InstructionDecode.scala 291:36]
  assign bu_io_rd1 = io_id_instruction[19:15] == io_ex_mem_ins[11:7] ? io_ex_mem_result : _GEN_9; // @[InstructionDecode.scala 271:46 InstructionDecode.scala 272:12]
  assign bu_io_rd2 = io_id_instruction[24:20] == io_ex_mem_ins[11:7] ? io_ex_mem_result : _GEN_11; // @[InstructionDecode.scala 279:46 InstructionDecode.scala 280:12]
  assign bu_io_take_branch = hdu_io_take_branch; // @[InstructionDecode.scala 294:21]
endmodule
module ALU(
  input  [31:0] io_input1,
  input  [31:0] io_input2,
  input  [3:0]  io_aluCtl,
  output [31:0] io_result
);
  wire  _T = io_aluCtl == 4'h0; // @[ALU.scala 17:18]
  wire [31:0] _T_1 = io_input1 & io_input2; // @[ALU.scala 17:41]
  wire  _T_2 = io_aluCtl == 4'h1; // @[ALU.scala 18:18]
  wire [31:0] _T_3 = io_input1 | io_input2; // @[ALU.scala 18:41]
  wire  _T_4 = io_aluCtl == 4'h2; // @[ALU.scala 19:18]
  wire [31:0] _T_6 = io_input1 + io_input2; // @[ALU.scala 19:41]
  wire  _T_7 = io_aluCtl == 4'h3; // @[ALU.scala 20:18]
  wire [31:0] _T_9 = io_input1 - io_input2; // @[ALU.scala 20:41]
  wire  _T_10 = io_aluCtl == 4'h4; // @[ALU.scala 21:18]
  wire  _T_13 = $signed(io_input1) < $signed(io_input2); // @[ALU.scala 21:48]
  wire  _T_14 = io_aluCtl == 4'h5; // @[ALU.scala 22:18]
  wire  _T_15 = io_input1 < io_input2; // @[ALU.scala 22:41]
  wire  _T_16 = io_aluCtl == 4'h6; // @[ALU.scala 23:18]
  wire [62:0] _GEN_0 = {{31'd0}, io_input1}; // @[ALU.scala 23:41]
  wire [62:0] _T_18 = _GEN_0 << io_input2[4:0]; // @[ALU.scala 23:41]
  wire  _T_19 = io_aluCtl == 4'h7; // @[ALU.scala 24:18]
  wire [31:0] _T_21 = io_input1 >> io_input2[4:0]; // @[ALU.scala 24:41]
  wire  _T_22 = io_aluCtl == 4'h8; // @[ALU.scala 25:18]
  wire [31:0] _T_26 = $signed(io_input1) >>> io_input2[4:0]; // @[ALU.scala 25:68]
  wire  _T_27 = io_aluCtl == 4'h9; // @[ALU.scala 26:18]
  wire [31:0] _T_28 = io_input1 ^ io_input2; // @[ALU.scala 26:41]
  wire [31:0] _T_29 = _T_27 ? _T_28 : 32'h0; // @[Mux.scala 98:16]
  wire [31:0] _T_30 = _T_22 ? _T_26 : _T_29; // @[Mux.scala 98:16]
  wire [31:0] _T_31 = _T_19 ? _T_21 : _T_30; // @[Mux.scala 98:16]
  wire [62:0] _T_32 = _T_16 ? _T_18 : {{31'd0}, _T_31}; // @[Mux.scala 98:16]
  wire [62:0] _T_33 = _T_14 ? {{62'd0}, _T_15} : _T_32; // @[Mux.scala 98:16]
  wire [62:0] _T_34 = _T_10 ? {{62'd0}, _T_13} : _T_33; // @[Mux.scala 98:16]
  wire [62:0] _T_35 = _T_7 ? {{31'd0}, _T_9} : _T_34; // @[Mux.scala 98:16]
  wire [62:0] _T_36 = _T_4 ? {{31'd0}, _T_6} : _T_35; // @[Mux.scala 98:16]
  wire [62:0] _T_37 = _T_2 ? {{31'd0}, _T_3} : _T_36; // @[Mux.scala 98:16]
  wire [62:0] _T_38 = _T ? {{31'd0}, _T_1} : _T_37; // @[Mux.scala 98:16]
  assign io_result = _T_38[31:0]; // @[ALU.scala 14:13]
endmodule
module AluControl(
  input  [1:0] io_aluOp,
  input        io_f7,
  input  [2:0] io_f3,
  input        io_aluSrc,
  output [3:0] io_out
);
  wire  _T_1 = 3'h0 == io_f3; // @[Conditional.scala 37:30]
  wire  _T_3 = ~io_f7; // @[AluControl.scala 38:34]
  wire [1:0] _GEN_0 = ~io_aluSrc | ~io_f7 ? 2'h2 : 2'h3; // @[AluControl.scala 38:43 AluControl.scala 39:18 AluControl.scala 42:20]
  wire  _T_5 = 3'h1 == io_f3; // @[Conditional.scala 37:30]
  wire  _T_6 = 3'h2 == io_f3; // @[Conditional.scala 37:30]
  wire  _T_7 = 3'h3 == io_f3; // @[Conditional.scala 37:30]
  wire  _T_8 = 3'h5 == io_f3; // @[Conditional.scala 37:30]
  wire [3:0] _GEN_1 = _T_3 ? 4'h7 : 4'h8; // @[AluControl.scala 55:29 AluControl.scala 56:18 AluControl.scala 58:18]
  wire  _T_10 = 3'h7 == io_f3; // @[Conditional.scala 37:30]
  wire  _T_11 = 3'h6 == io_f3; // @[Conditional.scala 37:30]
  wire  _T_12 = 3'h4 == io_f3; // @[Conditional.scala 37:30]
  wire [3:0] _GEN_2 = _T_12 ? 4'h9 : 4'hf; // @[Conditional.scala 39:67 AluControl.scala 68:16 AluControl.scala 31:10]
  wire [3:0] _GEN_3 = _T_11 ? 4'h1 : _GEN_2; // @[Conditional.scala 39:67 AluControl.scala 65:16]
  wire [3:0] _GEN_4 = _T_10 ? 4'h0 : _GEN_3; // @[Conditional.scala 39:67 AluControl.scala 62:16]
  wire [3:0] _GEN_5 = _T_8 ? _GEN_1 : _GEN_4; // @[Conditional.scala 39:67]
  wire [3:0] _GEN_6 = _T_7 ? 4'h5 : _GEN_5; // @[Conditional.scala 39:67 AluControl.scala 52:16]
  wire [3:0] _GEN_7 = _T_6 ? 4'h4 : _GEN_6; // @[Conditional.scala 39:67 AluControl.scala 49:16]
  wire [3:0] _GEN_8 = _T_5 ? 4'h6 : _GEN_7; // @[Conditional.scala 39:67 AluControl.scala 46:16]
  wire [3:0] _GEN_9 = _T_1 ? {{2'd0}, _GEN_0} : _GEN_8; // @[Conditional.scala 40:58]
  assign io_out = io_aluOp == 2'h0 ? 4'h2 : _GEN_9; // @[AluControl.scala 33:26 AluControl.scala 34:12]
endmodule
module ForwardingUnit(
  input  [4:0] io_ex_reg_rd,
  input  [4:0] io_mem_reg_rd,
  input  [4:0] io_reg_rs1,
  input  [4:0] io_reg_rs2,
  input        io_ex_regWrite,
  input        io_mem_regWrite,
  input  [4:0] io_ex_reg_vd,
  input  [4:0] io_mem_reg_vd,
  input  [4:0] io_reg_vs1,
  input  [4:0] io_reg_vs2,
  input        io_ex_reg_write,
  input        io_mem_reg_write,
  output [1:0] io_forwardA,
  output [1:0] io_forwardB
);
  wire  _T_1 = io_ex_reg_rd != 5'h0; // @[ForwardingUnit.scala 28:52]
  wire  _T_5 = io_ex_reg_vd != 5'h0; // @[ForwardingUnit.scala 30:58]
  wire  _T_9 = io_mem_reg_rd != 5'h0; // @[ForwardingUnit.scala 32:60]
  wire  _T_13 = io_mem_reg_vd != 5'h0; // @[ForwardingUnit.scala 34:60]
  wire [1:0] _GEN_0 = io_reg_vs1 == io_mem_reg_vd & io_mem_reg_vd != 5'h0 & io_mem_reg_write ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 34:88 ForwardingUnit.scala 35:17 ForwardingUnit.scala 37:17]
  wire [1:0] _GEN_1 = io_reg_rs1 == io_mem_reg_rd & io_mem_reg_rd != 5'h0 & io_mem_regWrite ? 2'h2 : _GEN_0; // @[ForwardingUnit.scala 32:87 ForwardingUnit.scala 33:17]
  wire [1:0] _GEN_2 = io_reg_vs1 == io_ex_reg_vd & io_ex_reg_vd != 5'h0 & io_ex_reg_write ? 2'h1 : _GEN_1; // @[ForwardingUnit.scala 30:85 ForwardingUnit.scala 31:17]
  wire [1:0] _GEN_4 = io_reg_vs2 == io_mem_reg_vd & _T_13 & io_mem_reg_write ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 46:88 ForwardingUnit.scala 47:17 ForwardingUnit.scala 49:17]
  wire [1:0] _GEN_5 = io_reg_rs2 == io_mem_reg_rd & _T_9 & io_mem_regWrite ? 2'h2 : _GEN_4; // @[ForwardingUnit.scala 44:87 ForwardingUnit.scala 45:17]
  wire [1:0] _GEN_6 = io_reg_vs2 == io_ex_reg_vd & _T_5 & io_ex_reg_write ? 2'h1 : _GEN_5; // @[ForwardingUnit.scala 42:85 ForwardingUnit.scala 43:17]
  assign io_forwardA = io_reg_rs1 == io_ex_reg_rd & io_ex_reg_rd != 5'h0 & io_ex_regWrite ? 2'h1 : _GEN_2; // @[ForwardingUnit.scala 28:78 ForwardingUnit.scala 29:17]
  assign io_forwardB = io_reg_rs2 == io_ex_reg_rd & _T_1 & io_ex_regWrite ? 2'h1 : _GEN_6; // @[ForwardingUnit.scala 40:78 ForwardingUnit.scala 41:17]
endmodule
module Alu_Control(
  input  [2:0] io_func3,
  input  [2:0] io_aluOp,
  input  [5:0] io_func6,
  output [8:0] io_aluc
);
  wire [3:0] _T_1 = {1'h0,io_func3}; // @[Cat.scala 30:58]
  wire [8:0] _T_3 = {io_func6,io_func3}; // @[Cat.scala 30:58]
  wire [8:0] _GEN_0 = io_aluOp == 3'h3 ? _T_3 : 9'h0; // @[Valucontrol.scala 21:35 Valucontrol.scala 22:17 Valucontrol.scala 24:17]
  wire [8:0] _GEN_1 = io_aluOp == 3'h2 ? _T_3 : _GEN_0; // @[Valucontrol.scala 19:35 Valucontrol.scala 20:17]
  wire [8:0] _GEN_2 = io_aluOp == 3'h1 ? _T_3 : _GEN_1; // @[Valucontrol.scala 17:35 Valucontrol.scala 18:17]
  assign io_aluc = io_aluOp == 3'h0 ? {{5'd0}, _T_1} : _GEN_2; // @[Valucontrol.scala 14:29 Valucontrol.scala 15:17]
endmodule
module ALU_(
  input  [31:0]  io_in_A,
  input  [31:0]  io_in_B,
  input  [127:0] io_vs1,
  input  [127:0] io_vs2,
  input  [31:0]  io_vl,
  input  [31:0]  io_vstart,
  input  [127:0] io_vd,
  input          io_vma,
  input          io_vta,
  input          io_vm,
  input  [127:0] io_vs0,
  input  [4:0]   io_vd_addr,
  input  [8:0]   io_aluc,
  input  [2:0]   io_sew,
  input          io_v_ins,
  output [127:0] io_v_output
);
  wire [7:0] sew_8_a_0 = io_vs1[7:0]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_1 = io_vs1[15:8]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_2 = io_vs1[23:16]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_3 = io_vs1[31:24]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_4 = io_vs1[39:32]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_5 = io_vs1[47:40]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_6 = io_vs1[55:48]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_7 = io_vs1[63:56]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_8 = io_vs1[71:64]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_9 = io_vs1[79:72]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_10 = io_vs1[87:80]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_11 = io_vs1[95:88]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_12 = io_vs1[103:96]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_13 = io_vs1[111:104]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_14 = io_vs1[119:112]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_a_15 = io_vs1[127:120]; // @[Valu.scala 92:64]
  wire [7:0] sew_8_b_0 = io_vs2[7:0]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_1 = io_vs2[15:8]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_2 = io_vs2[23:16]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_3 = io_vs2[31:24]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_4 = io_vs2[39:32]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_5 = io_vs2[47:40]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_6 = io_vs2[55:48]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_7 = io_vs2[63:56]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_8 = io_vs2[71:64]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_9 = io_vs2[79:72]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_10 = io_vs2[87:80]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_11 = io_vs2[95:88]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_12 = io_vs2[103:96]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_13 = io_vs2[111:104]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_14 = io_vs2[119:112]; // @[Valu.scala 93:64]
  wire [7:0] sew_8_b_15 = io_vs2[127:120]; // @[Valu.scala 93:64]
  wire [15:0] sew_16_a_0 = io_vs1[15:0]; // @[Valu.scala 94:67]
  wire [15:0] sew_16_a_1 = io_vs1[31:16]; // @[Valu.scala 94:67]
  wire [15:0] sew_16_a_2 = io_vs1[47:32]; // @[Valu.scala 94:67]
  wire [15:0] sew_16_a_3 = io_vs1[63:48]; // @[Valu.scala 94:67]
  wire [15:0] sew_16_a_4 = io_vs1[79:64]; // @[Valu.scala 94:67]
  wire [15:0] sew_16_a_5 = io_vs1[95:80]; // @[Valu.scala 94:67]
  wire [15:0] sew_16_a_6 = io_vs1[111:96]; // @[Valu.scala 94:67]
  wire [15:0] sew_16_a_7 = io_vs1[127:112]; // @[Valu.scala 94:67]
  wire [15:0] sew_16_b_0 = io_vs2[15:0]; // @[Valu.scala 95:67]
  wire [15:0] sew_16_b_1 = io_vs2[31:16]; // @[Valu.scala 95:67]
  wire [15:0] sew_16_b_2 = io_vs2[47:32]; // @[Valu.scala 95:67]
  wire [15:0] sew_16_b_3 = io_vs2[63:48]; // @[Valu.scala 95:67]
  wire [15:0] sew_16_b_4 = io_vs2[79:64]; // @[Valu.scala 95:67]
  wire [15:0] sew_16_b_5 = io_vs2[95:80]; // @[Valu.scala 95:67]
  wire [15:0] sew_16_b_6 = io_vs2[111:96]; // @[Valu.scala 95:67]
  wire [15:0] sew_16_b_7 = io_vs2[127:112]; // @[Valu.scala 95:67]
  wire [31:0] sew_32_a_0 = io_vs1[31:0]; // @[Valu.scala 96:67]
  wire [31:0] sew_32_a_1 = io_vs1[63:32]; // @[Valu.scala 96:67]
  wire [31:0] sew_32_a_2 = io_vs1[95:64]; // @[Valu.scala 96:67]
  wire [31:0] sew_32_a_3 = io_vs1[127:96]; // @[Valu.scala 96:67]
  wire [31:0] sew_32_b_0 = io_vs2[31:0]; // @[Valu.scala 97:67]
  wire [31:0] sew_32_b_1 = io_vs2[63:32]; // @[Valu.scala 97:67]
  wire [31:0] sew_32_b_2 = io_vs2[95:64]; // @[Valu.scala 97:67]
  wire [31:0] sew_32_b_3 = io_vs2[127:96]; // @[Valu.scala 97:67]
  wire [63:0] sew_64_a_0 = io_vs1[63:0]; // @[Valu.scala 98:67]
  wire [63:0] sew_64_a_1 = io_vs1[127:64]; // @[Valu.scala 98:67]
  wire [63:0] sew_64_b_0 = io_vs2[63:0]; // @[Valu.scala 99:67]
  wire [63:0] sew_64_b_1 = io_vs2[127:64]; // @[Valu.scala 99:67]
  wire [7:0] sew_8_vd_0 = io_vd[7:0]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_1 = io_vd[15:8]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_2 = io_vd[23:16]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_3 = io_vd[31:24]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_4 = io_vd[39:32]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_5 = io_vd[47:40]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_6 = io_vd[55:48]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_7 = io_vd[63:56]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_8 = io_vd[71:64]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_9 = io_vd[79:72]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_10 = io_vd[87:80]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_11 = io_vd[95:88]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_12 = io_vd[103:96]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_13 = io_vd[111:104]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_14 = io_vd[119:112]; // @[Valu.scala 106:64]
  wire [7:0] sew_8_vd_15 = io_vd[127:120]; // @[Valu.scala 106:64]
  wire [15:0] sew_16_vd_0 = io_vd[15:0]; // @[Valu.scala 107:67]
  wire [15:0] sew_16_vd_1 = io_vd[31:16]; // @[Valu.scala 107:67]
  wire [15:0] sew_16_vd_2 = io_vd[47:32]; // @[Valu.scala 107:67]
  wire [15:0] sew_16_vd_3 = io_vd[63:48]; // @[Valu.scala 107:67]
  wire [15:0] sew_16_vd_4 = io_vd[79:64]; // @[Valu.scala 107:67]
  wire [15:0] sew_16_vd_5 = io_vd[95:80]; // @[Valu.scala 107:67]
  wire [15:0] sew_16_vd_6 = io_vd[111:96]; // @[Valu.scala 107:67]
  wire [15:0] sew_16_vd_7 = io_vd[127:112]; // @[Valu.scala 107:67]
  wire [31:0] sew_32_vd_0 = io_vd[31:0]; // @[Valu.scala 108:67]
  wire [31:0] sew_32_vd_1 = io_vd[63:32]; // @[Valu.scala 108:67]
  wire [31:0] sew_32_vd_2 = io_vd[95:64]; // @[Valu.scala 108:67]
  wire [31:0] sew_32_vd_3 = io_vd[127:96]; // @[Valu.scala 108:67]
  wire [63:0] sew_64_vd_0 = io_vd[63:0]; // @[Valu.scala 109:67]
  wire [63:0] sew_64_vd_1 = io_vd[127:64]; // @[Valu.scala 109:67]
  wire  _T_180 = io_sew == 3'h3; // @[Valu.scala 221:22]
  wire  _T_181 = io_aluc == 9'h0; // @[Valu.scala 221:46]
  wire  _T_183 = 32'h0 < io_vstart; // @[Valu.scala 115:16]
  wire  _T_186 = 32'h0 >= io_vstart & 32'h0 < io_vl; // @[Valu.scala 116:29]
  wire  _T_190 = ~io_vm & ~io_vs0[0]; // @[Valu.scala 117:47]
  wire  _T_192 = ~io_vm & ~io_vs0[0] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_198 = _T_190 & io_vma; // @[Valu.scala 118:72]
  wire [63:0] _T_201 = $signed(sew_64_a_0) + $signed(sew_64_b_0); // @[Valu.scala 122:35]
  wire [63:0] _T_204 = $signed(sew_64_a_0) - $signed(sew_64_b_0); // @[Valu.scala 123:37]
  wire [63:0] _T_206 = $signed(sew_64_a_0) & $signed(sew_64_b_0); // @[Valu.scala 124:36]
  wire [63:0] _T_208 = $signed(sew_64_a_0) | $signed(sew_64_b_0); // @[Valu.scala 125:35]
  wire [63:0] _T_210 = $signed(sew_64_a_0) ^ $signed(sew_64_b_0); // @[Valu.scala 126:36]
  wire [63:0] _T_211 = io_vs2[63:0]; // @[Valu.scala 127:40]
  wire [63:0] _T_212 = io_vs1[63:0]; // @[Valu.scala 127:58]
  wire [63:0] _T_214 = _T_211 <= _T_212 ? $signed(sew_64_b_0) : $signed(sew_64_a_0); // @[Valu.scala 127:31]
  wire [63:0] _T_216 = $signed(sew_64_b_0) <= $signed(sew_64_a_0) ? $signed(sew_64_b_0) : $signed(sew_64_a_0); // @[Valu.scala 128:30]
  wire [63:0] _T_218 = 9'h0 == io_aluc ? $signed(_T_201) : $signed(64'sh0); // @[Mux.scala 80:57]
  wire [63:0] _T_220 = 9'hb8 == io_aluc ? $signed(_T_204) : $signed(_T_218); // @[Mux.scala 80:57]
  wire [63:0] _T_222 = 9'h48 == io_aluc ? $signed(_T_206) : $signed(_T_220); // @[Mux.scala 80:57]
  wire [63:0] _T_224 = 9'h50 == io_aluc ? $signed(_T_208) : $signed(_T_222); // @[Mux.scala 80:57]
  wire [63:0] _T_226 = 9'h58 == io_aluc ? $signed(_T_210) : $signed(_T_224); // @[Mux.scala 80:57]
  wire [63:0] _T_228 = 9'h20 == io_aluc ? $signed(_T_214) : $signed(_T_226); // @[Mux.scala 80:57]
  wire [63:0] _T_230 = 9'h28 == io_aluc ? $signed(_T_216) : $signed(_T_228); // @[Mux.scala 80:57]
  wire [63:0] _T_231 = _T_190 & io_vma ? $signed(-64'sh1) : $signed(_T_230); // @[Valu.scala 118:36]
  wire [63:0] _T_232 = ~io_vm & ~io_vs0[0] & ~io_vma ? $signed(sew_64_vd_0) : $signed(_T_231); // @[Valu.scala 117:32]
  wire  _T_233 = ~io_vta; // @[Valu.scala 132:20]
  wire [63:0] _T_238 = ~io_vta & 32'h0 >= io_vl ? $signed(sew_64_vd_0) : $signed(-64'sh1); // @[Valu.scala 132:12]
  wire [63:0] _T_239 = 32'h0 >= io_vstart & 32'h0 < io_vl ? $signed(_T_232) : $signed(_T_238); // @[Valu.scala 116:11]
  wire  _T_241 = 32'h1 < io_vstart; // @[Valu.scala 115:16]
  wire  _T_244 = 32'h1 >= io_vstart & 32'h1 < io_vl; // @[Valu.scala 116:29]
  wire  _T_248 = ~io_vm & ~io_vs0[1]; // @[Valu.scala 117:47]
  wire  _T_250 = ~io_vm & ~io_vs0[1] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_256 = _T_248 & io_vma; // @[Valu.scala 118:72]
  wire [63:0] _T_259 = $signed(sew_64_a_1) + $signed(sew_64_b_1); // @[Valu.scala 122:35]
  wire [63:0] _T_262 = $signed(sew_64_a_1) - $signed(sew_64_b_1); // @[Valu.scala 123:37]
  wire [63:0] _T_264 = $signed(sew_64_a_1) & $signed(sew_64_b_1); // @[Valu.scala 124:36]
  wire [63:0] _T_266 = $signed(sew_64_a_1) | $signed(sew_64_b_1); // @[Valu.scala 125:35]
  wire [63:0] _T_268 = $signed(sew_64_a_1) ^ $signed(sew_64_b_1); // @[Valu.scala 126:36]
  wire [63:0] _T_269 = io_vs2[127:64]; // @[Valu.scala 127:40]
  wire [63:0] _T_270 = io_vs1[127:64]; // @[Valu.scala 127:58]
  wire [63:0] _T_272 = _T_269 <= _T_270 ? $signed(sew_64_b_1) : $signed(sew_64_a_1); // @[Valu.scala 127:31]
  wire [63:0] _T_274 = $signed(sew_64_b_1) <= $signed(sew_64_a_1) ? $signed(sew_64_b_1) : $signed(sew_64_a_1); // @[Valu.scala 128:30]
  wire [63:0] _T_276 = 9'h0 == io_aluc ? $signed(_T_259) : $signed(64'sh0); // @[Mux.scala 80:57]
  wire [63:0] _T_278 = 9'hb8 == io_aluc ? $signed(_T_262) : $signed(_T_276); // @[Mux.scala 80:57]
  wire [63:0] _T_280 = 9'h48 == io_aluc ? $signed(_T_264) : $signed(_T_278); // @[Mux.scala 80:57]
  wire [63:0] _T_282 = 9'h50 == io_aluc ? $signed(_T_266) : $signed(_T_280); // @[Mux.scala 80:57]
  wire [63:0] _T_284 = 9'h58 == io_aluc ? $signed(_T_268) : $signed(_T_282); // @[Mux.scala 80:57]
  wire [63:0] _T_286 = 9'h20 == io_aluc ? $signed(_T_272) : $signed(_T_284); // @[Mux.scala 80:57]
  wire [63:0] _T_288 = 9'h28 == io_aluc ? $signed(_T_274) : $signed(_T_286); // @[Mux.scala 80:57]
  wire [63:0] _T_289 = _T_248 & io_vma ? $signed(-64'sh1) : $signed(_T_288); // @[Valu.scala 118:36]
  wire [63:0] _T_290 = ~io_vm & ~io_vs0[1] & ~io_vma ? $signed(sew_64_vd_1) : $signed(_T_289); // @[Valu.scala 117:32]
  wire [63:0] _T_296 = ~io_vta & 32'h1 >= io_vl ? $signed(sew_64_vd_1) : $signed(-64'sh1); // @[Valu.scala 132:12]
  wire [63:0] _T_297 = 32'h1 >= io_vstart & 32'h1 < io_vl ? $signed(_T_290) : $signed(_T_296); // @[Valu.scala 116:11]
  wire [63:0] lo = 32'h0 < io_vstart ? $signed(sew_64_vd_0) : $signed(_T_239); // @[Cat.scala 30:58]
  wire [63:0] hi = 32'h1 < io_vstart ? $signed(sew_64_vd_1) : $signed(_T_297); // @[Cat.scala 30:58]
  wire [127:0] _T_300 = {hi,lo}; // @[Valu.scala 135:24]
  wire  _T_301 = io_sew == 3'h2; // @[Valu.scala 223:28]
  wire [31:0] _T_322 = $signed(sew_32_a_0) + $signed(sew_32_b_0); // @[Valu.scala 122:35]
  wire [31:0] _T_325 = $signed(sew_32_a_0) - $signed(sew_32_b_0); // @[Valu.scala 123:37]
  wire [31:0] _T_327 = $signed(sew_32_a_0) & $signed(sew_32_b_0); // @[Valu.scala 124:36]
  wire [31:0] _T_329 = $signed(sew_32_a_0) | $signed(sew_32_b_0); // @[Valu.scala 125:35]
  wire [31:0] _T_331 = $signed(sew_32_a_0) ^ $signed(sew_32_b_0); // @[Valu.scala 126:36]
  wire [31:0] _T_332 = io_vs2[31:0]; // @[Valu.scala 127:40]
  wire [31:0] _T_333 = io_vs1[31:0]; // @[Valu.scala 127:58]
  wire [31:0] _T_335 = _T_332 <= _T_333 ? $signed(sew_32_b_0) : $signed(sew_32_a_0); // @[Valu.scala 127:31]
  wire [31:0] _T_337 = $signed(sew_32_b_0) <= $signed(sew_32_a_0) ? $signed(sew_32_b_0) : $signed(sew_32_a_0); // @[Valu.scala 128:30]
  wire [31:0] _T_339 = 9'h0 == io_aluc ? $signed(_T_322) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_341 = 9'hb8 == io_aluc ? $signed(_T_325) : $signed(_T_339); // @[Mux.scala 80:57]
  wire [31:0] _T_343 = 9'h48 == io_aluc ? $signed(_T_327) : $signed(_T_341); // @[Mux.scala 80:57]
  wire [31:0] _T_345 = 9'h50 == io_aluc ? $signed(_T_329) : $signed(_T_343); // @[Mux.scala 80:57]
  wire [31:0] _T_347 = 9'h58 == io_aluc ? $signed(_T_331) : $signed(_T_345); // @[Mux.scala 80:57]
  wire [31:0] _T_349 = 9'h20 == io_aluc ? $signed(_T_335) : $signed(_T_347); // @[Mux.scala 80:57]
  wire [31:0] _T_351 = 9'h28 == io_aluc ? $signed(_T_337) : $signed(_T_349); // @[Mux.scala 80:57]
  wire [31:0] _T_352 = _T_190 & io_vma ? $signed(-32'sh1) : $signed(_T_351); // @[Valu.scala 118:36]
  wire [31:0] _T_353 = ~io_vm & ~io_vs0[0] & ~io_vma ? $signed(sew_32_vd_0) : $signed(_T_352); // @[Valu.scala 117:32]
  wire [31:0] _T_359 = ~io_vta & 32'h0 >= io_vl ? $signed(sew_32_vd_0) : $signed(-32'sh1); // @[Valu.scala 132:12]
  wire [31:0] _T_360 = 32'h0 >= io_vstart & 32'h0 < io_vl ? $signed(_T_353) : $signed(_T_359); // @[Valu.scala 116:11]
  wire [31:0] _T_380 = $signed(sew_32_a_1) + $signed(sew_32_b_1); // @[Valu.scala 122:35]
  wire [31:0] _T_383 = $signed(sew_32_a_1) - $signed(sew_32_b_1); // @[Valu.scala 123:37]
  wire [31:0] _T_385 = $signed(sew_32_a_1) & $signed(sew_32_b_1); // @[Valu.scala 124:36]
  wire [31:0] _T_387 = $signed(sew_32_a_1) | $signed(sew_32_b_1); // @[Valu.scala 125:35]
  wire [31:0] _T_389 = $signed(sew_32_a_1) ^ $signed(sew_32_b_1); // @[Valu.scala 126:36]
  wire [31:0] _T_390 = io_vs2[63:32]; // @[Valu.scala 127:40]
  wire [31:0] _T_391 = io_vs1[63:32]; // @[Valu.scala 127:58]
  wire [31:0] _T_393 = _T_390 <= _T_391 ? $signed(sew_32_b_1) : $signed(sew_32_a_1); // @[Valu.scala 127:31]
  wire [31:0] _T_395 = $signed(sew_32_b_1) <= $signed(sew_32_a_1) ? $signed(sew_32_b_1) : $signed(sew_32_a_1); // @[Valu.scala 128:30]
  wire [31:0] _T_397 = 9'h0 == io_aluc ? $signed(_T_380) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_399 = 9'hb8 == io_aluc ? $signed(_T_383) : $signed(_T_397); // @[Mux.scala 80:57]
  wire [31:0] _T_401 = 9'h48 == io_aluc ? $signed(_T_385) : $signed(_T_399); // @[Mux.scala 80:57]
  wire [31:0] _T_403 = 9'h50 == io_aluc ? $signed(_T_387) : $signed(_T_401); // @[Mux.scala 80:57]
  wire [31:0] _T_405 = 9'h58 == io_aluc ? $signed(_T_389) : $signed(_T_403); // @[Mux.scala 80:57]
  wire [31:0] _T_407 = 9'h20 == io_aluc ? $signed(_T_393) : $signed(_T_405); // @[Mux.scala 80:57]
  wire [31:0] _T_409 = 9'h28 == io_aluc ? $signed(_T_395) : $signed(_T_407); // @[Mux.scala 80:57]
  wire [31:0] _T_410 = _T_248 & io_vma ? $signed(-32'sh1) : $signed(_T_409); // @[Valu.scala 118:36]
  wire [31:0] _T_411 = ~io_vm & ~io_vs0[1] & ~io_vma ? $signed(sew_32_vd_1) : $signed(_T_410); // @[Valu.scala 117:32]
  wire [31:0] _T_417 = ~io_vta & 32'h1 >= io_vl ? $signed(sew_32_vd_1) : $signed(-32'sh1); // @[Valu.scala 132:12]
  wire [31:0] _T_418 = 32'h1 >= io_vstart & 32'h1 < io_vl ? $signed(_T_411) : $signed(_T_417); // @[Valu.scala 116:11]
  wire  _T_420 = 32'h2 < io_vstart; // @[Valu.scala 115:16]
  wire  _T_423 = 32'h2 >= io_vstart & 32'h2 < io_vl; // @[Valu.scala 116:29]
  wire  _T_427 = ~io_vm & ~io_vs0[2]; // @[Valu.scala 117:47]
  wire  _T_429 = ~io_vm & ~io_vs0[2] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_435 = _T_427 & io_vma; // @[Valu.scala 118:72]
  wire [31:0] _T_438 = $signed(sew_32_a_2) + $signed(sew_32_b_2); // @[Valu.scala 122:35]
  wire [31:0] _T_441 = $signed(sew_32_a_2) - $signed(sew_32_b_2); // @[Valu.scala 123:37]
  wire [31:0] _T_443 = $signed(sew_32_a_2) & $signed(sew_32_b_2); // @[Valu.scala 124:36]
  wire [31:0] _T_445 = $signed(sew_32_a_2) | $signed(sew_32_b_2); // @[Valu.scala 125:35]
  wire [31:0] _T_447 = $signed(sew_32_a_2) ^ $signed(sew_32_b_2); // @[Valu.scala 126:36]
  wire [31:0] _T_448 = io_vs2[95:64]; // @[Valu.scala 127:40]
  wire [31:0] _T_449 = io_vs1[95:64]; // @[Valu.scala 127:58]
  wire [31:0] _T_451 = _T_448 <= _T_449 ? $signed(sew_32_b_2) : $signed(sew_32_a_2); // @[Valu.scala 127:31]
  wire [31:0] _T_453 = $signed(sew_32_b_2) <= $signed(sew_32_a_2) ? $signed(sew_32_b_2) : $signed(sew_32_a_2); // @[Valu.scala 128:30]
  wire [31:0] _T_455 = 9'h0 == io_aluc ? $signed(_T_438) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_457 = 9'hb8 == io_aluc ? $signed(_T_441) : $signed(_T_455); // @[Mux.scala 80:57]
  wire [31:0] _T_459 = 9'h48 == io_aluc ? $signed(_T_443) : $signed(_T_457); // @[Mux.scala 80:57]
  wire [31:0] _T_461 = 9'h50 == io_aluc ? $signed(_T_445) : $signed(_T_459); // @[Mux.scala 80:57]
  wire [31:0] _T_463 = 9'h58 == io_aluc ? $signed(_T_447) : $signed(_T_461); // @[Mux.scala 80:57]
  wire [31:0] _T_465 = 9'h20 == io_aluc ? $signed(_T_451) : $signed(_T_463); // @[Mux.scala 80:57]
  wire [31:0] _T_467 = 9'h28 == io_aluc ? $signed(_T_453) : $signed(_T_465); // @[Mux.scala 80:57]
  wire [31:0] _T_468 = _T_427 & io_vma ? $signed(-32'sh1) : $signed(_T_467); // @[Valu.scala 118:36]
  wire [31:0] _T_469 = ~io_vm & ~io_vs0[2] & ~io_vma ? $signed(sew_32_vd_2) : $signed(_T_468); // @[Valu.scala 117:32]
  wire [31:0] _T_475 = ~io_vta & 32'h2 >= io_vl ? $signed(sew_32_vd_2) : $signed(-32'sh1); // @[Valu.scala 132:12]
  wire [31:0] _T_476 = 32'h2 >= io_vstart & 32'h2 < io_vl ? $signed(_T_469) : $signed(_T_475); // @[Valu.scala 116:11]
  wire  _T_478 = 32'h3 < io_vstart; // @[Valu.scala 115:16]
  wire  _T_481 = 32'h3 >= io_vstart & 32'h3 < io_vl; // @[Valu.scala 116:29]
  wire  _T_485 = ~io_vm & ~io_vs0[3]; // @[Valu.scala 117:47]
  wire  _T_487 = ~io_vm & ~io_vs0[3] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_493 = _T_485 & io_vma; // @[Valu.scala 118:72]
  wire [31:0] _T_496 = $signed(sew_32_a_3) + $signed(sew_32_b_3); // @[Valu.scala 122:35]
  wire [31:0] _T_499 = $signed(sew_32_a_3) - $signed(sew_32_b_3); // @[Valu.scala 123:37]
  wire [31:0] _T_501 = $signed(sew_32_a_3) & $signed(sew_32_b_3); // @[Valu.scala 124:36]
  wire [31:0] _T_503 = $signed(sew_32_a_3) | $signed(sew_32_b_3); // @[Valu.scala 125:35]
  wire [31:0] _T_505 = $signed(sew_32_a_3) ^ $signed(sew_32_b_3); // @[Valu.scala 126:36]
  wire [31:0] _T_506 = io_vs2[127:96]; // @[Valu.scala 127:40]
  wire [31:0] _T_507 = io_vs1[127:96]; // @[Valu.scala 127:58]
  wire [31:0] _T_509 = _T_506 <= _T_507 ? $signed(sew_32_b_3) : $signed(sew_32_a_3); // @[Valu.scala 127:31]
  wire [31:0] _T_511 = $signed(sew_32_b_3) <= $signed(sew_32_a_3) ? $signed(sew_32_b_3) : $signed(sew_32_a_3); // @[Valu.scala 128:30]
  wire [31:0] _T_513 = 9'h0 == io_aluc ? $signed(_T_496) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_515 = 9'hb8 == io_aluc ? $signed(_T_499) : $signed(_T_513); // @[Mux.scala 80:57]
  wire [31:0] _T_517 = 9'h48 == io_aluc ? $signed(_T_501) : $signed(_T_515); // @[Mux.scala 80:57]
  wire [31:0] _T_519 = 9'h50 == io_aluc ? $signed(_T_503) : $signed(_T_517); // @[Mux.scala 80:57]
  wire [31:0] _T_521 = 9'h58 == io_aluc ? $signed(_T_505) : $signed(_T_519); // @[Mux.scala 80:57]
  wire [31:0] _T_523 = 9'h20 == io_aluc ? $signed(_T_509) : $signed(_T_521); // @[Mux.scala 80:57]
  wire [31:0] _T_525 = 9'h28 == io_aluc ? $signed(_T_511) : $signed(_T_523); // @[Mux.scala 80:57]
  wire [31:0] _T_526 = _T_485 & io_vma ? $signed(-32'sh1) : $signed(_T_525); // @[Valu.scala 118:36]
  wire [31:0] _T_527 = ~io_vm & ~io_vs0[3] & ~io_vma ? $signed(sew_32_vd_3) : $signed(_T_526); // @[Valu.scala 117:32]
  wire [31:0] _T_533 = ~io_vta & 32'h3 >= io_vl ? $signed(sew_32_vd_3) : $signed(-32'sh1); // @[Valu.scala 132:12]
  wire [31:0] _T_534 = 32'h3 >= io_vstart & 32'h3 < io_vl ? $signed(_T_527) : $signed(_T_533); // @[Valu.scala 116:11]
  wire [31:0] lo_lo = 32'h0 < io_vstart ? $signed(sew_32_vd_0) : $signed(_T_360); // @[Cat.scala 30:58]
  wire [31:0] lo_hi = 32'h1 < io_vstart ? $signed(sew_32_vd_1) : $signed(_T_418); // @[Cat.scala 30:58]
  wire [31:0] hi_lo = 32'h2 < io_vstart ? $signed(sew_32_vd_2) : $signed(_T_476); // @[Cat.scala 30:58]
  wire [31:0] hi_hi = 32'h3 < io_vstart ? $signed(sew_32_vd_3) : $signed(_T_534); // @[Cat.scala 30:58]
  wire [127:0] _T_537 = {hi_hi,hi_lo,lo_hi,lo_lo}; // @[Valu.scala 135:24]
  wire  _T_538 = io_sew == 3'h1; // @[Valu.scala 225:27]
  wire [15:0] _T_559 = $signed(sew_16_a_0) + $signed(sew_16_b_0); // @[Valu.scala 122:35]
  wire [15:0] _T_562 = $signed(sew_16_a_0) - $signed(sew_16_b_0); // @[Valu.scala 123:37]
  wire [15:0] _T_564 = $signed(sew_16_a_0) & $signed(sew_16_b_0); // @[Valu.scala 124:36]
  wire [15:0] _T_566 = $signed(sew_16_a_0) | $signed(sew_16_b_0); // @[Valu.scala 125:35]
  wire [15:0] _T_568 = $signed(sew_16_a_0) ^ $signed(sew_16_b_0); // @[Valu.scala 126:36]
  wire [15:0] _T_569 = io_vs2[15:0]; // @[Valu.scala 127:40]
  wire [15:0] _T_570 = io_vs1[15:0]; // @[Valu.scala 127:58]
  wire [15:0] _T_572 = _T_569 <= _T_570 ? $signed(sew_16_b_0) : $signed(sew_16_a_0); // @[Valu.scala 127:31]
  wire [15:0] _T_574 = $signed(sew_16_b_0) <= $signed(sew_16_a_0) ? $signed(sew_16_b_0) : $signed(sew_16_a_0); // @[Valu.scala 128:30]
  wire [15:0] _T_576 = 9'h0 == io_aluc ? $signed(_T_559) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_578 = 9'hb8 == io_aluc ? $signed(_T_562) : $signed(_T_576); // @[Mux.scala 80:57]
  wire [15:0] _T_580 = 9'h48 == io_aluc ? $signed(_T_564) : $signed(_T_578); // @[Mux.scala 80:57]
  wire [15:0] _T_582 = 9'h50 == io_aluc ? $signed(_T_566) : $signed(_T_580); // @[Mux.scala 80:57]
  wire [15:0] _T_584 = 9'h58 == io_aluc ? $signed(_T_568) : $signed(_T_582); // @[Mux.scala 80:57]
  wire [15:0] _T_586 = 9'h20 == io_aluc ? $signed(_T_572) : $signed(_T_584); // @[Mux.scala 80:57]
  wire [15:0] _T_588 = 9'h28 == io_aluc ? $signed(_T_574) : $signed(_T_586); // @[Mux.scala 80:57]
  wire [15:0] _T_589 = _T_190 & io_vma ? $signed(-16'sh1) : $signed(_T_588); // @[Valu.scala 118:36]
  wire [15:0] _T_590 = ~io_vm & ~io_vs0[0] & ~io_vma ? $signed(sew_16_vd_0) : $signed(_T_589); // @[Valu.scala 117:32]
  wire [15:0] _T_596 = ~io_vta & 32'h0 >= io_vl ? $signed(sew_16_vd_0) : $signed(-16'sh1); // @[Valu.scala 132:12]
  wire [15:0] _T_597 = 32'h0 >= io_vstart & 32'h0 < io_vl ? $signed(_T_590) : $signed(_T_596); // @[Valu.scala 116:11]
  wire [15:0] _T_617 = $signed(sew_16_a_1) + $signed(sew_16_b_1); // @[Valu.scala 122:35]
  wire [15:0] _T_620 = $signed(sew_16_a_1) - $signed(sew_16_b_1); // @[Valu.scala 123:37]
  wire [15:0] _T_622 = $signed(sew_16_a_1) & $signed(sew_16_b_1); // @[Valu.scala 124:36]
  wire [15:0] _T_624 = $signed(sew_16_a_1) | $signed(sew_16_b_1); // @[Valu.scala 125:35]
  wire [15:0] _T_626 = $signed(sew_16_a_1) ^ $signed(sew_16_b_1); // @[Valu.scala 126:36]
  wire [15:0] _T_627 = io_vs2[31:16]; // @[Valu.scala 127:40]
  wire [15:0] _T_628 = io_vs1[31:16]; // @[Valu.scala 127:58]
  wire [15:0] _T_630 = _T_627 <= _T_628 ? $signed(sew_16_b_1) : $signed(sew_16_a_1); // @[Valu.scala 127:31]
  wire [15:0] _T_632 = $signed(sew_16_b_1) <= $signed(sew_16_a_1) ? $signed(sew_16_b_1) : $signed(sew_16_a_1); // @[Valu.scala 128:30]
  wire [15:0] _T_634 = 9'h0 == io_aluc ? $signed(_T_617) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_636 = 9'hb8 == io_aluc ? $signed(_T_620) : $signed(_T_634); // @[Mux.scala 80:57]
  wire [15:0] _T_638 = 9'h48 == io_aluc ? $signed(_T_622) : $signed(_T_636); // @[Mux.scala 80:57]
  wire [15:0] _T_640 = 9'h50 == io_aluc ? $signed(_T_624) : $signed(_T_638); // @[Mux.scala 80:57]
  wire [15:0] _T_642 = 9'h58 == io_aluc ? $signed(_T_626) : $signed(_T_640); // @[Mux.scala 80:57]
  wire [15:0] _T_644 = 9'h20 == io_aluc ? $signed(_T_630) : $signed(_T_642); // @[Mux.scala 80:57]
  wire [15:0] _T_646 = 9'h28 == io_aluc ? $signed(_T_632) : $signed(_T_644); // @[Mux.scala 80:57]
  wire [15:0] _T_647 = _T_248 & io_vma ? $signed(-16'sh1) : $signed(_T_646); // @[Valu.scala 118:36]
  wire [15:0] _T_648 = ~io_vm & ~io_vs0[1] & ~io_vma ? $signed(sew_16_vd_1) : $signed(_T_647); // @[Valu.scala 117:32]
  wire [15:0] _T_654 = ~io_vta & 32'h1 >= io_vl ? $signed(sew_16_vd_1) : $signed(-16'sh1); // @[Valu.scala 132:12]
  wire [15:0] _T_655 = 32'h1 >= io_vstart & 32'h1 < io_vl ? $signed(_T_648) : $signed(_T_654); // @[Valu.scala 116:11]
  wire [15:0] _T_675 = $signed(sew_16_a_2) + $signed(sew_16_b_2); // @[Valu.scala 122:35]
  wire [15:0] _T_678 = $signed(sew_16_a_2) - $signed(sew_16_b_2); // @[Valu.scala 123:37]
  wire [15:0] _T_680 = $signed(sew_16_a_2) & $signed(sew_16_b_2); // @[Valu.scala 124:36]
  wire [15:0] _T_682 = $signed(sew_16_a_2) | $signed(sew_16_b_2); // @[Valu.scala 125:35]
  wire [15:0] _T_684 = $signed(sew_16_a_2) ^ $signed(sew_16_b_2); // @[Valu.scala 126:36]
  wire [15:0] _T_685 = io_vs2[47:32]; // @[Valu.scala 127:40]
  wire [15:0] _T_686 = io_vs1[47:32]; // @[Valu.scala 127:58]
  wire [15:0] _T_688 = _T_685 <= _T_686 ? $signed(sew_16_b_2) : $signed(sew_16_a_2); // @[Valu.scala 127:31]
  wire [15:0] _T_690 = $signed(sew_16_b_2) <= $signed(sew_16_a_2) ? $signed(sew_16_b_2) : $signed(sew_16_a_2); // @[Valu.scala 128:30]
  wire [15:0] _T_692 = 9'h0 == io_aluc ? $signed(_T_675) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_694 = 9'hb8 == io_aluc ? $signed(_T_678) : $signed(_T_692); // @[Mux.scala 80:57]
  wire [15:0] _T_696 = 9'h48 == io_aluc ? $signed(_T_680) : $signed(_T_694); // @[Mux.scala 80:57]
  wire [15:0] _T_698 = 9'h50 == io_aluc ? $signed(_T_682) : $signed(_T_696); // @[Mux.scala 80:57]
  wire [15:0] _T_700 = 9'h58 == io_aluc ? $signed(_T_684) : $signed(_T_698); // @[Mux.scala 80:57]
  wire [15:0] _T_702 = 9'h20 == io_aluc ? $signed(_T_688) : $signed(_T_700); // @[Mux.scala 80:57]
  wire [15:0] _T_704 = 9'h28 == io_aluc ? $signed(_T_690) : $signed(_T_702); // @[Mux.scala 80:57]
  wire [15:0] _T_705 = _T_427 & io_vma ? $signed(-16'sh1) : $signed(_T_704); // @[Valu.scala 118:36]
  wire [15:0] _T_706 = ~io_vm & ~io_vs0[2] & ~io_vma ? $signed(sew_16_vd_2) : $signed(_T_705); // @[Valu.scala 117:32]
  wire [15:0] _T_712 = ~io_vta & 32'h2 >= io_vl ? $signed(sew_16_vd_2) : $signed(-16'sh1); // @[Valu.scala 132:12]
  wire [15:0] _T_713 = 32'h2 >= io_vstart & 32'h2 < io_vl ? $signed(_T_706) : $signed(_T_712); // @[Valu.scala 116:11]
  wire [15:0] _T_733 = $signed(sew_16_a_3) + $signed(sew_16_b_3); // @[Valu.scala 122:35]
  wire [15:0] _T_736 = $signed(sew_16_a_3) - $signed(sew_16_b_3); // @[Valu.scala 123:37]
  wire [15:0] _T_738 = $signed(sew_16_a_3) & $signed(sew_16_b_3); // @[Valu.scala 124:36]
  wire [15:0] _T_740 = $signed(sew_16_a_3) | $signed(sew_16_b_3); // @[Valu.scala 125:35]
  wire [15:0] _T_742 = $signed(sew_16_a_3) ^ $signed(sew_16_b_3); // @[Valu.scala 126:36]
  wire [15:0] _T_743 = io_vs2[63:48]; // @[Valu.scala 127:40]
  wire [15:0] _T_744 = io_vs1[63:48]; // @[Valu.scala 127:58]
  wire [15:0] _T_746 = _T_743 <= _T_744 ? $signed(sew_16_b_3) : $signed(sew_16_a_3); // @[Valu.scala 127:31]
  wire [15:0] _T_748 = $signed(sew_16_b_3) <= $signed(sew_16_a_3) ? $signed(sew_16_b_3) : $signed(sew_16_a_3); // @[Valu.scala 128:30]
  wire [15:0] _T_750 = 9'h0 == io_aluc ? $signed(_T_733) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_752 = 9'hb8 == io_aluc ? $signed(_T_736) : $signed(_T_750); // @[Mux.scala 80:57]
  wire [15:0] _T_754 = 9'h48 == io_aluc ? $signed(_T_738) : $signed(_T_752); // @[Mux.scala 80:57]
  wire [15:0] _T_756 = 9'h50 == io_aluc ? $signed(_T_740) : $signed(_T_754); // @[Mux.scala 80:57]
  wire [15:0] _T_758 = 9'h58 == io_aluc ? $signed(_T_742) : $signed(_T_756); // @[Mux.scala 80:57]
  wire [15:0] _T_760 = 9'h20 == io_aluc ? $signed(_T_746) : $signed(_T_758); // @[Mux.scala 80:57]
  wire [15:0] _T_762 = 9'h28 == io_aluc ? $signed(_T_748) : $signed(_T_760); // @[Mux.scala 80:57]
  wire [15:0] _T_763 = _T_485 & io_vma ? $signed(-16'sh1) : $signed(_T_762); // @[Valu.scala 118:36]
  wire [15:0] _T_764 = ~io_vm & ~io_vs0[3] & ~io_vma ? $signed(sew_16_vd_3) : $signed(_T_763); // @[Valu.scala 117:32]
  wire [15:0] _T_770 = ~io_vta & 32'h3 >= io_vl ? $signed(sew_16_vd_3) : $signed(-16'sh1); // @[Valu.scala 132:12]
  wire [15:0] _T_771 = 32'h3 >= io_vstart & 32'h3 < io_vl ? $signed(_T_764) : $signed(_T_770); // @[Valu.scala 116:11]
  wire  _T_773 = 32'h4 < io_vstart; // @[Valu.scala 115:16]
  wire  _T_776 = 32'h4 >= io_vstart & 32'h4 < io_vl; // @[Valu.scala 116:29]
  wire  _T_780 = ~io_vm & ~io_vs0[4]; // @[Valu.scala 117:47]
  wire  _T_782 = ~io_vm & ~io_vs0[4] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_788 = _T_780 & io_vma; // @[Valu.scala 118:72]
  wire [15:0] _T_791 = $signed(sew_16_a_4) + $signed(sew_16_b_4); // @[Valu.scala 122:35]
  wire [15:0] _T_794 = $signed(sew_16_a_4) - $signed(sew_16_b_4); // @[Valu.scala 123:37]
  wire [15:0] _T_796 = $signed(sew_16_a_4) & $signed(sew_16_b_4); // @[Valu.scala 124:36]
  wire [15:0] _T_798 = $signed(sew_16_a_4) | $signed(sew_16_b_4); // @[Valu.scala 125:35]
  wire [15:0] _T_800 = $signed(sew_16_a_4) ^ $signed(sew_16_b_4); // @[Valu.scala 126:36]
  wire [15:0] _T_801 = io_vs2[79:64]; // @[Valu.scala 127:40]
  wire [15:0] _T_802 = io_vs1[79:64]; // @[Valu.scala 127:58]
  wire [15:0] _T_804 = _T_801 <= _T_802 ? $signed(sew_16_b_4) : $signed(sew_16_a_4); // @[Valu.scala 127:31]
  wire [15:0] _T_806 = $signed(sew_16_b_4) <= $signed(sew_16_a_4) ? $signed(sew_16_b_4) : $signed(sew_16_a_4); // @[Valu.scala 128:30]
  wire [15:0] _T_808 = 9'h0 == io_aluc ? $signed(_T_791) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_810 = 9'hb8 == io_aluc ? $signed(_T_794) : $signed(_T_808); // @[Mux.scala 80:57]
  wire [15:0] _T_812 = 9'h48 == io_aluc ? $signed(_T_796) : $signed(_T_810); // @[Mux.scala 80:57]
  wire [15:0] _T_814 = 9'h50 == io_aluc ? $signed(_T_798) : $signed(_T_812); // @[Mux.scala 80:57]
  wire [15:0] _T_816 = 9'h58 == io_aluc ? $signed(_T_800) : $signed(_T_814); // @[Mux.scala 80:57]
  wire [15:0] _T_818 = 9'h20 == io_aluc ? $signed(_T_804) : $signed(_T_816); // @[Mux.scala 80:57]
  wire [15:0] _T_820 = 9'h28 == io_aluc ? $signed(_T_806) : $signed(_T_818); // @[Mux.scala 80:57]
  wire [15:0] _T_821 = _T_780 & io_vma ? $signed(-16'sh1) : $signed(_T_820); // @[Valu.scala 118:36]
  wire [15:0] _T_822 = ~io_vm & ~io_vs0[4] & ~io_vma ? $signed(sew_16_vd_4) : $signed(_T_821); // @[Valu.scala 117:32]
  wire [15:0] _T_828 = ~io_vta & 32'h4 >= io_vl ? $signed(sew_16_vd_4) : $signed(-16'sh1); // @[Valu.scala 132:12]
  wire [15:0] _T_829 = 32'h4 >= io_vstart & 32'h4 < io_vl ? $signed(_T_822) : $signed(_T_828); // @[Valu.scala 116:11]
  wire  _T_831 = 32'h5 < io_vstart; // @[Valu.scala 115:16]
  wire  _T_834 = 32'h5 >= io_vstart & 32'h5 < io_vl; // @[Valu.scala 116:29]
  wire  _T_838 = ~io_vm & ~io_vs0[5]; // @[Valu.scala 117:47]
  wire  _T_840 = ~io_vm & ~io_vs0[5] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_846 = _T_838 & io_vma; // @[Valu.scala 118:72]
  wire [15:0] _T_849 = $signed(sew_16_a_5) + $signed(sew_16_b_5); // @[Valu.scala 122:35]
  wire [15:0] _T_852 = $signed(sew_16_a_5) - $signed(sew_16_b_5); // @[Valu.scala 123:37]
  wire [15:0] _T_854 = $signed(sew_16_a_5) & $signed(sew_16_b_5); // @[Valu.scala 124:36]
  wire [15:0] _T_856 = $signed(sew_16_a_5) | $signed(sew_16_b_5); // @[Valu.scala 125:35]
  wire [15:0] _T_858 = $signed(sew_16_a_5) ^ $signed(sew_16_b_5); // @[Valu.scala 126:36]
  wire [15:0] _T_859 = io_vs2[95:80]; // @[Valu.scala 127:40]
  wire [15:0] _T_860 = io_vs1[95:80]; // @[Valu.scala 127:58]
  wire [15:0] _T_862 = _T_859 <= _T_860 ? $signed(sew_16_b_5) : $signed(sew_16_a_5); // @[Valu.scala 127:31]
  wire [15:0] _T_864 = $signed(sew_16_b_5) <= $signed(sew_16_a_5) ? $signed(sew_16_b_5) : $signed(sew_16_a_5); // @[Valu.scala 128:30]
  wire [15:0] _T_866 = 9'h0 == io_aluc ? $signed(_T_849) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_868 = 9'hb8 == io_aluc ? $signed(_T_852) : $signed(_T_866); // @[Mux.scala 80:57]
  wire [15:0] _T_870 = 9'h48 == io_aluc ? $signed(_T_854) : $signed(_T_868); // @[Mux.scala 80:57]
  wire [15:0] _T_872 = 9'h50 == io_aluc ? $signed(_T_856) : $signed(_T_870); // @[Mux.scala 80:57]
  wire [15:0] _T_874 = 9'h58 == io_aluc ? $signed(_T_858) : $signed(_T_872); // @[Mux.scala 80:57]
  wire [15:0] _T_876 = 9'h20 == io_aluc ? $signed(_T_862) : $signed(_T_874); // @[Mux.scala 80:57]
  wire [15:0] _T_878 = 9'h28 == io_aluc ? $signed(_T_864) : $signed(_T_876); // @[Mux.scala 80:57]
  wire [15:0] _T_879 = _T_838 & io_vma ? $signed(-16'sh1) : $signed(_T_878); // @[Valu.scala 118:36]
  wire [15:0] _T_880 = ~io_vm & ~io_vs0[5] & ~io_vma ? $signed(sew_16_vd_5) : $signed(_T_879); // @[Valu.scala 117:32]
  wire [15:0] _T_886 = ~io_vta & 32'h5 >= io_vl ? $signed(sew_16_vd_5) : $signed(-16'sh1); // @[Valu.scala 132:12]
  wire [15:0] _T_887 = 32'h5 >= io_vstart & 32'h5 < io_vl ? $signed(_T_880) : $signed(_T_886); // @[Valu.scala 116:11]
  wire  _T_889 = 32'h6 < io_vstart; // @[Valu.scala 115:16]
  wire  _T_892 = 32'h6 >= io_vstart & 32'h6 < io_vl; // @[Valu.scala 116:29]
  wire  _T_896 = ~io_vm & ~io_vs0[6]; // @[Valu.scala 117:47]
  wire  _T_898 = ~io_vm & ~io_vs0[6] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_904 = _T_896 & io_vma; // @[Valu.scala 118:72]
  wire [15:0] _T_907 = $signed(sew_16_a_6) + $signed(sew_16_b_6); // @[Valu.scala 122:35]
  wire [15:0] _T_910 = $signed(sew_16_a_6) - $signed(sew_16_b_6); // @[Valu.scala 123:37]
  wire [15:0] _T_912 = $signed(sew_16_a_6) & $signed(sew_16_b_6); // @[Valu.scala 124:36]
  wire [15:0] _T_914 = $signed(sew_16_a_6) | $signed(sew_16_b_6); // @[Valu.scala 125:35]
  wire [15:0] _T_916 = $signed(sew_16_a_6) ^ $signed(sew_16_b_6); // @[Valu.scala 126:36]
  wire [15:0] _T_917 = io_vs2[111:96]; // @[Valu.scala 127:40]
  wire [15:0] _T_918 = io_vs1[111:96]; // @[Valu.scala 127:58]
  wire [15:0] _T_920 = _T_917 <= _T_918 ? $signed(sew_16_b_6) : $signed(sew_16_a_6); // @[Valu.scala 127:31]
  wire [15:0] _T_922 = $signed(sew_16_b_6) <= $signed(sew_16_a_6) ? $signed(sew_16_b_6) : $signed(sew_16_a_6); // @[Valu.scala 128:30]
  wire [15:0] _T_924 = 9'h0 == io_aluc ? $signed(_T_907) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_926 = 9'hb8 == io_aluc ? $signed(_T_910) : $signed(_T_924); // @[Mux.scala 80:57]
  wire [15:0] _T_928 = 9'h48 == io_aluc ? $signed(_T_912) : $signed(_T_926); // @[Mux.scala 80:57]
  wire [15:0] _T_930 = 9'h50 == io_aluc ? $signed(_T_914) : $signed(_T_928); // @[Mux.scala 80:57]
  wire [15:0] _T_932 = 9'h58 == io_aluc ? $signed(_T_916) : $signed(_T_930); // @[Mux.scala 80:57]
  wire [15:0] _T_934 = 9'h20 == io_aluc ? $signed(_T_920) : $signed(_T_932); // @[Mux.scala 80:57]
  wire [15:0] _T_936 = 9'h28 == io_aluc ? $signed(_T_922) : $signed(_T_934); // @[Mux.scala 80:57]
  wire [15:0] _T_937 = _T_896 & io_vma ? $signed(-16'sh1) : $signed(_T_936); // @[Valu.scala 118:36]
  wire [15:0] _T_938 = ~io_vm & ~io_vs0[6] & ~io_vma ? $signed(sew_16_vd_6) : $signed(_T_937); // @[Valu.scala 117:32]
  wire [15:0] _T_944 = ~io_vta & 32'h6 >= io_vl ? $signed(sew_16_vd_6) : $signed(-16'sh1); // @[Valu.scala 132:12]
  wire [15:0] _T_945 = 32'h6 >= io_vstart & 32'h6 < io_vl ? $signed(_T_938) : $signed(_T_944); // @[Valu.scala 116:11]
  wire  _T_947 = 32'h7 < io_vstart; // @[Valu.scala 115:16]
  wire  _T_950 = 32'h7 >= io_vstart & 32'h7 < io_vl; // @[Valu.scala 116:29]
  wire  _T_954 = ~io_vm & ~io_vs0[7]; // @[Valu.scala 117:47]
  wire  _T_956 = ~io_vm & ~io_vs0[7] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_962 = _T_954 & io_vma; // @[Valu.scala 118:72]
  wire [15:0] _T_965 = $signed(sew_16_a_7) + $signed(sew_16_b_7); // @[Valu.scala 122:35]
  wire [15:0] _T_968 = $signed(sew_16_a_7) - $signed(sew_16_b_7); // @[Valu.scala 123:37]
  wire [15:0] _T_970 = $signed(sew_16_a_7) & $signed(sew_16_b_7); // @[Valu.scala 124:36]
  wire [15:0] _T_972 = $signed(sew_16_a_7) | $signed(sew_16_b_7); // @[Valu.scala 125:35]
  wire [15:0] _T_974 = $signed(sew_16_a_7) ^ $signed(sew_16_b_7); // @[Valu.scala 126:36]
  wire [15:0] _T_975 = io_vs2[127:112]; // @[Valu.scala 127:40]
  wire [15:0] _T_976 = io_vs1[127:112]; // @[Valu.scala 127:58]
  wire [15:0] _T_978 = _T_975 <= _T_976 ? $signed(sew_16_b_7) : $signed(sew_16_a_7); // @[Valu.scala 127:31]
  wire [15:0] _T_980 = $signed(sew_16_b_7) <= $signed(sew_16_a_7) ? $signed(sew_16_b_7) : $signed(sew_16_a_7); // @[Valu.scala 128:30]
  wire [15:0] _T_982 = 9'h0 == io_aluc ? $signed(_T_965) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_984 = 9'hb8 == io_aluc ? $signed(_T_968) : $signed(_T_982); // @[Mux.scala 80:57]
  wire [15:0] _T_986 = 9'h48 == io_aluc ? $signed(_T_970) : $signed(_T_984); // @[Mux.scala 80:57]
  wire [15:0] _T_988 = 9'h50 == io_aluc ? $signed(_T_972) : $signed(_T_986); // @[Mux.scala 80:57]
  wire [15:0] _T_990 = 9'h58 == io_aluc ? $signed(_T_974) : $signed(_T_988); // @[Mux.scala 80:57]
  wire [15:0] _T_992 = 9'h20 == io_aluc ? $signed(_T_978) : $signed(_T_990); // @[Mux.scala 80:57]
  wire [15:0] _T_994 = 9'h28 == io_aluc ? $signed(_T_980) : $signed(_T_992); // @[Mux.scala 80:57]
  wire [15:0] _T_995 = _T_954 & io_vma ? $signed(-16'sh1) : $signed(_T_994); // @[Valu.scala 118:36]
  wire [15:0] _T_996 = ~io_vm & ~io_vs0[7] & ~io_vma ? $signed(sew_16_vd_7) : $signed(_T_995); // @[Valu.scala 117:32]
  wire [15:0] _T_1002 = ~io_vta & 32'h7 >= io_vl ? $signed(sew_16_vd_7) : $signed(-16'sh1); // @[Valu.scala 132:12]
  wire [15:0] _T_1003 = 32'h7 >= io_vstart & 32'h7 < io_vl ? $signed(_T_996) : $signed(_T_1002); // @[Valu.scala 116:11]
  wire [15:0] lo_lo_lo = 32'h0 < io_vstart ? $signed(sew_16_vd_0) : $signed(_T_597); // @[Cat.scala 30:58]
  wire [15:0] lo_lo_hi = 32'h1 < io_vstart ? $signed(sew_16_vd_1) : $signed(_T_655); // @[Cat.scala 30:58]
  wire [15:0] lo_hi_lo = 32'h2 < io_vstart ? $signed(sew_16_vd_2) : $signed(_T_713); // @[Cat.scala 30:58]
  wire [15:0] lo_hi_hi = 32'h3 < io_vstart ? $signed(sew_16_vd_3) : $signed(_T_771); // @[Cat.scala 30:58]
  wire [15:0] hi_lo_lo = 32'h4 < io_vstart ? $signed(sew_16_vd_4) : $signed(_T_829); // @[Cat.scala 30:58]
  wire [15:0] hi_lo_hi = 32'h5 < io_vstart ? $signed(sew_16_vd_5) : $signed(_T_887); // @[Cat.scala 30:58]
  wire [15:0] hi_hi_lo = 32'h6 < io_vstart ? $signed(sew_16_vd_6) : $signed(_T_945); // @[Cat.scala 30:58]
  wire [15:0] hi_hi_hi = 32'h7 < io_vstart ? $signed(sew_16_vd_7) : $signed(_T_1003); // @[Cat.scala 30:58]
  wire [127:0] _T_1006 = {hi_hi_hi,hi_hi_lo,hi_lo_hi,hi_lo_lo,lo_hi_hi,lo_hi_lo,lo_lo_hi,lo_lo_lo}; // @[Valu.scala 135:24]
  wire  _T_1007 = io_sew == 3'h0; // @[Valu.scala 227:31]
  wire [7:0] _T_1028 = $signed(sew_8_a_0) + $signed(sew_8_b_0); // @[Valu.scala 122:35]
  wire [7:0] _T_1031 = $signed(sew_8_a_0) - $signed(sew_8_b_0); // @[Valu.scala 123:37]
  wire [7:0] _T_1033 = $signed(sew_8_a_0) & $signed(sew_8_b_0); // @[Valu.scala 124:36]
  wire [7:0] _T_1035 = $signed(sew_8_a_0) | $signed(sew_8_b_0); // @[Valu.scala 125:35]
  wire [7:0] _T_1037 = $signed(sew_8_a_0) ^ $signed(sew_8_b_0); // @[Valu.scala 126:36]
  wire [7:0] _T_1038 = io_vs2[7:0]; // @[Valu.scala 127:40]
  wire [7:0] _T_1039 = io_vs1[7:0]; // @[Valu.scala 127:58]
  wire [7:0] _T_1041 = _T_1038 <= _T_1039 ? $signed(sew_8_b_0) : $signed(sew_8_a_0); // @[Valu.scala 127:31]
  wire [7:0] _T_1043 = $signed(sew_8_b_0) <= $signed(sew_8_a_0) ? $signed(sew_8_b_0) : $signed(sew_8_a_0); // @[Valu.scala 128:30]
  wire [7:0] _T_1045 = 9'h0 == io_aluc ? $signed(_T_1028) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1047 = 9'hb8 == io_aluc ? $signed(_T_1031) : $signed(_T_1045); // @[Mux.scala 80:57]
  wire [7:0] _T_1049 = 9'h48 == io_aluc ? $signed(_T_1033) : $signed(_T_1047); // @[Mux.scala 80:57]
  wire [7:0] _T_1051 = 9'h50 == io_aluc ? $signed(_T_1035) : $signed(_T_1049); // @[Mux.scala 80:57]
  wire [7:0] _T_1053 = 9'h58 == io_aluc ? $signed(_T_1037) : $signed(_T_1051); // @[Mux.scala 80:57]
  wire [7:0] _T_1055 = 9'h20 == io_aluc ? $signed(_T_1041) : $signed(_T_1053); // @[Mux.scala 80:57]
  wire [7:0] _T_1057 = 9'h28 == io_aluc ? $signed(_T_1043) : $signed(_T_1055); // @[Mux.scala 80:57]
  wire [7:0] _T_1058 = _T_190 & io_vma ? $signed(-8'sh1) : $signed(_T_1057); // @[Valu.scala 118:36]
  wire [7:0] _T_1059 = ~io_vm & ~io_vs0[0] & ~io_vma ? $signed(sew_8_vd_0) : $signed(_T_1058); // @[Valu.scala 117:32]
  wire [7:0] _T_1065 = ~io_vta & 32'h0 >= io_vl ? $signed(sew_8_vd_0) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1066 = 32'h0 >= io_vstart & 32'h0 < io_vl ? $signed(_T_1059) : $signed(_T_1065); // @[Valu.scala 116:11]
  wire [7:0] _T_1086 = $signed(sew_8_a_1) + $signed(sew_8_b_1); // @[Valu.scala 122:35]
  wire [7:0] _T_1089 = $signed(sew_8_a_1) - $signed(sew_8_b_1); // @[Valu.scala 123:37]
  wire [7:0] _T_1091 = $signed(sew_8_a_1) & $signed(sew_8_b_1); // @[Valu.scala 124:36]
  wire [7:0] _T_1093 = $signed(sew_8_a_1) | $signed(sew_8_b_1); // @[Valu.scala 125:35]
  wire [7:0] _T_1095 = $signed(sew_8_a_1) ^ $signed(sew_8_b_1); // @[Valu.scala 126:36]
  wire [7:0] _T_1096 = io_vs2[15:8]; // @[Valu.scala 127:40]
  wire [7:0] _T_1097 = io_vs1[15:8]; // @[Valu.scala 127:58]
  wire [7:0] _T_1099 = _T_1096 <= _T_1097 ? $signed(sew_8_b_1) : $signed(sew_8_a_1); // @[Valu.scala 127:31]
  wire [7:0] _T_1101 = $signed(sew_8_b_1) <= $signed(sew_8_a_1) ? $signed(sew_8_b_1) : $signed(sew_8_a_1); // @[Valu.scala 128:30]
  wire [7:0] _T_1103 = 9'h0 == io_aluc ? $signed(_T_1086) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1105 = 9'hb8 == io_aluc ? $signed(_T_1089) : $signed(_T_1103); // @[Mux.scala 80:57]
  wire [7:0] _T_1107 = 9'h48 == io_aluc ? $signed(_T_1091) : $signed(_T_1105); // @[Mux.scala 80:57]
  wire [7:0] _T_1109 = 9'h50 == io_aluc ? $signed(_T_1093) : $signed(_T_1107); // @[Mux.scala 80:57]
  wire [7:0] _T_1111 = 9'h58 == io_aluc ? $signed(_T_1095) : $signed(_T_1109); // @[Mux.scala 80:57]
  wire [7:0] _T_1113 = 9'h20 == io_aluc ? $signed(_T_1099) : $signed(_T_1111); // @[Mux.scala 80:57]
  wire [7:0] _T_1115 = 9'h28 == io_aluc ? $signed(_T_1101) : $signed(_T_1113); // @[Mux.scala 80:57]
  wire [7:0] _T_1116 = _T_248 & io_vma ? $signed(-8'sh1) : $signed(_T_1115); // @[Valu.scala 118:36]
  wire [7:0] _T_1117 = ~io_vm & ~io_vs0[1] & ~io_vma ? $signed(sew_8_vd_1) : $signed(_T_1116); // @[Valu.scala 117:32]
  wire [7:0] _T_1123 = ~io_vta & 32'h1 >= io_vl ? $signed(sew_8_vd_1) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1124 = 32'h1 >= io_vstart & 32'h1 < io_vl ? $signed(_T_1117) : $signed(_T_1123); // @[Valu.scala 116:11]
  wire [7:0] _T_1144 = $signed(sew_8_a_2) + $signed(sew_8_b_2); // @[Valu.scala 122:35]
  wire [7:0] _T_1147 = $signed(sew_8_a_2) - $signed(sew_8_b_2); // @[Valu.scala 123:37]
  wire [7:0] _T_1149 = $signed(sew_8_a_2) & $signed(sew_8_b_2); // @[Valu.scala 124:36]
  wire [7:0] _T_1151 = $signed(sew_8_a_2) | $signed(sew_8_b_2); // @[Valu.scala 125:35]
  wire [7:0] _T_1153 = $signed(sew_8_a_2) ^ $signed(sew_8_b_2); // @[Valu.scala 126:36]
  wire [7:0] _T_1154 = io_vs2[23:16]; // @[Valu.scala 127:40]
  wire [7:0] _T_1155 = io_vs1[23:16]; // @[Valu.scala 127:58]
  wire [7:0] _T_1157 = _T_1154 <= _T_1155 ? $signed(sew_8_b_2) : $signed(sew_8_a_2); // @[Valu.scala 127:31]
  wire [7:0] _T_1159 = $signed(sew_8_b_2) <= $signed(sew_8_a_2) ? $signed(sew_8_b_2) : $signed(sew_8_a_2); // @[Valu.scala 128:30]
  wire [7:0] _T_1161 = 9'h0 == io_aluc ? $signed(_T_1144) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1163 = 9'hb8 == io_aluc ? $signed(_T_1147) : $signed(_T_1161); // @[Mux.scala 80:57]
  wire [7:0] _T_1165 = 9'h48 == io_aluc ? $signed(_T_1149) : $signed(_T_1163); // @[Mux.scala 80:57]
  wire [7:0] _T_1167 = 9'h50 == io_aluc ? $signed(_T_1151) : $signed(_T_1165); // @[Mux.scala 80:57]
  wire [7:0] _T_1169 = 9'h58 == io_aluc ? $signed(_T_1153) : $signed(_T_1167); // @[Mux.scala 80:57]
  wire [7:0] _T_1171 = 9'h20 == io_aluc ? $signed(_T_1157) : $signed(_T_1169); // @[Mux.scala 80:57]
  wire [7:0] _T_1173 = 9'h28 == io_aluc ? $signed(_T_1159) : $signed(_T_1171); // @[Mux.scala 80:57]
  wire [7:0] _T_1174 = _T_427 & io_vma ? $signed(-8'sh1) : $signed(_T_1173); // @[Valu.scala 118:36]
  wire [7:0] _T_1175 = ~io_vm & ~io_vs0[2] & ~io_vma ? $signed(sew_8_vd_2) : $signed(_T_1174); // @[Valu.scala 117:32]
  wire [7:0] _T_1181 = ~io_vta & 32'h2 >= io_vl ? $signed(sew_8_vd_2) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1182 = 32'h2 >= io_vstart & 32'h2 < io_vl ? $signed(_T_1175) : $signed(_T_1181); // @[Valu.scala 116:11]
  wire [7:0] _T_1202 = $signed(sew_8_a_3) + $signed(sew_8_b_3); // @[Valu.scala 122:35]
  wire [7:0] _T_1205 = $signed(sew_8_a_3) - $signed(sew_8_b_3); // @[Valu.scala 123:37]
  wire [7:0] _T_1207 = $signed(sew_8_a_3) & $signed(sew_8_b_3); // @[Valu.scala 124:36]
  wire [7:0] _T_1209 = $signed(sew_8_a_3) | $signed(sew_8_b_3); // @[Valu.scala 125:35]
  wire [7:0] _T_1211 = $signed(sew_8_a_3) ^ $signed(sew_8_b_3); // @[Valu.scala 126:36]
  wire [7:0] _T_1212 = io_vs2[31:24]; // @[Valu.scala 127:40]
  wire [7:0] _T_1213 = io_vs1[31:24]; // @[Valu.scala 127:58]
  wire [7:0] _T_1215 = _T_1212 <= _T_1213 ? $signed(sew_8_b_3) : $signed(sew_8_a_3); // @[Valu.scala 127:31]
  wire [7:0] _T_1217 = $signed(sew_8_b_3) <= $signed(sew_8_a_3) ? $signed(sew_8_b_3) : $signed(sew_8_a_3); // @[Valu.scala 128:30]
  wire [7:0] _T_1219 = 9'h0 == io_aluc ? $signed(_T_1202) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1221 = 9'hb8 == io_aluc ? $signed(_T_1205) : $signed(_T_1219); // @[Mux.scala 80:57]
  wire [7:0] _T_1223 = 9'h48 == io_aluc ? $signed(_T_1207) : $signed(_T_1221); // @[Mux.scala 80:57]
  wire [7:0] _T_1225 = 9'h50 == io_aluc ? $signed(_T_1209) : $signed(_T_1223); // @[Mux.scala 80:57]
  wire [7:0] _T_1227 = 9'h58 == io_aluc ? $signed(_T_1211) : $signed(_T_1225); // @[Mux.scala 80:57]
  wire [7:0] _T_1229 = 9'h20 == io_aluc ? $signed(_T_1215) : $signed(_T_1227); // @[Mux.scala 80:57]
  wire [7:0] _T_1231 = 9'h28 == io_aluc ? $signed(_T_1217) : $signed(_T_1229); // @[Mux.scala 80:57]
  wire [7:0] _T_1232 = _T_485 & io_vma ? $signed(-8'sh1) : $signed(_T_1231); // @[Valu.scala 118:36]
  wire [7:0] _T_1233 = ~io_vm & ~io_vs0[3] & ~io_vma ? $signed(sew_8_vd_3) : $signed(_T_1232); // @[Valu.scala 117:32]
  wire [7:0] _T_1239 = ~io_vta & 32'h3 >= io_vl ? $signed(sew_8_vd_3) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1240 = 32'h3 >= io_vstart & 32'h3 < io_vl ? $signed(_T_1233) : $signed(_T_1239); // @[Valu.scala 116:11]
  wire [7:0] _T_1260 = $signed(sew_8_a_4) + $signed(sew_8_b_4); // @[Valu.scala 122:35]
  wire [7:0] _T_1263 = $signed(sew_8_a_4) - $signed(sew_8_b_4); // @[Valu.scala 123:37]
  wire [7:0] _T_1265 = $signed(sew_8_a_4) & $signed(sew_8_b_4); // @[Valu.scala 124:36]
  wire [7:0] _T_1267 = $signed(sew_8_a_4) | $signed(sew_8_b_4); // @[Valu.scala 125:35]
  wire [7:0] _T_1269 = $signed(sew_8_a_4) ^ $signed(sew_8_b_4); // @[Valu.scala 126:36]
  wire [7:0] _T_1270 = io_vs2[39:32]; // @[Valu.scala 127:40]
  wire [7:0] _T_1271 = io_vs1[39:32]; // @[Valu.scala 127:58]
  wire [7:0] _T_1273 = _T_1270 <= _T_1271 ? $signed(sew_8_b_4) : $signed(sew_8_a_4); // @[Valu.scala 127:31]
  wire [7:0] _T_1275 = $signed(sew_8_b_4) <= $signed(sew_8_a_4) ? $signed(sew_8_b_4) : $signed(sew_8_a_4); // @[Valu.scala 128:30]
  wire [7:0] _T_1277 = 9'h0 == io_aluc ? $signed(_T_1260) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1279 = 9'hb8 == io_aluc ? $signed(_T_1263) : $signed(_T_1277); // @[Mux.scala 80:57]
  wire [7:0] _T_1281 = 9'h48 == io_aluc ? $signed(_T_1265) : $signed(_T_1279); // @[Mux.scala 80:57]
  wire [7:0] _T_1283 = 9'h50 == io_aluc ? $signed(_T_1267) : $signed(_T_1281); // @[Mux.scala 80:57]
  wire [7:0] _T_1285 = 9'h58 == io_aluc ? $signed(_T_1269) : $signed(_T_1283); // @[Mux.scala 80:57]
  wire [7:0] _T_1287 = 9'h20 == io_aluc ? $signed(_T_1273) : $signed(_T_1285); // @[Mux.scala 80:57]
  wire [7:0] _T_1289 = 9'h28 == io_aluc ? $signed(_T_1275) : $signed(_T_1287); // @[Mux.scala 80:57]
  wire [7:0] _T_1290 = _T_780 & io_vma ? $signed(-8'sh1) : $signed(_T_1289); // @[Valu.scala 118:36]
  wire [7:0] _T_1291 = ~io_vm & ~io_vs0[4] & ~io_vma ? $signed(sew_8_vd_4) : $signed(_T_1290); // @[Valu.scala 117:32]
  wire [7:0] _T_1297 = ~io_vta & 32'h4 >= io_vl ? $signed(sew_8_vd_4) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1298 = 32'h4 >= io_vstart & 32'h4 < io_vl ? $signed(_T_1291) : $signed(_T_1297); // @[Valu.scala 116:11]
  wire [7:0] _T_1318 = $signed(sew_8_a_5) + $signed(sew_8_b_5); // @[Valu.scala 122:35]
  wire [7:0] _T_1321 = $signed(sew_8_a_5) - $signed(sew_8_b_5); // @[Valu.scala 123:37]
  wire [7:0] _T_1323 = $signed(sew_8_a_5) & $signed(sew_8_b_5); // @[Valu.scala 124:36]
  wire [7:0] _T_1325 = $signed(sew_8_a_5) | $signed(sew_8_b_5); // @[Valu.scala 125:35]
  wire [7:0] _T_1327 = $signed(sew_8_a_5) ^ $signed(sew_8_b_5); // @[Valu.scala 126:36]
  wire [7:0] _T_1328 = io_vs2[47:40]; // @[Valu.scala 127:40]
  wire [7:0] _T_1329 = io_vs1[47:40]; // @[Valu.scala 127:58]
  wire [7:0] _T_1331 = _T_1328 <= _T_1329 ? $signed(sew_8_b_5) : $signed(sew_8_a_5); // @[Valu.scala 127:31]
  wire [7:0] _T_1333 = $signed(sew_8_b_5) <= $signed(sew_8_a_5) ? $signed(sew_8_b_5) : $signed(sew_8_a_5); // @[Valu.scala 128:30]
  wire [7:0] _T_1335 = 9'h0 == io_aluc ? $signed(_T_1318) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1337 = 9'hb8 == io_aluc ? $signed(_T_1321) : $signed(_T_1335); // @[Mux.scala 80:57]
  wire [7:0] _T_1339 = 9'h48 == io_aluc ? $signed(_T_1323) : $signed(_T_1337); // @[Mux.scala 80:57]
  wire [7:0] _T_1341 = 9'h50 == io_aluc ? $signed(_T_1325) : $signed(_T_1339); // @[Mux.scala 80:57]
  wire [7:0] _T_1343 = 9'h58 == io_aluc ? $signed(_T_1327) : $signed(_T_1341); // @[Mux.scala 80:57]
  wire [7:0] _T_1345 = 9'h20 == io_aluc ? $signed(_T_1331) : $signed(_T_1343); // @[Mux.scala 80:57]
  wire [7:0] _T_1347 = 9'h28 == io_aluc ? $signed(_T_1333) : $signed(_T_1345); // @[Mux.scala 80:57]
  wire [7:0] _T_1348 = _T_838 & io_vma ? $signed(-8'sh1) : $signed(_T_1347); // @[Valu.scala 118:36]
  wire [7:0] _T_1349 = ~io_vm & ~io_vs0[5] & ~io_vma ? $signed(sew_8_vd_5) : $signed(_T_1348); // @[Valu.scala 117:32]
  wire [7:0] _T_1355 = ~io_vta & 32'h5 >= io_vl ? $signed(sew_8_vd_5) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1356 = 32'h5 >= io_vstart & 32'h5 < io_vl ? $signed(_T_1349) : $signed(_T_1355); // @[Valu.scala 116:11]
  wire [7:0] _T_1376 = $signed(sew_8_a_6) + $signed(sew_8_b_6); // @[Valu.scala 122:35]
  wire [7:0] _T_1379 = $signed(sew_8_a_6) - $signed(sew_8_b_6); // @[Valu.scala 123:37]
  wire [7:0] _T_1381 = $signed(sew_8_a_6) & $signed(sew_8_b_6); // @[Valu.scala 124:36]
  wire [7:0] _T_1383 = $signed(sew_8_a_6) | $signed(sew_8_b_6); // @[Valu.scala 125:35]
  wire [7:0] _T_1385 = $signed(sew_8_a_6) ^ $signed(sew_8_b_6); // @[Valu.scala 126:36]
  wire [7:0] _T_1386 = io_vs2[55:48]; // @[Valu.scala 127:40]
  wire [7:0] _T_1387 = io_vs1[55:48]; // @[Valu.scala 127:58]
  wire [7:0] _T_1389 = _T_1386 <= _T_1387 ? $signed(sew_8_b_6) : $signed(sew_8_a_6); // @[Valu.scala 127:31]
  wire [7:0] _T_1391 = $signed(sew_8_b_6) <= $signed(sew_8_a_6) ? $signed(sew_8_b_6) : $signed(sew_8_a_6); // @[Valu.scala 128:30]
  wire [7:0] _T_1393 = 9'h0 == io_aluc ? $signed(_T_1376) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1395 = 9'hb8 == io_aluc ? $signed(_T_1379) : $signed(_T_1393); // @[Mux.scala 80:57]
  wire [7:0] _T_1397 = 9'h48 == io_aluc ? $signed(_T_1381) : $signed(_T_1395); // @[Mux.scala 80:57]
  wire [7:0] _T_1399 = 9'h50 == io_aluc ? $signed(_T_1383) : $signed(_T_1397); // @[Mux.scala 80:57]
  wire [7:0] _T_1401 = 9'h58 == io_aluc ? $signed(_T_1385) : $signed(_T_1399); // @[Mux.scala 80:57]
  wire [7:0] _T_1403 = 9'h20 == io_aluc ? $signed(_T_1389) : $signed(_T_1401); // @[Mux.scala 80:57]
  wire [7:0] _T_1405 = 9'h28 == io_aluc ? $signed(_T_1391) : $signed(_T_1403); // @[Mux.scala 80:57]
  wire [7:0] _T_1406 = _T_896 & io_vma ? $signed(-8'sh1) : $signed(_T_1405); // @[Valu.scala 118:36]
  wire [7:0] _T_1407 = ~io_vm & ~io_vs0[6] & ~io_vma ? $signed(sew_8_vd_6) : $signed(_T_1406); // @[Valu.scala 117:32]
  wire [7:0] _T_1413 = ~io_vta & 32'h6 >= io_vl ? $signed(sew_8_vd_6) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1414 = 32'h6 >= io_vstart & 32'h6 < io_vl ? $signed(_T_1407) : $signed(_T_1413); // @[Valu.scala 116:11]
  wire [7:0] _T_1434 = $signed(sew_8_a_7) + $signed(sew_8_b_7); // @[Valu.scala 122:35]
  wire [7:0] _T_1437 = $signed(sew_8_a_7) - $signed(sew_8_b_7); // @[Valu.scala 123:37]
  wire [7:0] _T_1439 = $signed(sew_8_a_7) & $signed(sew_8_b_7); // @[Valu.scala 124:36]
  wire [7:0] _T_1441 = $signed(sew_8_a_7) | $signed(sew_8_b_7); // @[Valu.scala 125:35]
  wire [7:0] _T_1443 = $signed(sew_8_a_7) ^ $signed(sew_8_b_7); // @[Valu.scala 126:36]
  wire [7:0] _T_1444 = io_vs2[63:56]; // @[Valu.scala 127:40]
  wire [7:0] _T_1445 = io_vs1[63:56]; // @[Valu.scala 127:58]
  wire [7:0] _T_1447 = _T_1444 <= _T_1445 ? $signed(sew_8_b_7) : $signed(sew_8_a_7); // @[Valu.scala 127:31]
  wire [7:0] _T_1449 = $signed(sew_8_b_7) <= $signed(sew_8_a_7) ? $signed(sew_8_b_7) : $signed(sew_8_a_7); // @[Valu.scala 128:30]
  wire [7:0] _T_1451 = 9'h0 == io_aluc ? $signed(_T_1434) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1453 = 9'hb8 == io_aluc ? $signed(_T_1437) : $signed(_T_1451); // @[Mux.scala 80:57]
  wire [7:0] _T_1455 = 9'h48 == io_aluc ? $signed(_T_1439) : $signed(_T_1453); // @[Mux.scala 80:57]
  wire [7:0] _T_1457 = 9'h50 == io_aluc ? $signed(_T_1441) : $signed(_T_1455); // @[Mux.scala 80:57]
  wire [7:0] _T_1459 = 9'h58 == io_aluc ? $signed(_T_1443) : $signed(_T_1457); // @[Mux.scala 80:57]
  wire [7:0] _T_1461 = 9'h20 == io_aluc ? $signed(_T_1447) : $signed(_T_1459); // @[Mux.scala 80:57]
  wire [7:0] _T_1463 = 9'h28 == io_aluc ? $signed(_T_1449) : $signed(_T_1461); // @[Mux.scala 80:57]
  wire [7:0] _T_1464 = _T_954 & io_vma ? $signed(-8'sh1) : $signed(_T_1463); // @[Valu.scala 118:36]
  wire [7:0] _T_1465 = ~io_vm & ~io_vs0[7] & ~io_vma ? $signed(sew_8_vd_7) : $signed(_T_1464); // @[Valu.scala 117:32]
  wire [7:0] _T_1471 = ~io_vta & 32'h7 >= io_vl ? $signed(sew_8_vd_7) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1472 = 32'h7 >= io_vstart & 32'h7 < io_vl ? $signed(_T_1465) : $signed(_T_1471); // @[Valu.scala 116:11]
  wire  _T_1474 = 32'h8 < io_vstart; // @[Valu.scala 115:16]
  wire  _T_1477 = 32'h8 >= io_vstart & 32'h8 < io_vl; // @[Valu.scala 116:29]
  wire  _T_1481 = ~io_vm & ~io_vs0[8]; // @[Valu.scala 117:47]
  wire  _T_1483 = ~io_vm & ~io_vs0[8] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_1489 = _T_1481 & io_vma; // @[Valu.scala 118:72]
  wire [7:0] _T_1492 = $signed(sew_8_a_8) + $signed(sew_8_b_8); // @[Valu.scala 122:35]
  wire [7:0] _T_1495 = $signed(sew_8_a_8) - $signed(sew_8_b_8); // @[Valu.scala 123:37]
  wire [7:0] _T_1497 = $signed(sew_8_a_8) & $signed(sew_8_b_8); // @[Valu.scala 124:36]
  wire [7:0] _T_1499 = $signed(sew_8_a_8) | $signed(sew_8_b_8); // @[Valu.scala 125:35]
  wire [7:0] _T_1501 = $signed(sew_8_a_8) ^ $signed(sew_8_b_8); // @[Valu.scala 126:36]
  wire [7:0] _T_1502 = io_vs2[71:64]; // @[Valu.scala 127:40]
  wire [7:0] _T_1503 = io_vs1[71:64]; // @[Valu.scala 127:58]
  wire [7:0] _T_1505 = _T_1502 <= _T_1503 ? $signed(sew_8_b_8) : $signed(sew_8_a_8); // @[Valu.scala 127:31]
  wire [7:0] _T_1507 = $signed(sew_8_b_8) <= $signed(sew_8_a_8) ? $signed(sew_8_b_8) : $signed(sew_8_a_8); // @[Valu.scala 128:30]
  wire [7:0] _T_1509 = 9'h0 == io_aluc ? $signed(_T_1492) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1511 = 9'hb8 == io_aluc ? $signed(_T_1495) : $signed(_T_1509); // @[Mux.scala 80:57]
  wire [7:0] _T_1513 = 9'h48 == io_aluc ? $signed(_T_1497) : $signed(_T_1511); // @[Mux.scala 80:57]
  wire [7:0] _T_1515 = 9'h50 == io_aluc ? $signed(_T_1499) : $signed(_T_1513); // @[Mux.scala 80:57]
  wire [7:0] _T_1517 = 9'h58 == io_aluc ? $signed(_T_1501) : $signed(_T_1515); // @[Mux.scala 80:57]
  wire [7:0] _T_1519 = 9'h20 == io_aluc ? $signed(_T_1505) : $signed(_T_1517); // @[Mux.scala 80:57]
  wire [7:0] _T_1521 = 9'h28 == io_aluc ? $signed(_T_1507) : $signed(_T_1519); // @[Mux.scala 80:57]
  wire [7:0] _T_1522 = _T_1481 & io_vma ? $signed(-8'sh1) : $signed(_T_1521); // @[Valu.scala 118:36]
  wire [7:0] _T_1523 = ~io_vm & ~io_vs0[8] & ~io_vma ? $signed(sew_8_vd_8) : $signed(_T_1522); // @[Valu.scala 117:32]
  wire [7:0] _T_1529 = ~io_vta & 32'h8 >= io_vl ? $signed(sew_8_vd_8) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1530 = 32'h8 >= io_vstart & 32'h8 < io_vl ? $signed(_T_1523) : $signed(_T_1529); // @[Valu.scala 116:11]
  wire  _T_1532 = 32'h9 < io_vstart; // @[Valu.scala 115:16]
  wire  _T_1535 = 32'h9 >= io_vstart & 32'h9 < io_vl; // @[Valu.scala 116:29]
  wire  _T_1539 = ~io_vm & ~io_vs0[9]; // @[Valu.scala 117:47]
  wire  _T_1541 = ~io_vm & ~io_vs0[9] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_1547 = _T_1539 & io_vma; // @[Valu.scala 118:72]
  wire [7:0] _T_1550 = $signed(sew_8_a_9) + $signed(sew_8_b_9); // @[Valu.scala 122:35]
  wire [7:0] _T_1553 = $signed(sew_8_a_9) - $signed(sew_8_b_9); // @[Valu.scala 123:37]
  wire [7:0] _T_1555 = $signed(sew_8_a_9) & $signed(sew_8_b_9); // @[Valu.scala 124:36]
  wire [7:0] _T_1557 = $signed(sew_8_a_9) | $signed(sew_8_b_9); // @[Valu.scala 125:35]
  wire [7:0] _T_1559 = $signed(sew_8_a_9) ^ $signed(sew_8_b_9); // @[Valu.scala 126:36]
  wire [7:0] _T_1560 = io_vs2[79:72]; // @[Valu.scala 127:40]
  wire [7:0] _T_1561 = io_vs1[79:72]; // @[Valu.scala 127:58]
  wire [7:0] _T_1563 = _T_1560 <= _T_1561 ? $signed(sew_8_b_9) : $signed(sew_8_a_9); // @[Valu.scala 127:31]
  wire [7:0] _T_1565 = $signed(sew_8_b_9) <= $signed(sew_8_a_9) ? $signed(sew_8_b_9) : $signed(sew_8_a_9); // @[Valu.scala 128:30]
  wire [7:0] _T_1567 = 9'h0 == io_aluc ? $signed(_T_1550) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1569 = 9'hb8 == io_aluc ? $signed(_T_1553) : $signed(_T_1567); // @[Mux.scala 80:57]
  wire [7:0] _T_1571 = 9'h48 == io_aluc ? $signed(_T_1555) : $signed(_T_1569); // @[Mux.scala 80:57]
  wire [7:0] _T_1573 = 9'h50 == io_aluc ? $signed(_T_1557) : $signed(_T_1571); // @[Mux.scala 80:57]
  wire [7:0] _T_1575 = 9'h58 == io_aluc ? $signed(_T_1559) : $signed(_T_1573); // @[Mux.scala 80:57]
  wire [7:0] _T_1577 = 9'h20 == io_aluc ? $signed(_T_1563) : $signed(_T_1575); // @[Mux.scala 80:57]
  wire [7:0] _T_1579 = 9'h28 == io_aluc ? $signed(_T_1565) : $signed(_T_1577); // @[Mux.scala 80:57]
  wire [7:0] _T_1580 = _T_1539 & io_vma ? $signed(-8'sh1) : $signed(_T_1579); // @[Valu.scala 118:36]
  wire [7:0] _T_1581 = ~io_vm & ~io_vs0[9] & ~io_vma ? $signed(sew_8_vd_9) : $signed(_T_1580); // @[Valu.scala 117:32]
  wire [7:0] _T_1587 = ~io_vta & 32'h9 >= io_vl ? $signed(sew_8_vd_9) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1588 = 32'h9 >= io_vstart & 32'h9 < io_vl ? $signed(_T_1581) : $signed(_T_1587); // @[Valu.scala 116:11]
  wire  _T_1590 = 32'ha < io_vstart; // @[Valu.scala 115:16]
  wire  _T_1593 = 32'ha >= io_vstart & 32'ha < io_vl; // @[Valu.scala 116:29]
  wire  _T_1597 = ~io_vm & ~io_vs0[10]; // @[Valu.scala 117:47]
  wire  _T_1599 = ~io_vm & ~io_vs0[10] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_1605 = _T_1597 & io_vma; // @[Valu.scala 118:72]
  wire [7:0] _T_1608 = $signed(sew_8_a_10) + $signed(sew_8_b_10); // @[Valu.scala 122:35]
  wire [7:0] _T_1611 = $signed(sew_8_a_10) - $signed(sew_8_b_10); // @[Valu.scala 123:37]
  wire [7:0] _T_1613 = $signed(sew_8_a_10) & $signed(sew_8_b_10); // @[Valu.scala 124:36]
  wire [7:0] _T_1615 = $signed(sew_8_a_10) | $signed(sew_8_b_10); // @[Valu.scala 125:35]
  wire [7:0] _T_1617 = $signed(sew_8_a_10) ^ $signed(sew_8_b_10); // @[Valu.scala 126:36]
  wire [7:0] _T_1618 = io_vs2[87:80]; // @[Valu.scala 127:40]
  wire [7:0] _T_1619 = io_vs1[87:80]; // @[Valu.scala 127:58]
  wire [7:0] _T_1621 = _T_1618 <= _T_1619 ? $signed(sew_8_b_10) : $signed(sew_8_a_10); // @[Valu.scala 127:31]
  wire [7:0] _T_1623 = $signed(sew_8_b_10) <= $signed(sew_8_a_10) ? $signed(sew_8_b_10) : $signed(sew_8_a_10); // @[Valu.scala 128:30]
  wire [7:0] _T_1625 = 9'h0 == io_aluc ? $signed(_T_1608) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1627 = 9'hb8 == io_aluc ? $signed(_T_1611) : $signed(_T_1625); // @[Mux.scala 80:57]
  wire [7:0] _T_1629 = 9'h48 == io_aluc ? $signed(_T_1613) : $signed(_T_1627); // @[Mux.scala 80:57]
  wire [7:0] _T_1631 = 9'h50 == io_aluc ? $signed(_T_1615) : $signed(_T_1629); // @[Mux.scala 80:57]
  wire [7:0] _T_1633 = 9'h58 == io_aluc ? $signed(_T_1617) : $signed(_T_1631); // @[Mux.scala 80:57]
  wire [7:0] _T_1635 = 9'h20 == io_aluc ? $signed(_T_1621) : $signed(_T_1633); // @[Mux.scala 80:57]
  wire [7:0] _T_1637 = 9'h28 == io_aluc ? $signed(_T_1623) : $signed(_T_1635); // @[Mux.scala 80:57]
  wire [7:0] _T_1638 = _T_1597 & io_vma ? $signed(-8'sh1) : $signed(_T_1637); // @[Valu.scala 118:36]
  wire [7:0] _T_1639 = ~io_vm & ~io_vs0[10] & ~io_vma ? $signed(sew_8_vd_10) : $signed(_T_1638); // @[Valu.scala 117:32]
  wire [7:0] _T_1645 = ~io_vta & 32'ha >= io_vl ? $signed(sew_8_vd_10) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1646 = 32'ha >= io_vstart & 32'ha < io_vl ? $signed(_T_1639) : $signed(_T_1645); // @[Valu.scala 116:11]
  wire  _T_1648 = 32'hb < io_vstart; // @[Valu.scala 115:16]
  wire  _T_1651 = 32'hb >= io_vstart & 32'hb < io_vl; // @[Valu.scala 116:29]
  wire  _T_1655 = ~io_vm & ~io_vs0[11]; // @[Valu.scala 117:47]
  wire  _T_1657 = ~io_vm & ~io_vs0[11] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_1663 = _T_1655 & io_vma; // @[Valu.scala 118:72]
  wire [7:0] _T_1666 = $signed(sew_8_a_11) + $signed(sew_8_b_11); // @[Valu.scala 122:35]
  wire [7:0] _T_1669 = $signed(sew_8_a_11) - $signed(sew_8_b_11); // @[Valu.scala 123:37]
  wire [7:0] _T_1671 = $signed(sew_8_a_11) & $signed(sew_8_b_11); // @[Valu.scala 124:36]
  wire [7:0] _T_1673 = $signed(sew_8_a_11) | $signed(sew_8_b_11); // @[Valu.scala 125:35]
  wire [7:0] _T_1675 = $signed(sew_8_a_11) ^ $signed(sew_8_b_11); // @[Valu.scala 126:36]
  wire [7:0] _T_1676 = io_vs2[95:88]; // @[Valu.scala 127:40]
  wire [7:0] _T_1677 = io_vs1[95:88]; // @[Valu.scala 127:58]
  wire [7:0] _T_1679 = _T_1676 <= _T_1677 ? $signed(sew_8_b_11) : $signed(sew_8_a_11); // @[Valu.scala 127:31]
  wire [7:0] _T_1681 = $signed(sew_8_b_11) <= $signed(sew_8_a_11) ? $signed(sew_8_b_11) : $signed(sew_8_a_11); // @[Valu.scala 128:30]
  wire [7:0] _T_1683 = 9'h0 == io_aluc ? $signed(_T_1666) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1685 = 9'hb8 == io_aluc ? $signed(_T_1669) : $signed(_T_1683); // @[Mux.scala 80:57]
  wire [7:0] _T_1687 = 9'h48 == io_aluc ? $signed(_T_1671) : $signed(_T_1685); // @[Mux.scala 80:57]
  wire [7:0] _T_1689 = 9'h50 == io_aluc ? $signed(_T_1673) : $signed(_T_1687); // @[Mux.scala 80:57]
  wire [7:0] _T_1691 = 9'h58 == io_aluc ? $signed(_T_1675) : $signed(_T_1689); // @[Mux.scala 80:57]
  wire [7:0] _T_1693 = 9'h20 == io_aluc ? $signed(_T_1679) : $signed(_T_1691); // @[Mux.scala 80:57]
  wire [7:0] _T_1695 = 9'h28 == io_aluc ? $signed(_T_1681) : $signed(_T_1693); // @[Mux.scala 80:57]
  wire [7:0] _T_1696 = _T_1655 & io_vma ? $signed(-8'sh1) : $signed(_T_1695); // @[Valu.scala 118:36]
  wire [7:0] _T_1697 = ~io_vm & ~io_vs0[11] & ~io_vma ? $signed(sew_8_vd_11) : $signed(_T_1696); // @[Valu.scala 117:32]
  wire [7:0] _T_1703 = ~io_vta & 32'hb >= io_vl ? $signed(sew_8_vd_11) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1704 = 32'hb >= io_vstart & 32'hb < io_vl ? $signed(_T_1697) : $signed(_T_1703); // @[Valu.scala 116:11]
  wire  _T_1706 = 32'hc < io_vstart; // @[Valu.scala 115:16]
  wire  _T_1709 = 32'hc >= io_vstart & 32'hc < io_vl; // @[Valu.scala 116:29]
  wire  _T_1713 = ~io_vm & ~io_vs0[12]; // @[Valu.scala 117:47]
  wire  _T_1715 = ~io_vm & ~io_vs0[12] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_1721 = _T_1713 & io_vma; // @[Valu.scala 118:72]
  wire [7:0] _T_1724 = $signed(sew_8_a_12) + $signed(sew_8_b_12); // @[Valu.scala 122:35]
  wire [7:0] _T_1727 = $signed(sew_8_a_12) - $signed(sew_8_b_12); // @[Valu.scala 123:37]
  wire [7:0] _T_1729 = $signed(sew_8_a_12) & $signed(sew_8_b_12); // @[Valu.scala 124:36]
  wire [7:0] _T_1731 = $signed(sew_8_a_12) | $signed(sew_8_b_12); // @[Valu.scala 125:35]
  wire [7:0] _T_1733 = $signed(sew_8_a_12) ^ $signed(sew_8_b_12); // @[Valu.scala 126:36]
  wire [7:0] _T_1734 = io_vs2[103:96]; // @[Valu.scala 127:40]
  wire [7:0] _T_1735 = io_vs1[103:96]; // @[Valu.scala 127:58]
  wire [7:0] _T_1737 = _T_1734 <= _T_1735 ? $signed(sew_8_b_12) : $signed(sew_8_a_12); // @[Valu.scala 127:31]
  wire [7:0] _T_1739 = $signed(sew_8_b_12) <= $signed(sew_8_a_12) ? $signed(sew_8_b_12) : $signed(sew_8_a_12); // @[Valu.scala 128:30]
  wire [7:0] _T_1741 = 9'h0 == io_aluc ? $signed(_T_1724) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1743 = 9'hb8 == io_aluc ? $signed(_T_1727) : $signed(_T_1741); // @[Mux.scala 80:57]
  wire [7:0] _T_1745 = 9'h48 == io_aluc ? $signed(_T_1729) : $signed(_T_1743); // @[Mux.scala 80:57]
  wire [7:0] _T_1747 = 9'h50 == io_aluc ? $signed(_T_1731) : $signed(_T_1745); // @[Mux.scala 80:57]
  wire [7:0] _T_1749 = 9'h58 == io_aluc ? $signed(_T_1733) : $signed(_T_1747); // @[Mux.scala 80:57]
  wire [7:0] _T_1751 = 9'h20 == io_aluc ? $signed(_T_1737) : $signed(_T_1749); // @[Mux.scala 80:57]
  wire [7:0] _T_1753 = 9'h28 == io_aluc ? $signed(_T_1739) : $signed(_T_1751); // @[Mux.scala 80:57]
  wire [7:0] _T_1754 = _T_1713 & io_vma ? $signed(-8'sh1) : $signed(_T_1753); // @[Valu.scala 118:36]
  wire [7:0] _T_1755 = ~io_vm & ~io_vs0[12] & ~io_vma ? $signed(sew_8_vd_12) : $signed(_T_1754); // @[Valu.scala 117:32]
  wire [7:0] _T_1761 = ~io_vta & 32'hc >= io_vl ? $signed(sew_8_vd_12) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1762 = 32'hc >= io_vstart & 32'hc < io_vl ? $signed(_T_1755) : $signed(_T_1761); // @[Valu.scala 116:11]
  wire  _T_1764 = 32'hd < io_vstart; // @[Valu.scala 115:16]
  wire  _T_1767 = 32'hd >= io_vstart & 32'hd < io_vl; // @[Valu.scala 116:29]
  wire  _T_1771 = ~io_vm & ~io_vs0[13]; // @[Valu.scala 117:47]
  wire  _T_1773 = ~io_vm & ~io_vs0[13] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_1779 = _T_1771 & io_vma; // @[Valu.scala 118:72]
  wire [7:0] _T_1782 = $signed(sew_8_a_13) + $signed(sew_8_b_13); // @[Valu.scala 122:35]
  wire [7:0] _T_1785 = $signed(sew_8_a_13) - $signed(sew_8_b_13); // @[Valu.scala 123:37]
  wire [7:0] _T_1787 = $signed(sew_8_a_13) & $signed(sew_8_b_13); // @[Valu.scala 124:36]
  wire [7:0] _T_1789 = $signed(sew_8_a_13) | $signed(sew_8_b_13); // @[Valu.scala 125:35]
  wire [7:0] _T_1791 = $signed(sew_8_a_13) ^ $signed(sew_8_b_13); // @[Valu.scala 126:36]
  wire [7:0] _T_1792 = io_vs2[111:104]; // @[Valu.scala 127:40]
  wire [7:0] _T_1793 = io_vs1[111:104]; // @[Valu.scala 127:58]
  wire [7:0] _T_1795 = _T_1792 <= _T_1793 ? $signed(sew_8_b_13) : $signed(sew_8_a_13); // @[Valu.scala 127:31]
  wire [7:0] _T_1797 = $signed(sew_8_b_13) <= $signed(sew_8_a_13) ? $signed(sew_8_b_13) : $signed(sew_8_a_13); // @[Valu.scala 128:30]
  wire [7:0] _T_1799 = 9'h0 == io_aluc ? $signed(_T_1782) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1801 = 9'hb8 == io_aluc ? $signed(_T_1785) : $signed(_T_1799); // @[Mux.scala 80:57]
  wire [7:0] _T_1803 = 9'h48 == io_aluc ? $signed(_T_1787) : $signed(_T_1801); // @[Mux.scala 80:57]
  wire [7:0] _T_1805 = 9'h50 == io_aluc ? $signed(_T_1789) : $signed(_T_1803); // @[Mux.scala 80:57]
  wire [7:0] _T_1807 = 9'h58 == io_aluc ? $signed(_T_1791) : $signed(_T_1805); // @[Mux.scala 80:57]
  wire [7:0] _T_1809 = 9'h20 == io_aluc ? $signed(_T_1795) : $signed(_T_1807); // @[Mux.scala 80:57]
  wire [7:0] _T_1811 = 9'h28 == io_aluc ? $signed(_T_1797) : $signed(_T_1809); // @[Mux.scala 80:57]
  wire [7:0] _T_1812 = _T_1771 & io_vma ? $signed(-8'sh1) : $signed(_T_1811); // @[Valu.scala 118:36]
  wire [7:0] _T_1813 = ~io_vm & ~io_vs0[13] & ~io_vma ? $signed(sew_8_vd_13) : $signed(_T_1812); // @[Valu.scala 117:32]
  wire [7:0] _T_1819 = ~io_vta & 32'hd >= io_vl ? $signed(sew_8_vd_13) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1820 = 32'hd >= io_vstart & 32'hd < io_vl ? $signed(_T_1813) : $signed(_T_1819); // @[Valu.scala 116:11]
  wire  _T_1822 = 32'he < io_vstart; // @[Valu.scala 115:16]
  wire  _T_1825 = 32'he >= io_vstart & 32'he < io_vl; // @[Valu.scala 116:29]
  wire  _T_1829 = ~io_vm & ~io_vs0[14]; // @[Valu.scala 117:47]
  wire  _T_1831 = ~io_vm & ~io_vs0[14] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_1837 = _T_1829 & io_vma; // @[Valu.scala 118:72]
  wire [7:0] _T_1840 = $signed(sew_8_a_14) + $signed(sew_8_b_14); // @[Valu.scala 122:35]
  wire [7:0] _T_1843 = $signed(sew_8_a_14) - $signed(sew_8_b_14); // @[Valu.scala 123:37]
  wire [7:0] _T_1845 = $signed(sew_8_a_14) & $signed(sew_8_b_14); // @[Valu.scala 124:36]
  wire [7:0] _T_1847 = $signed(sew_8_a_14) | $signed(sew_8_b_14); // @[Valu.scala 125:35]
  wire [7:0] _T_1849 = $signed(sew_8_a_14) ^ $signed(sew_8_b_14); // @[Valu.scala 126:36]
  wire [7:0] _T_1850 = io_vs2[119:112]; // @[Valu.scala 127:40]
  wire [7:0] _T_1851 = io_vs1[119:112]; // @[Valu.scala 127:58]
  wire [7:0] _T_1853 = _T_1850 <= _T_1851 ? $signed(sew_8_b_14) : $signed(sew_8_a_14); // @[Valu.scala 127:31]
  wire [7:0] _T_1855 = $signed(sew_8_b_14) <= $signed(sew_8_a_14) ? $signed(sew_8_b_14) : $signed(sew_8_a_14); // @[Valu.scala 128:30]
  wire [7:0] _T_1857 = 9'h0 == io_aluc ? $signed(_T_1840) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1859 = 9'hb8 == io_aluc ? $signed(_T_1843) : $signed(_T_1857); // @[Mux.scala 80:57]
  wire [7:0] _T_1861 = 9'h48 == io_aluc ? $signed(_T_1845) : $signed(_T_1859); // @[Mux.scala 80:57]
  wire [7:0] _T_1863 = 9'h50 == io_aluc ? $signed(_T_1847) : $signed(_T_1861); // @[Mux.scala 80:57]
  wire [7:0] _T_1865 = 9'h58 == io_aluc ? $signed(_T_1849) : $signed(_T_1863); // @[Mux.scala 80:57]
  wire [7:0] _T_1867 = 9'h20 == io_aluc ? $signed(_T_1853) : $signed(_T_1865); // @[Mux.scala 80:57]
  wire [7:0] _T_1869 = 9'h28 == io_aluc ? $signed(_T_1855) : $signed(_T_1867); // @[Mux.scala 80:57]
  wire [7:0] _T_1870 = _T_1829 & io_vma ? $signed(-8'sh1) : $signed(_T_1869); // @[Valu.scala 118:36]
  wire [7:0] _T_1871 = ~io_vm & ~io_vs0[14] & ~io_vma ? $signed(sew_8_vd_14) : $signed(_T_1870); // @[Valu.scala 117:32]
  wire [7:0] _T_1877 = ~io_vta & 32'he >= io_vl ? $signed(sew_8_vd_14) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1878 = 32'he >= io_vstart & 32'he < io_vl ? $signed(_T_1871) : $signed(_T_1877); // @[Valu.scala 116:11]
  wire  _T_1880 = 32'hf < io_vstart; // @[Valu.scala 115:16]
  wire  _T_1883 = 32'hf >= io_vstart & 32'hf < io_vl; // @[Valu.scala 116:29]
  wire  _T_1887 = ~io_vm & ~io_vs0[15]; // @[Valu.scala 117:47]
  wire  _T_1889 = ~io_vm & ~io_vs0[15] & ~io_vma; // @[Valu.scala 117:68]
  wire  _T_1895 = _T_1887 & io_vma; // @[Valu.scala 118:72]
  wire [7:0] _T_1898 = $signed(sew_8_a_15) + $signed(sew_8_b_15); // @[Valu.scala 122:35]
  wire [7:0] _T_1901 = $signed(sew_8_a_15) - $signed(sew_8_b_15); // @[Valu.scala 123:37]
  wire [7:0] _T_1903 = $signed(sew_8_a_15) & $signed(sew_8_b_15); // @[Valu.scala 124:36]
  wire [7:0] _T_1905 = $signed(sew_8_a_15) | $signed(sew_8_b_15); // @[Valu.scala 125:35]
  wire [7:0] _T_1907 = $signed(sew_8_a_15) ^ $signed(sew_8_b_15); // @[Valu.scala 126:36]
  wire [7:0] _T_1908 = io_vs2[127:120]; // @[Valu.scala 127:40]
  wire [7:0] _T_1909 = io_vs1[127:120]; // @[Valu.scala 127:58]
  wire [7:0] _T_1911 = _T_1908 <= _T_1909 ? $signed(sew_8_b_15) : $signed(sew_8_a_15); // @[Valu.scala 127:31]
  wire [7:0] _T_1913 = $signed(sew_8_b_15) <= $signed(sew_8_a_15) ? $signed(sew_8_b_15) : $signed(sew_8_a_15); // @[Valu.scala 128:30]
  wire [7:0] _T_1915 = 9'h0 == io_aluc ? $signed(_T_1898) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1917 = 9'hb8 == io_aluc ? $signed(_T_1901) : $signed(_T_1915); // @[Mux.scala 80:57]
  wire [7:0] _T_1919 = 9'h48 == io_aluc ? $signed(_T_1903) : $signed(_T_1917); // @[Mux.scala 80:57]
  wire [7:0] _T_1921 = 9'h50 == io_aluc ? $signed(_T_1905) : $signed(_T_1919); // @[Mux.scala 80:57]
  wire [7:0] _T_1923 = 9'h58 == io_aluc ? $signed(_T_1907) : $signed(_T_1921); // @[Mux.scala 80:57]
  wire [7:0] _T_1925 = 9'h20 == io_aluc ? $signed(_T_1911) : $signed(_T_1923); // @[Mux.scala 80:57]
  wire [7:0] _T_1927 = 9'h28 == io_aluc ? $signed(_T_1913) : $signed(_T_1925); // @[Mux.scala 80:57]
  wire [7:0] _T_1928 = _T_1887 & io_vma ? $signed(-8'sh1) : $signed(_T_1927); // @[Valu.scala 118:36]
  wire [7:0] _T_1929 = ~io_vm & ~io_vs0[15] & ~io_vma ? $signed(sew_8_vd_15) : $signed(_T_1928); // @[Valu.scala 117:32]
  wire [7:0] _T_1935 = ~io_vta & 32'hf >= io_vl ? $signed(sew_8_vd_15) : $signed(-8'sh1); // @[Valu.scala 132:12]
  wire [7:0] _T_1936 = 32'hf >= io_vstart & 32'hf < io_vl ? $signed(_T_1929) : $signed(_T_1935); // @[Valu.scala 116:11]
  wire [7:0] lo_lo_lo_lo = 32'h0 < io_vstart ? $signed(sew_8_vd_0) : $signed(_T_1066); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_lo_hi = 32'h1 < io_vstart ? $signed(sew_8_vd_1) : $signed(_T_1124); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_hi_lo = 32'h2 < io_vstart ? $signed(sew_8_vd_2) : $signed(_T_1182); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_hi_hi = 32'h3 < io_vstart ? $signed(sew_8_vd_3) : $signed(_T_1240); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_lo_lo = 32'h4 < io_vstart ? $signed(sew_8_vd_4) : $signed(_T_1298); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_lo_hi = 32'h5 < io_vstart ? $signed(sew_8_vd_5) : $signed(_T_1356); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_hi_lo = 32'h6 < io_vstart ? $signed(sew_8_vd_6) : $signed(_T_1414); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_hi_hi = 32'h7 < io_vstart ? $signed(sew_8_vd_7) : $signed(_T_1472); // @[Cat.scala 30:58]
  wire [63:0] lo_3 = {lo_hi_hi_hi,lo_hi_hi_lo,lo_hi_lo_hi,lo_hi_lo_lo,lo_lo_hi_hi,lo_lo_hi_lo,lo_lo_lo_hi,lo_lo_lo_lo}; // @[Cat.scala 30:58]
  wire [7:0] hi_lo_lo_lo = 32'h8 < io_vstart ? $signed(sew_8_vd_8) : $signed(_T_1530); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_lo_hi = 32'h9 < io_vstart ? $signed(sew_8_vd_9) : $signed(_T_1588); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_hi_lo = 32'ha < io_vstart ? $signed(sew_8_vd_10) : $signed(_T_1646); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_hi_hi = 32'hb < io_vstart ? $signed(sew_8_vd_11) : $signed(_T_1704); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_lo_lo = 32'hc < io_vstart ? $signed(sew_8_vd_12) : $signed(_T_1762); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_lo_hi = 32'hd < io_vstart ? $signed(sew_8_vd_13) : $signed(_T_1820); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_hi_lo = 32'he < io_vstart ? $signed(sew_8_vd_14) : $signed(_T_1878); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_hi_hi = 32'hf < io_vstart ? $signed(sew_8_vd_15) : $signed(_T_1936); // @[Cat.scala 30:58]
  wire [127:0] _T_1939 = {hi_hi_hi_hi,hi_hi_hi_lo,hi_hi_lo_hi,hi_hi_lo_lo,hi_lo_hi_hi,hi_lo_hi_lo,hi_lo_lo_hi,
    hi_lo_lo_lo,lo_3}; // @[Valu.scala 135:24]
  wire  _T_1942 = io_aluc[2:0] == 3'h3; // @[Valu.scala 231:56]
  wire [63:0] _T_1945 = {32'h0,io_in_B}; // @[Valu.scala 232:47]
  wire [63:0] _T_1964 = $signed(sew_64_b_0) + $signed(_T_1945); // @[Valu.scala 148:37]
  wire [63:0] _T_1967 = $signed(_T_1945) - $signed(sew_64_b_0); // @[Valu.scala 149:33]
  wire [63:0] _T_1969 = $signed(sew_64_b_0) & $signed(_T_1945); // @[Valu.scala 150:36]
  wire [63:0] _T_1971 = $signed(sew_64_b_0) | $signed(_T_1945); // @[Valu.scala 151:35]
  wire [63:0] _T_1973 = $signed(sew_64_b_0) ^ $signed(_T_1945); // @[Valu.scala 152:36]
  wire [63:0] _T_1975 = 9'h3 == io_aluc ? $signed(_T_1964) : $signed(64'sh0); // @[Mux.scala 80:57]
  wire [63:0] _T_1977 = 9'h1b == io_aluc ? $signed(_T_1967) : $signed(_T_1975); // @[Mux.scala 80:57]
  wire [63:0] _T_1979 = 9'h4b == io_aluc ? $signed(_T_1969) : $signed(_T_1977); // @[Mux.scala 80:57]
  wire [63:0] _T_1981 = 9'h2b == io_aluc ? $signed(_T_1971) : $signed(_T_1979); // @[Mux.scala 80:57]
  wire [63:0] _T_1983 = 9'h5b == io_aluc ? $signed(_T_1973) : $signed(_T_1981); // @[Mux.scala 80:57]
  wire [63:0] _T_1984 = _T_198 ? $signed(-64'sh1) : $signed(_T_1983); // @[Valu.scala 144:36]
  wire [63:0] _T_1985 = _T_192 ? $signed(sew_64_vd_0) : $signed(_T_1984); // @[Valu.scala 143:32]
  wire [63:0] _T_1992 = _T_186 ? $signed(_T_1985) : $signed(_T_238); // @[Valu.scala 142:11]
  wire [63:0] _T_2012 = $signed(sew_64_b_1) + $signed(_T_1945); // @[Valu.scala 148:37]
  wire [63:0] _T_2015 = $signed(_T_1945) - $signed(sew_64_b_1); // @[Valu.scala 149:33]
  wire [63:0] _T_2017 = $signed(sew_64_b_1) & $signed(_T_1945); // @[Valu.scala 150:36]
  wire [63:0] _T_2019 = $signed(sew_64_b_1) | $signed(_T_1945); // @[Valu.scala 151:35]
  wire [63:0] _T_2021 = $signed(sew_64_b_1) ^ $signed(_T_1945); // @[Valu.scala 152:36]
  wire [63:0] _T_2023 = 9'h3 == io_aluc ? $signed(_T_2012) : $signed(64'sh0); // @[Mux.scala 80:57]
  wire [63:0] _T_2025 = 9'h1b == io_aluc ? $signed(_T_2015) : $signed(_T_2023); // @[Mux.scala 80:57]
  wire [63:0] _T_2027 = 9'h4b == io_aluc ? $signed(_T_2017) : $signed(_T_2025); // @[Mux.scala 80:57]
  wire [63:0] _T_2029 = 9'h2b == io_aluc ? $signed(_T_2019) : $signed(_T_2027); // @[Mux.scala 80:57]
  wire [63:0] _T_2031 = 9'h5b == io_aluc ? $signed(_T_2021) : $signed(_T_2029); // @[Mux.scala 80:57]
  wire [63:0] _T_2032 = _T_256 ? $signed(-64'sh1) : $signed(_T_2031); // @[Valu.scala 144:36]
  wire [63:0] _T_2033 = _T_250 ? $signed(sew_64_vd_1) : $signed(_T_2032); // @[Valu.scala 143:32]
  wire [63:0] _T_2040 = _T_244 ? $signed(_T_2033) : $signed(_T_296); // @[Valu.scala 142:11]
  wire [63:0] lo_5 = _T_183 ? $signed(sew_64_vd_0) : $signed(_T_1992); // @[Cat.scala 30:58]
  wire [63:0] hi_5 = _T_241 ? $signed(sew_64_vd_1) : $signed(_T_2040); // @[Cat.scala 30:58]
  wire [127:0] _T_2043 = {hi_5,lo_5}; // @[Valu.scala 160:24]
  wire [31:0] _T_2068 = $signed(sew_32_b_0) + $signed(io_in_B); // @[Valu.scala 148:37]
  wire [31:0] _T_2071 = $signed(io_in_B) - $signed(sew_32_b_0); // @[Valu.scala 149:33]
  wire [31:0] _T_2073 = $signed(sew_32_b_0) & $signed(io_in_B); // @[Valu.scala 150:36]
  wire [31:0] _T_2075 = $signed(sew_32_b_0) | $signed(io_in_B); // @[Valu.scala 151:35]
  wire [31:0] _T_2077 = $signed(sew_32_b_0) ^ $signed(io_in_B); // @[Valu.scala 152:36]
  wire [31:0] _T_2079 = 9'h3 == io_aluc ? $signed(_T_2068) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_2081 = 9'h1b == io_aluc ? $signed(_T_2071) : $signed(_T_2079); // @[Mux.scala 80:57]
  wire [31:0] _T_2083 = 9'h4b == io_aluc ? $signed(_T_2073) : $signed(_T_2081); // @[Mux.scala 80:57]
  wire [31:0] _T_2085 = 9'h2b == io_aluc ? $signed(_T_2075) : $signed(_T_2083); // @[Mux.scala 80:57]
  wire [31:0] _T_2087 = 9'h5b == io_aluc ? $signed(_T_2077) : $signed(_T_2085); // @[Mux.scala 80:57]
  wire [31:0] _T_2088 = _T_198 ? $signed(-32'sh1) : $signed(_T_2087); // @[Valu.scala 144:36]
  wire [31:0] _T_2089 = _T_192 ? $signed(sew_32_vd_0) : $signed(_T_2088); // @[Valu.scala 143:32]
  wire [31:0] _T_2096 = _T_186 ? $signed(_T_2089) : $signed(_T_359); // @[Valu.scala 142:11]
  wire [31:0] _T_2116 = $signed(sew_32_b_1) + $signed(io_in_B); // @[Valu.scala 148:37]
  wire [31:0] _T_2119 = $signed(io_in_B) - $signed(sew_32_b_1); // @[Valu.scala 149:33]
  wire [31:0] _T_2121 = $signed(sew_32_b_1) & $signed(io_in_B); // @[Valu.scala 150:36]
  wire [31:0] _T_2123 = $signed(sew_32_b_1) | $signed(io_in_B); // @[Valu.scala 151:35]
  wire [31:0] _T_2125 = $signed(sew_32_b_1) ^ $signed(io_in_B); // @[Valu.scala 152:36]
  wire [31:0] _T_2127 = 9'h3 == io_aluc ? $signed(_T_2116) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_2129 = 9'h1b == io_aluc ? $signed(_T_2119) : $signed(_T_2127); // @[Mux.scala 80:57]
  wire [31:0] _T_2131 = 9'h4b == io_aluc ? $signed(_T_2121) : $signed(_T_2129); // @[Mux.scala 80:57]
  wire [31:0] _T_2133 = 9'h2b == io_aluc ? $signed(_T_2123) : $signed(_T_2131); // @[Mux.scala 80:57]
  wire [31:0] _T_2135 = 9'h5b == io_aluc ? $signed(_T_2125) : $signed(_T_2133); // @[Mux.scala 80:57]
  wire [31:0] _T_2136 = _T_256 ? $signed(-32'sh1) : $signed(_T_2135); // @[Valu.scala 144:36]
  wire [31:0] _T_2137 = _T_250 ? $signed(sew_32_vd_1) : $signed(_T_2136); // @[Valu.scala 143:32]
  wire [31:0] _T_2144 = _T_244 ? $signed(_T_2137) : $signed(_T_417); // @[Valu.scala 142:11]
  wire [31:0] _T_2164 = $signed(sew_32_b_2) + $signed(io_in_B); // @[Valu.scala 148:37]
  wire [31:0] _T_2167 = $signed(io_in_B) - $signed(sew_32_b_2); // @[Valu.scala 149:33]
  wire [31:0] _T_2169 = $signed(sew_32_b_2) & $signed(io_in_B); // @[Valu.scala 150:36]
  wire [31:0] _T_2171 = $signed(sew_32_b_2) | $signed(io_in_B); // @[Valu.scala 151:35]
  wire [31:0] _T_2173 = $signed(sew_32_b_2) ^ $signed(io_in_B); // @[Valu.scala 152:36]
  wire [31:0] _T_2175 = 9'h3 == io_aluc ? $signed(_T_2164) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_2177 = 9'h1b == io_aluc ? $signed(_T_2167) : $signed(_T_2175); // @[Mux.scala 80:57]
  wire [31:0] _T_2179 = 9'h4b == io_aluc ? $signed(_T_2169) : $signed(_T_2177); // @[Mux.scala 80:57]
  wire [31:0] _T_2181 = 9'h2b == io_aluc ? $signed(_T_2171) : $signed(_T_2179); // @[Mux.scala 80:57]
  wire [31:0] _T_2183 = 9'h5b == io_aluc ? $signed(_T_2173) : $signed(_T_2181); // @[Mux.scala 80:57]
  wire [31:0] _T_2184 = _T_435 ? $signed(-32'sh1) : $signed(_T_2183); // @[Valu.scala 144:36]
  wire [31:0] _T_2185 = _T_429 ? $signed(sew_32_vd_2) : $signed(_T_2184); // @[Valu.scala 143:32]
  wire [31:0] _T_2192 = _T_423 ? $signed(_T_2185) : $signed(_T_475); // @[Valu.scala 142:11]
  wire [31:0] _T_2212 = $signed(sew_32_b_3) + $signed(io_in_B); // @[Valu.scala 148:37]
  wire [31:0] _T_2215 = $signed(io_in_B) - $signed(sew_32_b_3); // @[Valu.scala 149:33]
  wire [31:0] _T_2217 = $signed(sew_32_b_3) & $signed(io_in_B); // @[Valu.scala 150:36]
  wire [31:0] _T_2219 = $signed(sew_32_b_3) | $signed(io_in_B); // @[Valu.scala 151:35]
  wire [31:0] _T_2221 = $signed(sew_32_b_3) ^ $signed(io_in_B); // @[Valu.scala 152:36]
  wire [31:0] _T_2223 = 9'h3 == io_aluc ? $signed(_T_2212) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_2225 = 9'h1b == io_aluc ? $signed(_T_2215) : $signed(_T_2223); // @[Mux.scala 80:57]
  wire [31:0] _T_2227 = 9'h4b == io_aluc ? $signed(_T_2217) : $signed(_T_2225); // @[Mux.scala 80:57]
  wire [31:0] _T_2229 = 9'h2b == io_aluc ? $signed(_T_2219) : $signed(_T_2227); // @[Mux.scala 80:57]
  wire [31:0] _T_2231 = 9'h5b == io_aluc ? $signed(_T_2221) : $signed(_T_2229); // @[Mux.scala 80:57]
  wire [31:0] _T_2232 = _T_493 ? $signed(-32'sh1) : $signed(_T_2231); // @[Valu.scala 144:36]
  wire [31:0] _T_2233 = _T_487 ? $signed(sew_32_vd_3) : $signed(_T_2232); // @[Valu.scala 143:32]
  wire [31:0] _T_2240 = _T_481 ? $signed(_T_2233) : $signed(_T_533); // @[Valu.scala 142:11]
  wire [31:0] lo_lo_3 = _T_183 ? $signed(sew_32_vd_0) : $signed(_T_2096); // @[Cat.scala 30:58]
  wire [31:0] lo_hi_3 = _T_241 ? $signed(sew_32_vd_1) : $signed(_T_2144); // @[Cat.scala 30:58]
  wire [31:0] hi_lo_3 = _T_420 ? $signed(sew_32_vd_2) : $signed(_T_2192); // @[Cat.scala 30:58]
  wire [31:0] hi_hi_3 = _T_478 ? $signed(sew_32_vd_3) : $signed(_T_2240); // @[Cat.scala 30:58]
  wire [127:0] _T_2243 = {hi_hi_3,hi_lo_3,lo_hi_3,lo_lo_3}; // @[Valu.scala 160:24]
  wire [7:0] _T_2249 = io_in_B[7:0]; // @[Valu.scala 238:36]
  wire [7:0] _T_2268 = $signed(sew_8_b_0) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2271 = $signed(_T_2249) - $signed(sew_8_b_0); // @[Valu.scala 149:33]
  wire [7:0] _T_2273 = $signed(sew_8_b_0) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2275 = $signed(sew_8_b_0) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2277 = $signed(sew_8_b_0) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2279 = 9'h3 == io_aluc ? $signed(_T_2268) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2281 = 9'h1b == io_aluc ? $signed(_T_2271) : $signed(_T_2279); // @[Mux.scala 80:57]
  wire [7:0] _T_2283 = 9'h4b == io_aluc ? $signed(_T_2273) : $signed(_T_2281); // @[Mux.scala 80:57]
  wire [7:0] _T_2285 = 9'h2b == io_aluc ? $signed(_T_2275) : $signed(_T_2283); // @[Mux.scala 80:57]
  wire [7:0] _T_2287 = 9'h5b == io_aluc ? $signed(_T_2277) : $signed(_T_2285); // @[Mux.scala 80:57]
  wire [7:0] _T_2288 = _T_198 ? $signed(-8'sh1) : $signed(_T_2287); // @[Valu.scala 144:36]
  wire [7:0] _T_2289 = _T_192 ? $signed(sew_8_vd_0) : $signed(_T_2288); // @[Valu.scala 143:32]
  wire [7:0] _T_2296 = _T_186 ? $signed(_T_2289) : $signed(_T_1065); // @[Valu.scala 142:11]
  wire [7:0] _T_2316 = $signed(sew_8_b_1) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2319 = $signed(_T_2249) - $signed(sew_8_b_1); // @[Valu.scala 149:33]
  wire [7:0] _T_2321 = $signed(sew_8_b_1) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2323 = $signed(sew_8_b_1) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2325 = $signed(sew_8_b_1) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2327 = 9'h3 == io_aluc ? $signed(_T_2316) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2329 = 9'h1b == io_aluc ? $signed(_T_2319) : $signed(_T_2327); // @[Mux.scala 80:57]
  wire [7:0] _T_2331 = 9'h4b == io_aluc ? $signed(_T_2321) : $signed(_T_2329); // @[Mux.scala 80:57]
  wire [7:0] _T_2333 = 9'h2b == io_aluc ? $signed(_T_2323) : $signed(_T_2331); // @[Mux.scala 80:57]
  wire [7:0] _T_2335 = 9'h5b == io_aluc ? $signed(_T_2325) : $signed(_T_2333); // @[Mux.scala 80:57]
  wire [7:0] _T_2336 = _T_256 ? $signed(-8'sh1) : $signed(_T_2335); // @[Valu.scala 144:36]
  wire [7:0] _T_2337 = _T_250 ? $signed(sew_8_vd_1) : $signed(_T_2336); // @[Valu.scala 143:32]
  wire [7:0] _T_2344 = _T_244 ? $signed(_T_2337) : $signed(_T_1123); // @[Valu.scala 142:11]
  wire [7:0] _T_2364 = $signed(sew_8_b_2) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2367 = $signed(_T_2249) - $signed(sew_8_b_2); // @[Valu.scala 149:33]
  wire [7:0] _T_2369 = $signed(sew_8_b_2) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2371 = $signed(sew_8_b_2) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2373 = $signed(sew_8_b_2) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2375 = 9'h3 == io_aluc ? $signed(_T_2364) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2377 = 9'h1b == io_aluc ? $signed(_T_2367) : $signed(_T_2375); // @[Mux.scala 80:57]
  wire [7:0] _T_2379 = 9'h4b == io_aluc ? $signed(_T_2369) : $signed(_T_2377); // @[Mux.scala 80:57]
  wire [7:0] _T_2381 = 9'h2b == io_aluc ? $signed(_T_2371) : $signed(_T_2379); // @[Mux.scala 80:57]
  wire [7:0] _T_2383 = 9'h5b == io_aluc ? $signed(_T_2373) : $signed(_T_2381); // @[Mux.scala 80:57]
  wire [7:0] _T_2384 = _T_435 ? $signed(-8'sh1) : $signed(_T_2383); // @[Valu.scala 144:36]
  wire [7:0] _T_2385 = _T_429 ? $signed(sew_8_vd_2) : $signed(_T_2384); // @[Valu.scala 143:32]
  wire [7:0] _T_2392 = _T_423 ? $signed(_T_2385) : $signed(_T_1181); // @[Valu.scala 142:11]
  wire [7:0] _T_2412 = $signed(sew_8_b_3) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2415 = $signed(_T_2249) - $signed(sew_8_b_3); // @[Valu.scala 149:33]
  wire [7:0] _T_2417 = $signed(sew_8_b_3) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2419 = $signed(sew_8_b_3) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2421 = $signed(sew_8_b_3) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2423 = 9'h3 == io_aluc ? $signed(_T_2412) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2425 = 9'h1b == io_aluc ? $signed(_T_2415) : $signed(_T_2423); // @[Mux.scala 80:57]
  wire [7:0] _T_2427 = 9'h4b == io_aluc ? $signed(_T_2417) : $signed(_T_2425); // @[Mux.scala 80:57]
  wire [7:0] _T_2429 = 9'h2b == io_aluc ? $signed(_T_2419) : $signed(_T_2427); // @[Mux.scala 80:57]
  wire [7:0] _T_2431 = 9'h5b == io_aluc ? $signed(_T_2421) : $signed(_T_2429); // @[Mux.scala 80:57]
  wire [7:0] _T_2432 = _T_493 ? $signed(-8'sh1) : $signed(_T_2431); // @[Valu.scala 144:36]
  wire [7:0] _T_2433 = _T_487 ? $signed(sew_8_vd_3) : $signed(_T_2432); // @[Valu.scala 143:32]
  wire [7:0] _T_2440 = _T_481 ? $signed(_T_2433) : $signed(_T_1239); // @[Valu.scala 142:11]
  wire [7:0] _T_2460 = $signed(sew_8_b_4) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2463 = $signed(_T_2249) - $signed(sew_8_b_4); // @[Valu.scala 149:33]
  wire [7:0] _T_2465 = $signed(sew_8_b_4) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2467 = $signed(sew_8_b_4) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2469 = $signed(sew_8_b_4) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2471 = 9'h3 == io_aluc ? $signed(_T_2460) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2473 = 9'h1b == io_aluc ? $signed(_T_2463) : $signed(_T_2471); // @[Mux.scala 80:57]
  wire [7:0] _T_2475 = 9'h4b == io_aluc ? $signed(_T_2465) : $signed(_T_2473); // @[Mux.scala 80:57]
  wire [7:0] _T_2477 = 9'h2b == io_aluc ? $signed(_T_2467) : $signed(_T_2475); // @[Mux.scala 80:57]
  wire [7:0] _T_2479 = 9'h5b == io_aluc ? $signed(_T_2469) : $signed(_T_2477); // @[Mux.scala 80:57]
  wire [7:0] _T_2480 = _T_788 ? $signed(-8'sh1) : $signed(_T_2479); // @[Valu.scala 144:36]
  wire [7:0] _T_2481 = _T_782 ? $signed(sew_8_vd_4) : $signed(_T_2480); // @[Valu.scala 143:32]
  wire [7:0] _T_2488 = _T_776 ? $signed(_T_2481) : $signed(_T_1297); // @[Valu.scala 142:11]
  wire [7:0] _T_2508 = $signed(sew_8_b_5) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2511 = $signed(_T_2249) - $signed(sew_8_b_5); // @[Valu.scala 149:33]
  wire [7:0] _T_2513 = $signed(sew_8_b_5) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2515 = $signed(sew_8_b_5) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2517 = $signed(sew_8_b_5) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2519 = 9'h3 == io_aluc ? $signed(_T_2508) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2521 = 9'h1b == io_aluc ? $signed(_T_2511) : $signed(_T_2519); // @[Mux.scala 80:57]
  wire [7:0] _T_2523 = 9'h4b == io_aluc ? $signed(_T_2513) : $signed(_T_2521); // @[Mux.scala 80:57]
  wire [7:0] _T_2525 = 9'h2b == io_aluc ? $signed(_T_2515) : $signed(_T_2523); // @[Mux.scala 80:57]
  wire [7:0] _T_2527 = 9'h5b == io_aluc ? $signed(_T_2517) : $signed(_T_2525); // @[Mux.scala 80:57]
  wire [7:0] _T_2528 = _T_846 ? $signed(-8'sh1) : $signed(_T_2527); // @[Valu.scala 144:36]
  wire [7:0] _T_2529 = _T_840 ? $signed(sew_8_vd_5) : $signed(_T_2528); // @[Valu.scala 143:32]
  wire [7:0] _T_2536 = _T_834 ? $signed(_T_2529) : $signed(_T_1355); // @[Valu.scala 142:11]
  wire [7:0] _T_2556 = $signed(sew_8_b_6) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2559 = $signed(_T_2249) - $signed(sew_8_b_6); // @[Valu.scala 149:33]
  wire [7:0] _T_2561 = $signed(sew_8_b_6) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2563 = $signed(sew_8_b_6) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2565 = $signed(sew_8_b_6) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2567 = 9'h3 == io_aluc ? $signed(_T_2556) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2569 = 9'h1b == io_aluc ? $signed(_T_2559) : $signed(_T_2567); // @[Mux.scala 80:57]
  wire [7:0] _T_2571 = 9'h4b == io_aluc ? $signed(_T_2561) : $signed(_T_2569); // @[Mux.scala 80:57]
  wire [7:0] _T_2573 = 9'h2b == io_aluc ? $signed(_T_2563) : $signed(_T_2571); // @[Mux.scala 80:57]
  wire [7:0] _T_2575 = 9'h5b == io_aluc ? $signed(_T_2565) : $signed(_T_2573); // @[Mux.scala 80:57]
  wire [7:0] _T_2576 = _T_904 ? $signed(-8'sh1) : $signed(_T_2575); // @[Valu.scala 144:36]
  wire [7:0] _T_2577 = _T_898 ? $signed(sew_8_vd_6) : $signed(_T_2576); // @[Valu.scala 143:32]
  wire [7:0] _T_2584 = _T_892 ? $signed(_T_2577) : $signed(_T_1413); // @[Valu.scala 142:11]
  wire [7:0] _T_2604 = $signed(sew_8_b_7) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2607 = $signed(_T_2249) - $signed(sew_8_b_7); // @[Valu.scala 149:33]
  wire [7:0] _T_2609 = $signed(sew_8_b_7) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2611 = $signed(sew_8_b_7) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2613 = $signed(sew_8_b_7) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2615 = 9'h3 == io_aluc ? $signed(_T_2604) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2617 = 9'h1b == io_aluc ? $signed(_T_2607) : $signed(_T_2615); // @[Mux.scala 80:57]
  wire [7:0] _T_2619 = 9'h4b == io_aluc ? $signed(_T_2609) : $signed(_T_2617); // @[Mux.scala 80:57]
  wire [7:0] _T_2621 = 9'h2b == io_aluc ? $signed(_T_2611) : $signed(_T_2619); // @[Mux.scala 80:57]
  wire [7:0] _T_2623 = 9'h5b == io_aluc ? $signed(_T_2613) : $signed(_T_2621); // @[Mux.scala 80:57]
  wire [7:0] _T_2624 = _T_962 ? $signed(-8'sh1) : $signed(_T_2623); // @[Valu.scala 144:36]
  wire [7:0] _T_2625 = _T_956 ? $signed(sew_8_vd_7) : $signed(_T_2624); // @[Valu.scala 143:32]
  wire [7:0] _T_2632 = _T_950 ? $signed(_T_2625) : $signed(_T_1471); // @[Valu.scala 142:11]
  wire [7:0] _T_2652 = $signed(sew_8_b_8) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2655 = $signed(_T_2249) - $signed(sew_8_b_8); // @[Valu.scala 149:33]
  wire [7:0] _T_2657 = $signed(sew_8_b_8) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2659 = $signed(sew_8_b_8) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2661 = $signed(sew_8_b_8) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2663 = 9'h3 == io_aluc ? $signed(_T_2652) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2665 = 9'h1b == io_aluc ? $signed(_T_2655) : $signed(_T_2663); // @[Mux.scala 80:57]
  wire [7:0] _T_2667 = 9'h4b == io_aluc ? $signed(_T_2657) : $signed(_T_2665); // @[Mux.scala 80:57]
  wire [7:0] _T_2669 = 9'h2b == io_aluc ? $signed(_T_2659) : $signed(_T_2667); // @[Mux.scala 80:57]
  wire [7:0] _T_2671 = 9'h5b == io_aluc ? $signed(_T_2661) : $signed(_T_2669); // @[Mux.scala 80:57]
  wire [7:0] _T_2672 = _T_1489 ? $signed(-8'sh1) : $signed(_T_2671); // @[Valu.scala 144:36]
  wire [7:0] _T_2673 = _T_1483 ? $signed(sew_8_vd_8) : $signed(_T_2672); // @[Valu.scala 143:32]
  wire [7:0] _T_2680 = _T_1477 ? $signed(_T_2673) : $signed(_T_1529); // @[Valu.scala 142:11]
  wire [7:0] _T_2700 = $signed(sew_8_b_9) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2703 = $signed(_T_2249) - $signed(sew_8_b_9); // @[Valu.scala 149:33]
  wire [7:0] _T_2705 = $signed(sew_8_b_9) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2707 = $signed(sew_8_b_9) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2709 = $signed(sew_8_b_9) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2711 = 9'h3 == io_aluc ? $signed(_T_2700) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2713 = 9'h1b == io_aluc ? $signed(_T_2703) : $signed(_T_2711); // @[Mux.scala 80:57]
  wire [7:0] _T_2715 = 9'h4b == io_aluc ? $signed(_T_2705) : $signed(_T_2713); // @[Mux.scala 80:57]
  wire [7:0] _T_2717 = 9'h2b == io_aluc ? $signed(_T_2707) : $signed(_T_2715); // @[Mux.scala 80:57]
  wire [7:0] _T_2719 = 9'h5b == io_aluc ? $signed(_T_2709) : $signed(_T_2717); // @[Mux.scala 80:57]
  wire [7:0] _T_2720 = _T_1547 ? $signed(-8'sh1) : $signed(_T_2719); // @[Valu.scala 144:36]
  wire [7:0] _T_2721 = _T_1541 ? $signed(sew_8_vd_9) : $signed(_T_2720); // @[Valu.scala 143:32]
  wire [7:0] _T_2728 = _T_1535 ? $signed(_T_2721) : $signed(_T_1587); // @[Valu.scala 142:11]
  wire [7:0] _T_2748 = $signed(sew_8_b_10) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2751 = $signed(_T_2249) - $signed(sew_8_b_10); // @[Valu.scala 149:33]
  wire [7:0] _T_2753 = $signed(sew_8_b_10) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2755 = $signed(sew_8_b_10) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2757 = $signed(sew_8_b_10) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2759 = 9'h3 == io_aluc ? $signed(_T_2748) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2761 = 9'h1b == io_aluc ? $signed(_T_2751) : $signed(_T_2759); // @[Mux.scala 80:57]
  wire [7:0] _T_2763 = 9'h4b == io_aluc ? $signed(_T_2753) : $signed(_T_2761); // @[Mux.scala 80:57]
  wire [7:0] _T_2765 = 9'h2b == io_aluc ? $signed(_T_2755) : $signed(_T_2763); // @[Mux.scala 80:57]
  wire [7:0] _T_2767 = 9'h5b == io_aluc ? $signed(_T_2757) : $signed(_T_2765); // @[Mux.scala 80:57]
  wire [7:0] _T_2768 = _T_1605 ? $signed(-8'sh1) : $signed(_T_2767); // @[Valu.scala 144:36]
  wire [7:0] _T_2769 = _T_1599 ? $signed(sew_8_vd_10) : $signed(_T_2768); // @[Valu.scala 143:32]
  wire [7:0] _T_2776 = _T_1593 ? $signed(_T_2769) : $signed(_T_1645); // @[Valu.scala 142:11]
  wire [7:0] _T_2796 = $signed(sew_8_b_11) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2799 = $signed(_T_2249) - $signed(sew_8_b_11); // @[Valu.scala 149:33]
  wire [7:0] _T_2801 = $signed(sew_8_b_11) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2803 = $signed(sew_8_b_11) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2805 = $signed(sew_8_b_11) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2807 = 9'h3 == io_aluc ? $signed(_T_2796) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2809 = 9'h1b == io_aluc ? $signed(_T_2799) : $signed(_T_2807); // @[Mux.scala 80:57]
  wire [7:0] _T_2811 = 9'h4b == io_aluc ? $signed(_T_2801) : $signed(_T_2809); // @[Mux.scala 80:57]
  wire [7:0] _T_2813 = 9'h2b == io_aluc ? $signed(_T_2803) : $signed(_T_2811); // @[Mux.scala 80:57]
  wire [7:0] _T_2815 = 9'h5b == io_aluc ? $signed(_T_2805) : $signed(_T_2813); // @[Mux.scala 80:57]
  wire [7:0] _T_2816 = _T_1663 ? $signed(-8'sh1) : $signed(_T_2815); // @[Valu.scala 144:36]
  wire [7:0] _T_2817 = _T_1657 ? $signed(sew_8_vd_11) : $signed(_T_2816); // @[Valu.scala 143:32]
  wire [7:0] _T_2824 = _T_1651 ? $signed(_T_2817) : $signed(_T_1703); // @[Valu.scala 142:11]
  wire [7:0] _T_2844 = $signed(sew_8_b_12) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2847 = $signed(_T_2249) - $signed(sew_8_b_12); // @[Valu.scala 149:33]
  wire [7:0] _T_2849 = $signed(sew_8_b_12) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2851 = $signed(sew_8_b_12) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2853 = $signed(sew_8_b_12) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2855 = 9'h3 == io_aluc ? $signed(_T_2844) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2857 = 9'h1b == io_aluc ? $signed(_T_2847) : $signed(_T_2855); // @[Mux.scala 80:57]
  wire [7:0] _T_2859 = 9'h4b == io_aluc ? $signed(_T_2849) : $signed(_T_2857); // @[Mux.scala 80:57]
  wire [7:0] _T_2861 = 9'h2b == io_aluc ? $signed(_T_2851) : $signed(_T_2859); // @[Mux.scala 80:57]
  wire [7:0] _T_2863 = 9'h5b == io_aluc ? $signed(_T_2853) : $signed(_T_2861); // @[Mux.scala 80:57]
  wire [7:0] _T_2864 = _T_1721 ? $signed(-8'sh1) : $signed(_T_2863); // @[Valu.scala 144:36]
  wire [7:0] _T_2865 = _T_1715 ? $signed(sew_8_vd_12) : $signed(_T_2864); // @[Valu.scala 143:32]
  wire [7:0] _T_2872 = _T_1709 ? $signed(_T_2865) : $signed(_T_1761); // @[Valu.scala 142:11]
  wire [7:0] _T_2892 = $signed(sew_8_b_13) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2895 = $signed(_T_2249) - $signed(sew_8_b_13); // @[Valu.scala 149:33]
  wire [7:0] _T_2897 = $signed(sew_8_b_13) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2899 = $signed(sew_8_b_13) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2901 = $signed(sew_8_b_13) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2903 = 9'h3 == io_aluc ? $signed(_T_2892) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2905 = 9'h1b == io_aluc ? $signed(_T_2895) : $signed(_T_2903); // @[Mux.scala 80:57]
  wire [7:0] _T_2907 = 9'h4b == io_aluc ? $signed(_T_2897) : $signed(_T_2905); // @[Mux.scala 80:57]
  wire [7:0] _T_2909 = 9'h2b == io_aluc ? $signed(_T_2899) : $signed(_T_2907); // @[Mux.scala 80:57]
  wire [7:0] _T_2911 = 9'h5b == io_aluc ? $signed(_T_2901) : $signed(_T_2909); // @[Mux.scala 80:57]
  wire [7:0] _T_2912 = _T_1779 ? $signed(-8'sh1) : $signed(_T_2911); // @[Valu.scala 144:36]
  wire [7:0] _T_2913 = _T_1773 ? $signed(sew_8_vd_13) : $signed(_T_2912); // @[Valu.scala 143:32]
  wire [7:0] _T_2920 = _T_1767 ? $signed(_T_2913) : $signed(_T_1819); // @[Valu.scala 142:11]
  wire [7:0] _T_2940 = $signed(sew_8_b_14) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2943 = $signed(_T_2249) - $signed(sew_8_b_14); // @[Valu.scala 149:33]
  wire [7:0] _T_2945 = $signed(sew_8_b_14) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2947 = $signed(sew_8_b_14) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2949 = $signed(sew_8_b_14) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2951 = 9'h3 == io_aluc ? $signed(_T_2940) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2953 = 9'h1b == io_aluc ? $signed(_T_2943) : $signed(_T_2951); // @[Mux.scala 80:57]
  wire [7:0] _T_2955 = 9'h4b == io_aluc ? $signed(_T_2945) : $signed(_T_2953); // @[Mux.scala 80:57]
  wire [7:0] _T_2957 = 9'h2b == io_aluc ? $signed(_T_2947) : $signed(_T_2955); // @[Mux.scala 80:57]
  wire [7:0] _T_2959 = 9'h5b == io_aluc ? $signed(_T_2949) : $signed(_T_2957); // @[Mux.scala 80:57]
  wire [7:0] _T_2960 = _T_1837 ? $signed(-8'sh1) : $signed(_T_2959); // @[Valu.scala 144:36]
  wire [7:0] _T_2961 = _T_1831 ? $signed(sew_8_vd_14) : $signed(_T_2960); // @[Valu.scala 143:32]
  wire [7:0] _T_2968 = _T_1825 ? $signed(_T_2961) : $signed(_T_1877); // @[Valu.scala 142:11]
  wire [7:0] _T_2988 = $signed(sew_8_b_15) + $signed(_T_2249); // @[Valu.scala 148:37]
  wire [7:0] _T_2991 = $signed(_T_2249) - $signed(sew_8_b_15); // @[Valu.scala 149:33]
  wire [7:0] _T_2993 = $signed(sew_8_b_15) & $signed(_T_2249); // @[Valu.scala 150:36]
  wire [7:0] _T_2995 = $signed(sew_8_b_15) | $signed(_T_2249); // @[Valu.scala 151:35]
  wire [7:0] _T_2997 = $signed(sew_8_b_15) ^ $signed(_T_2249); // @[Valu.scala 152:36]
  wire [7:0] _T_2999 = 9'h3 == io_aluc ? $signed(_T_2988) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_3001 = 9'h1b == io_aluc ? $signed(_T_2991) : $signed(_T_2999); // @[Mux.scala 80:57]
  wire [7:0] _T_3003 = 9'h4b == io_aluc ? $signed(_T_2993) : $signed(_T_3001); // @[Mux.scala 80:57]
  wire [7:0] _T_3005 = 9'h2b == io_aluc ? $signed(_T_2995) : $signed(_T_3003); // @[Mux.scala 80:57]
  wire [7:0] _T_3007 = 9'h5b == io_aluc ? $signed(_T_2997) : $signed(_T_3005); // @[Mux.scala 80:57]
  wire [7:0] _T_3008 = _T_1895 ? $signed(-8'sh1) : $signed(_T_3007); // @[Valu.scala 144:36]
  wire [7:0] _T_3009 = _T_1889 ? $signed(sew_8_vd_15) : $signed(_T_3008); // @[Valu.scala 143:32]
  wire [7:0] _T_3016 = _T_1883 ? $signed(_T_3009) : $signed(_T_1935); // @[Valu.scala 142:11]
  wire [7:0] lo_lo_lo_lo_1 = _T_183 ? $signed(sew_8_vd_0) : $signed(_T_2296); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_lo_hi_1 = _T_241 ? $signed(sew_8_vd_1) : $signed(_T_2344); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_hi_lo_1 = _T_420 ? $signed(sew_8_vd_2) : $signed(_T_2392); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_hi_hi_1 = _T_478 ? $signed(sew_8_vd_3) : $signed(_T_2440); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_lo_lo_1 = _T_773 ? $signed(sew_8_vd_4) : $signed(_T_2488); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_lo_hi_1 = _T_831 ? $signed(sew_8_vd_5) : $signed(_T_2536); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_hi_lo_1 = _T_889 ? $signed(sew_8_vd_6) : $signed(_T_2584); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_hi_hi_1 = _T_947 ? $signed(sew_8_vd_7) : $signed(_T_2632); // @[Cat.scala 30:58]
  wire [63:0] lo_7 = {lo_hi_hi_hi_1,lo_hi_hi_lo_1,lo_hi_lo_hi_1,lo_hi_lo_lo_1,lo_lo_hi_hi_1,lo_lo_hi_lo_1,lo_lo_lo_hi_1,
    lo_lo_lo_lo_1}; // @[Cat.scala 30:58]
  wire [7:0] hi_lo_lo_lo_1 = _T_1474 ? $signed(sew_8_vd_8) : $signed(_T_2680); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_lo_hi_1 = _T_1532 ? $signed(sew_8_vd_9) : $signed(_T_2728); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_hi_lo_1 = _T_1590 ? $signed(sew_8_vd_10) : $signed(_T_2776); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_hi_hi_1 = _T_1648 ? $signed(sew_8_vd_11) : $signed(_T_2824); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_lo_lo_1 = _T_1706 ? $signed(sew_8_vd_12) : $signed(_T_2872); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_lo_hi_1 = _T_1764 ? $signed(sew_8_vd_13) : $signed(_T_2920); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_hi_lo_1 = _T_1822 ? $signed(sew_8_vd_14) : $signed(_T_2968); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_hi_hi_1 = _T_1880 ? $signed(sew_8_vd_15) : $signed(_T_3016); // @[Cat.scala 30:58]
  wire [127:0] _T_3019 = {hi_hi_hi_hi_1,hi_hi_hi_lo_1,hi_hi_lo_hi_1,hi_hi_lo_lo_1,hi_lo_hi_hi_1,hi_lo_hi_lo_1,
    hi_lo_lo_hi_1,hi_lo_lo_lo_1,lo_7}; // @[Valu.scala 160:24]
  wire [15:0] _T_3025 = io_in_B[15:0]; // @[Valu.scala 241:37]
  wire [15:0] _T_3044 = $signed(sew_16_b_0) + $signed(_T_3025); // @[Valu.scala 148:37]
  wire [15:0] _T_3047 = $signed(_T_3025) - $signed(sew_16_b_0); // @[Valu.scala 149:33]
  wire [15:0] _T_3049 = $signed(sew_16_b_0) & $signed(_T_3025); // @[Valu.scala 150:36]
  wire [15:0] _T_3051 = $signed(sew_16_b_0) | $signed(_T_3025); // @[Valu.scala 151:35]
  wire [15:0] _T_3053 = $signed(sew_16_b_0) ^ $signed(_T_3025); // @[Valu.scala 152:36]
  wire [15:0] _T_3055 = 9'h3 == io_aluc ? $signed(_T_3044) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3057 = 9'h1b == io_aluc ? $signed(_T_3047) : $signed(_T_3055); // @[Mux.scala 80:57]
  wire [15:0] _T_3059 = 9'h4b == io_aluc ? $signed(_T_3049) : $signed(_T_3057); // @[Mux.scala 80:57]
  wire [15:0] _T_3061 = 9'h2b == io_aluc ? $signed(_T_3051) : $signed(_T_3059); // @[Mux.scala 80:57]
  wire [15:0] _T_3063 = 9'h5b == io_aluc ? $signed(_T_3053) : $signed(_T_3061); // @[Mux.scala 80:57]
  wire [15:0] _T_3064 = _T_198 ? $signed(-16'sh1) : $signed(_T_3063); // @[Valu.scala 144:36]
  wire [15:0] _T_3065 = _T_192 ? $signed(sew_16_vd_0) : $signed(_T_3064); // @[Valu.scala 143:32]
  wire [15:0] _T_3072 = _T_186 ? $signed(_T_3065) : $signed(_T_596); // @[Valu.scala 142:11]
  wire [15:0] _T_3092 = $signed(sew_16_b_1) + $signed(_T_3025); // @[Valu.scala 148:37]
  wire [15:0] _T_3095 = $signed(_T_3025) - $signed(sew_16_b_1); // @[Valu.scala 149:33]
  wire [15:0] _T_3097 = $signed(sew_16_b_1) & $signed(_T_3025); // @[Valu.scala 150:36]
  wire [15:0] _T_3099 = $signed(sew_16_b_1) | $signed(_T_3025); // @[Valu.scala 151:35]
  wire [15:0] _T_3101 = $signed(sew_16_b_1) ^ $signed(_T_3025); // @[Valu.scala 152:36]
  wire [15:0] _T_3103 = 9'h3 == io_aluc ? $signed(_T_3092) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3105 = 9'h1b == io_aluc ? $signed(_T_3095) : $signed(_T_3103); // @[Mux.scala 80:57]
  wire [15:0] _T_3107 = 9'h4b == io_aluc ? $signed(_T_3097) : $signed(_T_3105); // @[Mux.scala 80:57]
  wire [15:0] _T_3109 = 9'h2b == io_aluc ? $signed(_T_3099) : $signed(_T_3107); // @[Mux.scala 80:57]
  wire [15:0] _T_3111 = 9'h5b == io_aluc ? $signed(_T_3101) : $signed(_T_3109); // @[Mux.scala 80:57]
  wire [15:0] _T_3112 = _T_256 ? $signed(-16'sh1) : $signed(_T_3111); // @[Valu.scala 144:36]
  wire [15:0] _T_3113 = _T_250 ? $signed(sew_16_vd_1) : $signed(_T_3112); // @[Valu.scala 143:32]
  wire [15:0] _T_3120 = _T_244 ? $signed(_T_3113) : $signed(_T_654); // @[Valu.scala 142:11]
  wire [15:0] _T_3140 = $signed(sew_16_b_2) + $signed(_T_3025); // @[Valu.scala 148:37]
  wire [15:0] _T_3143 = $signed(_T_3025) - $signed(sew_16_b_2); // @[Valu.scala 149:33]
  wire [15:0] _T_3145 = $signed(sew_16_b_2) & $signed(_T_3025); // @[Valu.scala 150:36]
  wire [15:0] _T_3147 = $signed(sew_16_b_2) | $signed(_T_3025); // @[Valu.scala 151:35]
  wire [15:0] _T_3149 = $signed(sew_16_b_2) ^ $signed(_T_3025); // @[Valu.scala 152:36]
  wire [15:0] _T_3151 = 9'h3 == io_aluc ? $signed(_T_3140) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3153 = 9'h1b == io_aluc ? $signed(_T_3143) : $signed(_T_3151); // @[Mux.scala 80:57]
  wire [15:0] _T_3155 = 9'h4b == io_aluc ? $signed(_T_3145) : $signed(_T_3153); // @[Mux.scala 80:57]
  wire [15:0] _T_3157 = 9'h2b == io_aluc ? $signed(_T_3147) : $signed(_T_3155); // @[Mux.scala 80:57]
  wire [15:0] _T_3159 = 9'h5b == io_aluc ? $signed(_T_3149) : $signed(_T_3157); // @[Mux.scala 80:57]
  wire [15:0] _T_3160 = _T_435 ? $signed(-16'sh1) : $signed(_T_3159); // @[Valu.scala 144:36]
  wire [15:0] _T_3161 = _T_429 ? $signed(sew_16_vd_2) : $signed(_T_3160); // @[Valu.scala 143:32]
  wire [15:0] _T_3168 = _T_423 ? $signed(_T_3161) : $signed(_T_712); // @[Valu.scala 142:11]
  wire [15:0] _T_3188 = $signed(sew_16_b_3) + $signed(_T_3025); // @[Valu.scala 148:37]
  wire [15:0] _T_3191 = $signed(_T_3025) - $signed(sew_16_b_3); // @[Valu.scala 149:33]
  wire [15:0] _T_3193 = $signed(sew_16_b_3) & $signed(_T_3025); // @[Valu.scala 150:36]
  wire [15:0] _T_3195 = $signed(sew_16_b_3) | $signed(_T_3025); // @[Valu.scala 151:35]
  wire [15:0] _T_3197 = $signed(sew_16_b_3) ^ $signed(_T_3025); // @[Valu.scala 152:36]
  wire [15:0] _T_3199 = 9'h3 == io_aluc ? $signed(_T_3188) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3201 = 9'h1b == io_aluc ? $signed(_T_3191) : $signed(_T_3199); // @[Mux.scala 80:57]
  wire [15:0] _T_3203 = 9'h4b == io_aluc ? $signed(_T_3193) : $signed(_T_3201); // @[Mux.scala 80:57]
  wire [15:0] _T_3205 = 9'h2b == io_aluc ? $signed(_T_3195) : $signed(_T_3203); // @[Mux.scala 80:57]
  wire [15:0] _T_3207 = 9'h5b == io_aluc ? $signed(_T_3197) : $signed(_T_3205); // @[Mux.scala 80:57]
  wire [15:0] _T_3208 = _T_493 ? $signed(-16'sh1) : $signed(_T_3207); // @[Valu.scala 144:36]
  wire [15:0] _T_3209 = _T_487 ? $signed(sew_16_vd_3) : $signed(_T_3208); // @[Valu.scala 143:32]
  wire [15:0] _T_3216 = _T_481 ? $signed(_T_3209) : $signed(_T_770); // @[Valu.scala 142:11]
  wire [15:0] _T_3236 = $signed(sew_16_b_4) + $signed(_T_3025); // @[Valu.scala 148:37]
  wire [15:0] _T_3239 = $signed(_T_3025) - $signed(sew_16_b_4); // @[Valu.scala 149:33]
  wire [15:0] _T_3241 = $signed(sew_16_b_4) & $signed(_T_3025); // @[Valu.scala 150:36]
  wire [15:0] _T_3243 = $signed(sew_16_b_4) | $signed(_T_3025); // @[Valu.scala 151:35]
  wire [15:0] _T_3245 = $signed(sew_16_b_4) ^ $signed(_T_3025); // @[Valu.scala 152:36]
  wire [15:0] _T_3247 = 9'h3 == io_aluc ? $signed(_T_3236) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3249 = 9'h1b == io_aluc ? $signed(_T_3239) : $signed(_T_3247); // @[Mux.scala 80:57]
  wire [15:0] _T_3251 = 9'h4b == io_aluc ? $signed(_T_3241) : $signed(_T_3249); // @[Mux.scala 80:57]
  wire [15:0] _T_3253 = 9'h2b == io_aluc ? $signed(_T_3243) : $signed(_T_3251); // @[Mux.scala 80:57]
  wire [15:0] _T_3255 = 9'h5b == io_aluc ? $signed(_T_3245) : $signed(_T_3253); // @[Mux.scala 80:57]
  wire [15:0] _T_3256 = _T_788 ? $signed(-16'sh1) : $signed(_T_3255); // @[Valu.scala 144:36]
  wire [15:0] _T_3257 = _T_782 ? $signed(sew_16_vd_4) : $signed(_T_3256); // @[Valu.scala 143:32]
  wire [15:0] _T_3264 = _T_776 ? $signed(_T_3257) : $signed(_T_828); // @[Valu.scala 142:11]
  wire [15:0] _T_3284 = $signed(sew_16_b_5) + $signed(_T_3025); // @[Valu.scala 148:37]
  wire [15:0] _T_3287 = $signed(_T_3025) - $signed(sew_16_b_5); // @[Valu.scala 149:33]
  wire [15:0] _T_3289 = $signed(sew_16_b_5) & $signed(_T_3025); // @[Valu.scala 150:36]
  wire [15:0] _T_3291 = $signed(sew_16_b_5) | $signed(_T_3025); // @[Valu.scala 151:35]
  wire [15:0] _T_3293 = $signed(sew_16_b_5) ^ $signed(_T_3025); // @[Valu.scala 152:36]
  wire [15:0] _T_3295 = 9'h3 == io_aluc ? $signed(_T_3284) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3297 = 9'h1b == io_aluc ? $signed(_T_3287) : $signed(_T_3295); // @[Mux.scala 80:57]
  wire [15:0] _T_3299 = 9'h4b == io_aluc ? $signed(_T_3289) : $signed(_T_3297); // @[Mux.scala 80:57]
  wire [15:0] _T_3301 = 9'h2b == io_aluc ? $signed(_T_3291) : $signed(_T_3299); // @[Mux.scala 80:57]
  wire [15:0] _T_3303 = 9'h5b == io_aluc ? $signed(_T_3293) : $signed(_T_3301); // @[Mux.scala 80:57]
  wire [15:0] _T_3304 = _T_846 ? $signed(-16'sh1) : $signed(_T_3303); // @[Valu.scala 144:36]
  wire [15:0] _T_3305 = _T_840 ? $signed(sew_16_vd_5) : $signed(_T_3304); // @[Valu.scala 143:32]
  wire [15:0] _T_3312 = _T_834 ? $signed(_T_3305) : $signed(_T_886); // @[Valu.scala 142:11]
  wire [15:0] _T_3332 = $signed(sew_16_b_6) + $signed(_T_3025); // @[Valu.scala 148:37]
  wire [15:0] _T_3335 = $signed(_T_3025) - $signed(sew_16_b_6); // @[Valu.scala 149:33]
  wire [15:0] _T_3337 = $signed(sew_16_b_6) & $signed(_T_3025); // @[Valu.scala 150:36]
  wire [15:0] _T_3339 = $signed(sew_16_b_6) | $signed(_T_3025); // @[Valu.scala 151:35]
  wire [15:0] _T_3341 = $signed(sew_16_b_6) ^ $signed(_T_3025); // @[Valu.scala 152:36]
  wire [15:0] _T_3343 = 9'h3 == io_aluc ? $signed(_T_3332) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3345 = 9'h1b == io_aluc ? $signed(_T_3335) : $signed(_T_3343); // @[Mux.scala 80:57]
  wire [15:0] _T_3347 = 9'h4b == io_aluc ? $signed(_T_3337) : $signed(_T_3345); // @[Mux.scala 80:57]
  wire [15:0] _T_3349 = 9'h2b == io_aluc ? $signed(_T_3339) : $signed(_T_3347); // @[Mux.scala 80:57]
  wire [15:0] _T_3351 = 9'h5b == io_aluc ? $signed(_T_3341) : $signed(_T_3349); // @[Mux.scala 80:57]
  wire [15:0] _T_3352 = _T_904 ? $signed(-16'sh1) : $signed(_T_3351); // @[Valu.scala 144:36]
  wire [15:0] _T_3353 = _T_898 ? $signed(sew_16_vd_6) : $signed(_T_3352); // @[Valu.scala 143:32]
  wire [15:0] _T_3360 = _T_892 ? $signed(_T_3353) : $signed(_T_944); // @[Valu.scala 142:11]
  wire [15:0] _T_3380 = $signed(sew_16_b_7) + $signed(_T_3025); // @[Valu.scala 148:37]
  wire [15:0] _T_3383 = $signed(_T_3025) - $signed(sew_16_b_7); // @[Valu.scala 149:33]
  wire [15:0] _T_3385 = $signed(sew_16_b_7) & $signed(_T_3025); // @[Valu.scala 150:36]
  wire [15:0] _T_3387 = $signed(sew_16_b_7) | $signed(_T_3025); // @[Valu.scala 151:35]
  wire [15:0] _T_3389 = $signed(sew_16_b_7) ^ $signed(_T_3025); // @[Valu.scala 152:36]
  wire [15:0] _T_3391 = 9'h3 == io_aluc ? $signed(_T_3380) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3393 = 9'h1b == io_aluc ? $signed(_T_3383) : $signed(_T_3391); // @[Mux.scala 80:57]
  wire [15:0] _T_3395 = 9'h4b == io_aluc ? $signed(_T_3385) : $signed(_T_3393); // @[Mux.scala 80:57]
  wire [15:0] _T_3397 = 9'h2b == io_aluc ? $signed(_T_3387) : $signed(_T_3395); // @[Mux.scala 80:57]
  wire [15:0] _T_3399 = 9'h5b == io_aluc ? $signed(_T_3389) : $signed(_T_3397); // @[Mux.scala 80:57]
  wire [15:0] _T_3400 = _T_962 ? $signed(-16'sh1) : $signed(_T_3399); // @[Valu.scala 144:36]
  wire [15:0] _T_3401 = _T_956 ? $signed(sew_16_vd_7) : $signed(_T_3400); // @[Valu.scala 143:32]
  wire [15:0] _T_3408 = _T_950 ? $signed(_T_3401) : $signed(_T_1002); // @[Valu.scala 142:11]
  wire [15:0] lo_lo_lo_3 = _T_183 ? $signed(sew_16_vd_0) : $signed(_T_3072); // @[Cat.scala 30:58]
  wire [15:0] lo_lo_hi_3 = _T_241 ? $signed(sew_16_vd_1) : $signed(_T_3120); // @[Cat.scala 30:58]
  wire [15:0] lo_hi_lo_3 = _T_420 ? $signed(sew_16_vd_2) : $signed(_T_3168); // @[Cat.scala 30:58]
  wire [15:0] lo_hi_hi_3 = _T_478 ? $signed(sew_16_vd_3) : $signed(_T_3216); // @[Cat.scala 30:58]
  wire [15:0] hi_lo_lo_3 = _T_773 ? $signed(sew_16_vd_4) : $signed(_T_3264); // @[Cat.scala 30:58]
  wire [15:0] hi_lo_hi_3 = _T_831 ? $signed(sew_16_vd_5) : $signed(_T_3312); // @[Cat.scala 30:58]
  wire [15:0] hi_hi_lo_3 = _T_889 ? $signed(sew_16_vd_6) : $signed(_T_3360); // @[Cat.scala 30:58]
  wire [15:0] hi_hi_hi_3 = _T_947 ? $signed(sew_16_vd_7) : $signed(_T_3408); // @[Cat.scala 30:58]
  wire [127:0] _T_3411 = {hi_hi_hi_3,hi_hi_lo_3,hi_lo_hi_3,hi_lo_lo_3,lo_hi_hi_3,lo_hi_lo_3,lo_lo_hi_3,lo_lo_lo_3}; // @[Valu.scala 160:24]
  wire  _T_3414 = io_aluc[2:0] == 3'h4; // @[Valu.scala 245:55]
  wire [63:0] _T_3417 = {32'h0,io_in_A}; // @[Valu.scala 246:55]
  wire [63:0] _T_3436 = $signed(sew_64_b_0) + $signed(_T_3417); // @[Valu.scala 172:37]
  wire [63:0] _T_3439 = $signed(sew_64_b_0) - $signed(_T_3417); // @[Valu.scala 173:37]
  wire [63:0] _T_3442 = $signed(_T_3417) - $signed(sew_64_b_0); // @[Valu.scala 174:33]
  wire [63:0] _T_3444 = $signed(sew_64_b_0) & $signed(_T_3417); // @[Valu.scala 175:36]
  wire [63:0] _T_3446 = $signed(sew_64_b_0) | $signed(_T_3417); // @[Valu.scala 176:35]
  wire [63:0] _T_3448 = $signed(sew_64_b_0) ^ $signed(_T_3417); // @[Valu.scala 177:36]
  wire [63:0] _T_3449 = {32'h0,io_in_A}; // @[Valu.scala 178:36]
  wire [63:0] _T_3452 = _T_3449 <= _T_211 ? $signed(_T_3417) : $signed(sew_64_b_0); // @[Valu.scala 178:31]
  wire [63:0] _T_3454 = $signed(_T_3417) <= $signed(sew_64_b_0) ? $signed(_T_3417) : $signed(sew_64_b_0); // @[Valu.scala 179:30]
  wire [63:0] _T_3458 = _T_3449 >= _T_211 ? $signed(_T_3417) : $signed(sew_64_b_0); // @[Valu.scala 180:31]
  wire [63:0] _T_3460 = $signed(_T_3417) >= $signed(sew_64_b_0) ? $signed(_T_3417) : $signed(sew_64_b_0); // @[Valu.scala 181:30]
  wire [63:0] _T_3462 = 9'h4 == io_aluc ? $signed(_T_3436) : $signed(64'sh0); // @[Mux.scala 80:57]
  wire [63:0] _T_3464 = 9'h14 == io_aluc ? $signed(_T_3439) : $signed(_T_3462); // @[Mux.scala 80:57]
  wire [63:0] _T_3466 = 9'h1c == io_aluc ? $signed(_T_3442) : $signed(_T_3464); // @[Mux.scala 80:57]
  wire [63:0] _T_3468 = 9'h4c == io_aluc ? $signed(_T_3444) : $signed(_T_3466); // @[Mux.scala 80:57]
  wire [63:0] _T_3470 = 9'h54 == io_aluc ? $signed(_T_3446) : $signed(_T_3468); // @[Mux.scala 80:57]
  wire [63:0] _T_3472 = 9'h5c == io_aluc ? $signed(_T_3448) : $signed(_T_3470); // @[Mux.scala 80:57]
  wire [63:0] _T_3474 = 9'h24 == io_aluc ? $signed(_T_3452) : $signed(_T_3472); // @[Mux.scala 80:57]
  wire [63:0] _T_3476 = 9'h2c == io_aluc ? $signed(_T_3454) : $signed(_T_3474); // @[Mux.scala 80:57]
  wire [63:0] _T_3478 = 9'h34 == io_aluc ? $signed(_T_3458) : $signed(_T_3476); // @[Mux.scala 80:57]
  wire [63:0] _T_3480 = 9'h3c == io_aluc ? $signed(_T_3460) : $signed(_T_3478); // @[Mux.scala 80:57]
  wire [63:0] _T_3481 = _T_198 ? $signed(-64'sh1) : $signed(_T_3480); // @[Valu.scala 168:36]
  wire [63:0] _T_3482 = _T_192 ? $signed(sew_64_vd_0) : $signed(_T_3481); // @[Valu.scala 167:32]
  wire [63:0] _T_3489 = _T_186 ? $signed(_T_3482) : $signed(-64'sh1); // @[Valu.scala 166:11]
  wire [63:0] _T_3509 = $signed(sew_64_b_1) + $signed(_T_3417); // @[Valu.scala 172:37]
  wire [63:0] _T_3512 = $signed(sew_64_b_1) - $signed(_T_3417); // @[Valu.scala 173:37]
  wire [63:0] _T_3515 = $signed(_T_3417) - $signed(sew_64_b_1); // @[Valu.scala 174:33]
  wire [63:0] _T_3517 = $signed(sew_64_b_1) & $signed(_T_3417); // @[Valu.scala 175:36]
  wire [63:0] _T_3519 = $signed(sew_64_b_1) | $signed(_T_3417); // @[Valu.scala 176:35]
  wire [63:0] _T_3521 = $signed(sew_64_b_1) ^ $signed(_T_3417); // @[Valu.scala 177:36]
  wire [63:0] _T_3525 = _T_3449 <= _T_269 ? $signed(_T_3417) : $signed(sew_64_b_1); // @[Valu.scala 178:31]
  wire [63:0] _T_3527 = $signed(_T_3417) <= $signed(sew_64_b_1) ? $signed(_T_3417) : $signed(sew_64_b_1); // @[Valu.scala 179:30]
  wire [63:0] _T_3531 = _T_3449 >= _T_269 ? $signed(_T_3417) : $signed(sew_64_b_1); // @[Valu.scala 180:31]
  wire [63:0] _T_3533 = $signed(_T_3417) >= $signed(sew_64_b_1) ? $signed(_T_3417) : $signed(sew_64_b_1); // @[Valu.scala 181:30]
  wire [63:0] _T_3535 = 9'h4 == io_aluc ? $signed(_T_3509) : $signed(64'sh0); // @[Mux.scala 80:57]
  wire [63:0] _T_3537 = 9'h14 == io_aluc ? $signed(_T_3512) : $signed(_T_3535); // @[Mux.scala 80:57]
  wire [63:0] _T_3539 = 9'h1c == io_aluc ? $signed(_T_3515) : $signed(_T_3537); // @[Mux.scala 80:57]
  wire [63:0] _T_3541 = 9'h4c == io_aluc ? $signed(_T_3517) : $signed(_T_3539); // @[Mux.scala 80:57]
  wire [63:0] _T_3543 = 9'h54 == io_aluc ? $signed(_T_3519) : $signed(_T_3541); // @[Mux.scala 80:57]
  wire [63:0] _T_3545 = 9'h5c == io_aluc ? $signed(_T_3521) : $signed(_T_3543); // @[Mux.scala 80:57]
  wire [63:0] _T_3547 = 9'h24 == io_aluc ? $signed(_T_3525) : $signed(_T_3545); // @[Mux.scala 80:57]
  wire [63:0] _T_3549 = 9'h2c == io_aluc ? $signed(_T_3527) : $signed(_T_3547); // @[Mux.scala 80:57]
  wire [63:0] _T_3551 = 9'h34 == io_aluc ? $signed(_T_3531) : $signed(_T_3549); // @[Mux.scala 80:57]
  wire [63:0] _T_3553 = 9'h3c == io_aluc ? $signed(_T_3533) : $signed(_T_3551); // @[Mux.scala 80:57]
  wire [63:0] _T_3554 = _T_256 ? $signed(-64'sh1) : $signed(_T_3553); // @[Valu.scala 168:36]
  wire [63:0] _T_3555 = _T_250 ? $signed(sew_64_vd_1) : $signed(_T_3554); // @[Valu.scala 167:32]
  wire  _T_3558 = _T_233 & 32'h1 > io_vl; // @[Valu.scala 185:28]
  wire [63:0] _T_3561 = _T_233 & 32'h1 > io_vl ? $signed(sew_64_vd_1) : $signed(-64'sh1); // @[Valu.scala 185:12]
  wire [63:0] _T_3562 = _T_244 ? $signed(_T_3555) : $signed(_T_3561); // @[Valu.scala 166:11]
  wire [63:0] lo_10 = _T_183 ? $signed(sew_64_vd_0) : $signed(_T_3489); // @[Cat.scala 30:58]
  wire [63:0] hi_10 = _T_241 ? $signed(sew_64_vd_1) : $signed(_T_3562); // @[Cat.scala 30:58]
  wire [127:0] _T_3565 = {hi_10,lo_10}; // @[Valu.scala 188:24]
  wire [31:0] _T_3590 = $signed(sew_32_b_0) + $signed(io_in_A); // @[Valu.scala 172:37]
  wire [31:0] _T_3593 = $signed(sew_32_b_0) - $signed(io_in_A); // @[Valu.scala 173:37]
  wire [31:0] _T_3596 = $signed(io_in_A) - $signed(sew_32_b_0); // @[Valu.scala 174:33]
  wire [31:0] _T_3598 = $signed(sew_32_b_0) & $signed(io_in_A); // @[Valu.scala 175:36]
  wire [31:0] _T_3600 = $signed(sew_32_b_0) | $signed(io_in_A); // @[Valu.scala 176:35]
  wire [31:0] _T_3602 = $signed(sew_32_b_0) ^ $signed(io_in_A); // @[Valu.scala 177:36]
  wire [31:0] _T_3603 = io_in_A; // @[Valu.scala 178:36]
  wire [31:0] _T_3606 = io_in_A <= _T_332 ? $signed(io_in_A) : $signed(sew_32_b_0); // @[Valu.scala 178:31]
  wire [31:0] _T_3608 = $signed(io_in_A) <= $signed(sew_32_b_0) ? $signed(io_in_A) : $signed(sew_32_b_0); // @[Valu.scala 179:30]
  wire [31:0] _T_3612 = io_in_A >= _T_332 ? $signed(io_in_A) : $signed(sew_32_b_0); // @[Valu.scala 180:31]
  wire [31:0] _T_3614 = $signed(io_in_A) >= $signed(sew_32_b_0) ? $signed(io_in_A) : $signed(sew_32_b_0); // @[Valu.scala 181:30]
  wire [31:0] _T_3616 = 9'h4 == io_aluc ? $signed(_T_3590) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_3618 = 9'h14 == io_aluc ? $signed(_T_3593) : $signed(_T_3616); // @[Mux.scala 80:57]
  wire [31:0] _T_3620 = 9'h1c == io_aluc ? $signed(_T_3596) : $signed(_T_3618); // @[Mux.scala 80:57]
  wire [31:0] _T_3622 = 9'h4c == io_aluc ? $signed(_T_3598) : $signed(_T_3620); // @[Mux.scala 80:57]
  wire [31:0] _T_3624 = 9'h54 == io_aluc ? $signed(_T_3600) : $signed(_T_3622); // @[Mux.scala 80:57]
  wire [31:0] _T_3626 = 9'h5c == io_aluc ? $signed(_T_3602) : $signed(_T_3624); // @[Mux.scala 80:57]
  wire [31:0] _T_3628 = 9'h24 == io_aluc ? $signed(_T_3606) : $signed(_T_3626); // @[Mux.scala 80:57]
  wire [31:0] _T_3630 = 9'h2c == io_aluc ? $signed(_T_3608) : $signed(_T_3628); // @[Mux.scala 80:57]
  wire [31:0] _T_3632 = 9'h34 == io_aluc ? $signed(_T_3612) : $signed(_T_3630); // @[Mux.scala 80:57]
  wire [31:0] _T_3634 = 9'h3c == io_aluc ? $signed(_T_3614) : $signed(_T_3632); // @[Mux.scala 80:57]
  wire [31:0] _T_3635 = _T_198 ? $signed(-32'sh1) : $signed(_T_3634); // @[Valu.scala 168:36]
  wire [31:0] _T_3636 = _T_192 ? $signed(sew_32_vd_0) : $signed(_T_3635); // @[Valu.scala 167:32]
  wire [31:0] _T_3643 = _T_186 ? $signed(_T_3636) : $signed(-32'sh1); // @[Valu.scala 166:11]
  wire [31:0] _T_3663 = $signed(sew_32_b_1) + $signed(io_in_A); // @[Valu.scala 172:37]
  wire [31:0] _T_3666 = $signed(sew_32_b_1) - $signed(io_in_A); // @[Valu.scala 173:37]
  wire [31:0] _T_3669 = $signed(io_in_A) - $signed(sew_32_b_1); // @[Valu.scala 174:33]
  wire [31:0] _T_3671 = $signed(sew_32_b_1) & $signed(io_in_A); // @[Valu.scala 175:36]
  wire [31:0] _T_3673 = $signed(sew_32_b_1) | $signed(io_in_A); // @[Valu.scala 176:35]
  wire [31:0] _T_3675 = $signed(sew_32_b_1) ^ $signed(io_in_A); // @[Valu.scala 177:36]
  wire [31:0] _T_3679 = io_in_A <= _T_390 ? $signed(io_in_A) : $signed(sew_32_b_1); // @[Valu.scala 178:31]
  wire [31:0] _T_3681 = $signed(io_in_A) <= $signed(sew_32_b_1) ? $signed(io_in_A) : $signed(sew_32_b_1); // @[Valu.scala 179:30]
  wire [31:0] _T_3685 = io_in_A >= _T_390 ? $signed(io_in_A) : $signed(sew_32_b_1); // @[Valu.scala 180:31]
  wire [31:0] _T_3687 = $signed(io_in_A) >= $signed(sew_32_b_1) ? $signed(io_in_A) : $signed(sew_32_b_1); // @[Valu.scala 181:30]
  wire [31:0] _T_3689 = 9'h4 == io_aluc ? $signed(_T_3663) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_3691 = 9'h14 == io_aluc ? $signed(_T_3666) : $signed(_T_3689); // @[Mux.scala 80:57]
  wire [31:0] _T_3693 = 9'h1c == io_aluc ? $signed(_T_3669) : $signed(_T_3691); // @[Mux.scala 80:57]
  wire [31:0] _T_3695 = 9'h4c == io_aluc ? $signed(_T_3671) : $signed(_T_3693); // @[Mux.scala 80:57]
  wire [31:0] _T_3697 = 9'h54 == io_aluc ? $signed(_T_3673) : $signed(_T_3695); // @[Mux.scala 80:57]
  wire [31:0] _T_3699 = 9'h5c == io_aluc ? $signed(_T_3675) : $signed(_T_3697); // @[Mux.scala 80:57]
  wire [31:0] _T_3701 = 9'h24 == io_aluc ? $signed(_T_3679) : $signed(_T_3699); // @[Mux.scala 80:57]
  wire [31:0] _T_3703 = 9'h2c == io_aluc ? $signed(_T_3681) : $signed(_T_3701); // @[Mux.scala 80:57]
  wire [31:0] _T_3705 = 9'h34 == io_aluc ? $signed(_T_3685) : $signed(_T_3703); // @[Mux.scala 80:57]
  wire [31:0] _T_3707 = 9'h3c == io_aluc ? $signed(_T_3687) : $signed(_T_3705); // @[Mux.scala 80:57]
  wire [31:0] _T_3708 = _T_256 ? $signed(-32'sh1) : $signed(_T_3707); // @[Valu.scala 168:36]
  wire [31:0] _T_3709 = _T_250 ? $signed(sew_32_vd_1) : $signed(_T_3708); // @[Valu.scala 167:32]
  wire [31:0] _T_3715 = _T_233 & 32'h1 > io_vl ? $signed(sew_32_vd_1) : $signed(-32'sh1); // @[Valu.scala 185:12]
  wire [31:0] _T_3716 = _T_244 ? $signed(_T_3709) : $signed(_T_3715); // @[Valu.scala 166:11]
  wire [31:0] _T_3736 = $signed(sew_32_b_2) + $signed(io_in_A); // @[Valu.scala 172:37]
  wire [31:0] _T_3739 = $signed(sew_32_b_2) - $signed(io_in_A); // @[Valu.scala 173:37]
  wire [31:0] _T_3742 = $signed(io_in_A) - $signed(sew_32_b_2); // @[Valu.scala 174:33]
  wire [31:0] _T_3744 = $signed(sew_32_b_2) & $signed(io_in_A); // @[Valu.scala 175:36]
  wire [31:0] _T_3746 = $signed(sew_32_b_2) | $signed(io_in_A); // @[Valu.scala 176:35]
  wire [31:0] _T_3748 = $signed(sew_32_b_2) ^ $signed(io_in_A); // @[Valu.scala 177:36]
  wire [31:0] _T_3752 = io_in_A <= _T_448 ? $signed(io_in_A) : $signed(sew_32_b_2); // @[Valu.scala 178:31]
  wire [31:0] _T_3754 = $signed(io_in_A) <= $signed(sew_32_b_2) ? $signed(io_in_A) : $signed(sew_32_b_2); // @[Valu.scala 179:30]
  wire [31:0] _T_3758 = io_in_A >= _T_448 ? $signed(io_in_A) : $signed(sew_32_b_2); // @[Valu.scala 180:31]
  wire [31:0] _T_3760 = $signed(io_in_A) >= $signed(sew_32_b_2) ? $signed(io_in_A) : $signed(sew_32_b_2); // @[Valu.scala 181:30]
  wire [31:0] _T_3762 = 9'h4 == io_aluc ? $signed(_T_3736) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_3764 = 9'h14 == io_aluc ? $signed(_T_3739) : $signed(_T_3762); // @[Mux.scala 80:57]
  wire [31:0] _T_3766 = 9'h1c == io_aluc ? $signed(_T_3742) : $signed(_T_3764); // @[Mux.scala 80:57]
  wire [31:0] _T_3768 = 9'h4c == io_aluc ? $signed(_T_3744) : $signed(_T_3766); // @[Mux.scala 80:57]
  wire [31:0] _T_3770 = 9'h54 == io_aluc ? $signed(_T_3746) : $signed(_T_3768); // @[Mux.scala 80:57]
  wire [31:0] _T_3772 = 9'h5c == io_aluc ? $signed(_T_3748) : $signed(_T_3770); // @[Mux.scala 80:57]
  wire [31:0] _T_3774 = 9'h24 == io_aluc ? $signed(_T_3752) : $signed(_T_3772); // @[Mux.scala 80:57]
  wire [31:0] _T_3776 = 9'h2c == io_aluc ? $signed(_T_3754) : $signed(_T_3774); // @[Mux.scala 80:57]
  wire [31:0] _T_3778 = 9'h34 == io_aluc ? $signed(_T_3758) : $signed(_T_3776); // @[Mux.scala 80:57]
  wire [31:0] _T_3780 = 9'h3c == io_aluc ? $signed(_T_3760) : $signed(_T_3778); // @[Mux.scala 80:57]
  wire [31:0] _T_3781 = _T_435 ? $signed(-32'sh1) : $signed(_T_3780); // @[Valu.scala 168:36]
  wire [31:0] _T_3782 = _T_429 ? $signed(sew_32_vd_2) : $signed(_T_3781); // @[Valu.scala 167:32]
  wire  _T_3785 = _T_233 & 32'h2 > io_vl; // @[Valu.scala 185:28]
  wire [31:0] _T_3788 = _T_233 & 32'h2 > io_vl ? $signed(sew_32_vd_2) : $signed(-32'sh1); // @[Valu.scala 185:12]
  wire [31:0] _T_3789 = _T_423 ? $signed(_T_3782) : $signed(_T_3788); // @[Valu.scala 166:11]
  wire [31:0] _T_3809 = $signed(sew_32_b_3) + $signed(io_in_A); // @[Valu.scala 172:37]
  wire [31:0] _T_3812 = $signed(sew_32_b_3) - $signed(io_in_A); // @[Valu.scala 173:37]
  wire [31:0] _T_3815 = $signed(io_in_A) - $signed(sew_32_b_3); // @[Valu.scala 174:33]
  wire [31:0] _T_3817 = $signed(sew_32_b_3) & $signed(io_in_A); // @[Valu.scala 175:36]
  wire [31:0] _T_3819 = $signed(sew_32_b_3) | $signed(io_in_A); // @[Valu.scala 176:35]
  wire [31:0] _T_3821 = $signed(sew_32_b_3) ^ $signed(io_in_A); // @[Valu.scala 177:36]
  wire [31:0] _T_3825 = io_in_A <= _T_506 ? $signed(io_in_A) : $signed(sew_32_b_3); // @[Valu.scala 178:31]
  wire [31:0] _T_3827 = $signed(io_in_A) <= $signed(sew_32_b_3) ? $signed(io_in_A) : $signed(sew_32_b_3); // @[Valu.scala 179:30]
  wire [31:0] _T_3831 = io_in_A >= _T_506 ? $signed(io_in_A) : $signed(sew_32_b_3); // @[Valu.scala 180:31]
  wire [31:0] _T_3833 = $signed(io_in_A) >= $signed(sew_32_b_3) ? $signed(io_in_A) : $signed(sew_32_b_3); // @[Valu.scala 181:30]
  wire [31:0] _T_3835 = 9'h4 == io_aluc ? $signed(_T_3809) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_3837 = 9'h14 == io_aluc ? $signed(_T_3812) : $signed(_T_3835); // @[Mux.scala 80:57]
  wire [31:0] _T_3839 = 9'h1c == io_aluc ? $signed(_T_3815) : $signed(_T_3837); // @[Mux.scala 80:57]
  wire [31:0] _T_3841 = 9'h4c == io_aluc ? $signed(_T_3817) : $signed(_T_3839); // @[Mux.scala 80:57]
  wire [31:0] _T_3843 = 9'h54 == io_aluc ? $signed(_T_3819) : $signed(_T_3841); // @[Mux.scala 80:57]
  wire [31:0] _T_3845 = 9'h5c == io_aluc ? $signed(_T_3821) : $signed(_T_3843); // @[Mux.scala 80:57]
  wire [31:0] _T_3847 = 9'h24 == io_aluc ? $signed(_T_3825) : $signed(_T_3845); // @[Mux.scala 80:57]
  wire [31:0] _T_3849 = 9'h2c == io_aluc ? $signed(_T_3827) : $signed(_T_3847); // @[Mux.scala 80:57]
  wire [31:0] _T_3851 = 9'h34 == io_aluc ? $signed(_T_3831) : $signed(_T_3849); // @[Mux.scala 80:57]
  wire [31:0] _T_3853 = 9'h3c == io_aluc ? $signed(_T_3833) : $signed(_T_3851); // @[Mux.scala 80:57]
  wire [31:0] _T_3854 = _T_493 ? $signed(-32'sh1) : $signed(_T_3853); // @[Valu.scala 168:36]
  wire [31:0] _T_3855 = _T_487 ? $signed(sew_32_vd_3) : $signed(_T_3854); // @[Valu.scala 167:32]
  wire  _T_3858 = _T_233 & 32'h3 > io_vl; // @[Valu.scala 185:28]
  wire [31:0] _T_3861 = _T_233 & 32'h3 > io_vl ? $signed(sew_32_vd_3) : $signed(-32'sh1); // @[Valu.scala 185:12]
  wire [31:0] _T_3862 = _T_481 ? $signed(_T_3855) : $signed(_T_3861); // @[Valu.scala 166:11]
  wire [31:0] lo_lo_6 = _T_183 ? $signed(sew_32_vd_0) : $signed(_T_3643); // @[Cat.scala 30:58]
  wire [31:0] lo_hi_6 = _T_241 ? $signed(sew_32_vd_1) : $signed(_T_3716); // @[Cat.scala 30:58]
  wire [31:0] hi_lo_6 = _T_420 ? $signed(sew_32_vd_2) : $signed(_T_3789); // @[Cat.scala 30:58]
  wire [31:0] hi_hi_6 = _T_478 ? $signed(sew_32_vd_3) : $signed(_T_3862); // @[Cat.scala 30:58]
  wire [127:0] _T_3865 = {hi_hi_6,hi_lo_6,lo_hi_6,lo_lo_6}; // @[Valu.scala 188:24]
  wire [7:0] _T_3871 = io_in_A[7:0]; // @[Valu.scala 252:40]
  wire [7:0] _T_3890 = $signed(sew_8_b_0) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_3893 = $signed(sew_8_b_0) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_3896 = $signed(_T_3871) - $signed(sew_8_b_0); // @[Valu.scala 174:33]
  wire [7:0] _T_3898 = $signed(sew_8_b_0) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_3900 = $signed(sew_8_b_0) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_3902 = $signed(sew_8_b_0) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_3903 = io_in_A[7:0]; // @[Valu.scala 178:36]
  wire [7:0] _T_3906 = _T_3903 <= _T_1038 ? $signed(_T_3871) : $signed(sew_8_b_0); // @[Valu.scala 178:31]
  wire [7:0] _T_3908 = $signed(_T_3871) <= $signed(sew_8_b_0) ? $signed(_T_3871) : $signed(sew_8_b_0); // @[Valu.scala 179:30]
  wire [7:0] _T_3912 = _T_3903 >= _T_1038 ? $signed(_T_3871) : $signed(sew_8_b_0); // @[Valu.scala 180:31]
  wire [7:0] _T_3914 = $signed(_T_3871) >= $signed(sew_8_b_0) ? $signed(_T_3871) : $signed(sew_8_b_0); // @[Valu.scala 181:30]
  wire [7:0] _T_3916 = 9'h4 == io_aluc ? $signed(_T_3890) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_3918 = 9'h14 == io_aluc ? $signed(_T_3893) : $signed(_T_3916); // @[Mux.scala 80:57]
  wire [7:0] _T_3920 = 9'h1c == io_aluc ? $signed(_T_3896) : $signed(_T_3918); // @[Mux.scala 80:57]
  wire [7:0] _T_3922 = 9'h4c == io_aluc ? $signed(_T_3898) : $signed(_T_3920); // @[Mux.scala 80:57]
  wire [7:0] _T_3924 = 9'h54 == io_aluc ? $signed(_T_3900) : $signed(_T_3922); // @[Mux.scala 80:57]
  wire [7:0] _T_3926 = 9'h5c == io_aluc ? $signed(_T_3902) : $signed(_T_3924); // @[Mux.scala 80:57]
  wire [7:0] _T_3928 = 9'h24 == io_aluc ? $signed(_T_3906) : $signed(_T_3926); // @[Mux.scala 80:57]
  wire [7:0] _T_3930 = 9'h2c == io_aluc ? $signed(_T_3908) : $signed(_T_3928); // @[Mux.scala 80:57]
  wire [7:0] _T_3932 = 9'h34 == io_aluc ? $signed(_T_3912) : $signed(_T_3930); // @[Mux.scala 80:57]
  wire [7:0] _T_3934 = 9'h3c == io_aluc ? $signed(_T_3914) : $signed(_T_3932); // @[Mux.scala 80:57]
  wire [7:0] _T_3935 = _T_198 ? $signed(-8'sh1) : $signed(_T_3934); // @[Valu.scala 168:36]
  wire [7:0] _T_3936 = _T_192 ? $signed(sew_8_vd_0) : $signed(_T_3935); // @[Valu.scala 167:32]
  wire [7:0] _T_3943 = _T_186 ? $signed(_T_3936) : $signed(-8'sh1); // @[Valu.scala 166:11]
  wire [7:0] _T_3963 = $signed(sew_8_b_1) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_3966 = $signed(sew_8_b_1) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_3969 = $signed(_T_3871) - $signed(sew_8_b_1); // @[Valu.scala 174:33]
  wire [7:0] _T_3971 = $signed(sew_8_b_1) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_3973 = $signed(sew_8_b_1) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_3975 = $signed(sew_8_b_1) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_3979 = _T_3903 <= _T_1096 ? $signed(_T_3871) : $signed(sew_8_b_1); // @[Valu.scala 178:31]
  wire [7:0] _T_3981 = $signed(_T_3871) <= $signed(sew_8_b_1) ? $signed(_T_3871) : $signed(sew_8_b_1); // @[Valu.scala 179:30]
  wire [7:0] _T_3985 = _T_3903 >= _T_1096 ? $signed(_T_3871) : $signed(sew_8_b_1); // @[Valu.scala 180:31]
  wire [7:0] _T_3987 = $signed(_T_3871) >= $signed(sew_8_b_1) ? $signed(_T_3871) : $signed(sew_8_b_1); // @[Valu.scala 181:30]
  wire [7:0] _T_3989 = 9'h4 == io_aluc ? $signed(_T_3963) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_3991 = 9'h14 == io_aluc ? $signed(_T_3966) : $signed(_T_3989); // @[Mux.scala 80:57]
  wire [7:0] _T_3993 = 9'h1c == io_aluc ? $signed(_T_3969) : $signed(_T_3991); // @[Mux.scala 80:57]
  wire [7:0] _T_3995 = 9'h4c == io_aluc ? $signed(_T_3971) : $signed(_T_3993); // @[Mux.scala 80:57]
  wire [7:0] _T_3997 = 9'h54 == io_aluc ? $signed(_T_3973) : $signed(_T_3995); // @[Mux.scala 80:57]
  wire [7:0] _T_3999 = 9'h5c == io_aluc ? $signed(_T_3975) : $signed(_T_3997); // @[Mux.scala 80:57]
  wire [7:0] _T_4001 = 9'h24 == io_aluc ? $signed(_T_3979) : $signed(_T_3999); // @[Mux.scala 80:57]
  wire [7:0] _T_4003 = 9'h2c == io_aluc ? $signed(_T_3981) : $signed(_T_4001); // @[Mux.scala 80:57]
  wire [7:0] _T_4005 = 9'h34 == io_aluc ? $signed(_T_3985) : $signed(_T_4003); // @[Mux.scala 80:57]
  wire [7:0] _T_4007 = 9'h3c == io_aluc ? $signed(_T_3987) : $signed(_T_4005); // @[Mux.scala 80:57]
  wire [7:0] _T_4008 = _T_256 ? $signed(-8'sh1) : $signed(_T_4007); // @[Valu.scala 168:36]
  wire [7:0] _T_4009 = _T_250 ? $signed(sew_8_vd_1) : $signed(_T_4008); // @[Valu.scala 167:32]
  wire [7:0] _T_4015 = _T_233 & 32'h1 > io_vl ? $signed(sew_8_vd_1) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4016 = _T_244 ? $signed(_T_4009) : $signed(_T_4015); // @[Valu.scala 166:11]
  wire [7:0] _T_4036 = $signed(sew_8_b_2) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4039 = $signed(sew_8_b_2) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4042 = $signed(_T_3871) - $signed(sew_8_b_2); // @[Valu.scala 174:33]
  wire [7:0] _T_4044 = $signed(sew_8_b_2) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4046 = $signed(sew_8_b_2) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4048 = $signed(sew_8_b_2) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4052 = _T_3903 <= _T_1154 ? $signed(_T_3871) : $signed(sew_8_b_2); // @[Valu.scala 178:31]
  wire [7:0] _T_4054 = $signed(_T_3871) <= $signed(sew_8_b_2) ? $signed(_T_3871) : $signed(sew_8_b_2); // @[Valu.scala 179:30]
  wire [7:0] _T_4058 = _T_3903 >= _T_1154 ? $signed(_T_3871) : $signed(sew_8_b_2); // @[Valu.scala 180:31]
  wire [7:0] _T_4060 = $signed(_T_3871) >= $signed(sew_8_b_2) ? $signed(_T_3871) : $signed(sew_8_b_2); // @[Valu.scala 181:30]
  wire [7:0] _T_4062 = 9'h4 == io_aluc ? $signed(_T_4036) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4064 = 9'h14 == io_aluc ? $signed(_T_4039) : $signed(_T_4062); // @[Mux.scala 80:57]
  wire [7:0] _T_4066 = 9'h1c == io_aluc ? $signed(_T_4042) : $signed(_T_4064); // @[Mux.scala 80:57]
  wire [7:0] _T_4068 = 9'h4c == io_aluc ? $signed(_T_4044) : $signed(_T_4066); // @[Mux.scala 80:57]
  wire [7:0] _T_4070 = 9'h54 == io_aluc ? $signed(_T_4046) : $signed(_T_4068); // @[Mux.scala 80:57]
  wire [7:0] _T_4072 = 9'h5c == io_aluc ? $signed(_T_4048) : $signed(_T_4070); // @[Mux.scala 80:57]
  wire [7:0] _T_4074 = 9'h24 == io_aluc ? $signed(_T_4052) : $signed(_T_4072); // @[Mux.scala 80:57]
  wire [7:0] _T_4076 = 9'h2c == io_aluc ? $signed(_T_4054) : $signed(_T_4074); // @[Mux.scala 80:57]
  wire [7:0] _T_4078 = 9'h34 == io_aluc ? $signed(_T_4058) : $signed(_T_4076); // @[Mux.scala 80:57]
  wire [7:0] _T_4080 = 9'h3c == io_aluc ? $signed(_T_4060) : $signed(_T_4078); // @[Mux.scala 80:57]
  wire [7:0] _T_4081 = _T_435 ? $signed(-8'sh1) : $signed(_T_4080); // @[Valu.scala 168:36]
  wire [7:0] _T_4082 = _T_429 ? $signed(sew_8_vd_2) : $signed(_T_4081); // @[Valu.scala 167:32]
  wire [7:0] _T_4088 = _T_233 & 32'h2 > io_vl ? $signed(sew_8_vd_2) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4089 = _T_423 ? $signed(_T_4082) : $signed(_T_4088); // @[Valu.scala 166:11]
  wire [7:0] _T_4109 = $signed(sew_8_b_3) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4112 = $signed(sew_8_b_3) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4115 = $signed(_T_3871) - $signed(sew_8_b_3); // @[Valu.scala 174:33]
  wire [7:0] _T_4117 = $signed(sew_8_b_3) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4119 = $signed(sew_8_b_3) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4121 = $signed(sew_8_b_3) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4125 = _T_3903 <= _T_1212 ? $signed(_T_3871) : $signed(sew_8_b_3); // @[Valu.scala 178:31]
  wire [7:0] _T_4127 = $signed(_T_3871) <= $signed(sew_8_b_3) ? $signed(_T_3871) : $signed(sew_8_b_3); // @[Valu.scala 179:30]
  wire [7:0] _T_4131 = _T_3903 >= _T_1212 ? $signed(_T_3871) : $signed(sew_8_b_3); // @[Valu.scala 180:31]
  wire [7:0] _T_4133 = $signed(_T_3871) >= $signed(sew_8_b_3) ? $signed(_T_3871) : $signed(sew_8_b_3); // @[Valu.scala 181:30]
  wire [7:0] _T_4135 = 9'h4 == io_aluc ? $signed(_T_4109) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4137 = 9'h14 == io_aluc ? $signed(_T_4112) : $signed(_T_4135); // @[Mux.scala 80:57]
  wire [7:0] _T_4139 = 9'h1c == io_aluc ? $signed(_T_4115) : $signed(_T_4137); // @[Mux.scala 80:57]
  wire [7:0] _T_4141 = 9'h4c == io_aluc ? $signed(_T_4117) : $signed(_T_4139); // @[Mux.scala 80:57]
  wire [7:0] _T_4143 = 9'h54 == io_aluc ? $signed(_T_4119) : $signed(_T_4141); // @[Mux.scala 80:57]
  wire [7:0] _T_4145 = 9'h5c == io_aluc ? $signed(_T_4121) : $signed(_T_4143); // @[Mux.scala 80:57]
  wire [7:0] _T_4147 = 9'h24 == io_aluc ? $signed(_T_4125) : $signed(_T_4145); // @[Mux.scala 80:57]
  wire [7:0] _T_4149 = 9'h2c == io_aluc ? $signed(_T_4127) : $signed(_T_4147); // @[Mux.scala 80:57]
  wire [7:0] _T_4151 = 9'h34 == io_aluc ? $signed(_T_4131) : $signed(_T_4149); // @[Mux.scala 80:57]
  wire [7:0] _T_4153 = 9'h3c == io_aluc ? $signed(_T_4133) : $signed(_T_4151); // @[Mux.scala 80:57]
  wire [7:0] _T_4154 = _T_493 ? $signed(-8'sh1) : $signed(_T_4153); // @[Valu.scala 168:36]
  wire [7:0] _T_4155 = _T_487 ? $signed(sew_8_vd_3) : $signed(_T_4154); // @[Valu.scala 167:32]
  wire [7:0] _T_4161 = _T_233 & 32'h3 > io_vl ? $signed(sew_8_vd_3) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4162 = _T_481 ? $signed(_T_4155) : $signed(_T_4161); // @[Valu.scala 166:11]
  wire [7:0] _T_4182 = $signed(sew_8_b_4) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4185 = $signed(sew_8_b_4) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4188 = $signed(_T_3871) - $signed(sew_8_b_4); // @[Valu.scala 174:33]
  wire [7:0] _T_4190 = $signed(sew_8_b_4) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4192 = $signed(sew_8_b_4) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4194 = $signed(sew_8_b_4) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4198 = _T_3903 <= _T_1270 ? $signed(_T_3871) : $signed(sew_8_b_4); // @[Valu.scala 178:31]
  wire [7:0] _T_4200 = $signed(_T_3871) <= $signed(sew_8_b_4) ? $signed(_T_3871) : $signed(sew_8_b_4); // @[Valu.scala 179:30]
  wire [7:0] _T_4204 = _T_3903 >= _T_1270 ? $signed(_T_3871) : $signed(sew_8_b_4); // @[Valu.scala 180:31]
  wire [7:0] _T_4206 = $signed(_T_3871) >= $signed(sew_8_b_4) ? $signed(_T_3871) : $signed(sew_8_b_4); // @[Valu.scala 181:30]
  wire [7:0] _T_4208 = 9'h4 == io_aluc ? $signed(_T_4182) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4210 = 9'h14 == io_aluc ? $signed(_T_4185) : $signed(_T_4208); // @[Mux.scala 80:57]
  wire [7:0] _T_4212 = 9'h1c == io_aluc ? $signed(_T_4188) : $signed(_T_4210); // @[Mux.scala 80:57]
  wire [7:0] _T_4214 = 9'h4c == io_aluc ? $signed(_T_4190) : $signed(_T_4212); // @[Mux.scala 80:57]
  wire [7:0] _T_4216 = 9'h54 == io_aluc ? $signed(_T_4192) : $signed(_T_4214); // @[Mux.scala 80:57]
  wire [7:0] _T_4218 = 9'h5c == io_aluc ? $signed(_T_4194) : $signed(_T_4216); // @[Mux.scala 80:57]
  wire [7:0] _T_4220 = 9'h24 == io_aluc ? $signed(_T_4198) : $signed(_T_4218); // @[Mux.scala 80:57]
  wire [7:0] _T_4222 = 9'h2c == io_aluc ? $signed(_T_4200) : $signed(_T_4220); // @[Mux.scala 80:57]
  wire [7:0] _T_4224 = 9'h34 == io_aluc ? $signed(_T_4204) : $signed(_T_4222); // @[Mux.scala 80:57]
  wire [7:0] _T_4226 = 9'h3c == io_aluc ? $signed(_T_4206) : $signed(_T_4224); // @[Mux.scala 80:57]
  wire [7:0] _T_4227 = _T_788 ? $signed(-8'sh1) : $signed(_T_4226); // @[Valu.scala 168:36]
  wire [7:0] _T_4228 = _T_782 ? $signed(sew_8_vd_4) : $signed(_T_4227); // @[Valu.scala 167:32]
  wire  _T_4231 = _T_233 & 32'h4 > io_vl; // @[Valu.scala 185:28]
  wire [7:0] _T_4234 = _T_233 & 32'h4 > io_vl ? $signed(sew_8_vd_4) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4235 = _T_776 ? $signed(_T_4228) : $signed(_T_4234); // @[Valu.scala 166:11]
  wire [7:0] _T_4255 = $signed(sew_8_b_5) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4258 = $signed(sew_8_b_5) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4261 = $signed(_T_3871) - $signed(sew_8_b_5); // @[Valu.scala 174:33]
  wire [7:0] _T_4263 = $signed(sew_8_b_5) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4265 = $signed(sew_8_b_5) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4267 = $signed(sew_8_b_5) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4271 = _T_3903 <= _T_1328 ? $signed(_T_3871) : $signed(sew_8_b_5); // @[Valu.scala 178:31]
  wire [7:0] _T_4273 = $signed(_T_3871) <= $signed(sew_8_b_5) ? $signed(_T_3871) : $signed(sew_8_b_5); // @[Valu.scala 179:30]
  wire [7:0] _T_4277 = _T_3903 >= _T_1328 ? $signed(_T_3871) : $signed(sew_8_b_5); // @[Valu.scala 180:31]
  wire [7:0] _T_4279 = $signed(_T_3871) >= $signed(sew_8_b_5) ? $signed(_T_3871) : $signed(sew_8_b_5); // @[Valu.scala 181:30]
  wire [7:0] _T_4281 = 9'h4 == io_aluc ? $signed(_T_4255) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4283 = 9'h14 == io_aluc ? $signed(_T_4258) : $signed(_T_4281); // @[Mux.scala 80:57]
  wire [7:0] _T_4285 = 9'h1c == io_aluc ? $signed(_T_4261) : $signed(_T_4283); // @[Mux.scala 80:57]
  wire [7:0] _T_4287 = 9'h4c == io_aluc ? $signed(_T_4263) : $signed(_T_4285); // @[Mux.scala 80:57]
  wire [7:0] _T_4289 = 9'h54 == io_aluc ? $signed(_T_4265) : $signed(_T_4287); // @[Mux.scala 80:57]
  wire [7:0] _T_4291 = 9'h5c == io_aluc ? $signed(_T_4267) : $signed(_T_4289); // @[Mux.scala 80:57]
  wire [7:0] _T_4293 = 9'h24 == io_aluc ? $signed(_T_4271) : $signed(_T_4291); // @[Mux.scala 80:57]
  wire [7:0] _T_4295 = 9'h2c == io_aluc ? $signed(_T_4273) : $signed(_T_4293); // @[Mux.scala 80:57]
  wire [7:0] _T_4297 = 9'h34 == io_aluc ? $signed(_T_4277) : $signed(_T_4295); // @[Mux.scala 80:57]
  wire [7:0] _T_4299 = 9'h3c == io_aluc ? $signed(_T_4279) : $signed(_T_4297); // @[Mux.scala 80:57]
  wire [7:0] _T_4300 = _T_846 ? $signed(-8'sh1) : $signed(_T_4299); // @[Valu.scala 168:36]
  wire [7:0] _T_4301 = _T_840 ? $signed(sew_8_vd_5) : $signed(_T_4300); // @[Valu.scala 167:32]
  wire  _T_4304 = _T_233 & 32'h5 > io_vl; // @[Valu.scala 185:28]
  wire [7:0] _T_4307 = _T_233 & 32'h5 > io_vl ? $signed(sew_8_vd_5) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4308 = _T_834 ? $signed(_T_4301) : $signed(_T_4307); // @[Valu.scala 166:11]
  wire [7:0] _T_4328 = $signed(sew_8_b_6) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4331 = $signed(sew_8_b_6) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4334 = $signed(_T_3871) - $signed(sew_8_b_6); // @[Valu.scala 174:33]
  wire [7:0] _T_4336 = $signed(sew_8_b_6) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4338 = $signed(sew_8_b_6) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4340 = $signed(sew_8_b_6) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4344 = _T_3903 <= _T_1386 ? $signed(_T_3871) : $signed(sew_8_b_6); // @[Valu.scala 178:31]
  wire [7:0] _T_4346 = $signed(_T_3871) <= $signed(sew_8_b_6) ? $signed(_T_3871) : $signed(sew_8_b_6); // @[Valu.scala 179:30]
  wire [7:0] _T_4350 = _T_3903 >= _T_1386 ? $signed(_T_3871) : $signed(sew_8_b_6); // @[Valu.scala 180:31]
  wire [7:0] _T_4352 = $signed(_T_3871) >= $signed(sew_8_b_6) ? $signed(_T_3871) : $signed(sew_8_b_6); // @[Valu.scala 181:30]
  wire [7:0] _T_4354 = 9'h4 == io_aluc ? $signed(_T_4328) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4356 = 9'h14 == io_aluc ? $signed(_T_4331) : $signed(_T_4354); // @[Mux.scala 80:57]
  wire [7:0] _T_4358 = 9'h1c == io_aluc ? $signed(_T_4334) : $signed(_T_4356); // @[Mux.scala 80:57]
  wire [7:0] _T_4360 = 9'h4c == io_aluc ? $signed(_T_4336) : $signed(_T_4358); // @[Mux.scala 80:57]
  wire [7:0] _T_4362 = 9'h54 == io_aluc ? $signed(_T_4338) : $signed(_T_4360); // @[Mux.scala 80:57]
  wire [7:0] _T_4364 = 9'h5c == io_aluc ? $signed(_T_4340) : $signed(_T_4362); // @[Mux.scala 80:57]
  wire [7:0] _T_4366 = 9'h24 == io_aluc ? $signed(_T_4344) : $signed(_T_4364); // @[Mux.scala 80:57]
  wire [7:0] _T_4368 = 9'h2c == io_aluc ? $signed(_T_4346) : $signed(_T_4366); // @[Mux.scala 80:57]
  wire [7:0] _T_4370 = 9'h34 == io_aluc ? $signed(_T_4350) : $signed(_T_4368); // @[Mux.scala 80:57]
  wire [7:0] _T_4372 = 9'h3c == io_aluc ? $signed(_T_4352) : $signed(_T_4370); // @[Mux.scala 80:57]
  wire [7:0] _T_4373 = _T_904 ? $signed(-8'sh1) : $signed(_T_4372); // @[Valu.scala 168:36]
  wire [7:0] _T_4374 = _T_898 ? $signed(sew_8_vd_6) : $signed(_T_4373); // @[Valu.scala 167:32]
  wire  _T_4377 = _T_233 & 32'h6 > io_vl; // @[Valu.scala 185:28]
  wire [7:0] _T_4380 = _T_233 & 32'h6 > io_vl ? $signed(sew_8_vd_6) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4381 = _T_892 ? $signed(_T_4374) : $signed(_T_4380); // @[Valu.scala 166:11]
  wire [7:0] _T_4401 = $signed(sew_8_b_7) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4404 = $signed(sew_8_b_7) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4407 = $signed(_T_3871) - $signed(sew_8_b_7); // @[Valu.scala 174:33]
  wire [7:0] _T_4409 = $signed(sew_8_b_7) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4411 = $signed(sew_8_b_7) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4413 = $signed(sew_8_b_7) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4417 = _T_3903 <= _T_1444 ? $signed(_T_3871) : $signed(sew_8_b_7); // @[Valu.scala 178:31]
  wire [7:0] _T_4419 = $signed(_T_3871) <= $signed(sew_8_b_7) ? $signed(_T_3871) : $signed(sew_8_b_7); // @[Valu.scala 179:30]
  wire [7:0] _T_4423 = _T_3903 >= _T_1444 ? $signed(_T_3871) : $signed(sew_8_b_7); // @[Valu.scala 180:31]
  wire [7:0] _T_4425 = $signed(_T_3871) >= $signed(sew_8_b_7) ? $signed(_T_3871) : $signed(sew_8_b_7); // @[Valu.scala 181:30]
  wire [7:0] _T_4427 = 9'h4 == io_aluc ? $signed(_T_4401) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4429 = 9'h14 == io_aluc ? $signed(_T_4404) : $signed(_T_4427); // @[Mux.scala 80:57]
  wire [7:0] _T_4431 = 9'h1c == io_aluc ? $signed(_T_4407) : $signed(_T_4429); // @[Mux.scala 80:57]
  wire [7:0] _T_4433 = 9'h4c == io_aluc ? $signed(_T_4409) : $signed(_T_4431); // @[Mux.scala 80:57]
  wire [7:0] _T_4435 = 9'h54 == io_aluc ? $signed(_T_4411) : $signed(_T_4433); // @[Mux.scala 80:57]
  wire [7:0] _T_4437 = 9'h5c == io_aluc ? $signed(_T_4413) : $signed(_T_4435); // @[Mux.scala 80:57]
  wire [7:0] _T_4439 = 9'h24 == io_aluc ? $signed(_T_4417) : $signed(_T_4437); // @[Mux.scala 80:57]
  wire [7:0] _T_4441 = 9'h2c == io_aluc ? $signed(_T_4419) : $signed(_T_4439); // @[Mux.scala 80:57]
  wire [7:0] _T_4443 = 9'h34 == io_aluc ? $signed(_T_4423) : $signed(_T_4441); // @[Mux.scala 80:57]
  wire [7:0] _T_4445 = 9'h3c == io_aluc ? $signed(_T_4425) : $signed(_T_4443); // @[Mux.scala 80:57]
  wire [7:0] _T_4446 = _T_962 ? $signed(-8'sh1) : $signed(_T_4445); // @[Valu.scala 168:36]
  wire [7:0] _T_4447 = _T_956 ? $signed(sew_8_vd_7) : $signed(_T_4446); // @[Valu.scala 167:32]
  wire  _T_4450 = _T_233 & 32'h7 > io_vl; // @[Valu.scala 185:28]
  wire [7:0] _T_4453 = _T_233 & 32'h7 > io_vl ? $signed(sew_8_vd_7) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4454 = _T_950 ? $signed(_T_4447) : $signed(_T_4453); // @[Valu.scala 166:11]
  wire [7:0] _T_4474 = $signed(sew_8_b_8) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4477 = $signed(sew_8_b_8) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4480 = $signed(_T_3871) - $signed(sew_8_b_8); // @[Valu.scala 174:33]
  wire [7:0] _T_4482 = $signed(sew_8_b_8) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4484 = $signed(sew_8_b_8) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4486 = $signed(sew_8_b_8) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4490 = _T_3903 <= _T_1502 ? $signed(_T_3871) : $signed(sew_8_b_8); // @[Valu.scala 178:31]
  wire [7:0] _T_4492 = $signed(_T_3871) <= $signed(sew_8_b_8) ? $signed(_T_3871) : $signed(sew_8_b_8); // @[Valu.scala 179:30]
  wire [7:0] _T_4496 = _T_3903 >= _T_1502 ? $signed(_T_3871) : $signed(sew_8_b_8); // @[Valu.scala 180:31]
  wire [7:0] _T_4498 = $signed(_T_3871) >= $signed(sew_8_b_8) ? $signed(_T_3871) : $signed(sew_8_b_8); // @[Valu.scala 181:30]
  wire [7:0] _T_4500 = 9'h4 == io_aluc ? $signed(_T_4474) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4502 = 9'h14 == io_aluc ? $signed(_T_4477) : $signed(_T_4500); // @[Mux.scala 80:57]
  wire [7:0] _T_4504 = 9'h1c == io_aluc ? $signed(_T_4480) : $signed(_T_4502); // @[Mux.scala 80:57]
  wire [7:0] _T_4506 = 9'h4c == io_aluc ? $signed(_T_4482) : $signed(_T_4504); // @[Mux.scala 80:57]
  wire [7:0] _T_4508 = 9'h54 == io_aluc ? $signed(_T_4484) : $signed(_T_4506); // @[Mux.scala 80:57]
  wire [7:0] _T_4510 = 9'h5c == io_aluc ? $signed(_T_4486) : $signed(_T_4508); // @[Mux.scala 80:57]
  wire [7:0] _T_4512 = 9'h24 == io_aluc ? $signed(_T_4490) : $signed(_T_4510); // @[Mux.scala 80:57]
  wire [7:0] _T_4514 = 9'h2c == io_aluc ? $signed(_T_4492) : $signed(_T_4512); // @[Mux.scala 80:57]
  wire [7:0] _T_4516 = 9'h34 == io_aluc ? $signed(_T_4496) : $signed(_T_4514); // @[Mux.scala 80:57]
  wire [7:0] _T_4518 = 9'h3c == io_aluc ? $signed(_T_4498) : $signed(_T_4516); // @[Mux.scala 80:57]
  wire [7:0] _T_4519 = _T_1489 ? $signed(-8'sh1) : $signed(_T_4518); // @[Valu.scala 168:36]
  wire [7:0] _T_4520 = _T_1483 ? $signed(sew_8_vd_8) : $signed(_T_4519); // @[Valu.scala 167:32]
  wire  _T_4523 = _T_233 & 32'h8 > io_vl; // @[Valu.scala 185:28]
  wire [7:0] _T_4526 = _T_233 & 32'h8 > io_vl ? $signed(sew_8_vd_8) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4527 = _T_1477 ? $signed(_T_4520) : $signed(_T_4526); // @[Valu.scala 166:11]
  wire [7:0] _T_4547 = $signed(sew_8_b_9) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4550 = $signed(sew_8_b_9) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4553 = $signed(_T_3871) - $signed(sew_8_b_9); // @[Valu.scala 174:33]
  wire [7:0] _T_4555 = $signed(sew_8_b_9) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4557 = $signed(sew_8_b_9) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4559 = $signed(sew_8_b_9) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4563 = _T_3903 <= _T_1560 ? $signed(_T_3871) : $signed(sew_8_b_9); // @[Valu.scala 178:31]
  wire [7:0] _T_4565 = $signed(_T_3871) <= $signed(sew_8_b_9) ? $signed(_T_3871) : $signed(sew_8_b_9); // @[Valu.scala 179:30]
  wire [7:0] _T_4569 = _T_3903 >= _T_1560 ? $signed(_T_3871) : $signed(sew_8_b_9); // @[Valu.scala 180:31]
  wire [7:0] _T_4571 = $signed(_T_3871) >= $signed(sew_8_b_9) ? $signed(_T_3871) : $signed(sew_8_b_9); // @[Valu.scala 181:30]
  wire [7:0] _T_4573 = 9'h4 == io_aluc ? $signed(_T_4547) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4575 = 9'h14 == io_aluc ? $signed(_T_4550) : $signed(_T_4573); // @[Mux.scala 80:57]
  wire [7:0] _T_4577 = 9'h1c == io_aluc ? $signed(_T_4553) : $signed(_T_4575); // @[Mux.scala 80:57]
  wire [7:0] _T_4579 = 9'h4c == io_aluc ? $signed(_T_4555) : $signed(_T_4577); // @[Mux.scala 80:57]
  wire [7:0] _T_4581 = 9'h54 == io_aluc ? $signed(_T_4557) : $signed(_T_4579); // @[Mux.scala 80:57]
  wire [7:0] _T_4583 = 9'h5c == io_aluc ? $signed(_T_4559) : $signed(_T_4581); // @[Mux.scala 80:57]
  wire [7:0] _T_4585 = 9'h24 == io_aluc ? $signed(_T_4563) : $signed(_T_4583); // @[Mux.scala 80:57]
  wire [7:0] _T_4587 = 9'h2c == io_aluc ? $signed(_T_4565) : $signed(_T_4585); // @[Mux.scala 80:57]
  wire [7:0] _T_4589 = 9'h34 == io_aluc ? $signed(_T_4569) : $signed(_T_4587); // @[Mux.scala 80:57]
  wire [7:0] _T_4591 = 9'h3c == io_aluc ? $signed(_T_4571) : $signed(_T_4589); // @[Mux.scala 80:57]
  wire [7:0] _T_4592 = _T_1547 ? $signed(-8'sh1) : $signed(_T_4591); // @[Valu.scala 168:36]
  wire [7:0] _T_4593 = _T_1541 ? $signed(sew_8_vd_9) : $signed(_T_4592); // @[Valu.scala 167:32]
  wire  _T_4596 = _T_233 & 32'h9 > io_vl; // @[Valu.scala 185:28]
  wire [7:0] _T_4599 = _T_233 & 32'h9 > io_vl ? $signed(sew_8_vd_9) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4600 = _T_1535 ? $signed(_T_4593) : $signed(_T_4599); // @[Valu.scala 166:11]
  wire [7:0] _T_4620 = $signed(sew_8_b_10) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4623 = $signed(sew_8_b_10) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4626 = $signed(_T_3871) - $signed(sew_8_b_10); // @[Valu.scala 174:33]
  wire [7:0] _T_4628 = $signed(sew_8_b_10) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4630 = $signed(sew_8_b_10) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4632 = $signed(sew_8_b_10) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4636 = _T_3903 <= _T_1618 ? $signed(_T_3871) : $signed(sew_8_b_10); // @[Valu.scala 178:31]
  wire [7:0] _T_4638 = $signed(_T_3871) <= $signed(sew_8_b_10) ? $signed(_T_3871) : $signed(sew_8_b_10); // @[Valu.scala 179:30]
  wire [7:0] _T_4642 = _T_3903 >= _T_1618 ? $signed(_T_3871) : $signed(sew_8_b_10); // @[Valu.scala 180:31]
  wire [7:0] _T_4644 = $signed(_T_3871) >= $signed(sew_8_b_10) ? $signed(_T_3871) : $signed(sew_8_b_10); // @[Valu.scala 181:30]
  wire [7:0] _T_4646 = 9'h4 == io_aluc ? $signed(_T_4620) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4648 = 9'h14 == io_aluc ? $signed(_T_4623) : $signed(_T_4646); // @[Mux.scala 80:57]
  wire [7:0] _T_4650 = 9'h1c == io_aluc ? $signed(_T_4626) : $signed(_T_4648); // @[Mux.scala 80:57]
  wire [7:0] _T_4652 = 9'h4c == io_aluc ? $signed(_T_4628) : $signed(_T_4650); // @[Mux.scala 80:57]
  wire [7:0] _T_4654 = 9'h54 == io_aluc ? $signed(_T_4630) : $signed(_T_4652); // @[Mux.scala 80:57]
  wire [7:0] _T_4656 = 9'h5c == io_aluc ? $signed(_T_4632) : $signed(_T_4654); // @[Mux.scala 80:57]
  wire [7:0] _T_4658 = 9'h24 == io_aluc ? $signed(_T_4636) : $signed(_T_4656); // @[Mux.scala 80:57]
  wire [7:0] _T_4660 = 9'h2c == io_aluc ? $signed(_T_4638) : $signed(_T_4658); // @[Mux.scala 80:57]
  wire [7:0] _T_4662 = 9'h34 == io_aluc ? $signed(_T_4642) : $signed(_T_4660); // @[Mux.scala 80:57]
  wire [7:0] _T_4664 = 9'h3c == io_aluc ? $signed(_T_4644) : $signed(_T_4662); // @[Mux.scala 80:57]
  wire [7:0] _T_4665 = _T_1605 ? $signed(-8'sh1) : $signed(_T_4664); // @[Valu.scala 168:36]
  wire [7:0] _T_4666 = _T_1599 ? $signed(sew_8_vd_10) : $signed(_T_4665); // @[Valu.scala 167:32]
  wire  _T_4669 = _T_233 & 32'ha > io_vl; // @[Valu.scala 185:28]
  wire [7:0] _T_4672 = _T_233 & 32'ha > io_vl ? $signed(sew_8_vd_10) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4673 = _T_1593 ? $signed(_T_4666) : $signed(_T_4672); // @[Valu.scala 166:11]
  wire [7:0] _T_4693 = $signed(sew_8_b_11) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4696 = $signed(sew_8_b_11) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4699 = $signed(_T_3871) - $signed(sew_8_b_11); // @[Valu.scala 174:33]
  wire [7:0] _T_4701 = $signed(sew_8_b_11) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4703 = $signed(sew_8_b_11) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4705 = $signed(sew_8_b_11) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4709 = _T_3903 <= _T_1676 ? $signed(_T_3871) : $signed(sew_8_b_11); // @[Valu.scala 178:31]
  wire [7:0] _T_4711 = $signed(_T_3871) <= $signed(sew_8_b_11) ? $signed(_T_3871) : $signed(sew_8_b_11); // @[Valu.scala 179:30]
  wire [7:0] _T_4715 = _T_3903 >= _T_1676 ? $signed(_T_3871) : $signed(sew_8_b_11); // @[Valu.scala 180:31]
  wire [7:0] _T_4717 = $signed(_T_3871) >= $signed(sew_8_b_11) ? $signed(_T_3871) : $signed(sew_8_b_11); // @[Valu.scala 181:30]
  wire [7:0] _T_4719 = 9'h4 == io_aluc ? $signed(_T_4693) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4721 = 9'h14 == io_aluc ? $signed(_T_4696) : $signed(_T_4719); // @[Mux.scala 80:57]
  wire [7:0] _T_4723 = 9'h1c == io_aluc ? $signed(_T_4699) : $signed(_T_4721); // @[Mux.scala 80:57]
  wire [7:0] _T_4725 = 9'h4c == io_aluc ? $signed(_T_4701) : $signed(_T_4723); // @[Mux.scala 80:57]
  wire [7:0] _T_4727 = 9'h54 == io_aluc ? $signed(_T_4703) : $signed(_T_4725); // @[Mux.scala 80:57]
  wire [7:0] _T_4729 = 9'h5c == io_aluc ? $signed(_T_4705) : $signed(_T_4727); // @[Mux.scala 80:57]
  wire [7:0] _T_4731 = 9'h24 == io_aluc ? $signed(_T_4709) : $signed(_T_4729); // @[Mux.scala 80:57]
  wire [7:0] _T_4733 = 9'h2c == io_aluc ? $signed(_T_4711) : $signed(_T_4731); // @[Mux.scala 80:57]
  wire [7:0] _T_4735 = 9'h34 == io_aluc ? $signed(_T_4715) : $signed(_T_4733); // @[Mux.scala 80:57]
  wire [7:0] _T_4737 = 9'h3c == io_aluc ? $signed(_T_4717) : $signed(_T_4735); // @[Mux.scala 80:57]
  wire [7:0] _T_4738 = _T_1663 ? $signed(-8'sh1) : $signed(_T_4737); // @[Valu.scala 168:36]
  wire [7:0] _T_4739 = _T_1657 ? $signed(sew_8_vd_11) : $signed(_T_4738); // @[Valu.scala 167:32]
  wire  _T_4742 = _T_233 & 32'hb > io_vl; // @[Valu.scala 185:28]
  wire [7:0] _T_4745 = _T_233 & 32'hb > io_vl ? $signed(sew_8_vd_11) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4746 = _T_1651 ? $signed(_T_4739) : $signed(_T_4745); // @[Valu.scala 166:11]
  wire [7:0] _T_4766 = $signed(sew_8_b_12) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4769 = $signed(sew_8_b_12) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4772 = $signed(_T_3871) - $signed(sew_8_b_12); // @[Valu.scala 174:33]
  wire [7:0] _T_4774 = $signed(sew_8_b_12) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4776 = $signed(sew_8_b_12) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4778 = $signed(sew_8_b_12) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4782 = _T_3903 <= _T_1734 ? $signed(_T_3871) : $signed(sew_8_b_12); // @[Valu.scala 178:31]
  wire [7:0] _T_4784 = $signed(_T_3871) <= $signed(sew_8_b_12) ? $signed(_T_3871) : $signed(sew_8_b_12); // @[Valu.scala 179:30]
  wire [7:0] _T_4788 = _T_3903 >= _T_1734 ? $signed(_T_3871) : $signed(sew_8_b_12); // @[Valu.scala 180:31]
  wire [7:0] _T_4790 = $signed(_T_3871) >= $signed(sew_8_b_12) ? $signed(_T_3871) : $signed(sew_8_b_12); // @[Valu.scala 181:30]
  wire [7:0] _T_4792 = 9'h4 == io_aluc ? $signed(_T_4766) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4794 = 9'h14 == io_aluc ? $signed(_T_4769) : $signed(_T_4792); // @[Mux.scala 80:57]
  wire [7:0] _T_4796 = 9'h1c == io_aluc ? $signed(_T_4772) : $signed(_T_4794); // @[Mux.scala 80:57]
  wire [7:0] _T_4798 = 9'h4c == io_aluc ? $signed(_T_4774) : $signed(_T_4796); // @[Mux.scala 80:57]
  wire [7:0] _T_4800 = 9'h54 == io_aluc ? $signed(_T_4776) : $signed(_T_4798); // @[Mux.scala 80:57]
  wire [7:0] _T_4802 = 9'h5c == io_aluc ? $signed(_T_4778) : $signed(_T_4800); // @[Mux.scala 80:57]
  wire [7:0] _T_4804 = 9'h24 == io_aluc ? $signed(_T_4782) : $signed(_T_4802); // @[Mux.scala 80:57]
  wire [7:0] _T_4806 = 9'h2c == io_aluc ? $signed(_T_4784) : $signed(_T_4804); // @[Mux.scala 80:57]
  wire [7:0] _T_4808 = 9'h34 == io_aluc ? $signed(_T_4788) : $signed(_T_4806); // @[Mux.scala 80:57]
  wire [7:0] _T_4810 = 9'h3c == io_aluc ? $signed(_T_4790) : $signed(_T_4808); // @[Mux.scala 80:57]
  wire [7:0] _T_4811 = _T_1721 ? $signed(-8'sh1) : $signed(_T_4810); // @[Valu.scala 168:36]
  wire [7:0] _T_4812 = _T_1715 ? $signed(sew_8_vd_12) : $signed(_T_4811); // @[Valu.scala 167:32]
  wire  _T_4815 = _T_233 & 32'hc > io_vl; // @[Valu.scala 185:28]
  wire [7:0] _T_4818 = _T_233 & 32'hc > io_vl ? $signed(sew_8_vd_12) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4819 = _T_1709 ? $signed(_T_4812) : $signed(_T_4818); // @[Valu.scala 166:11]
  wire [7:0] _T_4839 = $signed(sew_8_b_13) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4842 = $signed(sew_8_b_13) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4845 = $signed(_T_3871) - $signed(sew_8_b_13); // @[Valu.scala 174:33]
  wire [7:0] _T_4847 = $signed(sew_8_b_13) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4849 = $signed(sew_8_b_13) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4851 = $signed(sew_8_b_13) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4855 = _T_3903 <= _T_1792 ? $signed(_T_3871) : $signed(sew_8_b_13); // @[Valu.scala 178:31]
  wire [7:0] _T_4857 = $signed(_T_3871) <= $signed(sew_8_b_13) ? $signed(_T_3871) : $signed(sew_8_b_13); // @[Valu.scala 179:30]
  wire [7:0] _T_4861 = _T_3903 >= _T_1792 ? $signed(_T_3871) : $signed(sew_8_b_13); // @[Valu.scala 180:31]
  wire [7:0] _T_4863 = $signed(_T_3871) >= $signed(sew_8_b_13) ? $signed(_T_3871) : $signed(sew_8_b_13); // @[Valu.scala 181:30]
  wire [7:0] _T_4865 = 9'h4 == io_aluc ? $signed(_T_4839) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4867 = 9'h14 == io_aluc ? $signed(_T_4842) : $signed(_T_4865); // @[Mux.scala 80:57]
  wire [7:0] _T_4869 = 9'h1c == io_aluc ? $signed(_T_4845) : $signed(_T_4867); // @[Mux.scala 80:57]
  wire [7:0] _T_4871 = 9'h4c == io_aluc ? $signed(_T_4847) : $signed(_T_4869); // @[Mux.scala 80:57]
  wire [7:0] _T_4873 = 9'h54 == io_aluc ? $signed(_T_4849) : $signed(_T_4871); // @[Mux.scala 80:57]
  wire [7:0] _T_4875 = 9'h5c == io_aluc ? $signed(_T_4851) : $signed(_T_4873); // @[Mux.scala 80:57]
  wire [7:0] _T_4877 = 9'h24 == io_aluc ? $signed(_T_4855) : $signed(_T_4875); // @[Mux.scala 80:57]
  wire [7:0] _T_4879 = 9'h2c == io_aluc ? $signed(_T_4857) : $signed(_T_4877); // @[Mux.scala 80:57]
  wire [7:0] _T_4881 = 9'h34 == io_aluc ? $signed(_T_4861) : $signed(_T_4879); // @[Mux.scala 80:57]
  wire [7:0] _T_4883 = 9'h3c == io_aluc ? $signed(_T_4863) : $signed(_T_4881); // @[Mux.scala 80:57]
  wire [7:0] _T_4884 = _T_1779 ? $signed(-8'sh1) : $signed(_T_4883); // @[Valu.scala 168:36]
  wire [7:0] _T_4885 = _T_1773 ? $signed(sew_8_vd_13) : $signed(_T_4884); // @[Valu.scala 167:32]
  wire  _T_4888 = _T_233 & 32'hd > io_vl; // @[Valu.scala 185:28]
  wire [7:0] _T_4891 = _T_233 & 32'hd > io_vl ? $signed(sew_8_vd_13) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4892 = _T_1767 ? $signed(_T_4885) : $signed(_T_4891); // @[Valu.scala 166:11]
  wire [7:0] _T_4912 = $signed(sew_8_b_14) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4915 = $signed(sew_8_b_14) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4918 = $signed(_T_3871) - $signed(sew_8_b_14); // @[Valu.scala 174:33]
  wire [7:0] _T_4920 = $signed(sew_8_b_14) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4922 = $signed(sew_8_b_14) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4924 = $signed(sew_8_b_14) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_4928 = _T_3903 <= _T_1850 ? $signed(_T_3871) : $signed(sew_8_b_14); // @[Valu.scala 178:31]
  wire [7:0] _T_4930 = $signed(_T_3871) <= $signed(sew_8_b_14) ? $signed(_T_3871) : $signed(sew_8_b_14); // @[Valu.scala 179:30]
  wire [7:0] _T_4934 = _T_3903 >= _T_1850 ? $signed(_T_3871) : $signed(sew_8_b_14); // @[Valu.scala 180:31]
  wire [7:0] _T_4936 = $signed(_T_3871) >= $signed(sew_8_b_14) ? $signed(_T_3871) : $signed(sew_8_b_14); // @[Valu.scala 181:30]
  wire [7:0] _T_4938 = 9'h4 == io_aluc ? $signed(_T_4912) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4940 = 9'h14 == io_aluc ? $signed(_T_4915) : $signed(_T_4938); // @[Mux.scala 80:57]
  wire [7:0] _T_4942 = 9'h1c == io_aluc ? $signed(_T_4918) : $signed(_T_4940); // @[Mux.scala 80:57]
  wire [7:0] _T_4944 = 9'h4c == io_aluc ? $signed(_T_4920) : $signed(_T_4942); // @[Mux.scala 80:57]
  wire [7:0] _T_4946 = 9'h54 == io_aluc ? $signed(_T_4922) : $signed(_T_4944); // @[Mux.scala 80:57]
  wire [7:0] _T_4948 = 9'h5c == io_aluc ? $signed(_T_4924) : $signed(_T_4946); // @[Mux.scala 80:57]
  wire [7:0] _T_4950 = 9'h24 == io_aluc ? $signed(_T_4928) : $signed(_T_4948); // @[Mux.scala 80:57]
  wire [7:0] _T_4952 = 9'h2c == io_aluc ? $signed(_T_4930) : $signed(_T_4950); // @[Mux.scala 80:57]
  wire [7:0] _T_4954 = 9'h34 == io_aluc ? $signed(_T_4934) : $signed(_T_4952); // @[Mux.scala 80:57]
  wire [7:0] _T_4956 = 9'h3c == io_aluc ? $signed(_T_4936) : $signed(_T_4954); // @[Mux.scala 80:57]
  wire [7:0] _T_4957 = _T_1837 ? $signed(-8'sh1) : $signed(_T_4956); // @[Valu.scala 168:36]
  wire [7:0] _T_4958 = _T_1831 ? $signed(sew_8_vd_14) : $signed(_T_4957); // @[Valu.scala 167:32]
  wire  _T_4961 = _T_233 & 32'he > io_vl; // @[Valu.scala 185:28]
  wire [7:0] _T_4964 = _T_233 & 32'he > io_vl ? $signed(sew_8_vd_14) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_4965 = _T_1825 ? $signed(_T_4958) : $signed(_T_4964); // @[Valu.scala 166:11]
  wire [7:0] _T_4985 = $signed(sew_8_b_15) + $signed(_T_3871); // @[Valu.scala 172:37]
  wire [7:0] _T_4988 = $signed(sew_8_b_15) - $signed(_T_3871); // @[Valu.scala 173:37]
  wire [7:0] _T_4991 = $signed(_T_3871) - $signed(sew_8_b_15); // @[Valu.scala 174:33]
  wire [7:0] _T_4993 = $signed(sew_8_b_15) & $signed(_T_3871); // @[Valu.scala 175:36]
  wire [7:0] _T_4995 = $signed(sew_8_b_15) | $signed(_T_3871); // @[Valu.scala 176:35]
  wire [7:0] _T_4997 = $signed(sew_8_b_15) ^ $signed(_T_3871); // @[Valu.scala 177:36]
  wire [7:0] _T_5001 = _T_3903 <= _T_1908 ? $signed(_T_3871) : $signed(sew_8_b_15); // @[Valu.scala 178:31]
  wire [7:0] _T_5003 = $signed(_T_3871) <= $signed(sew_8_b_15) ? $signed(_T_3871) : $signed(sew_8_b_15); // @[Valu.scala 179:30]
  wire [7:0] _T_5007 = _T_3903 >= _T_1908 ? $signed(_T_3871) : $signed(sew_8_b_15); // @[Valu.scala 180:31]
  wire [7:0] _T_5009 = $signed(_T_3871) >= $signed(sew_8_b_15) ? $signed(_T_3871) : $signed(sew_8_b_15); // @[Valu.scala 181:30]
  wire [7:0] _T_5011 = 9'h4 == io_aluc ? $signed(_T_4985) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_5013 = 9'h14 == io_aluc ? $signed(_T_4988) : $signed(_T_5011); // @[Mux.scala 80:57]
  wire [7:0] _T_5015 = 9'h1c == io_aluc ? $signed(_T_4991) : $signed(_T_5013); // @[Mux.scala 80:57]
  wire [7:0] _T_5017 = 9'h4c == io_aluc ? $signed(_T_4993) : $signed(_T_5015); // @[Mux.scala 80:57]
  wire [7:0] _T_5019 = 9'h54 == io_aluc ? $signed(_T_4995) : $signed(_T_5017); // @[Mux.scala 80:57]
  wire [7:0] _T_5021 = 9'h5c == io_aluc ? $signed(_T_4997) : $signed(_T_5019); // @[Mux.scala 80:57]
  wire [7:0] _T_5023 = 9'h24 == io_aluc ? $signed(_T_5001) : $signed(_T_5021); // @[Mux.scala 80:57]
  wire [7:0] _T_5025 = 9'h2c == io_aluc ? $signed(_T_5003) : $signed(_T_5023); // @[Mux.scala 80:57]
  wire [7:0] _T_5027 = 9'h34 == io_aluc ? $signed(_T_5007) : $signed(_T_5025); // @[Mux.scala 80:57]
  wire [7:0] _T_5029 = 9'h3c == io_aluc ? $signed(_T_5009) : $signed(_T_5027); // @[Mux.scala 80:57]
  wire [7:0] _T_5030 = _T_1895 ? $signed(-8'sh1) : $signed(_T_5029); // @[Valu.scala 168:36]
  wire [7:0] _T_5031 = _T_1889 ? $signed(sew_8_vd_15) : $signed(_T_5030); // @[Valu.scala 167:32]
  wire  _T_5034 = _T_233 & 32'hf > io_vl; // @[Valu.scala 185:28]
  wire [7:0] _T_5037 = _T_233 & 32'hf > io_vl ? $signed(sew_8_vd_15) : $signed(-8'sh1); // @[Valu.scala 185:12]
  wire [7:0] _T_5038 = _T_1883 ? $signed(_T_5031) : $signed(_T_5037); // @[Valu.scala 166:11]
  wire [7:0] lo_lo_lo_lo_2 = _T_183 ? $signed(sew_8_vd_0) : $signed(_T_3943); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_lo_hi_2 = _T_241 ? $signed(sew_8_vd_1) : $signed(_T_4016); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_hi_lo_2 = _T_420 ? $signed(sew_8_vd_2) : $signed(_T_4089); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_hi_hi_2 = _T_478 ? $signed(sew_8_vd_3) : $signed(_T_4162); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_lo_lo_2 = _T_773 ? $signed(sew_8_vd_4) : $signed(_T_4235); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_lo_hi_2 = _T_831 ? $signed(sew_8_vd_5) : $signed(_T_4308); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_hi_lo_2 = _T_889 ? $signed(sew_8_vd_6) : $signed(_T_4381); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_hi_hi_2 = _T_947 ? $signed(sew_8_vd_7) : $signed(_T_4454); // @[Cat.scala 30:58]
  wire [63:0] lo_12 = {lo_hi_hi_hi_2,lo_hi_hi_lo_2,lo_hi_lo_hi_2,lo_hi_lo_lo_2,lo_lo_hi_hi_2,lo_lo_hi_lo_2,lo_lo_lo_hi_2
    ,lo_lo_lo_lo_2}; // @[Cat.scala 30:58]
  wire [7:0] hi_lo_lo_lo_2 = _T_1474 ? $signed(sew_8_vd_8) : $signed(_T_4527); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_lo_hi_2 = _T_1532 ? $signed(sew_8_vd_9) : $signed(_T_4600); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_hi_lo_2 = _T_1590 ? $signed(sew_8_vd_10) : $signed(_T_4673); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_hi_hi_2 = _T_1648 ? $signed(sew_8_vd_11) : $signed(_T_4746); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_lo_lo_2 = _T_1706 ? $signed(sew_8_vd_12) : $signed(_T_4819); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_lo_hi_2 = _T_1764 ? $signed(sew_8_vd_13) : $signed(_T_4892); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_hi_lo_2 = _T_1822 ? $signed(sew_8_vd_14) : $signed(_T_4965); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_hi_hi_2 = _T_1880 ? $signed(sew_8_vd_15) : $signed(_T_5038); // @[Cat.scala 30:58]
  wire [127:0] _T_5041 = {hi_hi_hi_hi_2,hi_hi_hi_lo_2,hi_hi_lo_hi_2,hi_hi_lo_lo_2,hi_lo_hi_hi_2,hi_lo_hi_lo_2,
    hi_lo_lo_hi_2,hi_lo_lo_lo_2,lo_12}; // @[Valu.scala 188:24]
  wire [15:0] _T_5047 = io_in_A[15:0]; // @[Valu.scala 255:45]
  wire [15:0] _T_5066 = $signed(sew_16_b_0) + $signed(_T_5047); // @[Valu.scala 172:37]
  wire [15:0] _T_5069 = $signed(sew_16_b_0) - $signed(_T_5047); // @[Valu.scala 173:37]
  wire [15:0] _T_5072 = $signed(_T_5047) - $signed(sew_16_b_0); // @[Valu.scala 174:33]
  wire [15:0] _T_5074 = $signed(sew_16_b_0) & $signed(_T_5047); // @[Valu.scala 175:36]
  wire [15:0] _T_5076 = $signed(sew_16_b_0) | $signed(_T_5047); // @[Valu.scala 176:35]
  wire [15:0] _T_5078 = $signed(sew_16_b_0) ^ $signed(_T_5047); // @[Valu.scala 177:36]
  wire [15:0] _T_5079 = io_in_A[15:0]; // @[Valu.scala 178:36]
  wire [15:0] _T_5082 = _T_5079 <= _T_569 ? $signed(_T_5047) : $signed(sew_16_b_0); // @[Valu.scala 178:31]
  wire [15:0] _T_5084 = $signed(_T_5047) <= $signed(sew_16_b_0) ? $signed(_T_5047) : $signed(sew_16_b_0); // @[Valu.scala 179:30]
  wire [15:0] _T_5088 = _T_5079 >= _T_569 ? $signed(_T_5047) : $signed(sew_16_b_0); // @[Valu.scala 180:31]
  wire [15:0] _T_5090 = $signed(_T_5047) >= $signed(sew_16_b_0) ? $signed(_T_5047) : $signed(sew_16_b_0); // @[Valu.scala 181:30]
  wire [15:0] _T_5092 = 9'h4 == io_aluc ? $signed(_T_5066) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5094 = 9'h14 == io_aluc ? $signed(_T_5069) : $signed(_T_5092); // @[Mux.scala 80:57]
  wire [15:0] _T_5096 = 9'h1c == io_aluc ? $signed(_T_5072) : $signed(_T_5094); // @[Mux.scala 80:57]
  wire [15:0] _T_5098 = 9'h4c == io_aluc ? $signed(_T_5074) : $signed(_T_5096); // @[Mux.scala 80:57]
  wire [15:0] _T_5100 = 9'h54 == io_aluc ? $signed(_T_5076) : $signed(_T_5098); // @[Mux.scala 80:57]
  wire [15:0] _T_5102 = 9'h5c == io_aluc ? $signed(_T_5078) : $signed(_T_5100); // @[Mux.scala 80:57]
  wire [15:0] _T_5104 = 9'h24 == io_aluc ? $signed(_T_5082) : $signed(_T_5102); // @[Mux.scala 80:57]
  wire [15:0] _T_5106 = 9'h2c == io_aluc ? $signed(_T_5084) : $signed(_T_5104); // @[Mux.scala 80:57]
  wire [15:0] _T_5108 = 9'h34 == io_aluc ? $signed(_T_5088) : $signed(_T_5106); // @[Mux.scala 80:57]
  wire [15:0] _T_5110 = 9'h3c == io_aluc ? $signed(_T_5090) : $signed(_T_5108); // @[Mux.scala 80:57]
  wire [15:0] _T_5111 = _T_198 ? $signed(-16'sh1) : $signed(_T_5110); // @[Valu.scala 168:36]
  wire [15:0] _T_5112 = _T_192 ? $signed(sew_16_vd_0) : $signed(_T_5111); // @[Valu.scala 167:32]
  wire [15:0] _T_5119 = _T_186 ? $signed(_T_5112) : $signed(-16'sh1); // @[Valu.scala 166:11]
  wire [15:0] _T_5139 = $signed(sew_16_b_1) + $signed(_T_5047); // @[Valu.scala 172:37]
  wire [15:0] _T_5142 = $signed(sew_16_b_1) - $signed(_T_5047); // @[Valu.scala 173:37]
  wire [15:0] _T_5145 = $signed(_T_5047) - $signed(sew_16_b_1); // @[Valu.scala 174:33]
  wire [15:0] _T_5147 = $signed(sew_16_b_1) & $signed(_T_5047); // @[Valu.scala 175:36]
  wire [15:0] _T_5149 = $signed(sew_16_b_1) | $signed(_T_5047); // @[Valu.scala 176:35]
  wire [15:0] _T_5151 = $signed(sew_16_b_1) ^ $signed(_T_5047); // @[Valu.scala 177:36]
  wire [15:0] _T_5155 = _T_5079 <= _T_627 ? $signed(_T_5047) : $signed(sew_16_b_1); // @[Valu.scala 178:31]
  wire [15:0] _T_5157 = $signed(_T_5047) <= $signed(sew_16_b_1) ? $signed(_T_5047) : $signed(sew_16_b_1); // @[Valu.scala 179:30]
  wire [15:0] _T_5161 = _T_5079 >= _T_627 ? $signed(_T_5047) : $signed(sew_16_b_1); // @[Valu.scala 180:31]
  wire [15:0] _T_5163 = $signed(_T_5047) >= $signed(sew_16_b_1) ? $signed(_T_5047) : $signed(sew_16_b_1); // @[Valu.scala 181:30]
  wire [15:0] _T_5165 = 9'h4 == io_aluc ? $signed(_T_5139) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5167 = 9'h14 == io_aluc ? $signed(_T_5142) : $signed(_T_5165); // @[Mux.scala 80:57]
  wire [15:0] _T_5169 = 9'h1c == io_aluc ? $signed(_T_5145) : $signed(_T_5167); // @[Mux.scala 80:57]
  wire [15:0] _T_5171 = 9'h4c == io_aluc ? $signed(_T_5147) : $signed(_T_5169); // @[Mux.scala 80:57]
  wire [15:0] _T_5173 = 9'h54 == io_aluc ? $signed(_T_5149) : $signed(_T_5171); // @[Mux.scala 80:57]
  wire [15:0] _T_5175 = 9'h5c == io_aluc ? $signed(_T_5151) : $signed(_T_5173); // @[Mux.scala 80:57]
  wire [15:0] _T_5177 = 9'h24 == io_aluc ? $signed(_T_5155) : $signed(_T_5175); // @[Mux.scala 80:57]
  wire [15:0] _T_5179 = 9'h2c == io_aluc ? $signed(_T_5157) : $signed(_T_5177); // @[Mux.scala 80:57]
  wire [15:0] _T_5181 = 9'h34 == io_aluc ? $signed(_T_5161) : $signed(_T_5179); // @[Mux.scala 80:57]
  wire [15:0] _T_5183 = 9'h3c == io_aluc ? $signed(_T_5163) : $signed(_T_5181); // @[Mux.scala 80:57]
  wire [15:0] _T_5184 = _T_256 ? $signed(-16'sh1) : $signed(_T_5183); // @[Valu.scala 168:36]
  wire [15:0] _T_5185 = _T_250 ? $signed(sew_16_vd_1) : $signed(_T_5184); // @[Valu.scala 167:32]
  wire [15:0] _T_5191 = _T_233 & 32'h1 > io_vl ? $signed(sew_16_vd_1) : $signed(-16'sh1); // @[Valu.scala 185:12]
  wire [15:0] _T_5192 = _T_244 ? $signed(_T_5185) : $signed(_T_5191); // @[Valu.scala 166:11]
  wire [15:0] _T_5212 = $signed(sew_16_b_2) + $signed(_T_5047); // @[Valu.scala 172:37]
  wire [15:0] _T_5215 = $signed(sew_16_b_2) - $signed(_T_5047); // @[Valu.scala 173:37]
  wire [15:0] _T_5218 = $signed(_T_5047) - $signed(sew_16_b_2); // @[Valu.scala 174:33]
  wire [15:0] _T_5220 = $signed(sew_16_b_2) & $signed(_T_5047); // @[Valu.scala 175:36]
  wire [15:0] _T_5222 = $signed(sew_16_b_2) | $signed(_T_5047); // @[Valu.scala 176:35]
  wire [15:0] _T_5224 = $signed(sew_16_b_2) ^ $signed(_T_5047); // @[Valu.scala 177:36]
  wire [15:0] _T_5228 = _T_5079 <= _T_685 ? $signed(_T_5047) : $signed(sew_16_b_2); // @[Valu.scala 178:31]
  wire [15:0] _T_5230 = $signed(_T_5047) <= $signed(sew_16_b_2) ? $signed(_T_5047) : $signed(sew_16_b_2); // @[Valu.scala 179:30]
  wire [15:0] _T_5234 = _T_5079 >= _T_685 ? $signed(_T_5047) : $signed(sew_16_b_2); // @[Valu.scala 180:31]
  wire [15:0] _T_5236 = $signed(_T_5047) >= $signed(sew_16_b_2) ? $signed(_T_5047) : $signed(sew_16_b_2); // @[Valu.scala 181:30]
  wire [15:0] _T_5238 = 9'h4 == io_aluc ? $signed(_T_5212) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5240 = 9'h14 == io_aluc ? $signed(_T_5215) : $signed(_T_5238); // @[Mux.scala 80:57]
  wire [15:0] _T_5242 = 9'h1c == io_aluc ? $signed(_T_5218) : $signed(_T_5240); // @[Mux.scala 80:57]
  wire [15:0] _T_5244 = 9'h4c == io_aluc ? $signed(_T_5220) : $signed(_T_5242); // @[Mux.scala 80:57]
  wire [15:0] _T_5246 = 9'h54 == io_aluc ? $signed(_T_5222) : $signed(_T_5244); // @[Mux.scala 80:57]
  wire [15:0] _T_5248 = 9'h5c == io_aluc ? $signed(_T_5224) : $signed(_T_5246); // @[Mux.scala 80:57]
  wire [15:0] _T_5250 = 9'h24 == io_aluc ? $signed(_T_5228) : $signed(_T_5248); // @[Mux.scala 80:57]
  wire [15:0] _T_5252 = 9'h2c == io_aluc ? $signed(_T_5230) : $signed(_T_5250); // @[Mux.scala 80:57]
  wire [15:0] _T_5254 = 9'h34 == io_aluc ? $signed(_T_5234) : $signed(_T_5252); // @[Mux.scala 80:57]
  wire [15:0] _T_5256 = 9'h3c == io_aluc ? $signed(_T_5236) : $signed(_T_5254); // @[Mux.scala 80:57]
  wire [15:0] _T_5257 = _T_435 ? $signed(-16'sh1) : $signed(_T_5256); // @[Valu.scala 168:36]
  wire [15:0] _T_5258 = _T_429 ? $signed(sew_16_vd_2) : $signed(_T_5257); // @[Valu.scala 167:32]
  wire [15:0] _T_5264 = _T_233 & 32'h2 > io_vl ? $signed(sew_16_vd_2) : $signed(-16'sh1); // @[Valu.scala 185:12]
  wire [15:0] _T_5265 = _T_423 ? $signed(_T_5258) : $signed(_T_5264); // @[Valu.scala 166:11]
  wire [15:0] _T_5285 = $signed(sew_16_b_3) + $signed(_T_5047); // @[Valu.scala 172:37]
  wire [15:0] _T_5288 = $signed(sew_16_b_3) - $signed(_T_5047); // @[Valu.scala 173:37]
  wire [15:0] _T_5291 = $signed(_T_5047) - $signed(sew_16_b_3); // @[Valu.scala 174:33]
  wire [15:0] _T_5293 = $signed(sew_16_b_3) & $signed(_T_5047); // @[Valu.scala 175:36]
  wire [15:0] _T_5295 = $signed(sew_16_b_3) | $signed(_T_5047); // @[Valu.scala 176:35]
  wire [15:0] _T_5297 = $signed(sew_16_b_3) ^ $signed(_T_5047); // @[Valu.scala 177:36]
  wire [15:0] _T_5301 = _T_5079 <= _T_743 ? $signed(_T_5047) : $signed(sew_16_b_3); // @[Valu.scala 178:31]
  wire [15:0] _T_5303 = $signed(_T_5047) <= $signed(sew_16_b_3) ? $signed(_T_5047) : $signed(sew_16_b_3); // @[Valu.scala 179:30]
  wire [15:0] _T_5307 = _T_5079 >= _T_743 ? $signed(_T_5047) : $signed(sew_16_b_3); // @[Valu.scala 180:31]
  wire [15:0] _T_5309 = $signed(_T_5047) >= $signed(sew_16_b_3) ? $signed(_T_5047) : $signed(sew_16_b_3); // @[Valu.scala 181:30]
  wire [15:0] _T_5311 = 9'h4 == io_aluc ? $signed(_T_5285) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5313 = 9'h14 == io_aluc ? $signed(_T_5288) : $signed(_T_5311); // @[Mux.scala 80:57]
  wire [15:0] _T_5315 = 9'h1c == io_aluc ? $signed(_T_5291) : $signed(_T_5313); // @[Mux.scala 80:57]
  wire [15:0] _T_5317 = 9'h4c == io_aluc ? $signed(_T_5293) : $signed(_T_5315); // @[Mux.scala 80:57]
  wire [15:0] _T_5319 = 9'h54 == io_aluc ? $signed(_T_5295) : $signed(_T_5317); // @[Mux.scala 80:57]
  wire [15:0] _T_5321 = 9'h5c == io_aluc ? $signed(_T_5297) : $signed(_T_5319); // @[Mux.scala 80:57]
  wire [15:0] _T_5323 = 9'h24 == io_aluc ? $signed(_T_5301) : $signed(_T_5321); // @[Mux.scala 80:57]
  wire [15:0] _T_5325 = 9'h2c == io_aluc ? $signed(_T_5303) : $signed(_T_5323); // @[Mux.scala 80:57]
  wire [15:0] _T_5327 = 9'h34 == io_aluc ? $signed(_T_5307) : $signed(_T_5325); // @[Mux.scala 80:57]
  wire [15:0] _T_5329 = 9'h3c == io_aluc ? $signed(_T_5309) : $signed(_T_5327); // @[Mux.scala 80:57]
  wire [15:0] _T_5330 = _T_493 ? $signed(-16'sh1) : $signed(_T_5329); // @[Valu.scala 168:36]
  wire [15:0] _T_5331 = _T_487 ? $signed(sew_16_vd_3) : $signed(_T_5330); // @[Valu.scala 167:32]
  wire [15:0] _T_5337 = _T_233 & 32'h3 > io_vl ? $signed(sew_16_vd_3) : $signed(-16'sh1); // @[Valu.scala 185:12]
  wire [15:0] _T_5338 = _T_481 ? $signed(_T_5331) : $signed(_T_5337); // @[Valu.scala 166:11]
  wire [15:0] _T_5358 = $signed(sew_16_b_4) + $signed(_T_5047); // @[Valu.scala 172:37]
  wire [15:0] _T_5361 = $signed(sew_16_b_4) - $signed(_T_5047); // @[Valu.scala 173:37]
  wire [15:0] _T_5364 = $signed(_T_5047) - $signed(sew_16_b_4); // @[Valu.scala 174:33]
  wire [15:0] _T_5366 = $signed(sew_16_b_4) & $signed(_T_5047); // @[Valu.scala 175:36]
  wire [15:0] _T_5368 = $signed(sew_16_b_4) | $signed(_T_5047); // @[Valu.scala 176:35]
  wire [15:0] _T_5370 = $signed(sew_16_b_4) ^ $signed(_T_5047); // @[Valu.scala 177:36]
  wire [15:0] _T_5374 = _T_5079 <= _T_801 ? $signed(_T_5047) : $signed(sew_16_b_4); // @[Valu.scala 178:31]
  wire [15:0] _T_5376 = $signed(_T_5047) <= $signed(sew_16_b_4) ? $signed(_T_5047) : $signed(sew_16_b_4); // @[Valu.scala 179:30]
  wire [15:0] _T_5380 = _T_5079 >= _T_801 ? $signed(_T_5047) : $signed(sew_16_b_4); // @[Valu.scala 180:31]
  wire [15:0] _T_5382 = $signed(_T_5047) >= $signed(sew_16_b_4) ? $signed(_T_5047) : $signed(sew_16_b_4); // @[Valu.scala 181:30]
  wire [15:0] _T_5384 = 9'h4 == io_aluc ? $signed(_T_5358) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5386 = 9'h14 == io_aluc ? $signed(_T_5361) : $signed(_T_5384); // @[Mux.scala 80:57]
  wire [15:0] _T_5388 = 9'h1c == io_aluc ? $signed(_T_5364) : $signed(_T_5386); // @[Mux.scala 80:57]
  wire [15:0] _T_5390 = 9'h4c == io_aluc ? $signed(_T_5366) : $signed(_T_5388); // @[Mux.scala 80:57]
  wire [15:0] _T_5392 = 9'h54 == io_aluc ? $signed(_T_5368) : $signed(_T_5390); // @[Mux.scala 80:57]
  wire [15:0] _T_5394 = 9'h5c == io_aluc ? $signed(_T_5370) : $signed(_T_5392); // @[Mux.scala 80:57]
  wire [15:0] _T_5396 = 9'h24 == io_aluc ? $signed(_T_5374) : $signed(_T_5394); // @[Mux.scala 80:57]
  wire [15:0] _T_5398 = 9'h2c == io_aluc ? $signed(_T_5376) : $signed(_T_5396); // @[Mux.scala 80:57]
  wire [15:0] _T_5400 = 9'h34 == io_aluc ? $signed(_T_5380) : $signed(_T_5398); // @[Mux.scala 80:57]
  wire [15:0] _T_5402 = 9'h3c == io_aluc ? $signed(_T_5382) : $signed(_T_5400); // @[Mux.scala 80:57]
  wire [15:0] _T_5403 = _T_788 ? $signed(-16'sh1) : $signed(_T_5402); // @[Valu.scala 168:36]
  wire [15:0] _T_5404 = _T_782 ? $signed(sew_16_vd_4) : $signed(_T_5403); // @[Valu.scala 167:32]
  wire [15:0] _T_5410 = _T_233 & 32'h4 > io_vl ? $signed(sew_16_vd_4) : $signed(-16'sh1); // @[Valu.scala 185:12]
  wire [15:0] _T_5411 = _T_776 ? $signed(_T_5404) : $signed(_T_5410); // @[Valu.scala 166:11]
  wire [15:0] _T_5431 = $signed(sew_16_b_5) + $signed(_T_5047); // @[Valu.scala 172:37]
  wire [15:0] _T_5434 = $signed(sew_16_b_5) - $signed(_T_5047); // @[Valu.scala 173:37]
  wire [15:0] _T_5437 = $signed(_T_5047) - $signed(sew_16_b_5); // @[Valu.scala 174:33]
  wire [15:0] _T_5439 = $signed(sew_16_b_5) & $signed(_T_5047); // @[Valu.scala 175:36]
  wire [15:0] _T_5441 = $signed(sew_16_b_5) | $signed(_T_5047); // @[Valu.scala 176:35]
  wire [15:0] _T_5443 = $signed(sew_16_b_5) ^ $signed(_T_5047); // @[Valu.scala 177:36]
  wire [15:0] _T_5447 = _T_5079 <= _T_859 ? $signed(_T_5047) : $signed(sew_16_b_5); // @[Valu.scala 178:31]
  wire [15:0] _T_5449 = $signed(_T_5047) <= $signed(sew_16_b_5) ? $signed(_T_5047) : $signed(sew_16_b_5); // @[Valu.scala 179:30]
  wire [15:0] _T_5453 = _T_5079 >= _T_859 ? $signed(_T_5047) : $signed(sew_16_b_5); // @[Valu.scala 180:31]
  wire [15:0] _T_5455 = $signed(_T_5047) >= $signed(sew_16_b_5) ? $signed(_T_5047) : $signed(sew_16_b_5); // @[Valu.scala 181:30]
  wire [15:0] _T_5457 = 9'h4 == io_aluc ? $signed(_T_5431) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5459 = 9'h14 == io_aluc ? $signed(_T_5434) : $signed(_T_5457); // @[Mux.scala 80:57]
  wire [15:0] _T_5461 = 9'h1c == io_aluc ? $signed(_T_5437) : $signed(_T_5459); // @[Mux.scala 80:57]
  wire [15:0] _T_5463 = 9'h4c == io_aluc ? $signed(_T_5439) : $signed(_T_5461); // @[Mux.scala 80:57]
  wire [15:0] _T_5465 = 9'h54 == io_aluc ? $signed(_T_5441) : $signed(_T_5463); // @[Mux.scala 80:57]
  wire [15:0] _T_5467 = 9'h5c == io_aluc ? $signed(_T_5443) : $signed(_T_5465); // @[Mux.scala 80:57]
  wire [15:0] _T_5469 = 9'h24 == io_aluc ? $signed(_T_5447) : $signed(_T_5467); // @[Mux.scala 80:57]
  wire [15:0] _T_5471 = 9'h2c == io_aluc ? $signed(_T_5449) : $signed(_T_5469); // @[Mux.scala 80:57]
  wire [15:0] _T_5473 = 9'h34 == io_aluc ? $signed(_T_5453) : $signed(_T_5471); // @[Mux.scala 80:57]
  wire [15:0] _T_5475 = 9'h3c == io_aluc ? $signed(_T_5455) : $signed(_T_5473); // @[Mux.scala 80:57]
  wire [15:0] _T_5476 = _T_846 ? $signed(-16'sh1) : $signed(_T_5475); // @[Valu.scala 168:36]
  wire [15:0] _T_5477 = _T_840 ? $signed(sew_16_vd_5) : $signed(_T_5476); // @[Valu.scala 167:32]
  wire [15:0] _T_5483 = _T_233 & 32'h5 > io_vl ? $signed(sew_16_vd_5) : $signed(-16'sh1); // @[Valu.scala 185:12]
  wire [15:0] _T_5484 = _T_834 ? $signed(_T_5477) : $signed(_T_5483); // @[Valu.scala 166:11]
  wire [15:0] _T_5504 = $signed(sew_16_b_6) + $signed(_T_5047); // @[Valu.scala 172:37]
  wire [15:0] _T_5507 = $signed(sew_16_b_6) - $signed(_T_5047); // @[Valu.scala 173:37]
  wire [15:0] _T_5510 = $signed(_T_5047) - $signed(sew_16_b_6); // @[Valu.scala 174:33]
  wire [15:0] _T_5512 = $signed(sew_16_b_6) & $signed(_T_5047); // @[Valu.scala 175:36]
  wire [15:0] _T_5514 = $signed(sew_16_b_6) | $signed(_T_5047); // @[Valu.scala 176:35]
  wire [15:0] _T_5516 = $signed(sew_16_b_6) ^ $signed(_T_5047); // @[Valu.scala 177:36]
  wire [15:0] _T_5520 = _T_5079 <= _T_917 ? $signed(_T_5047) : $signed(sew_16_b_6); // @[Valu.scala 178:31]
  wire [15:0] _T_5522 = $signed(_T_5047) <= $signed(sew_16_b_6) ? $signed(_T_5047) : $signed(sew_16_b_6); // @[Valu.scala 179:30]
  wire [15:0] _T_5526 = _T_5079 >= _T_917 ? $signed(_T_5047) : $signed(sew_16_b_6); // @[Valu.scala 180:31]
  wire [15:0] _T_5528 = $signed(_T_5047) >= $signed(sew_16_b_6) ? $signed(_T_5047) : $signed(sew_16_b_6); // @[Valu.scala 181:30]
  wire [15:0] _T_5530 = 9'h4 == io_aluc ? $signed(_T_5504) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5532 = 9'h14 == io_aluc ? $signed(_T_5507) : $signed(_T_5530); // @[Mux.scala 80:57]
  wire [15:0] _T_5534 = 9'h1c == io_aluc ? $signed(_T_5510) : $signed(_T_5532); // @[Mux.scala 80:57]
  wire [15:0] _T_5536 = 9'h4c == io_aluc ? $signed(_T_5512) : $signed(_T_5534); // @[Mux.scala 80:57]
  wire [15:0] _T_5538 = 9'h54 == io_aluc ? $signed(_T_5514) : $signed(_T_5536); // @[Mux.scala 80:57]
  wire [15:0] _T_5540 = 9'h5c == io_aluc ? $signed(_T_5516) : $signed(_T_5538); // @[Mux.scala 80:57]
  wire [15:0] _T_5542 = 9'h24 == io_aluc ? $signed(_T_5520) : $signed(_T_5540); // @[Mux.scala 80:57]
  wire [15:0] _T_5544 = 9'h2c == io_aluc ? $signed(_T_5522) : $signed(_T_5542); // @[Mux.scala 80:57]
  wire [15:0] _T_5546 = 9'h34 == io_aluc ? $signed(_T_5526) : $signed(_T_5544); // @[Mux.scala 80:57]
  wire [15:0] _T_5548 = 9'h3c == io_aluc ? $signed(_T_5528) : $signed(_T_5546); // @[Mux.scala 80:57]
  wire [15:0] _T_5549 = _T_904 ? $signed(-16'sh1) : $signed(_T_5548); // @[Valu.scala 168:36]
  wire [15:0] _T_5550 = _T_898 ? $signed(sew_16_vd_6) : $signed(_T_5549); // @[Valu.scala 167:32]
  wire [15:0] _T_5556 = _T_233 & 32'h6 > io_vl ? $signed(sew_16_vd_6) : $signed(-16'sh1); // @[Valu.scala 185:12]
  wire [15:0] _T_5557 = _T_892 ? $signed(_T_5550) : $signed(_T_5556); // @[Valu.scala 166:11]
  wire [15:0] _T_5577 = $signed(sew_16_b_7) + $signed(_T_5047); // @[Valu.scala 172:37]
  wire [15:0] _T_5580 = $signed(sew_16_b_7) - $signed(_T_5047); // @[Valu.scala 173:37]
  wire [15:0] _T_5583 = $signed(_T_5047) - $signed(sew_16_b_7); // @[Valu.scala 174:33]
  wire [15:0] _T_5585 = $signed(sew_16_b_7) & $signed(_T_5047); // @[Valu.scala 175:36]
  wire [15:0] _T_5587 = $signed(sew_16_b_7) | $signed(_T_5047); // @[Valu.scala 176:35]
  wire [15:0] _T_5589 = $signed(sew_16_b_7) ^ $signed(_T_5047); // @[Valu.scala 177:36]
  wire [15:0] _T_5593 = _T_5079 <= _T_975 ? $signed(_T_5047) : $signed(sew_16_b_7); // @[Valu.scala 178:31]
  wire [15:0] _T_5595 = $signed(_T_5047) <= $signed(sew_16_b_7) ? $signed(_T_5047) : $signed(sew_16_b_7); // @[Valu.scala 179:30]
  wire [15:0] _T_5599 = _T_5079 >= _T_975 ? $signed(_T_5047) : $signed(sew_16_b_7); // @[Valu.scala 180:31]
  wire [15:0] _T_5601 = $signed(_T_5047) >= $signed(sew_16_b_7) ? $signed(_T_5047) : $signed(sew_16_b_7); // @[Valu.scala 181:30]
  wire [15:0] _T_5603 = 9'h4 == io_aluc ? $signed(_T_5577) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5605 = 9'h14 == io_aluc ? $signed(_T_5580) : $signed(_T_5603); // @[Mux.scala 80:57]
  wire [15:0] _T_5607 = 9'h1c == io_aluc ? $signed(_T_5583) : $signed(_T_5605); // @[Mux.scala 80:57]
  wire [15:0] _T_5609 = 9'h4c == io_aluc ? $signed(_T_5585) : $signed(_T_5607); // @[Mux.scala 80:57]
  wire [15:0] _T_5611 = 9'h54 == io_aluc ? $signed(_T_5587) : $signed(_T_5609); // @[Mux.scala 80:57]
  wire [15:0] _T_5613 = 9'h5c == io_aluc ? $signed(_T_5589) : $signed(_T_5611); // @[Mux.scala 80:57]
  wire [15:0] _T_5615 = 9'h24 == io_aluc ? $signed(_T_5593) : $signed(_T_5613); // @[Mux.scala 80:57]
  wire [15:0] _T_5617 = 9'h2c == io_aluc ? $signed(_T_5595) : $signed(_T_5615); // @[Mux.scala 80:57]
  wire [15:0] _T_5619 = 9'h34 == io_aluc ? $signed(_T_5599) : $signed(_T_5617); // @[Mux.scala 80:57]
  wire [15:0] _T_5621 = 9'h3c == io_aluc ? $signed(_T_5601) : $signed(_T_5619); // @[Mux.scala 80:57]
  wire [15:0] _T_5622 = _T_962 ? $signed(-16'sh1) : $signed(_T_5621); // @[Valu.scala 168:36]
  wire [15:0] _T_5623 = _T_956 ? $signed(sew_16_vd_7) : $signed(_T_5622); // @[Valu.scala 167:32]
  wire [15:0] _T_5629 = _T_233 & 32'h7 > io_vl ? $signed(sew_16_vd_7) : $signed(-16'sh1); // @[Valu.scala 185:12]
  wire [15:0] _T_5630 = _T_950 ? $signed(_T_5623) : $signed(_T_5629); // @[Valu.scala 166:11]
  wire [15:0] lo_lo_lo_5 = _T_183 ? $signed(sew_16_vd_0) : $signed(_T_5119); // @[Cat.scala 30:58]
  wire [15:0] lo_lo_hi_5 = _T_241 ? $signed(sew_16_vd_1) : $signed(_T_5192); // @[Cat.scala 30:58]
  wire [15:0] lo_hi_lo_5 = _T_420 ? $signed(sew_16_vd_2) : $signed(_T_5265); // @[Cat.scala 30:58]
  wire [15:0] lo_hi_hi_5 = _T_478 ? $signed(sew_16_vd_3) : $signed(_T_5338); // @[Cat.scala 30:58]
  wire [15:0] hi_lo_lo_5 = _T_773 ? $signed(sew_16_vd_4) : $signed(_T_5411); // @[Cat.scala 30:58]
  wire [15:0] hi_lo_hi_5 = _T_831 ? $signed(sew_16_vd_5) : $signed(_T_5484); // @[Cat.scala 30:58]
  wire [15:0] hi_hi_lo_5 = _T_889 ? $signed(sew_16_vd_6) : $signed(_T_5557); // @[Cat.scala 30:58]
  wire [15:0] hi_hi_hi_5 = _T_947 ? $signed(sew_16_vd_7) : $signed(_T_5630); // @[Cat.scala 30:58]
  wire [127:0] _T_5633 = {hi_hi_hi_5,hi_hi_lo_5,hi_lo_hi_5,hi_lo_lo_5,lo_hi_hi_5,lo_hi_lo_5,lo_lo_hi_5,lo_lo_lo_5}; // @[Valu.scala 188:24]
  wire  _T_5634 = io_aluc == 9'hbc; // @[Valu.scala 259:28]
  wire  _T_5635 = io_vd_addr == 5'h0; // @[Valu.scala 260:29]
  wire [127:0] _T_5637 = {96'h0,io_in_A}; // @[Valu.scala 261:57]
  wire [63:0] _T_5642 = io_vd[63:0]; // @[Valu.scala 193:33]
  wire [63:0] _T_5660 = _T_198 ? 64'hffffffffffffffff : _T_3449; // @[Valu.scala 196:36]
  wire [63:0] _T_5661 = _T_192 ? _T_5642 : _T_5660; // @[Valu.scala 195:32]
  wire [63:0] _T_5669 = _T_186 ? _T_5661 : 64'hffffffffffffffff; // @[Valu.scala 194:11]
  wire [63:0] lo_16 = _T_183 ? _T_5642 : _T_5669; // @[Valu.scala 193:11]
  wire [63:0] _T_5671 = io_vd[127:64]; // @[Valu.scala 193:33]
  wire [63:0] _T_5689 = _T_256 ? 64'hffffffffffffffff : _T_3449; // @[Valu.scala 196:36]
  wire [63:0] _T_5690 = _T_250 ? _T_5671 : _T_5689; // @[Valu.scala 195:32]
  wire [63:0] _T_5697 = _T_3558 ? _T_5671 : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_5698 = _T_244 ? _T_5690 : _T_5697; // @[Valu.scala 194:11]
  wire [63:0] hi_16 = _T_241 ? _T_5671 : _T_5698; // @[Valu.scala 193:11]
  wire [127:0] _T_5700 = {hi_16,lo_16}; // @[Valu.scala 201:24]
  wire [31:0] _T_5705 = io_vd[31:0]; // @[Valu.scala 193:33]
  wire [63:0] _T_5723 = _T_198 ? 64'hffffffffffffffff : {{32'd0}, _T_3603}; // @[Valu.scala 196:36]
  wire [63:0] _T_5724 = _T_192 ? {{32'd0}, _T_5705} : _T_5723; // @[Valu.scala 195:32]
  wire [63:0] _T_5732 = _T_186 ? _T_5724 : 64'hffffffffffffffff; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_9 = _T_183 ? {{32'd0}, _T_5705} : _T_5732; // @[Valu.scala 193:11]
  wire [31:0] _T_5734 = io_vd[63:32]; // @[Valu.scala 193:33]
  wire [63:0] _T_5752 = _T_256 ? 64'hffffffffffffffff : {{32'd0}, _T_3603}; // @[Valu.scala 196:36]
  wire [63:0] _T_5753 = _T_250 ? {{32'd0}, _T_5734} : _T_5752; // @[Valu.scala 195:32]
  wire [63:0] _T_5760 = _T_3558 ? {{32'd0}, _T_5734} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_5761 = _T_244 ? _T_5753 : _T_5760; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_9 = _T_241 ? {{32'd0}, _T_5734} : _T_5761; // @[Valu.scala 193:11]
  wire [31:0] _T_5763 = io_vd[95:64]; // @[Valu.scala 193:33]
  wire [63:0] _T_5781 = _T_435 ? 64'hffffffffffffffff : {{32'd0}, _T_3603}; // @[Valu.scala 196:36]
  wire [63:0] _T_5782 = _T_429 ? {{32'd0}, _T_5763} : _T_5781; // @[Valu.scala 195:32]
  wire [63:0] _T_5789 = _T_3785 ? {{32'd0}, _T_5763} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_5790 = _T_423 ? _T_5782 : _T_5789; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_9 = _T_420 ? {{32'd0}, _T_5763} : _T_5790; // @[Valu.scala 193:11]
  wire [31:0] _T_5792 = io_vd[127:96]; // @[Valu.scala 193:33]
  wire [63:0] _T_5810 = _T_493 ? 64'hffffffffffffffff : {{32'd0}, _T_3603}; // @[Valu.scala 196:36]
  wire [63:0] _T_5811 = _T_487 ? {{32'd0}, _T_5792} : _T_5810; // @[Valu.scala 195:32]
  wire [63:0] _T_5818 = _T_3858 ? {{32'd0}, _T_5792} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_5819 = _T_481 ? _T_5811 : _T_5818; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_9 = _T_478 ? {{32'd0}, _T_5792} : _T_5819; // @[Valu.scala 193:11]
  wire [255:0] _T_5821 = {hi_hi_9,hi_lo_9,lo_hi_9,lo_lo_9}; // @[Valu.scala 201:24]
  wire [15:0] _T_5826 = io_vd[15:0]; // @[Valu.scala 193:33]
  wire [63:0] _T_5844 = _T_198 ? 64'hffffffffffffffff : {{48'd0}, _T_5079}; // @[Valu.scala 196:36]
  wire [63:0] _T_5845 = _T_192 ? {{48'd0}, _T_5826} : _T_5844; // @[Valu.scala 195:32]
  wire [63:0] _T_5853 = _T_186 ? _T_5845 : 64'hffffffffffffffff; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_lo_6 = _T_183 ? {{48'd0}, _T_5826} : _T_5853; // @[Valu.scala 193:11]
  wire [15:0] _T_5855 = io_vd[31:16]; // @[Valu.scala 193:33]
  wire [63:0] _T_5873 = _T_256 ? 64'hffffffffffffffff : {{48'd0}, _T_5079}; // @[Valu.scala 196:36]
  wire [63:0] _T_5874 = _T_250 ? {{48'd0}, _T_5855} : _T_5873; // @[Valu.scala 195:32]
  wire [63:0] _T_5881 = _T_3558 ? {{48'd0}, _T_5855} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_5882 = _T_244 ? _T_5874 : _T_5881; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_hi_6 = _T_241 ? {{48'd0}, _T_5855} : _T_5882; // @[Valu.scala 193:11]
  wire [15:0] _T_5884 = io_vd[47:32]; // @[Valu.scala 193:33]
  wire [63:0] _T_5902 = _T_435 ? 64'hffffffffffffffff : {{48'd0}, _T_5079}; // @[Valu.scala 196:36]
  wire [63:0] _T_5903 = _T_429 ? {{48'd0}, _T_5884} : _T_5902; // @[Valu.scala 195:32]
  wire [63:0] _T_5910 = _T_3785 ? {{48'd0}, _T_5884} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_5911 = _T_423 ? _T_5903 : _T_5910; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_lo_6 = _T_420 ? {{48'd0}, _T_5884} : _T_5911; // @[Valu.scala 193:11]
  wire [15:0] _T_5913 = io_vd[63:48]; // @[Valu.scala 193:33]
  wire [63:0] _T_5931 = _T_493 ? 64'hffffffffffffffff : {{48'd0}, _T_5079}; // @[Valu.scala 196:36]
  wire [63:0] _T_5932 = _T_487 ? {{48'd0}, _T_5913} : _T_5931; // @[Valu.scala 195:32]
  wire [63:0] _T_5939 = _T_3858 ? {{48'd0}, _T_5913} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_5940 = _T_481 ? _T_5932 : _T_5939; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_hi_6 = _T_478 ? {{48'd0}, _T_5913} : _T_5940; // @[Valu.scala 193:11]
  wire [15:0] _T_5942 = io_vd[79:64]; // @[Valu.scala 193:33]
  wire [63:0] _T_5960 = _T_788 ? 64'hffffffffffffffff : {{48'd0}, _T_5079}; // @[Valu.scala 196:36]
  wire [63:0] _T_5961 = _T_782 ? {{48'd0}, _T_5942} : _T_5960; // @[Valu.scala 195:32]
  wire [63:0] _T_5968 = _T_4231 ? {{48'd0}, _T_5942} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_5969 = _T_776 ? _T_5961 : _T_5968; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_lo_6 = _T_773 ? {{48'd0}, _T_5942} : _T_5969; // @[Valu.scala 193:11]
  wire [15:0] _T_5971 = io_vd[95:80]; // @[Valu.scala 193:33]
  wire [63:0] _T_5989 = _T_846 ? 64'hffffffffffffffff : {{48'd0}, _T_5079}; // @[Valu.scala 196:36]
  wire [63:0] _T_5990 = _T_840 ? {{48'd0}, _T_5971} : _T_5989; // @[Valu.scala 195:32]
  wire [63:0] _T_5997 = _T_4304 ? {{48'd0}, _T_5971} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_5998 = _T_834 ? _T_5990 : _T_5997; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_hi_6 = _T_831 ? {{48'd0}, _T_5971} : _T_5998; // @[Valu.scala 193:11]
  wire [15:0] _T_6000 = io_vd[111:96]; // @[Valu.scala 193:33]
  wire [63:0] _T_6018 = _T_904 ? 64'hffffffffffffffff : {{48'd0}, _T_5079}; // @[Valu.scala 196:36]
  wire [63:0] _T_6019 = _T_898 ? {{48'd0}, _T_6000} : _T_6018; // @[Valu.scala 195:32]
  wire [63:0] _T_6026 = _T_4377 ? {{48'd0}, _T_6000} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6027 = _T_892 ? _T_6019 : _T_6026; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_lo_6 = _T_889 ? {{48'd0}, _T_6000} : _T_6027; // @[Valu.scala 193:11]
  wire [15:0] _T_6029 = io_vd[127:112]; // @[Valu.scala 193:33]
  wire [63:0] _T_6047 = _T_962 ? 64'hffffffffffffffff : {{48'd0}, _T_5079}; // @[Valu.scala 196:36]
  wire [63:0] _T_6048 = _T_956 ? {{48'd0}, _T_6029} : _T_6047; // @[Valu.scala 195:32]
  wire [63:0] _T_6055 = _T_4450 ? {{48'd0}, _T_6029} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6056 = _T_950 ? _T_6048 : _T_6055; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_hi_6 = _T_947 ? {{48'd0}, _T_6029} : _T_6056; // @[Valu.scala 193:11]
  wire [511:0] _T_6058 = {hi_hi_hi_6,hi_hi_lo_6,hi_lo_hi_6,hi_lo_lo_6,lo_hi_hi_6,lo_hi_lo_6,lo_lo_hi_6,lo_lo_lo_6}; // @[Valu.scala 201:24]
  wire [7:0] _T_6063 = io_vd[7:0]; // @[Valu.scala 193:33]
  wire [63:0] _T_6081 = _T_198 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6082 = _T_192 ? {{56'd0}, _T_6063} : _T_6081; // @[Valu.scala 195:32]
  wire [63:0] _T_6090 = _T_186 ? _T_6082 : 64'hffffffffffffffff; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_lo_lo_3 = _T_183 ? {{56'd0}, _T_6063} : _T_6090; // @[Valu.scala 193:11]
  wire [7:0] _T_6092 = io_vd[15:8]; // @[Valu.scala 193:33]
  wire [63:0] _T_6110 = _T_256 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6111 = _T_250 ? {{56'd0}, _T_6092} : _T_6110; // @[Valu.scala 195:32]
  wire [63:0] _T_6118 = _T_3558 ? {{56'd0}, _T_6092} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6119 = _T_244 ? _T_6111 : _T_6118; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_lo_hi_3 = _T_241 ? {{56'd0}, _T_6092} : _T_6119; // @[Valu.scala 193:11]
  wire [7:0] _T_6121 = io_vd[23:16]; // @[Valu.scala 193:33]
  wire [63:0] _T_6139 = _T_435 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6140 = _T_429 ? {{56'd0}, _T_6121} : _T_6139; // @[Valu.scala 195:32]
  wire [63:0] _T_6147 = _T_3785 ? {{56'd0}, _T_6121} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6148 = _T_423 ? _T_6140 : _T_6147; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_hi_lo_3 = _T_420 ? {{56'd0}, _T_6121} : _T_6148; // @[Valu.scala 193:11]
  wire [7:0] _T_6150 = io_vd[31:24]; // @[Valu.scala 193:33]
  wire [63:0] _T_6168 = _T_493 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6169 = _T_487 ? {{56'd0}, _T_6150} : _T_6168; // @[Valu.scala 195:32]
  wire [63:0] _T_6176 = _T_3858 ? {{56'd0}, _T_6150} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6177 = _T_481 ? _T_6169 : _T_6176; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_hi_hi_3 = _T_478 ? {{56'd0}, _T_6150} : _T_6177; // @[Valu.scala 193:11]
  wire [7:0] _T_6179 = io_vd[39:32]; // @[Valu.scala 193:33]
  wire [63:0] _T_6197 = _T_788 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6198 = _T_782 ? {{56'd0}, _T_6179} : _T_6197; // @[Valu.scala 195:32]
  wire [63:0] _T_6205 = _T_4231 ? {{56'd0}, _T_6179} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6206 = _T_776 ? _T_6198 : _T_6205; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_lo_lo_3 = _T_773 ? {{56'd0}, _T_6179} : _T_6206; // @[Valu.scala 193:11]
  wire [7:0] _T_6208 = io_vd[47:40]; // @[Valu.scala 193:33]
  wire [63:0] _T_6226 = _T_846 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6227 = _T_840 ? {{56'd0}, _T_6208} : _T_6226; // @[Valu.scala 195:32]
  wire [63:0] _T_6234 = _T_4304 ? {{56'd0}, _T_6208} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6235 = _T_834 ? _T_6227 : _T_6234; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_lo_hi_3 = _T_831 ? {{56'd0}, _T_6208} : _T_6235; // @[Valu.scala 193:11]
  wire [7:0] _T_6237 = io_vd[55:48]; // @[Valu.scala 193:33]
  wire [63:0] _T_6255 = _T_904 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6256 = _T_898 ? {{56'd0}, _T_6237} : _T_6255; // @[Valu.scala 195:32]
  wire [63:0] _T_6263 = _T_4377 ? {{56'd0}, _T_6237} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6264 = _T_892 ? _T_6256 : _T_6263; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_hi_lo_3 = _T_889 ? {{56'd0}, _T_6237} : _T_6264; // @[Valu.scala 193:11]
  wire [7:0] _T_6266 = io_vd[63:56]; // @[Valu.scala 193:33]
  wire [63:0] _T_6284 = _T_962 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6285 = _T_956 ? {{56'd0}, _T_6266} : _T_6284; // @[Valu.scala 195:32]
  wire [63:0] _T_6292 = _T_4450 ? {{56'd0}, _T_6266} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6293 = _T_950 ? _T_6285 : _T_6292; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_hi_hi_3 = _T_947 ? {{56'd0}, _T_6266} : _T_6293; // @[Valu.scala 193:11]
  wire [7:0] _T_6295 = io_vd[71:64]; // @[Valu.scala 193:33]
  wire [63:0] _T_6313 = _T_1489 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6314 = _T_1483 ? {{56'd0}, _T_6295} : _T_6313; // @[Valu.scala 195:32]
  wire [63:0] _T_6321 = _T_4523 ? {{56'd0}, _T_6295} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6322 = _T_1477 ? _T_6314 : _T_6321; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_lo_lo_3 = _T_1474 ? {{56'd0}, _T_6295} : _T_6322; // @[Valu.scala 193:11]
  wire [7:0] _T_6324 = io_vd[79:72]; // @[Valu.scala 193:33]
  wire [63:0] _T_6342 = _T_1547 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6343 = _T_1541 ? {{56'd0}, _T_6324} : _T_6342; // @[Valu.scala 195:32]
  wire [63:0] _T_6350 = _T_4596 ? {{56'd0}, _T_6324} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6351 = _T_1535 ? _T_6343 : _T_6350; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_lo_hi_3 = _T_1532 ? {{56'd0}, _T_6324} : _T_6351; // @[Valu.scala 193:11]
  wire [7:0] _T_6353 = io_vd[87:80]; // @[Valu.scala 193:33]
  wire [63:0] _T_6371 = _T_1605 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6372 = _T_1599 ? {{56'd0}, _T_6353} : _T_6371; // @[Valu.scala 195:32]
  wire [63:0] _T_6379 = _T_4669 ? {{56'd0}, _T_6353} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6380 = _T_1593 ? _T_6372 : _T_6379; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_hi_lo_3 = _T_1590 ? {{56'd0}, _T_6353} : _T_6380; // @[Valu.scala 193:11]
  wire [7:0] _T_6382 = io_vd[95:88]; // @[Valu.scala 193:33]
  wire [63:0] _T_6400 = _T_1663 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6401 = _T_1657 ? {{56'd0}, _T_6382} : _T_6400; // @[Valu.scala 195:32]
  wire [63:0] _T_6408 = _T_4742 ? {{56'd0}, _T_6382} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6409 = _T_1651 ? _T_6401 : _T_6408; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_hi_hi_3 = _T_1648 ? {{56'd0}, _T_6382} : _T_6409; // @[Valu.scala 193:11]
  wire [7:0] _T_6411 = io_vd[103:96]; // @[Valu.scala 193:33]
  wire [63:0] _T_6429 = _T_1721 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6430 = _T_1715 ? {{56'd0}, _T_6411} : _T_6429; // @[Valu.scala 195:32]
  wire [63:0] _T_6437 = _T_4815 ? {{56'd0}, _T_6411} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6438 = _T_1709 ? _T_6430 : _T_6437; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_lo_lo_3 = _T_1706 ? {{56'd0}, _T_6411} : _T_6438; // @[Valu.scala 193:11]
  wire [7:0] _T_6440 = io_vd[111:104]; // @[Valu.scala 193:33]
  wire [63:0] _T_6458 = _T_1779 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6459 = _T_1773 ? {{56'd0}, _T_6440} : _T_6458; // @[Valu.scala 195:32]
  wire [63:0] _T_6466 = _T_4888 ? {{56'd0}, _T_6440} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6467 = _T_1767 ? _T_6459 : _T_6466; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_lo_hi_3 = _T_1764 ? {{56'd0}, _T_6440} : _T_6467; // @[Valu.scala 193:11]
  wire [7:0] _T_6469 = io_vd[119:112]; // @[Valu.scala 193:33]
  wire [63:0] _T_6487 = _T_1837 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6488 = _T_1831 ? {{56'd0}, _T_6469} : _T_6487; // @[Valu.scala 195:32]
  wire [63:0] _T_6495 = _T_4961 ? {{56'd0}, _T_6469} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6496 = _T_1825 ? _T_6488 : _T_6495; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_hi_lo_3 = _T_1822 ? {{56'd0}, _T_6469} : _T_6496; // @[Valu.scala 193:11]
  wire [7:0] _T_6498 = io_vd[127:120]; // @[Valu.scala 193:33]
  wire [63:0] _T_6516 = _T_1895 ? 64'hffffffffffffffff : {{56'd0}, _T_3903}; // @[Valu.scala 196:36]
  wire [63:0] _T_6517 = _T_1889 ? {{56'd0}, _T_6498} : _T_6516; // @[Valu.scala 195:32]
  wire [63:0] _T_6524 = _T_5034 ? {{56'd0}, _T_6498} : 64'hffffffffffffffff; // @[Valu.scala 198:12]
  wire [63:0] _T_6525 = _T_1883 ? _T_6517 : _T_6524; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_hi_hi_3 = _T_1880 ? {{56'd0}, _T_6498} : _T_6525; // @[Valu.scala 193:11]
  wire [511:0] lo_19 = {lo_hi_hi_hi_3,lo_hi_hi_lo_3,lo_hi_lo_hi_3,lo_hi_lo_lo_3,lo_lo_hi_hi_3,lo_lo_hi_lo_3,
    lo_lo_lo_hi_3,lo_lo_lo_lo_3}; // @[Cat.scala 30:58]
  wire [1023:0] _T_6527 = {hi_hi_hi_hi_3,hi_hi_hi_lo_3,hi_hi_lo_hi_3,hi_hi_lo_lo_3,hi_lo_hi_hi_3,hi_lo_hi_lo_3,
    hi_lo_lo_hi_3,hi_lo_lo_lo_3,lo_19}; // @[Valu.scala 201:24]
  wire [1023:0] _GEN_0 = _T_1007 ? $signed(_T_6527) : $signed(1024'sh0); // @[Valu.scala 272:49 Valu.scala 274:33 Valu.scala 218:13]
  wire [1023:0] _GEN_1 = _T_538 ? $signed({{512{_T_6058[511]}},_T_6058}) : $signed(_GEN_0); // @[Valu.scala 269:49 Valu.scala 271:33]
  wire [1023:0] _GEN_2 = _T_301 ? $signed({{768{_T_5821[255]}},_T_5821}) : $signed(_GEN_1); // @[Valu.scala 266:49 Valu.scala 268:33]
  wire [1023:0] _GEN_3 = _T_180 ? $signed({{896{_T_5700[127]}},_T_5700}) : $signed(_GEN_2); // @[Valu.scala 263:43 Valu.scala 265:33]
  wire [1023:0] _GEN_4 = io_vd_addr == 5'h0 ? $signed({{896{_T_5637[127]}},_T_5637}) : $signed(_GEN_3); // @[Valu.scala 260:37 Valu.scala 261:29]
  wire [127:0] _T_6531 = {96'h0,io_in_B}; // @[Valu.scala 282:57]
  wire [63:0] _T_6553 = {32'h0,io_in_B}; // @[Valu.scala 196:167]
  wire [63:0] _T_6554 = _T_198 ? 64'hffffffffffffffff : _T_6553; // @[Valu.scala 196:36]
  wire [63:0] _T_6555 = _T_192 ? _T_5642 : _T_6554; // @[Valu.scala 195:32]
  wire [63:0] _T_6563 = _T_186 ? _T_6555 : 64'hffffffffffffffff; // @[Valu.scala 194:11]
  wire [63:0] lo_22 = _T_183 ? _T_5642 : _T_6563; // @[Valu.scala 193:11]
  wire [63:0] _T_6583 = _T_256 ? 64'hffffffffffffffff : _T_6553; // @[Valu.scala 196:36]
  wire [63:0] _T_6584 = _T_250 ? _T_5671 : _T_6583; // @[Valu.scala 195:32]
  wire [63:0] _T_6592 = _T_244 ? _T_6584 : _T_5697; // @[Valu.scala 194:11]
  wire [63:0] hi_22 = _T_241 ? _T_5671 : _T_6592; // @[Valu.scala 193:11]
  wire [127:0] _T_6594 = {hi_22,lo_22}; // @[Valu.scala 201:24]
  wire [31:0] _T_6616 = io_in_B; // @[Valu.scala 196:167]
  wire [63:0] _T_6617 = _T_198 ? 64'hffffffffffffffff : {{32'd0}, _T_6616}; // @[Valu.scala 196:36]
  wire [63:0] _T_6618 = _T_192 ? {{32'd0}, _T_5705} : _T_6617; // @[Valu.scala 195:32]
  wire [63:0] _T_6626 = _T_186 ? _T_6618 : 64'hffffffffffffffff; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_12 = _T_183 ? {{32'd0}, _T_5705} : _T_6626; // @[Valu.scala 193:11]
  wire [63:0] _T_6646 = _T_256 ? 64'hffffffffffffffff : {{32'd0}, _T_6616}; // @[Valu.scala 196:36]
  wire [63:0] _T_6647 = _T_250 ? {{32'd0}, _T_5734} : _T_6646; // @[Valu.scala 195:32]
  wire [63:0] _T_6655 = _T_244 ? _T_6647 : _T_5760; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_12 = _T_241 ? {{32'd0}, _T_5734} : _T_6655; // @[Valu.scala 193:11]
  wire [63:0] _T_6675 = _T_435 ? 64'hffffffffffffffff : {{32'd0}, _T_6616}; // @[Valu.scala 196:36]
  wire [63:0] _T_6676 = _T_429 ? {{32'd0}, _T_5763} : _T_6675; // @[Valu.scala 195:32]
  wire [63:0] _T_6684 = _T_423 ? _T_6676 : _T_5789; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_12 = _T_420 ? {{32'd0}, _T_5763} : _T_6684; // @[Valu.scala 193:11]
  wire [63:0] _T_6704 = _T_493 ? 64'hffffffffffffffff : {{32'd0}, _T_6616}; // @[Valu.scala 196:36]
  wire [63:0] _T_6705 = _T_487 ? {{32'd0}, _T_5792} : _T_6704; // @[Valu.scala 195:32]
  wire [63:0] _T_6713 = _T_481 ? _T_6705 : _T_5818; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_12 = _T_478 ? {{32'd0}, _T_5792} : _T_6713; // @[Valu.scala 193:11]
  wire [255:0] _T_6715 = {hi_hi_12,hi_lo_12,lo_hi_12,lo_lo_12}; // @[Valu.scala 201:24]
  wire [7:0] _T_6737 = io_in_B[7:0]; // @[Valu.scala 196:167]
  wire [63:0] _T_6738 = _T_198 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_6739 = _T_192 ? {{56'd0}, _T_6063} : _T_6738; // @[Valu.scala 195:32]
  wire [63:0] _T_6747 = _T_186 ? _T_6739 : 64'hffffffffffffffff; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_lo_lo_4 = _T_183 ? {{56'd0}, _T_6063} : _T_6747; // @[Valu.scala 193:11]
  wire [63:0] _T_6767 = _T_256 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_6768 = _T_250 ? {{56'd0}, _T_6092} : _T_6767; // @[Valu.scala 195:32]
  wire [63:0] _T_6776 = _T_244 ? _T_6768 : _T_6118; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_lo_hi_4 = _T_241 ? {{56'd0}, _T_6092} : _T_6776; // @[Valu.scala 193:11]
  wire [63:0] _T_6796 = _T_435 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_6797 = _T_429 ? {{56'd0}, _T_6121} : _T_6796; // @[Valu.scala 195:32]
  wire [63:0] _T_6805 = _T_423 ? _T_6797 : _T_6147; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_hi_lo_4 = _T_420 ? {{56'd0}, _T_6121} : _T_6805; // @[Valu.scala 193:11]
  wire [63:0] _T_6825 = _T_493 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_6826 = _T_487 ? {{56'd0}, _T_6150} : _T_6825; // @[Valu.scala 195:32]
  wire [63:0] _T_6834 = _T_481 ? _T_6826 : _T_6176; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_hi_hi_4 = _T_478 ? {{56'd0}, _T_6150} : _T_6834; // @[Valu.scala 193:11]
  wire [63:0] _T_6854 = _T_788 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_6855 = _T_782 ? {{56'd0}, _T_6179} : _T_6854; // @[Valu.scala 195:32]
  wire [63:0] _T_6863 = _T_776 ? _T_6855 : _T_6205; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_lo_lo_4 = _T_773 ? {{56'd0}, _T_6179} : _T_6863; // @[Valu.scala 193:11]
  wire [63:0] _T_6883 = _T_846 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_6884 = _T_840 ? {{56'd0}, _T_6208} : _T_6883; // @[Valu.scala 195:32]
  wire [63:0] _T_6892 = _T_834 ? _T_6884 : _T_6234; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_lo_hi_4 = _T_831 ? {{56'd0}, _T_6208} : _T_6892; // @[Valu.scala 193:11]
  wire [63:0] _T_6912 = _T_904 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_6913 = _T_898 ? {{56'd0}, _T_6237} : _T_6912; // @[Valu.scala 195:32]
  wire [63:0] _T_6921 = _T_892 ? _T_6913 : _T_6263; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_hi_lo_4 = _T_889 ? {{56'd0}, _T_6237} : _T_6921; // @[Valu.scala 193:11]
  wire [63:0] _T_6941 = _T_962 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_6942 = _T_956 ? {{56'd0}, _T_6266} : _T_6941; // @[Valu.scala 195:32]
  wire [63:0] _T_6950 = _T_950 ? _T_6942 : _T_6292; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_hi_hi_4 = _T_947 ? {{56'd0}, _T_6266} : _T_6950; // @[Valu.scala 193:11]
  wire [63:0] _T_6970 = _T_1489 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_6971 = _T_1483 ? {{56'd0}, _T_6295} : _T_6970; // @[Valu.scala 195:32]
  wire [63:0] _T_6979 = _T_1477 ? _T_6971 : _T_6321; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_lo_lo_4 = _T_1474 ? {{56'd0}, _T_6295} : _T_6979; // @[Valu.scala 193:11]
  wire [63:0] _T_6999 = _T_1547 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_7000 = _T_1541 ? {{56'd0}, _T_6324} : _T_6999; // @[Valu.scala 195:32]
  wire [63:0] _T_7008 = _T_1535 ? _T_7000 : _T_6350; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_lo_hi_4 = _T_1532 ? {{56'd0}, _T_6324} : _T_7008; // @[Valu.scala 193:11]
  wire [63:0] _T_7028 = _T_1605 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_7029 = _T_1599 ? {{56'd0}, _T_6353} : _T_7028; // @[Valu.scala 195:32]
  wire [63:0] _T_7037 = _T_1593 ? _T_7029 : _T_6379; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_hi_lo_4 = _T_1590 ? {{56'd0}, _T_6353} : _T_7037; // @[Valu.scala 193:11]
  wire [63:0] _T_7057 = _T_1663 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_7058 = _T_1657 ? {{56'd0}, _T_6382} : _T_7057; // @[Valu.scala 195:32]
  wire [63:0] _T_7066 = _T_1651 ? _T_7058 : _T_6408; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_hi_hi_4 = _T_1648 ? {{56'd0}, _T_6382} : _T_7066; // @[Valu.scala 193:11]
  wire [63:0] _T_7086 = _T_1721 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_7087 = _T_1715 ? {{56'd0}, _T_6411} : _T_7086; // @[Valu.scala 195:32]
  wire [63:0] _T_7095 = _T_1709 ? _T_7087 : _T_6437; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_lo_lo_4 = _T_1706 ? {{56'd0}, _T_6411} : _T_7095; // @[Valu.scala 193:11]
  wire [63:0] _T_7115 = _T_1779 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_7116 = _T_1773 ? {{56'd0}, _T_6440} : _T_7115; // @[Valu.scala 195:32]
  wire [63:0] _T_7124 = _T_1767 ? _T_7116 : _T_6466; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_lo_hi_4 = _T_1764 ? {{56'd0}, _T_6440} : _T_7124; // @[Valu.scala 193:11]
  wire [63:0] _T_7144 = _T_1837 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_7145 = _T_1831 ? {{56'd0}, _T_6469} : _T_7144; // @[Valu.scala 195:32]
  wire [63:0] _T_7153 = _T_1825 ? _T_7145 : _T_6495; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_hi_lo_4 = _T_1822 ? {{56'd0}, _T_6469} : _T_7153; // @[Valu.scala 193:11]
  wire [63:0] _T_7173 = _T_1895 ? 64'hffffffffffffffff : {{56'd0}, _T_6737}; // @[Valu.scala 196:36]
  wire [63:0] _T_7174 = _T_1889 ? {{56'd0}, _T_6498} : _T_7173; // @[Valu.scala 195:32]
  wire [63:0] _T_7182 = _T_1883 ? _T_7174 : _T_6524; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_hi_hi_4 = _T_1880 ? {{56'd0}, _T_6498} : _T_7182; // @[Valu.scala 193:11]
  wire [511:0] lo_24 = {lo_hi_hi_hi_4,lo_hi_hi_lo_4,lo_hi_lo_hi_4,lo_hi_lo_lo_4,lo_lo_hi_hi_4,lo_lo_hi_lo_4,
    lo_lo_lo_hi_4,lo_lo_lo_lo_4}; // @[Cat.scala 30:58]
  wire [1023:0] _T_7184 = {hi_hi_hi_hi_4,hi_hi_hi_lo_4,hi_hi_lo_hi_4,hi_hi_lo_lo_4,hi_lo_hi_hi_4,hi_lo_hi_lo_4,
    hi_lo_lo_hi_4,hi_lo_lo_lo_4,lo_24}; // @[Valu.scala 201:24]
  wire [15:0] _T_7206 = io_in_B[15:0]; // @[Valu.scala 196:167]
  wire [63:0] _T_7207 = _T_198 ? 64'hffffffffffffffff : {{48'd0}, _T_7206}; // @[Valu.scala 196:36]
  wire [63:0] _T_7208 = _T_192 ? {{48'd0}, _T_5826} : _T_7207; // @[Valu.scala 195:32]
  wire [63:0] _T_7216 = _T_186 ? _T_7208 : 64'hffffffffffffffff; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_lo_9 = _T_183 ? {{48'd0}, _T_5826} : _T_7216; // @[Valu.scala 193:11]
  wire [63:0] _T_7236 = _T_256 ? 64'hffffffffffffffff : {{48'd0}, _T_7206}; // @[Valu.scala 196:36]
  wire [63:0] _T_7237 = _T_250 ? {{48'd0}, _T_5855} : _T_7236; // @[Valu.scala 195:32]
  wire [63:0] _T_7245 = _T_244 ? _T_7237 : _T_5881; // @[Valu.scala 194:11]
  wire [63:0] lo_lo_hi_9 = _T_241 ? {{48'd0}, _T_5855} : _T_7245; // @[Valu.scala 193:11]
  wire [63:0] _T_7265 = _T_435 ? 64'hffffffffffffffff : {{48'd0}, _T_7206}; // @[Valu.scala 196:36]
  wire [63:0] _T_7266 = _T_429 ? {{48'd0}, _T_5884} : _T_7265; // @[Valu.scala 195:32]
  wire [63:0] _T_7274 = _T_423 ? _T_7266 : _T_5910; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_lo_9 = _T_420 ? {{48'd0}, _T_5884} : _T_7274; // @[Valu.scala 193:11]
  wire [63:0] _T_7294 = _T_493 ? 64'hffffffffffffffff : {{48'd0}, _T_7206}; // @[Valu.scala 196:36]
  wire [63:0] _T_7295 = _T_487 ? {{48'd0}, _T_5913} : _T_7294; // @[Valu.scala 195:32]
  wire [63:0] _T_7303 = _T_481 ? _T_7295 : _T_5939; // @[Valu.scala 194:11]
  wire [63:0] lo_hi_hi_9 = _T_478 ? {{48'd0}, _T_5913} : _T_7303; // @[Valu.scala 193:11]
  wire [63:0] _T_7323 = _T_788 ? 64'hffffffffffffffff : {{48'd0}, _T_7206}; // @[Valu.scala 196:36]
  wire [63:0] _T_7324 = _T_782 ? {{48'd0}, _T_5942} : _T_7323; // @[Valu.scala 195:32]
  wire [63:0] _T_7332 = _T_776 ? _T_7324 : _T_5968; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_lo_9 = _T_773 ? {{48'd0}, _T_5942} : _T_7332; // @[Valu.scala 193:11]
  wire [63:0] _T_7352 = _T_846 ? 64'hffffffffffffffff : {{48'd0}, _T_7206}; // @[Valu.scala 196:36]
  wire [63:0] _T_7353 = _T_840 ? {{48'd0}, _T_5971} : _T_7352; // @[Valu.scala 195:32]
  wire [63:0] _T_7361 = _T_834 ? _T_7353 : _T_5997; // @[Valu.scala 194:11]
  wire [63:0] hi_lo_hi_9 = _T_831 ? {{48'd0}, _T_5971} : _T_7361; // @[Valu.scala 193:11]
  wire [63:0] _T_7381 = _T_904 ? 64'hffffffffffffffff : {{48'd0}, _T_7206}; // @[Valu.scala 196:36]
  wire [63:0] _T_7382 = _T_898 ? {{48'd0}, _T_6000} : _T_7381; // @[Valu.scala 195:32]
  wire [63:0] _T_7390 = _T_892 ? _T_7382 : _T_6026; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_lo_9 = _T_889 ? {{48'd0}, _T_6000} : _T_7390; // @[Valu.scala 193:11]
  wire [63:0] _T_7410 = _T_962 ? 64'hffffffffffffffff : {{48'd0}, _T_7206}; // @[Valu.scala 196:36]
  wire [63:0] _T_7411 = _T_956 ? {{48'd0}, _T_6029} : _T_7410; // @[Valu.scala 195:32]
  wire [63:0] _T_7419 = _T_950 ? _T_7411 : _T_6055; // @[Valu.scala 194:11]
  wire [63:0] hi_hi_hi_9 = _T_947 ? {{48'd0}, _T_6029} : _T_7419; // @[Valu.scala 193:11]
  wire [511:0] _T_7421 = {hi_hi_hi_9,hi_hi_lo_9,hi_lo_hi_9,hi_lo_lo_9,lo_hi_hi_9,lo_hi_lo_9,lo_lo_hi_9,lo_lo_lo_9}; // @[Valu.scala 201:24]
  wire [511:0] _GEN_5 = _T_538 ? $signed(_T_7421) : $signed(512'sh0); // @[Valu.scala 294:53 Valu.scala 296:33 Valu.scala 218:13]
  wire [1023:0] _GEN_6 = _T_1007 ? $signed(_T_7184) : $signed({{512{_GEN_5[511]}},_GEN_5}); // @[Valu.scala 291:49 Valu.scala 293:33]
  wire [1023:0] _GEN_7 = _T_301 ? $signed({{768{_T_6715[255]}},_T_6715}) : $signed(_GEN_6); // @[Valu.scala 288:49 Valu.scala 290:33]
  wire [1023:0] _GEN_8 = _T_180 ? $signed({{896{_T_6594[127]}},_T_6594}) : $signed(_GEN_7); // @[Valu.scala 284:43 Valu.scala 286:33]
  wire [1023:0] _GEN_9 = _T_5635 ? $signed({{896{_T_6531[127]}},_T_6531}) : $signed(_GEN_8); // @[Valu.scala 281:37 Valu.scala 282:29]
  wire [63:0] _T_7444 = _T_198 ? 64'hffffffffffffffff : _T_212; // @[Valu.scala 208:36]
  wire [63:0] _T_7445 = _T_192 ? _T_5642 : _T_7444; // @[Valu.scala 207:32]
  wire [63:0] _T_7453 = _T_186 ? _T_7445 : 64'hffffffffffffffff; // @[Valu.scala 206:11]
  wire [63:0] lo_26 = _T_183 ? _T_5642 : _T_7453; // @[Valu.scala 205:11]
  wire [63:0] _T_7473 = _T_256 ? 64'hffffffffffffffff : _T_270; // @[Valu.scala 208:36]
  wire [63:0] _T_7474 = _T_250 ? _T_5671 : _T_7473; // @[Valu.scala 207:32]
  wire [63:0] _T_7482 = _T_244 ? _T_7474 : _T_5697; // @[Valu.scala 206:11]
  wire [63:0] hi_26 = _T_241 ? _T_5671 : _T_7482; // @[Valu.scala 205:11]
  wire [127:0] _T_7484 = {hi_26,lo_26}; // @[Valu.scala 213:24]
  wire [63:0] _T_7505 = _T_198 ? 64'hffffffffffffffff : {{32'd0}, _T_333}; // @[Valu.scala 208:36]
  wire [63:0] _T_7506 = _T_192 ? {{32'd0}, _T_5705} : _T_7505; // @[Valu.scala 207:32]
  wire [63:0] _T_7514 = _T_186 ? _T_7506 : 64'hffffffffffffffff; // @[Valu.scala 206:11]
  wire [63:0] lo_lo_15 = _T_183 ? {{32'd0}, _T_5705} : _T_7514; // @[Valu.scala 205:11]
  wire [63:0] _T_7534 = _T_256 ? 64'hffffffffffffffff : {{32'd0}, _T_391}; // @[Valu.scala 208:36]
  wire [63:0] _T_7535 = _T_250 ? {{32'd0}, _T_5734} : _T_7534; // @[Valu.scala 207:32]
  wire [63:0] _T_7543 = _T_244 ? _T_7535 : _T_5760; // @[Valu.scala 206:11]
  wire [63:0] lo_hi_15 = _T_241 ? {{32'd0}, _T_5734} : _T_7543; // @[Valu.scala 205:11]
  wire [63:0] _T_7563 = _T_435 ? 64'hffffffffffffffff : {{32'd0}, _T_449}; // @[Valu.scala 208:36]
  wire [63:0] _T_7564 = _T_429 ? {{32'd0}, _T_5763} : _T_7563; // @[Valu.scala 207:32]
  wire [63:0] _T_7572 = _T_423 ? _T_7564 : _T_5789; // @[Valu.scala 206:11]
  wire [63:0] hi_lo_15 = _T_420 ? {{32'd0}, _T_5763} : _T_7572; // @[Valu.scala 205:11]
  wire [63:0] _T_7592 = _T_493 ? 64'hffffffffffffffff : {{32'd0}, _T_507}; // @[Valu.scala 208:36]
  wire [63:0] _T_7593 = _T_487 ? {{32'd0}, _T_5792} : _T_7592; // @[Valu.scala 207:32]
  wire [63:0] _T_7601 = _T_481 ? _T_7593 : _T_5818; // @[Valu.scala 206:11]
  wire [63:0] hi_hi_15 = _T_478 ? {{32'd0}, _T_5792} : _T_7601; // @[Valu.scala 205:11]
  wire [255:0] _T_7603 = {hi_hi_15,hi_lo_15,lo_hi_15,lo_lo_15}; // @[Valu.scala 213:24]
  wire [63:0] _T_7624 = _T_198 ? 64'hffffffffffffffff : {{56'd0}, _T_1039}; // @[Valu.scala 208:36]
  wire [63:0] _T_7625 = _T_192 ? {{56'd0}, _T_6063} : _T_7624; // @[Valu.scala 207:32]
  wire [63:0] _T_7633 = _T_186 ? _T_7625 : 64'hffffffffffffffff; // @[Valu.scala 206:11]
  wire [63:0] lo_lo_lo_lo_5 = _T_183 ? {{56'd0}, _T_6063} : _T_7633; // @[Valu.scala 205:11]
  wire [63:0] _T_7653 = _T_256 ? 64'hffffffffffffffff : {{56'd0}, _T_1097}; // @[Valu.scala 208:36]
  wire [63:0] _T_7654 = _T_250 ? {{56'd0}, _T_6092} : _T_7653; // @[Valu.scala 207:32]
  wire [63:0] _T_7662 = _T_244 ? _T_7654 : _T_6118; // @[Valu.scala 206:11]
  wire [63:0] lo_lo_lo_hi_5 = _T_241 ? {{56'd0}, _T_6092} : _T_7662; // @[Valu.scala 205:11]
  wire [63:0] _T_7682 = _T_435 ? 64'hffffffffffffffff : {{56'd0}, _T_1155}; // @[Valu.scala 208:36]
  wire [63:0] _T_7683 = _T_429 ? {{56'd0}, _T_6121} : _T_7682; // @[Valu.scala 207:32]
  wire [63:0] _T_7691 = _T_423 ? _T_7683 : _T_6147; // @[Valu.scala 206:11]
  wire [63:0] lo_lo_hi_lo_5 = _T_420 ? {{56'd0}, _T_6121} : _T_7691; // @[Valu.scala 205:11]
  wire [63:0] _T_7711 = _T_493 ? 64'hffffffffffffffff : {{56'd0}, _T_1213}; // @[Valu.scala 208:36]
  wire [63:0] _T_7712 = _T_487 ? {{56'd0}, _T_6150} : _T_7711; // @[Valu.scala 207:32]
  wire [63:0] _T_7720 = _T_481 ? _T_7712 : _T_6176; // @[Valu.scala 206:11]
  wire [63:0] lo_lo_hi_hi_5 = _T_478 ? {{56'd0}, _T_6150} : _T_7720; // @[Valu.scala 205:11]
  wire [63:0] _T_7740 = _T_788 ? 64'hffffffffffffffff : {{56'd0}, _T_1271}; // @[Valu.scala 208:36]
  wire [63:0] _T_7741 = _T_782 ? {{56'd0}, _T_6179} : _T_7740; // @[Valu.scala 207:32]
  wire [63:0] _T_7749 = _T_776 ? _T_7741 : _T_6205; // @[Valu.scala 206:11]
  wire [63:0] lo_hi_lo_lo_5 = _T_773 ? {{56'd0}, _T_6179} : _T_7749; // @[Valu.scala 205:11]
  wire [63:0] _T_7769 = _T_846 ? 64'hffffffffffffffff : {{56'd0}, _T_1329}; // @[Valu.scala 208:36]
  wire [63:0] _T_7770 = _T_840 ? {{56'd0}, _T_6208} : _T_7769; // @[Valu.scala 207:32]
  wire [63:0] _T_7778 = _T_834 ? _T_7770 : _T_6234; // @[Valu.scala 206:11]
  wire [63:0] lo_hi_lo_hi_5 = _T_831 ? {{56'd0}, _T_6208} : _T_7778; // @[Valu.scala 205:11]
  wire [63:0] _T_7798 = _T_904 ? 64'hffffffffffffffff : {{56'd0}, _T_1387}; // @[Valu.scala 208:36]
  wire [63:0] _T_7799 = _T_898 ? {{56'd0}, _T_6237} : _T_7798; // @[Valu.scala 207:32]
  wire [63:0] _T_7807 = _T_892 ? _T_7799 : _T_6263; // @[Valu.scala 206:11]
  wire [63:0] lo_hi_hi_lo_5 = _T_889 ? {{56'd0}, _T_6237} : _T_7807; // @[Valu.scala 205:11]
  wire [63:0] _T_7827 = _T_962 ? 64'hffffffffffffffff : {{56'd0}, _T_1445}; // @[Valu.scala 208:36]
  wire [63:0] _T_7828 = _T_956 ? {{56'd0}, _T_6266} : _T_7827; // @[Valu.scala 207:32]
  wire [63:0] _T_7836 = _T_950 ? _T_7828 : _T_6292; // @[Valu.scala 206:11]
  wire [63:0] lo_hi_hi_hi_5 = _T_947 ? {{56'd0}, _T_6266} : _T_7836; // @[Valu.scala 205:11]
  wire [63:0] _T_7856 = _T_1489 ? 64'hffffffffffffffff : {{56'd0}, _T_1503}; // @[Valu.scala 208:36]
  wire [63:0] _T_7857 = _T_1483 ? {{56'd0}, _T_6295} : _T_7856; // @[Valu.scala 207:32]
  wire [63:0] _T_7865 = _T_1477 ? _T_7857 : _T_6321; // @[Valu.scala 206:11]
  wire [63:0] hi_lo_lo_lo_5 = _T_1474 ? {{56'd0}, _T_6295} : _T_7865; // @[Valu.scala 205:11]
  wire [63:0] _T_7885 = _T_1547 ? 64'hffffffffffffffff : {{56'd0}, _T_1561}; // @[Valu.scala 208:36]
  wire [63:0] _T_7886 = _T_1541 ? {{56'd0}, _T_6324} : _T_7885; // @[Valu.scala 207:32]
  wire [63:0] _T_7894 = _T_1535 ? _T_7886 : _T_6350; // @[Valu.scala 206:11]
  wire [63:0] hi_lo_lo_hi_5 = _T_1532 ? {{56'd0}, _T_6324} : _T_7894; // @[Valu.scala 205:11]
  wire [63:0] _T_7914 = _T_1605 ? 64'hffffffffffffffff : {{56'd0}, _T_1619}; // @[Valu.scala 208:36]
  wire [63:0] _T_7915 = _T_1599 ? {{56'd0}, _T_6353} : _T_7914; // @[Valu.scala 207:32]
  wire [63:0] _T_7923 = _T_1593 ? _T_7915 : _T_6379; // @[Valu.scala 206:11]
  wire [63:0] hi_lo_hi_lo_5 = _T_1590 ? {{56'd0}, _T_6353} : _T_7923; // @[Valu.scala 205:11]
  wire [63:0] _T_7943 = _T_1663 ? 64'hffffffffffffffff : {{56'd0}, _T_1677}; // @[Valu.scala 208:36]
  wire [63:0] _T_7944 = _T_1657 ? {{56'd0}, _T_6382} : _T_7943; // @[Valu.scala 207:32]
  wire [63:0] _T_7952 = _T_1651 ? _T_7944 : _T_6408; // @[Valu.scala 206:11]
  wire [63:0] hi_lo_hi_hi_5 = _T_1648 ? {{56'd0}, _T_6382} : _T_7952; // @[Valu.scala 205:11]
  wire [63:0] _T_7972 = _T_1721 ? 64'hffffffffffffffff : {{56'd0}, _T_1735}; // @[Valu.scala 208:36]
  wire [63:0] _T_7973 = _T_1715 ? {{56'd0}, _T_6411} : _T_7972; // @[Valu.scala 207:32]
  wire [63:0] _T_7981 = _T_1709 ? _T_7973 : _T_6437; // @[Valu.scala 206:11]
  wire [63:0] hi_hi_lo_lo_5 = _T_1706 ? {{56'd0}, _T_6411} : _T_7981; // @[Valu.scala 205:11]
  wire [63:0] _T_8001 = _T_1779 ? 64'hffffffffffffffff : {{56'd0}, _T_1793}; // @[Valu.scala 208:36]
  wire [63:0] _T_8002 = _T_1773 ? {{56'd0}, _T_6440} : _T_8001; // @[Valu.scala 207:32]
  wire [63:0] _T_8010 = _T_1767 ? _T_8002 : _T_6466; // @[Valu.scala 206:11]
  wire [63:0] hi_hi_lo_hi_5 = _T_1764 ? {{56'd0}, _T_6440} : _T_8010; // @[Valu.scala 205:11]
  wire [63:0] _T_8030 = _T_1837 ? 64'hffffffffffffffff : {{56'd0}, _T_1851}; // @[Valu.scala 208:36]
  wire [63:0] _T_8031 = _T_1831 ? {{56'd0}, _T_6469} : _T_8030; // @[Valu.scala 207:32]
  wire [63:0] _T_8039 = _T_1825 ? _T_8031 : _T_6495; // @[Valu.scala 206:11]
  wire [63:0] hi_hi_hi_lo_5 = _T_1822 ? {{56'd0}, _T_6469} : _T_8039; // @[Valu.scala 205:11]
  wire [63:0] _T_8059 = _T_1895 ? 64'hffffffffffffffff : {{56'd0}, _T_1909}; // @[Valu.scala 208:36]
  wire [63:0] _T_8060 = _T_1889 ? {{56'd0}, _T_6498} : _T_8059; // @[Valu.scala 207:32]
  wire [63:0] _T_8068 = _T_1883 ? _T_8060 : _T_6524; // @[Valu.scala 206:11]
  wire [63:0] hi_hi_hi_hi_5 = _T_1880 ? {{56'd0}, _T_6498} : _T_8068; // @[Valu.scala 205:11]
  wire [511:0] lo_28 = {lo_hi_hi_hi_5,lo_hi_hi_lo_5,lo_hi_lo_hi_5,lo_hi_lo_lo_5,lo_lo_hi_hi_5,lo_lo_hi_lo_5,
    lo_lo_lo_hi_5,lo_lo_lo_lo_5}; // @[Cat.scala 30:58]
  wire [1023:0] _T_8070 = {hi_hi_hi_hi_5,hi_hi_hi_lo_5,hi_hi_lo_hi_5,hi_hi_lo_lo_5,hi_lo_hi_hi_5,hi_lo_hi_lo_5,
    hi_lo_lo_hi_5,hi_lo_lo_lo_5,lo_28}; // @[Valu.scala 213:24]
  wire [63:0] _T_8091 = _T_198 ? 64'hffffffffffffffff : {{48'd0}, _T_570}; // @[Valu.scala 208:36]
  wire [63:0] _T_8092 = _T_192 ? {{48'd0}, _T_5826} : _T_8091; // @[Valu.scala 207:32]
  wire [63:0] _T_8100 = _T_186 ? _T_8092 : 64'hffffffffffffffff; // @[Valu.scala 206:11]
  wire [63:0] lo_lo_lo_11 = _T_183 ? {{48'd0}, _T_5826} : _T_8100; // @[Valu.scala 205:11]
  wire [63:0] _T_8120 = _T_256 ? 64'hffffffffffffffff : {{48'd0}, _T_628}; // @[Valu.scala 208:36]
  wire [63:0] _T_8121 = _T_250 ? {{48'd0}, _T_5855} : _T_8120; // @[Valu.scala 207:32]
  wire [63:0] _T_8129 = _T_244 ? _T_8121 : _T_5881; // @[Valu.scala 206:11]
  wire [63:0] lo_lo_hi_11 = _T_241 ? {{48'd0}, _T_5855} : _T_8129; // @[Valu.scala 205:11]
  wire [63:0] _T_8149 = _T_435 ? 64'hffffffffffffffff : {{48'd0}, _T_686}; // @[Valu.scala 208:36]
  wire [63:0] _T_8150 = _T_429 ? {{48'd0}, _T_5884} : _T_8149; // @[Valu.scala 207:32]
  wire [63:0] _T_8158 = _T_423 ? _T_8150 : _T_5910; // @[Valu.scala 206:11]
  wire [63:0] lo_hi_lo_11 = _T_420 ? {{48'd0}, _T_5884} : _T_8158; // @[Valu.scala 205:11]
  wire [63:0] _T_8178 = _T_493 ? 64'hffffffffffffffff : {{48'd0}, _T_744}; // @[Valu.scala 208:36]
  wire [63:0] _T_8179 = _T_487 ? {{48'd0}, _T_5913} : _T_8178; // @[Valu.scala 207:32]
  wire [63:0] _T_8187 = _T_481 ? _T_8179 : _T_5939; // @[Valu.scala 206:11]
  wire [63:0] lo_hi_hi_11 = _T_478 ? {{48'd0}, _T_5913} : _T_8187; // @[Valu.scala 205:11]
  wire [63:0] _T_8207 = _T_788 ? 64'hffffffffffffffff : {{48'd0}, _T_802}; // @[Valu.scala 208:36]
  wire [63:0] _T_8208 = _T_782 ? {{48'd0}, _T_5942} : _T_8207; // @[Valu.scala 207:32]
  wire [63:0] _T_8216 = _T_776 ? _T_8208 : _T_5968; // @[Valu.scala 206:11]
  wire [63:0] hi_lo_lo_11 = _T_773 ? {{48'd0}, _T_5942} : _T_8216; // @[Valu.scala 205:11]
  wire [63:0] _T_8236 = _T_846 ? 64'hffffffffffffffff : {{48'd0}, _T_860}; // @[Valu.scala 208:36]
  wire [63:0] _T_8237 = _T_840 ? {{48'd0}, _T_5971} : _T_8236; // @[Valu.scala 207:32]
  wire [63:0] _T_8245 = _T_834 ? _T_8237 : _T_5997; // @[Valu.scala 206:11]
  wire [63:0] hi_lo_hi_11 = _T_831 ? {{48'd0}, _T_5971} : _T_8245; // @[Valu.scala 205:11]
  wire [63:0] _T_8265 = _T_904 ? 64'hffffffffffffffff : {{48'd0}, _T_918}; // @[Valu.scala 208:36]
  wire [63:0] _T_8266 = _T_898 ? {{48'd0}, _T_6000} : _T_8265; // @[Valu.scala 207:32]
  wire [63:0] _T_8274 = _T_892 ? _T_8266 : _T_6026; // @[Valu.scala 206:11]
  wire [63:0] hi_hi_lo_11 = _T_889 ? {{48'd0}, _T_6000} : _T_8274; // @[Valu.scala 205:11]
  wire [63:0] _T_8294 = _T_962 ? 64'hffffffffffffffff : {{48'd0}, _T_976}; // @[Valu.scala 208:36]
  wire [63:0] _T_8295 = _T_956 ? {{48'd0}, _T_6029} : _T_8294; // @[Valu.scala 207:32]
  wire [63:0] _T_8303 = _T_950 ? _T_8295 : _T_6055; // @[Valu.scala 206:11]
  wire [63:0] hi_hi_hi_11 = _T_947 ? {{48'd0}, _T_6029} : _T_8303; // @[Valu.scala 205:11]
  wire [511:0] _T_8305 = {hi_hi_hi_11,hi_hi_lo_11,hi_lo_hi_11,hi_lo_lo_11,lo_hi_hi_11,lo_hi_lo_11,lo_lo_hi_11,
    lo_lo_lo_11}; // @[Valu.scala 213:24]
  wire [511:0] _GEN_10 = _T_538 ? $signed(_T_8305) : $signed(512'sh0); // @[Valu.scala 315:47 Valu.scala 316:23 Valu.scala 218:13]
  wire [1023:0] _GEN_11 = _T_1007 ? $signed(_T_8070) : $signed({{512{_GEN_10[511]}},_GEN_10}); // @[Valu.scala 313:41 Valu.scala 314:41]
  wire [1023:0] _GEN_12 = _T_301 ? $signed({{768{_T_7603[255]}},_T_7603}) : $signed(_GEN_11); // @[Valu.scala 310:41 Valu.scala 311:22]
  wire [1023:0] _GEN_13 = _T_180 ? $signed({{896{_T_7484[127]}},_T_7484}) : $signed(_GEN_12); // @[Valu.scala 307:39 Valu.scala 308:21]
  wire [1023:0] _GEN_14 = _T_5635 ? $signed({{896{io_vs1[127]}},io_vs1}) : $signed(_GEN_13); // @[Valu.scala 304:37 Valu.scala 305:29]
  wire [1023:0] _GEN_15 = _T_5634 ? $signed(_GEN_14) : $signed(1024'sh0); // @[Valu.scala 303:38 Valu.scala 218:13]
  wire [1023:0] _GEN_16 = io_aluc == 9'hbb ? $signed(_GEN_9) : $signed(_GEN_15); // @[Valu.scala 280:38]
  wire [1023:0] _GEN_17 = io_aluc == 9'hbc ? $signed(_GEN_4) : $signed(_GEN_16); // @[Valu.scala 259:37]
  wire [1023:0] _GEN_18 = _T_538 & _T_3414 ? $signed({{896{_T_5633[127]}},_T_5633}) : $signed(_GEN_17); // @[Valu.scala 254:70 Valu.scala 256:25]
  wire [1023:0] _GEN_19 = _T_1007 & _T_3414 ? $signed({{896{_T_5041[127]}},_T_5041}) : $signed(_GEN_18); // @[Valu.scala 251:69 Valu.scala 253:25]
  wire [1023:0] _GEN_20 = _T_301 & _T_3414 ? $signed({{896{_T_3865[127]}},_T_3865}) : $signed(_GEN_19); // @[Valu.scala 248:69 Valu.scala 250:25]
  wire [1023:0] _GEN_21 = _T_180 & io_aluc[2:0] == 3'h4 ? $signed({{896{_T_3565[127]}},_T_3565}) : $signed(_GEN_20); // @[Valu.scala 245:68 Valu.scala 247:25]
  wire [1023:0] _GEN_22 = _T_538 & _T_1942 ? $signed({{896{_T_3411[127]}},_T_3411}) : $signed(_GEN_21); // @[Valu.scala 240:70 Valu.scala 242:25]
  wire [1023:0] _GEN_23 = _T_1007 & _T_1942 ? $signed({{896{_T_3019[127]}},_T_3019}) : $signed(_GEN_22); // @[Valu.scala 237:69 Valu.scala 239:25]
  wire [1023:0] _GEN_24 = _T_301 & _T_1942 ? $signed({{896{_T_2243[127]}},_T_2243}) : $signed(_GEN_23); // @[Valu.scala 234:69 Valu.scala 236:25]
  wire [1023:0] _GEN_25 = _T_180 & io_aluc[2:0] == 3'h3 ? $signed({{896{_T_2043[127]}},_T_2043}) : $signed(_GEN_24); // @[Valu.scala 231:69 Valu.scala 233:21]
  wire [1023:0] _GEN_26 = io_sew == 3'h0 & _T_181 ? $signed({{896{_T_1939[127]}},_T_1939}) : $signed(_GEN_25); // @[Valu.scala 227:65 Valu.scala 228:25]
  wire [1023:0] _GEN_27 = io_sew == 3'h1 & _T_181 ? $signed({{896{_T_1006[127]}},_T_1006}) : $signed(_GEN_26); // @[Valu.scala 225:61 Valu.scala 226:25]
  wire [1023:0] _GEN_28 = io_sew == 3'h2 & _T_181 ? $signed({{896{_T_537[127]}},_T_537}) : $signed(_GEN_27); // @[Valu.scala 223:62 Valu.scala 224:25]
  wire [1023:0] _GEN_29 = io_sew == 3'h3 & io_aluc == 9'h0 ? $signed({{896{_T_300[127]}},_T_300}) : $signed(_GEN_28); // @[Valu.scala 221:56 Valu.scala 222:25]
  assign io_v_output = _GEN_29[127:0];
endmodule
module configure(
  input  [31:0] io_zimm,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rd,
  input  [31:0] io_rs1_readdata,
  input  [31:0] io_current_vl,
  output [31:0] io_lmul,
  output [31:0] io_vl,
  output [4:0]  io_rd_out,
  output [31:0] io_avl_o,
  output [31:0] io_valmax_o
);
  wire [2:0] vlmul = io_zimm[2:0]; // @[Vconfigure.scala 21:24]
  wire [2:0] vsew = io_zimm[5:3]; // @[Vconfigure.scala 22:22]
  wire  _T_1 = vsew == 3'h0; // @[Vconfigure.scala 32:20]
  wire  _T_2 = vsew == 3'h1; // @[Vconfigure.scala 34:25]
  wire  _T_3 = vsew == 3'h2; // @[Vconfigure.scala 36:25]
  wire [1:0] _GEN_1 = vsew == 3'h1 ? $signed(2'sh1) : $signed(2'sh0); // @[Vconfigure.scala 34:38 Vconfigure.scala 35:20]
  wire [2:0] _GEN_2 = vsew == 3'h0 ? $signed(3'sh2) : $signed({{1{_GEN_1[1]}},_GEN_1}); // @[Vconfigure.scala 32:33 Vconfigure.scala 33:20]
  wire [1:0] _GEN_3 = _T_3 ? $signed(2'sh1) : $signed(2'sh0); // @[Vconfigure.scala 49:38 Vconfigure.scala 50:20]
  wire [2:0] _GEN_4 = _T_2 ? $signed(3'sh2) : $signed({{1{_GEN_3[1]}},_GEN_3}); // @[Vconfigure.scala 47:38 Vconfigure.scala 48:20]
  wire [3:0] _GEN_5 = _T_1 ? $signed(4'sh4) : $signed({{1{_GEN_4[2]}},_GEN_4}); // @[Vconfigure.scala 45:33 Vconfigure.scala 46:20]
  wire  _T_13 = vsew == 3'h3; // @[Vconfigure.scala 63:25]
  wire [1:0] _GEN_6 = vsew == 3'h3 ? $signed(2'sh1) : $signed(2'sh0); // @[Vconfigure.scala 63:37 Vconfigure.scala 64:20]
  wire [2:0] _GEN_7 = _T_3 ? $signed(3'sh2) : $signed({{1{_GEN_6[1]}},_GEN_6}); // @[Vconfigure.scala 61:38 Vconfigure.scala 62:20]
  wire [3:0] _GEN_8 = _T_2 ? $signed(4'sh4) : $signed({{1{_GEN_7[2]}},_GEN_7}); // @[Vconfigure.scala 59:38 Vconfigure.scala 60:20]
  wire [4:0] _GEN_9 = _T_1 ? $signed(5'sh8) : $signed({{1{_GEN_8[3]}},_GEN_8}); // @[Vconfigure.scala 57:33 Vconfigure.scala 58:20]
  wire  _T_15 = ~vlmul[1]; // @[Vconfigure.scala 67:18]
  wire  _T_17 = ~vlmul[0]; // @[Vconfigure.scala 67:31]
  wire  lo_lo = ~vlmul[1] & ~vlmul[0] | vlmul[2]; // @[Vconfigure.scala 67:41]
  wire  _T_21 = ~vlmul[2]; // @[Vconfigure.scala 68:18]
  wire  lo_hi = ~vlmul[2] & _T_15 & vlmul[0]; // @[Vconfigure.scala 68:41]
  wire  _T_29 = _T_21 & vlmul[1]; // @[Vconfigure.scala 69:28]
  wire  hi_lo = _T_21 & vlmul[1] & _T_17; // @[Vconfigure.scala 69:40]
  wire  hi_hi = _T_29 & vlmul[0]; // @[Vconfigure.scala 70:40]
  wire [3:0] _T_37 = {hi_hi,hi_lo,lo_hi,lo_lo}; // @[Cat.scala 30:58]
  wire [35:0] _T_40 = {io_lmul,4'h0}; // @[Vconfigure.scala 74:44]
  wire [34:0] _T_43 = {io_lmul,3'h0}; // @[Vconfigure.scala 76:45]
  wire [33:0] _T_46 = {io_lmul,2'h0}; // @[Vconfigure.scala 78:45]
  wire [32:0] _T_49 = {io_lmul,1'h0}; // @[Vconfigure.scala 80:45]
  wire [32:0] _GEN_10 = _T_13 ? $signed(_T_49) : $signed(33'sh0); // @[Vconfigure.scala 79:37 Vconfigure.scala 80:19]
  wire [33:0] _GEN_11 = _T_3 ? $signed(_T_46) : $signed({{1{_GEN_10[32]}},_GEN_10}); // @[Vconfigure.scala 77:38 Vconfigure.scala 78:19]
  wire [34:0] _GEN_12 = _T_2 ? $signed(_T_43) : $signed({{1{_GEN_11[33]}},_GEN_11}); // @[Vconfigure.scala 75:38 Vconfigure.scala 76:19]
  wire [35:0] _GEN_13 = _T_1 ? $signed(_T_40) : $signed({{1{_GEN_12[34]}},_GEN_12}); // @[Vconfigure.scala 73:32 Vconfigure.scala 74:18]
  wire [35:0] _GEN_14 = vlmul == 3'h7 ? $signed({{31{_GEN_9[4]}},_GEN_9}) : $signed(_GEN_13); // @[Vconfigure.scala 55:35]
  wire [3:0] _GEN_15 = vlmul == 3'h7 ? 4'h1 : _T_37; // @[Vconfigure.scala 55:35 Vconfigure.scala 25:13 Vconfigure.scala 71:17]
  wire [35:0] _GEN_16 = vlmul == 3'h6 ? $signed({{32{_GEN_5[3]}},_GEN_5}) : $signed(_GEN_14); // @[Vconfigure.scala 43:35]
  wire [3:0] _GEN_17 = vlmul == 3'h6 ? 4'h1 : _GEN_15; // @[Vconfigure.scala 43:35 Vconfigure.scala 25:13]
  wire [35:0] valmax = vlmul == 3'h5 ? $signed({{33{_GEN_2[2]}},_GEN_2}) : $signed(_GEN_16); // @[Vconfigure.scala 30:30]
  wire [3:0] _GEN_19 = vlmul == 3'h5 ? 4'h1 : _GEN_17; // @[Vconfigure.scala 30:30 Vconfigure.scala 25:13]
  wire  _T_52 = io_rs1 == 5'h0; // @[Vconfigure.scala 85:40]
  wire [31:0] _T_57 = _T_52 & io_rd == 5'h0 ? $signed(io_current_vl) : $signed(32'sh0); // @[Vconfigure.scala 86:8]
  wire [35:0] _T_58 = io_rd != 5'h0 & io_rs1 == 5'h0 ? $signed(valmax) : $signed({{4{_T_57[31]}},_T_57}); // @[Vconfigure.scala 85:8]
  wire [35:0] avl = io_rs1 != 5'h0 ? $signed({{4{io_rs1_readdata[31]}},io_rs1_readdata}) : $signed(_T_58); // @[Vconfigure.scala 84:10]
  wire [35:0] _GEN_20 = $signed(avl) <= $signed(valmax) ? $signed(avl) : $signed(valmax); // @[Vconfigure.scala 88:25 Vconfigure.scala 89:14 Vconfigure.scala 91:14]
  assign io_lmul = {{28'd0}, _GEN_19}; // @[Vconfigure.scala 30:30 Vconfigure.scala 25:13]
  assign io_vl = _GEN_20[31:0];
  assign io_rd_out = io_rd; // @[Vconfigure.scala 94:10]
  assign io_avl_o = avl[31:0]; // @[Vconfigure.scala 96:10]
  assign io_valmax_o = valmax[31:0]; // @[Vconfigure.scala 95:13]
endmodule
module MDU(
  input         clock,
  input         reset,
  input  [31:0] io_src_a,
  input  [31:0] io_src_b,
  input  [4:0]  io_op,
  input         io_valid,
  output        io_ready,
  output        io_output_valid,
  output [31:0] io_output_bits
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  _T = io_op == 5'h0; // @[MDU.scala 34:16]
  wire  _T_1 = io_op == 5'h3; // @[MDU.scala 34:33]
  wire  _T_2 = io_op == 5'h0 | io_op == 5'h3; // @[MDU.scala 34:24]
  wire [63:0] _T_3 = io_src_a * io_src_b; // @[MDU.scala 34:58]
  wire  _T_4 = io_op == 5'h2; // @[MDU.scala 35:16]
  wire [32:0] _T_6 = {1'b0,$signed(io_src_b)}; // @[MDU.scala 35:66]
  wire [64:0] _T_7 = $signed(io_src_a) * $signed(_T_6); // @[MDU.scala 35:66]
  wire [63:0] _T_10 = _T_7[63:0]; // @[MDU.scala 35:78]
  wire  _T_11 = io_op == 5'h1; // @[MDU.scala 36:16]
  wire [63:0] _T_15 = $signed(io_src_a) * $signed(io_src_b); // @[MDU.scala 36:85]
  wire [63:0] _T_16 = _T_11 ? _T_15 : 64'h0; // @[Mux.scala 98:16]
  wire [63:0] _T_17 = _T_4 ? _T_10 : _T_16; // @[Mux.scala 98:16]
  wire [63:0] result = _T_2 ? _T_3 : _T_17; // @[Mux.scala 98:16]
  reg  r_ready; // @[MDU.scala 41:29]
  reg [5:0] r_counter; // @[MDU.scala 42:29]
  reg [31:0] r_dividend; // @[MDU.scala 43:29]
  reg [31:0] r_quotient; // @[MDU.scala 44:29]
  wire  _T_19 = io_op == 5'h5; // @[MDU.scala 48:39]
  wire  _T_20 = io_op == 5'h7; // @[MDU.scala 48:57]
  wire  is_div_rem_u = io_op == 5'h5 | io_op == 5'h7; // @[MDU.scala 48:48]
  wire  _T_22 = io_op == 5'h4; // @[MDU.scala 49:39]
  wire  _T_23 = io_op == 5'h6; // @[MDU.scala 49:56]
  wire  is_div_rem_s = io_op == 5'h4 | io_op == 5'h6; // @[MDU.scala 49:47]
  wire [31:0] _T_29 = 32'h0 - io_src_a; // @[MDU.scala 51:59]
  wire [31:0] _T_30 = is_div_rem_s & io_src_a[31] ? _T_29 : io_src_a; // @[MDU.scala 51:28]
  wire [31:0] _T_34 = 32'h0 - io_src_b; // @[MDU.scala 52:59]
  wire [31:0] _T_35 = is_div_rem_s & io_src_b[31] ? _T_34 : io_src_b; // @[MDU.scala 52:28]
  wire [5:0] _T_39 = r_counter - 6'h1; // @[MDU.scala 59:52]
  wire [94:0] _GEN_26 = {{63'd0}, _T_35}; // @[MDU.scala 59:40]
  wire [94:0] _T_40 = _GEN_26 << _T_39; // @[MDU.scala 59:40]
  wire [94:0] _GEN_27 = {{63'd0}, r_dividend}; // @[MDU.scala 59:29]
  wire [94:0] _T_46 = _GEN_27 - _T_40; // @[MDU.scala 60:45]
  wire [63:0] _T_49 = 64'h1 << _T_39; // @[MDU.scala 61:51]
  wire [63:0] _GEN_30 = {{32'd0}, r_quotient}; // @[MDU.scala 61:45]
  wire [63:0] _T_51 = _GEN_30 + _T_49; // @[MDU.scala 61:45]
  wire [94:0] _GEN_0 = _GEN_27 >= _T_40 ? _T_46 : {{63'd0}, r_dividend}; // @[MDU.scala 59:59 MDU.scala 60:31 MDU.scala 43:29]
  wire [63:0] _GEN_1 = _GEN_27 >= _T_40 ? _T_51 : {{32'd0}, r_quotient}; // @[MDU.scala 59:59 MDU.scala 61:31 MDU.scala 44:29]
  wire [94:0] _GEN_3 = r_counter != 6'h0 ? _GEN_0 : {{63'd0}, r_dividend}; // @[MDU.scala 58:38 MDU.scala 43:29]
  wire [63:0] _GEN_4 = r_counter != 6'h0 ? _GEN_1 : {{32'd0}, r_quotient}; // @[MDU.scala 58:38 MDU.scala 44:29]
  wire  _GEN_5 = r_counter != 6'h0 ? r_counter == 6'h1 : r_ready; // @[MDU.scala 58:38 MDU.scala 66:24 MDU.scala 41:29]
  wire  _GEN_7 = r_counter != 6'h0 ? 1'h0 : 1'h1; // @[MDU.scala 58:38 MDU.scala 46:21 MDU.scala 68:29]
  wire  _GEN_8 = io_valid ? 1'h0 : _GEN_5; // @[MDU.scala 53:32 MDU.scala 54:24]
  wire [94:0] _GEN_10 = io_valid ? {{63'd0}, _T_30} : _GEN_3; // @[MDU.scala 53:32 MDU.scala 56:24]
  wire [63:0] _GEN_11 = io_valid ? 64'h0 : _GEN_4; // @[MDU.scala 53:32 MDU.scala 57:24]
  wire  _GEN_12 = io_valid ? 1'h0 : _GEN_7; // @[MDU.scala 53:32 MDU.scala 46:21]
  wire  _GEN_13 = is_div_rem_s | is_div_rem_u ? _GEN_8 : r_ready; // @[MDU.scala 50:39 MDU.scala 41:29]
  wire [94:0] _GEN_15 = is_div_rem_s | is_div_rem_u ? _GEN_10 : {{63'd0}, r_dividend}; // @[MDU.scala 50:39 MDU.scala 43:29]
  wire [63:0] _GEN_16 = is_div_rem_s | is_div_rem_u ? _GEN_11 : {{32'd0}, r_quotient}; // @[MDU.scala 50:39 MDU.scala 44:29]
  wire  _GEN_17 = (is_div_rem_s | is_div_rem_u) & _GEN_12; // @[MDU.scala 50:39 MDU.scala 46:21]
  wire [31:0] _T_70 = 32'h0 - r_quotient; // @[MDU.scala 80:76]
  wire [31:0] _T_71 = io_src_a[31] != io_src_b[31] & |io_src_b ? _T_70 : r_quotient; // @[MDU.scala 80:30]
  wire [31:0] _T_76 = 32'h0 - r_dividend; // @[MDU.scala 84:44]
  wire [31:0] _T_77 = io_src_a[31] ? _T_76 : r_dividend; // @[MDU.scala 84:30]
  wire [31:0] _GEN_18 = _T_20 ? r_dividend : 32'h0; // @[MDU.scala 85:31 MDU.scala 86:24 MDU.scala 88:24]
  wire [31:0] _GEN_19 = _T_23 ? _T_77 : _GEN_18; // @[MDU.scala 83:30 MDU.scala 84:24]
  wire [31:0] _GEN_20 = _T_19 ? r_quotient : _GEN_19; // @[MDU.scala 81:31 MDU.scala 82:24]
  wire [31:0] _GEN_21 = _T_22 ? _T_71 : _GEN_20; // @[MDU.scala 79:30 MDU.scala 80:24]
  wire [31:0] _GEN_22 = _T_11 | _T_1 | _T_4 ? result[63:32] : _GEN_21; // @[MDU.scala 76:70 MDU.scala 77:24]
  wire  _GEN_23 = _T_11 | _T_1 | _T_4 | _GEN_17; // @[MDU.scala 76:70 MDU.scala 78:25]
  assign io_ready = r_ready; // @[MDU.scala 72:18]
  assign io_output_valid = _T | _GEN_23; // @[MDU.scala 73:24 MDU.scala 75:25]
  assign io_output_bits = _T ? result[31:0] : _GEN_22; // @[MDU.scala 73:24 MDU.scala 74:24]
  always @(posedge clock) begin
    r_ready <= reset | _GEN_13; // @[MDU.scala 41:29 MDU.scala 41:29]
    if (reset) begin // @[MDU.scala 42:29]
      r_counter <= 6'h20; // @[MDU.scala 42:29]
    end else if (is_div_rem_s | is_div_rem_u) begin // @[MDU.scala 50:39]
      if (io_valid) begin // @[MDU.scala 53:32]
        r_counter <= 6'h20; // @[MDU.scala 55:24]
      end else if (r_counter != 6'h0) begin // @[MDU.scala 58:38]
        r_counter <= _T_39; // @[MDU.scala 65:24]
      end
    end
    if (reset) begin // @[MDU.scala 43:29]
      r_dividend <= 32'h0; // @[MDU.scala 43:29]
    end else begin
      r_dividend <= _GEN_15[31:0];
    end
    if (reset) begin // @[MDU.scala 44:29]
      r_quotient <= 32'h0; // @[MDU.scala 44:29]
    end else begin
      r_quotient <= _GEN_16[31:0];
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  r_ready = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  r_counter = _RAND_1[5:0];
  _RAND_2 = {1{`RANDOM}};
  r_dividend = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  r_quotient = _RAND_3[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Execute(
  input          clock,
  input          reset,
  input  [31:0]  io_immediate,
  input  [31:0]  io_readData1,
  input  [31:0]  io_readData2,
  input  [31:0]  io_pcAddress,
  input  [6:0]   io_func7,
  input  [2:0]   io_func3,
  input  [31:0]  io_mem_result,
  input  [31:0]  io_wb_result,
  input          io_ex_mem_regWrite,
  input          io_mem_wb_regWrite,
  input  [31:0]  io_id_ex_ins,
  input  [31:0]  io_ex_mem_ins,
  input  [31:0]  io_mem_wb_ins,
  input          io_ctl_aluSrc,
  input  [1:0]   io_ctl_aluOp,
  input  [1:0]   io_ctl_aluSrc1,
  input  [5:0]   io_func6,
  input  [2:0]   io_v_ctl_aluop,
  input  [3:0]   io_v_ctl_exsel,
  input          io_v_ctl_regwrite,
  input          io_v_ctl_opBsel,
  input          io_v_ctl_v_load,
  input          io_v_ctl_v_ins,
  input          io_v_ctl_vset,
  input  [127:0] io_vs1_data,
  input  [127:0] io_vs2_data,
  input  [31:0]  io_vl,
  input  [31:0]  io_vstart,
  input  [127:0] io_vd_data,
  input          io_vma,
  input          io_vta,
  input          io_vm,
  input  [127:0] io_vs0,
  input  [4:0]   io_vd_addr,
  input  [2:0]   io_v_sew,
  input  [31:0]  io_zimm,
  input  [31:0]  io_v_addi_imm,
  input  [127:0] io_vec_mem_res,
  input  [127:0] io_vec_wb_res,
  input  [4:0]   io_fu_ex_reg_vd,
  input  [4:0]   io_fu_mem_reg_vd,
  input  [4:0]   io_fu_reg_vs1,
  input  [4:0]   io_fu_reg_vs2,
  input          io_fu_ex_reg_write,
  input          io_fu_mem_reg_write,
  output [127:0] io_vec_alu_res,
  output [31:0]  io_vec_vl,
  output [4:0]   io_vec_rd_out,
  output [31:0]  io_vec_avl_o,
  output [31:0]  io_vec_valmax_o,
  output [31:0]  io_writeData,
  output [31:0]  io_ALUresult,
  output         io_stall
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] alu_io_input1; // @[Execute.scala 70:19]
  wire [31:0] alu_io_input2; // @[Execute.scala 70:19]
  wire [3:0] alu_io_aluCtl; // @[Execute.scala 70:19]
  wire [31:0] alu_io_result; // @[Execute.scala 70:19]
  wire [1:0] aluCtl_io_aluOp; // @[Execute.scala 71:22]
  wire  aluCtl_io_f7; // @[Execute.scala 71:22]
  wire [2:0] aluCtl_io_f3; // @[Execute.scala 71:22]
  wire  aluCtl_io_aluSrc; // @[Execute.scala 71:22]
  wire [3:0] aluCtl_io_out; // @[Execute.scala 71:22]
  wire [4:0] ForwardingUnit_io_ex_reg_rd; // @[Execute.scala 72:18]
  wire [4:0] ForwardingUnit_io_mem_reg_rd; // @[Execute.scala 72:18]
  wire [4:0] ForwardingUnit_io_reg_rs1; // @[Execute.scala 72:18]
  wire [4:0] ForwardingUnit_io_reg_rs2; // @[Execute.scala 72:18]
  wire  ForwardingUnit_io_ex_regWrite; // @[Execute.scala 72:18]
  wire  ForwardingUnit_io_mem_regWrite; // @[Execute.scala 72:18]
  wire [4:0] ForwardingUnit_io_ex_reg_vd; // @[Execute.scala 72:18]
  wire [4:0] ForwardingUnit_io_mem_reg_vd; // @[Execute.scala 72:18]
  wire [4:0] ForwardingUnit_io_reg_vs1; // @[Execute.scala 72:18]
  wire [4:0] ForwardingUnit_io_reg_vs2; // @[Execute.scala 72:18]
  wire  ForwardingUnit_io_ex_reg_write; // @[Execute.scala 72:18]
  wire  ForwardingUnit_io_mem_reg_write; // @[Execute.scala 72:18]
  wire [1:0] ForwardingUnit_io_forwardA; // @[Execute.scala 72:18]
  wire [1:0] ForwardingUnit_io_forwardB; // @[Execute.scala 72:18]
  wire [2:0] Vec_aluCtl_io_func3; // @[Execute.scala 121:26]
  wire [2:0] Vec_aluCtl_io_aluOp; // @[Execute.scala 121:26]
  wire [5:0] Vec_aluCtl_io_func6; // @[Execute.scala 121:26]
  wire [8:0] Vec_aluCtl_io_aluc; // @[Execute.scala 121:26]
  wire [31:0] vec_alu_io_in_A; // @[Execute.scala 132:23]
  wire [31:0] vec_alu_io_in_B; // @[Execute.scala 132:23]
  wire [127:0] vec_alu_io_vs1; // @[Execute.scala 132:23]
  wire [127:0] vec_alu_io_vs2; // @[Execute.scala 132:23]
  wire [31:0] vec_alu_io_vl; // @[Execute.scala 132:23]
  wire [31:0] vec_alu_io_vstart; // @[Execute.scala 132:23]
  wire [127:0] vec_alu_io_vd; // @[Execute.scala 132:23]
  wire  vec_alu_io_vma; // @[Execute.scala 132:23]
  wire  vec_alu_io_vta; // @[Execute.scala 132:23]
  wire  vec_alu_io_vm; // @[Execute.scala 132:23]
  wire [127:0] vec_alu_io_vs0; // @[Execute.scala 132:23]
  wire [4:0] vec_alu_io_vd_addr; // @[Execute.scala 132:23]
  wire [8:0] vec_alu_io_aluc; // @[Execute.scala 132:23]
  wire [2:0] vec_alu_io_sew; // @[Execute.scala 132:23]
  wire  vec_alu_io_v_ins; // @[Execute.scala 132:23]
  wire [127:0] vec_alu_io_v_output; // @[Execute.scala 132:23]
  wire [31:0] vec_config_io_zimm; // @[Execute.scala 187:26]
  wire [4:0] vec_config_io_rs1; // @[Execute.scala 187:26]
  wire [4:0] vec_config_io_rd; // @[Execute.scala 187:26]
  wire [31:0] vec_config_io_rs1_readdata; // @[Execute.scala 187:26]
  wire [31:0] vec_config_io_current_vl; // @[Execute.scala 187:26]
  wire [31:0] vec_config_io_lmul; // @[Execute.scala 187:26]
  wire [31:0] vec_config_io_vl; // @[Execute.scala 187:26]
  wire [4:0] vec_config_io_rd_out; // @[Execute.scala 187:26]
  wire [31:0] vec_config_io_avl_o; // @[Execute.scala 187:26]
  wire [31:0] vec_config_io_valmax_o; // @[Execute.scala 187:26]
  wire  MDU_clock; // @[Execute.scala 218:22]
  wire  MDU_reset; // @[Execute.scala 218:22]
  wire [31:0] MDU_io_src_a; // @[Execute.scala 218:22]
  wire [31:0] MDU_io_src_b; // @[Execute.scala 218:22]
  wire [4:0] MDU_io_op; // @[Execute.scala 218:22]
  wire  MDU_io_valid; // @[Execute.scala 218:22]
  wire  MDU_io_ready; // @[Execute.scala 218:22]
  wire  MDU_io_output_valid; // @[Execute.scala 218:22]
  wire [31:0] MDU_io_output_bits; // @[Execute.scala 218:22]
  wire  _T_4 = ForwardingUnit_io_forwardA == 2'h0; // @[Execute.scala 93:20]
  wire  _T_5 = ForwardingUnit_io_forwardA == 2'h1; // @[Execute.scala 94:20]
  wire  _T_6 = ForwardingUnit_io_forwardA == 2'h2; // @[Execute.scala 95:20]
  wire [31:0] _T_7 = _T_6 ? io_wb_result : 32'h0; // @[Mux.scala 98:16]
  wire [31:0] _T_8 = _T_5 ? io_mem_result : _T_7; // @[Mux.scala 98:16]
  wire [31:0] inputMux1 = _T_4 ? io_readData1 : _T_8; // @[Mux.scala 98:16]
  wire  _T_9 = ForwardingUnit_io_forwardB == 2'h0; // @[Execute.scala 101:20]
  wire  _T_10 = ForwardingUnit_io_forwardB == 2'h1; // @[Execute.scala 102:20]
  wire  _T_11 = ForwardingUnit_io_forwardB == 2'h2; // @[Execute.scala 103:20]
  wire [31:0] _T_12 = _T_11 ? io_wb_result : 32'h0; // @[Mux.scala 98:16]
  wire [31:0] _T_13 = _T_10 ? io_mem_result : _T_12; // @[Mux.scala 98:16]
  wire [31:0] inputMux2 = _T_9 ? io_readData2 : _T_13; // @[Mux.scala 98:16]
  wire  _T_14 = io_ctl_aluSrc1 == 2'h1; // @[Execute.scala 110:23]
  wire  _T_15 = io_ctl_aluSrc1 == 2'h2; // @[Execute.scala 111:23]
  wire [31:0] _T_16 = _T_15 ? 32'h0 : inputMux1; // @[Mux.scala 98:16]
  wire [31:0] aluIn1 = _T_14 ? io_pcAddress : _T_16; // @[Mux.scala 98:16]
  wire [31:0] aluIn2 = io_ctl_aluSrc ? inputMux2 : io_immediate; // @[Execute.scala 114:19]
  wire [31:0] _GEN_0 = _T_6 ? $signed(io_wb_result) : $signed(io_readData1); // @[Execute.scala 138:34 Execute.scala 139:21 Execute.scala 141:21]
  wire [31:0] _GEN_1 = _T_5 ? $signed(io_mem_result) : $signed(_GEN_0); // @[Execute.scala 136:28 Execute.scala 137:21]
  wire [127:0] _GEN_2 = _T_6 ? $signed(io_vec_wb_res) : $signed(io_vs1_data); // @[Execute.scala 146:34 Execute.scala 147:20 Execute.scala 149:20]
  wire [31:0] _GEN_4 = _T_11 ? $signed(io_wb_result) : $signed(io_readData2); // @[Execute.scala 159:36 Execute.scala 160:23 Execute.scala 162:23]
  wire [31:0] _GEN_5 = _T_10 ? $signed(io_mem_result) : $signed(_GEN_4); // @[Execute.scala 157:30 Execute.scala 158:23]
  wire [31:0] _GEN_6 = io_v_ctl_exsel == 4'h4 & io_v_ctl_opBsel ? $signed(io_v_addi_imm) : $signed(_GEN_5); // @[Execute.scala 154:70 Execute.scala 155:21]
  wire [127:0] _GEN_8 = _T_11 ? $signed(io_vec_wb_res) : $signed(io_vs2_data); // @[Execute.scala 168:34 Execute.scala 169:20 Execute.scala 171:20]
  wire [10:0] _GEN_12 = io_v_ctl_vset ? io_id_ex_ins[30:20] : 11'h0; // @[Execute.scala 189:31 Execute.scala 190:24 Execute.scala 202:24]
  reg [31:0] REG; // @[Execute.scala 225:28]
  reg [31:0] REG_1; // @[Execute.scala 226:28]
  reg [2:0] REG_2; // @[Execute.scala 227:28]
  reg  REG_3; // @[Execute.scala 228:28]
  reg [5:0] REG_4; // @[Execute.scala 229:28]
  reg [5:0] REG_5; // @[Execute.scala 230:28]
  wire  _T_49 = io_func7 == 7'h1; // @[Execute.scala 232:19]
  wire  _T_57 = io_func7 == 7'h1 & (io_func3 == 3'h0 | io_func3 == 3'h1 | io_func3 == 3'h2 | io_func3 == 3'h3); // @[Execute.scala 232:27]
  wire  _T_68 = _T_49 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7); // @[Execute.scala 238:38]
  wire  _GEN_18 = _T_49 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7) | _T_57; // @[Execute.scala 238:120 Execute.scala 239:20]
  wire  _GEN_19 = _T_49 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7) | REG_3; // @[Execute.scala 238:120 Execute.scala 240:14 Execute.scala 228:28]
  wire [6:0] _GEN_23 = _T_49 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7) ?
    io_func7 : {{1'd0}, REG_4}; // @[Execute.scala 238:120 Execute.scala 244:14 Execute.scala 229:28]
  wire [5:0] _T_71 = REG_5 + 6'h1; // @[Execute.scala 257:28]
  wire  _GEN_25 = REG_5 < 6'h20 | _T_68; // @[Execute.scala 251:28 Execute.scala 252:18]
  wire  _GEN_30 = REG_5 < 6'h20 & _GEN_18; // @[Execute.scala 251:28 Execute.scala 259:22]
  wire  _GEN_31 = REG_5 < 6'h20 & _GEN_19; // @[Execute.scala 251:28 Execute.scala 260:22]
  wire [2:0] _GEN_35 = REG_3 ? REG_2 : io_func3; // @[Execute.scala 249:17 Execute.scala 221:18]
  wire [31:0] _T_75 = MDU_io_output_valid ? MDU_io_output_bits : 32'h0; // @[Execute.scala 269:26]
  wire [31:0] _GEN_39 = _T_49 & MDU_io_ready ? _T_75 : alu_io_result; // @[Execute.scala 271:49 Execute.scala 272:20 Execute.scala 274:29]
  ALU alu ( // @[Execute.scala 70:19]
    .io_input1(alu_io_input1),
    .io_input2(alu_io_input2),
    .io_aluCtl(alu_io_aluCtl),
    .io_result(alu_io_result)
  );
  AluControl aluCtl ( // @[Execute.scala 71:22]
    .io_aluOp(aluCtl_io_aluOp),
    .io_f7(aluCtl_io_f7),
    .io_f3(aluCtl_io_f3),
    .io_aluSrc(aluCtl_io_aluSrc),
    .io_out(aluCtl_io_out)
  );
  ForwardingUnit ForwardingUnit ( // @[Execute.scala 72:18]
    .io_ex_reg_rd(ForwardingUnit_io_ex_reg_rd),
    .io_mem_reg_rd(ForwardingUnit_io_mem_reg_rd),
    .io_reg_rs1(ForwardingUnit_io_reg_rs1),
    .io_reg_rs2(ForwardingUnit_io_reg_rs2),
    .io_ex_regWrite(ForwardingUnit_io_ex_regWrite),
    .io_mem_regWrite(ForwardingUnit_io_mem_regWrite),
    .io_ex_reg_vd(ForwardingUnit_io_ex_reg_vd),
    .io_mem_reg_vd(ForwardingUnit_io_mem_reg_vd),
    .io_reg_vs1(ForwardingUnit_io_reg_vs1),
    .io_reg_vs2(ForwardingUnit_io_reg_vs2),
    .io_ex_reg_write(ForwardingUnit_io_ex_reg_write),
    .io_mem_reg_write(ForwardingUnit_io_mem_reg_write),
    .io_forwardA(ForwardingUnit_io_forwardA),
    .io_forwardB(ForwardingUnit_io_forwardB)
  );
  Alu_Control Vec_aluCtl ( // @[Execute.scala 121:26]
    .io_func3(Vec_aluCtl_io_func3),
    .io_aluOp(Vec_aluCtl_io_aluOp),
    .io_func6(Vec_aluCtl_io_func6),
    .io_aluc(Vec_aluCtl_io_aluc)
  );
  ALU_ vec_alu ( // @[Execute.scala 132:23]
    .io_in_A(vec_alu_io_in_A),
    .io_in_B(vec_alu_io_in_B),
    .io_vs1(vec_alu_io_vs1),
    .io_vs2(vec_alu_io_vs2),
    .io_vl(vec_alu_io_vl),
    .io_vstart(vec_alu_io_vstart),
    .io_vd(vec_alu_io_vd),
    .io_vma(vec_alu_io_vma),
    .io_vta(vec_alu_io_vta),
    .io_vm(vec_alu_io_vm),
    .io_vs0(vec_alu_io_vs0),
    .io_vd_addr(vec_alu_io_vd_addr),
    .io_aluc(vec_alu_io_aluc),
    .io_sew(vec_alu_io_sew),
    .io_v_ins(vec_alu_io_v_ins),
    .io_v_output(vec_alu_io_v_output)
  );
  configure vec_config ( // @[Execute.scala 187:26]
    .io_zimm(vec_config_io_zimm),
    .io_rs1(vec_config_io_rs1),
    .io_rd(vec_config_io_rd),
    .io_rs1_readdata(vec_config_io_rs1_readdata),
    .io_current_vl(vec_config_io_current_vl),
    .io_lmul(vec_config_io_lmul),
    .io_vl(vec_config_io_vl),
    .io_rd_out(vec_config_io_rd_out),
    .io_avl_o(vec_config_io_avl_o),
    .io_valmax_o(vec_config_io_valmax_o)
  );
  MDU MDU ( // @[Execute.scala 218:22]
    .clock(MDU_clock),
    .reset(MDU_reset),
    .io_src_a(MDU_io_src_a),
    .io_src_b(MDU_io_src_b),
    .io_op(MDU_io_op),
    .io_valid(MDU_io_valid),
    .io_ready(MDU_io_ready),
    .io_output_valid(MDU_io_output_valid),
    .io_output_bits(MDU_io_output_bits)
  );
  assign io_vec_alu_res = vec_alu_io_v_output; // @[Execute.scala 184:18]
  assign io_vec_vl = vec_config_io_vl; // @[Execute.scala 209:13]
  assign io_vec_rd_out = vec_config_io_rd_out; // @[Execute.scala 210:17]
  assign io_vec_avl_o = vec_config_io_avl_o; // @[Execute.scala 211:16]
  assign io_vec_valmax_o = vec_config_io_valmax_o; // @[Execute.scala 212:19]
  assign io_writeData = _T_9 ? io_readData2 : _T_13; // @[Mux.scala 98:16]
  assign io_ALUresult = REG_3 & REG_4 == 6'h1 & MDU_io_ready ? _T_75 : _GEN_39; // @[Execute.scala 268:51 Execute.scala 269:20]
  assign io_stall = REG_3 ? _GEN_25 : _T_68; // @[Execute.scala 249:17]
  assign alu_io_input1 = _T_14 ? io_pcAddress : _T_16; // @[Mux.scala 98:16]
  assign alu_io_input2 = io_ctl_aluSrc ? inputMux2 : io_immediate; // @[Execute.scala 114:19]
  assign alu_io_aluCtl = aluCtl_io_out; // @[Execute.scala 129:17]
  assign aluCtl_io_aluOp = io_ctl_aluOp; // @[Execute.scala 118:19]
  assign aluCtl_io_f7 = io_func7[5]; // @[Execute.scala 117:27]
  assign aluCtl_io_f3 = io_func3; // @[Execute.scala 116:16]
  assign aluCtl_io_aluSrc = io_ctl_aluSrc; // @[Execute.scala 119:20]
  assign ForwardingUnit_io_ex_reg_rd = io_ex_mem_ins[11:7]; // @[Execute.scala 78:32]
  assign ForwardingUnit_io_mem_reg_rd = io_mem_wb_ins[11:7]; // @[Execute.scala 79:33]
  assign ForwardingUnit_io_reg_rs1 = io_id_ex_ins[19:15]; // @[Execute.scala 80:29]
  assign ForwardingUnit_io_reg_rs2 = io_id_ex_ins[24:20]; // @[Execute.scala 81:29]
  assign ForwardingUnit_io_ex_regWrite = io_ex_mem_regWrite; // @[Execute.scala 76:18]
  assign ForwardingUnit_io_mem_regWrite = io_mem_wb_regWrite; // @[Execute.scala 77:19]
  assign ForwardingUnit_io_ex_reg_vd = io_fu_ex_reg_vd; // @[Execute.scala 83:16]
  assign ForwardingUnit_io_mem_reg_vd = io_fu_mem_reg_vd; // @[Execute.scala 84:17]
  assign ForwardingUnit_io_reg_vs1 = io_fu_reg_vs1; // @[Execute.scala 85:14]
  assign ForwardingUnit_io_reg_vs2 = io_fu_reg_vs2; // @[Execute.scala 86:14]
  assign ForwardingUnit_io_ex_reg_write = io_fu_ex_reg_write; // @[Execute.scala 87:19]
  assign ForwardingUnit_io_mem_reg_write = io_fu_mem_reg_write; // @[Execute.scala 88:20]
  assign Vec_aluCtl_io_func3 = io_func3; // @[Execute.scala 123:23]
  assign Vec_aluCtl_io_aluOp = io_v_ctl_aluop; // @[Execute.scala 125:23]
  assign Vec_aluCtl_io_func6 = io_func6; // @[Execute.scala 124:23]
  assign vec_alu_io_in_A = _T_5 ? $signed(io_mem_result) : $signed(_GEN_0); // @[Execute.scala 136:28 Execute.scala 137:21]
  assign vec_alu_io_in_B = io_v_ctl_exsel == 4'h3 & io_v_ctl_opBsel ? $signed(io_zimm) : $signed(_GEN_6); // @[Execute.scala 152:64 Execute.scala 153:21]
  assign vec_alu_io_vs1 = _T_5 ? $signed(io_vec_mem_res) : $signed(_GEN_2); // @[Execute.scala 144:28 Execute.scala 145:20]
  assign vec_alu_io_vs2 = _T_10 ? $signed(io_vec_mem_res) : $signed(_GEN_8); // @[Execute.scala 166:28 Execute.scala 167:20]
  assign vec_alu_io_vl = io_vl; // @[Execute.scala 177:26]
  assign vec_alu_io_vstart = io_vstart; // @[Execute.scala 183:34]
  assign vec_alu_io_vd = io_vd_data; // @[Execute.scala 181:17]
  assign vec_alu_io_vma = io_vma; // @[Execute.scala 179:18]
  assign vec_alu_io_vta = io_vta; // @[Execute.scala 178:18]
  assign vec_alu_io_vm = io_vm; // @[Execute.scala 180:17]
  assign vec_alu_io_vs0 = io_vs0; // @[Execute.scala 182:18]
  assign vec_alu_io_vd_addr = io_vd_addr; // @[Execute.scala 174:22]
  assign vec_alu_io_aluc = Vec_aluCtl_io_aluc; // @[Execute.scala 173:19]
  assign vec_alu_io_sew = io_v_sew; // @[Execute.scala 175:18]
  assign vec_alu_io_v_ins = io_v_ctl_v_ins; // @[Execute.scala 176:20]
  assign vec_config_io_zimm = {{21'd0}, _GEN_12}; // @[Execute.scala 189:31 Execute.scala 190:24 Execute.scala 202:24]
  assign vec_config_io_rs1 = io_v_ctl_vset ? io_id_ex_ins[19:15] : 5'h0; // @[Execute.scala 189:31 Execute.scala 191:23 Execute.scala 203:23]
  assign vec_config_io_rd = io_v_ctl_vset ? io_id_ex_ins[11:7] : 5'h0; // @[Execute.scala 189:31 Execute.scala 192:22 Execute.scala 204:22]
  assign vec_config_io_rs1_readdata = io_v_ctl_vset ? $signed(_GEN_1) : $signed(32'sh0); // @[Execute.scala 189:31 Execute.scala 205:32]
  assign vec_config_io_current_vl = io_v_ctl_vset ? $signed(io_vl) : $signed(32'sh0); // @[Execute.scala 189:31 Execute.scala 200:30 Execute.scala 206:30]
  assign MDU_clock = clock;
  assign MDU_reset = reset;
  assign MDU_io_src_a = REG_3 ? REG : aluIn1; // @[Execute.scala 249:17 Execute.scala 219:18]
  assign MDU_io_src_b = REG_3 ? REG_1 : aluIn2; // @[Execute.scala 249:17 Execute.scala 220:18]
  assign MDU_io_op = {{2'd0}, _GEN_35}; // @[Execute.scala 249:17 Execute.scala 221:18]
  assign MDU_io_valid = REG_3 ? _GEN_30 : _GEN_18; // @[Execute.scala 249:17]
  always @(posedge clock) begin
    if (reset) begin // @[Execute.scala 225:28]
      REG <= 32'h0; // @[Execute.scala 225:28]
    end else if (_T_49 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7)) begin // @[Execute.scala 238:120]
      if (_T_14) begin // @[Mux.scala 98:16]
        REG <= io_pcAddress;
      end else if (_T_15) begin // @[Mux.scala 98:16]
        REG <= 32'h0;
      end else begin
        REG <= inputMux1;
      end
    end
    if (reset) begin // @[Execute.scala 226:28]
      REG_1 <= 32'h0; // @[Execute.scala 226:28]
    end else if (_T_49 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7)) begin // @[Execute.scala 238:120]
      if (io_ctl_aluSrc) begin // @[Execute.scala 114:19]
        if (_T_9) begin // @[Mux.scala 98:16]
          REG_1 <= io_readData2;
        end else begin
          REG_1 <= _T_13;
        end
      end else begin
        REG_1 <= io_immediate;
      end
    end
    if (reset) begin // @[Execute.scala 227:28]
      REG_2 <= 3'h0; // @[Execute.scala 227:28]
    end else if (_T_49 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7)) begin // @[Execute.scala 238:120]
      REG_2 <= io_func3; // @[Execute.scala 243:14]
    end
    if (reset) begin // @[Execute.scala 228:28]
      REG_3 <= 1'h0; // @[Execute.scala 228:28]
    end else if (REG_3) begin // @[Execute.scala 249:17]
      REG_3 <= _GEN_31;
    end else begin
      REG_3 <= _GEN_19;
    end
    if (reset) begin // @[Execute.scala 229:28]
      REG_4 <= 6'h0; // @[Execute.scala 229:28]
    end else begin
      REG_4 <= _GEN_23[5:0];
    end
    if (reset) begin // @[Execute.scala 230:28]
      REG_5 <= 6'h0; // @[Execute.scala 230:28]
    end else if (REG_3) begin // @[Execute.scala 249:17]
      if (REG_5 < 6'h20) begin // @[Execute.scala 251:28]
        REG_5 <= _T_71; // @[Execute.scala 257:17]
      end else begin
        REG_5 <= 6'h0; // @[Execute.scala 264:17]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  REG = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  REG_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  REG_2 = _RAND_2[2:0];
  _RAND_3 = {1{`RANDOM}};
  REG_3 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  REG_4 = _RAND_4[5:0];
  _RAND_5 = {1{`RANDOM}};
  REG_5 = _RAND_5[5:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MemoryFetch(
  input         clock,
  input         reset,
  input  [31:0] io_aluResultIn,
  input  [31:0] io_writeData,
  input         io_writeEnable,
  input         io_readEnable,
  output [31:0] io_readData,
  input  [2:0]  io_f3,
  output        io_dccmReq_valid,
  output [31:0] io_dccmReq_bits_addrRequest,
  output [31:0] io_dccmReq_bits_dataRequest,
  output [3:0]  io_dccmReq_bits_activeByteLane,
  output        io_dccmReq_bits_isWrite,
  input         io_dccmRsp_valid,
  input  [31:0] io_dccmRsp_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] offset; // @[MemoryFetch.scala 26:23]
  reg [2:0] funct3; // @[MemoryFetch.scala 27:23]
  wire [1:0] offsetSW = io_aluResultIn[1:0]; // @[MemoryFetch.scala 28:32]
  wire  _T_8 = offsetSW == 2'h0; // @[MemoryFetch.scala 45:19]
  wire  _T_9 = offsetSW == 2'h1; // @[MemoryFetch.scala 47:25]
  wire [7:0] _GEN_2 = offsetSW == 2'h2 ? io_writeData[15:8] : io_writeData[15:8]; // @[MemoryFetch.scala 53:33 MemoryFetch.scala 54:16 MemoryFetch.scala 60:16]
  wire [7:0] _GEN_3 = offsetSW == 2'h2 ? io_writeData[23:16] : io_writeData[23:16]; // @[MemoryFetch.scala 53:33 MemoryFetch.scala 55:16 MemoryFetch.scala 61:16]
  wire [7:0] _GEN_4 = offsetSW == 2'h2 ? io_writeData[7:0] : io_writeData[31:24]; // @[MemoryFetch.scala 53:33 MemoryFetch.scala 56:16 MemoryFetch.scala 62:16]
  wire [7:0] _GEN_5 = offsetSW == 2'h2 ? io_writeData[31:24] : io_writeData[7:0]; // @[MemoryFetch.scala 53:33 MemoryFetch.scala 57:16 MemoryFetch.scala 63:16]
  wire [3:0] _GEN_6 = offsetSW == 2'h2 ? 4'h4 : 4'h8; // @[MemoryFetch.scala 53:33 MemoryFetch.scala 58:38 MemoryFetch.scala 64:38]
  wire [7:0] _GEN_7 = offsetSW == 2'h1 ? io_writeData[15:8] : _GEN_2; // @[MemoryFetch.scala 47:33 MemoryFetch.scala 48:16]
  wire [7:0] _GEN_8 = offsetSW == 2'h1 ? io_writeData[7:0] : _GEN_3; // @[MemoryFetch.scala 47:33 MemoryFetch.scala 49:16]
  wire [7:0] _GEN_9 = offsetSW == 2'h1 ? io_writeData[23:16] : _GEN_4; // @[MemoryFetch.scala 47:33 MemoryFetch.scala 50:16]
  wire [7:0] _GEN_10 = offsetSW == 2'h1 ? io_writeData[31:24] : _GEN_5; // @[MemoryFetch.scala 47:33 MemoryFetch.scala 51:16]
  wire [3:0] _GEN_11 = offsetSW == 2'h1 ? 4'h2 : _GEN_6; // @[MemoryFetch.scala 47:33 MemoryFetch.scala 52:38]
  wire [3:0] _GEN_12 = offsetSW == 2'h0 ? 4'h1 : _GEN_11; // @[MemoryFetch.scala 45:27 MemoryFetch.scala 46:38]
  wire [7:0] _GEN_13 = offsetSW == 2'h0 ? io_writeData[7:0] : _GEN_7; // @[MemoryFetch.scala 45:27 MemoryFetch.scala 38:12]
  wire [7:0] _GEN_14 = offsetSW == 2'h0 ? io_writeData[15:8] : _GEN_8; // @[MemoryFetch.scala 45:27 MemoryFetch.scala 39:12]
  wire [7:0] _GEN_15 = offsetSW == 2'h0 ? io_writeData[23:16] : _GEN_9; // @[MemoryFetch.scala 45:27 MemoryFetch.scala 40:12]
  wire [7:0] _GEN_16 = offsetSW == 2'h0 ? io_writeData[31:24] : _GEN_10; // @[MemoryFetch.scala 45:27 MemoryFetch.scala 41:12]
  wire [3:0] _GEN_17 = _T_9 ? 4'h6 : 4'hc; // @[MemoryFetch.scala 73:33 MemoryFetch.scala 75:38 MemoryFetch.scala 82:38]
  wire [7:0] _GEN_18 = _T_9 ? io_writeData[23:16] : io_writeData[23:16]; // @[MemoryFetch.scala 73:33 MemoryFetch.scala 76:16 MemoryFetch.scala 85:16]
  wire [7:0] _GEN_19 = _T_9 ? io_writeData[7:0] : io_writeData[31:24]; // @[MemoryFetch.scala 73:33 MemoryFetch.scala 77:16 MemoryFetch.scala 86:16]
  wire [7:0] _GEN_20 = _T_9 ? io_writeData[15:8] : io_writeData[7:0]; // @[MemoryFetch.scala 73:33 MemoryFetch.scala 78:16 MemoryFetch.scala 83:16]
  wire [7:0] _GEN_21 = _T_9 ? io_writeData[31:24] : io_writeData[15:8]; // @[MemoryFetch.scala 73:33 MemoryFetch.scala 79:16 MemoryFetch.scala 84:16]
  wire [3:0] _GEN_22 = _T_8 ? 4'h3 : _GEN_17; // @[MemoryFetch.scala 70:27 MemoryFetch.scala 72:38]
  wire [7:0] _GEN_23 = _T_8 ? io_writeData[7:0] : _GEN_18; // @[MemoryFetch.scala 70:27 MemoryFetch.scala 38:12]
  wire [7:0] _GEN_24 = _T_8 ? io_writeData[15:8] : _GEN_19; // @[MemoryFetch.scala 70:27 MemoryFetch.scala 39:12]
  wire [7:0] _GEN_25 = _T_8 ? io_writeData[23:16] : _GEN_20; // @[MemoryFetch.scala 70:27 MemoryFetch.scala 40:12]
  wire [7:0] _GEN_26 = _T_8 ? io_writeData[31:24] : _GEN_21; // @[MemoryFetch.scala 70:27 MemoryFetch.scala 41:12]
  wire [3:0] _GEN_27 = io_writeEnable & io_f3 == 3'h1 ? _GEN_22 : 4'hf; // @[MemoryFetch.scala 68:52 MemoryFetch.scala 91:36]
  wire [7:0] _GEN_28 = io_writeEnable & io_f3 == 3'h1 ? _GEN_23 : io_writeData[7:0]; // @[MemoryFetch.scala 68:52 MemoryFetch.scala 38:12]
  wire [7:0] _GEN_29 = io_writeEnable & io_f3 == 3'h1 ? _GEN_24 : io_writeData[15:8]; // @[MemoryFetch.scala 68:52 MemoryFetch.scala 39:12]
  wire [7:0] _GEN_30 = io_writeEnable & io_f3 == 3'h1 ? _GEN_25 : io_writeData[23:16]; // @[MemoryFetch.scala 68:52 MemoryFetch.scala 40:12]
  wire [7:0] _GEN_31 = io_writeEnable & io_f3 == 3'h1 ? _GEN_26 : io_writeData[31:24]; // @[MemoryFetch.scala 68:52 MemoryFetch.scala 41:12]
  wire [7:0] wdata_0 = io_writeEnable & io_f3 == 3'h0 ? _GEN_13 : _GEN_28; // @[MemoryFetch.scala 44:45]
  wire [7:0] wdata_1 = io_writeEnable & io_f3 == 3'h0 ? _GEN_14 : _GEN_29; // @[MemoryFetch.scala 44:45]
  wire [7:0] wdata_2 = io_writeEnable & io_f3 == 3'h0 ? _GEN_15 : _GEN_30; // @[MemoryFetch.scala 44:45]
  wire [7:0] wdata_3 = io_writeEnable & io_f3 == 3'h0 ? _GEN_16 : _GEN_31; // @[MemoryFetch.scala 44:45]
  wire [15:0] lo = {wdata_1,wdata_0}; // @[MemoryFetch.scala 94:46]
  wire [15:0] hi = {wdata_3,wdata_2}; // @[MemoryFetch.scala 94:46]
  wire [31:0] _T_36 = io_aluResultIn & 32'h1fff; // @[MemoryFetch.scala 95:50]
  wire [31:0] rdata = io_dccmRsp_valid ? io_dccmRsp_bits_dataResponse : 32'h0; // @[MemoryFetch.scala 101:15]
  wire  _T_46 = offset == 2'h0; // @[MemoryFetch.scala 111:21]
  wire [23:0] hi_1 = rdata[7] ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12]
  wire [7:0] lo_1 = rdata[7:0]; // @[MemoryFetch.scala 113:53]
  wire [31:0] _T_49 = {hi_1,lo_1}; // @[Cat.scala 30:58]
  wire  _T_50 = offset == 2'h1; // @[MemoryFetch.scala 114:28]
  wire [23:0] hi_2 = rdata[15] ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12]
  wire [7:0] lo_2 = rdata[15:8]; // @[MemoryFetch.scala 116:55]
  wire [31:0] _T_53 = {hi_2,lo_2}; // @[Cat.scala 30:58]
  wire  _T_54 = offset == 2'h2; // @[MemoryFetch.scala 117:28]
  wire [23:0] hi_3 = rdata[23] ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12]
  wire [7:0] lo_3 = rdata[23:16]; // @[MemoryFetch.scala 119:55]
  wire [31:0] _T_57 = {hi_3,lo_3}; // @[Cat.scala 30:58]
  wire [23:0] hi_4 = rdata[31] ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12]
  wire [7:0] lo_4 = rdata[31:24]; // @[MemoryFetch.scala 122:55]
  wire [31:0] _T_61 = {hi_4,lo_4}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_38 = offset == 2'h2 ? _T_57 : _T_61; // @[MemoryFetch.scala 117:41 MemoryFetch.scala 119:23]
  wire [31:0] _GEN_39 = offset == 2'h1 ? _T_53 : _GEN_38; // @[MemoryFetch.scala 114:41 MemoryFetch.scala 116:23]
  wire [31:0] _GEN_40 = offset == 2'h0 ? _T_49 : _GEN_39; // @[MemoryFetch.scala 111:34 MemoryFetch.scala 113:23]
  wire [31:0] _T_64 = {24'h0,lo_1}; // @[Cat.scala 30:58]
  wire [31:0] _T_66 = {24'h0,lo_2}; // @[Cat.scala 30:58]
  wire [31:0] _T_68 = {24'h0,lo_3}; // @[Cat.scala 30:58]
  wire [31:0] _T_70 = {24'h0,lo_4}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_42 = _T_54 ? _T_68 : _T_70; // @[MemoryFetch.scala 136:40 MemoryFetch.scala 138:23]
  wire [31:0] _GEN_43 = _T_50 ? _T_66 : _GEN_42; // @[MemoryFetch.scala 133:40 MemoryFetch.scala 135:23]
  wire [31:0] _GEN_44 = _T_46 ? _T_64 : _GEN_43; // @[MemoryFetch.scala 130:34 MemoryFetch.scala 132:23]
  wire [15:0] lo_9 = rdata[15:0]; // @[MemoryFetch.scala 151:49]
  wire [31:0] _T_73 = {16'h0,lo_9}; // @[Cat.scala 30:58]
  wire [15:0] lo_10 = rdata[23:8]; // @[MemoryFetch.scala 154:49]
  wire [31:0] _T_75 = {16'h0,lo_10}; // @[Cat.scala 30:58]
  wire [15:0] lo_11 = rdata[31:16]; // @[MemoryFetch.scala 157:49]
  wire [31:0] _T_77 = {16'h0,lo_11}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_46 = _T_50 ? _T_75 : _T_77; // @[MemoryFetch.scala 152:41 MemoryFetch.scala 154:23]
  wire [31:0] _GEN_47 = _T_46 ? _T_73 : _GEN_46; // @[MemoryFetch.scala 149:34 MemoryFetch.scala 151:23]
  wire [15:0] hi_12 = rdata[15] ? 16'hffff : 16'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_82 = {hi_12,lo_9}; // @[Cat.scala 30:58]
  wire [15:0] hi_13 = rdata[23] ? 16'hffff : 16'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_86 = {hi_13,lo_10}; // @[Cat.scala 30:58]
  wire [15:0] hi_14 = rdata[31] ? 16'hffff : 16'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_90 = {hi_14,lo_11}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_49 = _T_50 ? _T_86 : _T_90; // @[MemoryFetch.scala 168:41 MemoryFetch.scala 170:23]
  wire [31:0] _GEN_50 = _T_46 ? _T_82 : _GEN_49; // @[MemoryFetch.scala 165:34 MemoryFetch.scala 167:23]
  wire [31:0] _GEN_52 = funct3 == 3'h5 ? _GEN_47 : _GEN_50; // @[MemoryFetch.scala 147:38]
  wire [31:0] _GEN_53 = funct3 == 3'h4 ? _GEN_44 : _GEN_52; // @[MemoryFetch.scala 128:38]
  wire [31:0] _GEN_54 = funct3 == 3'h0 ? _GEN_40 : _GEN_53; // @[MemoryFetch.scala 109:38]
  wire  _T_93 = io_writeEnable & io_aluResultIn[31:28] == 4'h8; // @[MemoryFetch.scala 188:23]
  assign io_readData = funct3 == 3'h2 ? rdata : _GEN_54; // @[MemoryFetch.scala 105:31 MemoryFetch.scala 107:19]
  assign io_dccmReq_valid = io_writeEnable | io_readEnable; // @[MemoryFetch.scala 97:42]
  assign io_dccmReq_bits_addrRequest = {{2'd0}, _T_36[31:2]}; // @[MemoryFetch.scala 95:67]
  assign io_dccmReq_bits_dataRequest = {hi,lo}; // @[MemoryFetch.scala 94:46]
  assign io_dccmReq_bits_activeByteLane = io_writeEnable & io_f3 == 3'h0 ? _GEN_12 : _GEN_27; // @[MemoryFetch.scala 44:45]
  assign io_dccmReq_bits_isWrite = io_writeEnable; // @[MemoryFetch.scala 96:27]
  always @(posedge clock) begin
    if (reset) begin // @[MemoryFetch.scala 26:23]
      offset <= 2'h0; // @[MemoryFetch.scala 26:23]
    end else if (~io_dccmRsp_valid) begin // @[MemoryFetch.scala 30:26]
      offset <= offsetSW; // @[MemoryFetch.scala 32:12]
    end
    if (reset) begin // @[MemoryFetch.scala 27:23]
      funct3 <= 3'h0; // @[MemoryFetch.scala 27:23]
    end else if (~io_dccmRsp_valid) begin // @[MemoryFetch.scala 30:26]
      funct3 <= io_f3; // @[MemoryFetch.scala 31:12]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_93 & ~reset) begin
          $fwrite(32'h80000002,"%x\n",io_writeData); // @[MemoryFetch.scala 189:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  offset = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  funct3 = _RAND_1[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PC(
  input         clock,
  input         reset,
  input  [31:0] io_in,
  input         io_halt,
  output [31:0] io_out,
  output [31:0] io_pc4,
  output [31:0] io_pc2
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc_reg; // @[PC.scala 13:23]
  wire [31:0] _T_2 = $signed(pc_reg) + 32'sh4; // @[PC.scala 16:41]
  wire [31:0] _T_6 = $signed(pc_reg) + 32'sh2; // @[PC.scala 17:41]
  assign io_out = pc_reg; // @[PC.scala 15:10]
  assign io_pc4 = io_halt ? $signed(pc_reg) : $signed(_T_2); // @[PC.scala 16:16]
  assign io_pc2 = io_halt ? $signed(pc_reg) : $signed(_T_6); // @[PC.scala 17:16]
  always @(posedge clock) begin
    if (reset) begin // @[PC.scala 13:23]
      pc_reg <= -32'sh4; // @[PC.scala 13:23]
    end else begin
      pc_reg <= io_in; // @[PC.scala 14:10]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc_reg = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Realigner(
  input         clock,
  input         reset,
  input  [31:0] io_ral_address_i,
  input  [31:0] io_ral_instruction_i,
  input         io_ral_jmp,
  output [31:0] io_ral_address_o,
  output [31:0] io_ral_instruction_o,
  output        io_ral_halt_o
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  addri = io_ral_address_i[1]; // @[Realigner.scala 36:31]
  reg [15:0] lhw_reg; // @[Realigner.scala 49:24]
  wire [15:0] hi = io_ral_instruction_i[15:0]; // @[Realigner.scala 53:41]
  wire [31:0] conc_instr = {hi,lhw_reg}; // @[Cat.scala 30:58]
  wire [31:0] _T_3 = io_ral_address_i + 32'h4; // @[Realigner.scala 56:53]
  reg [1:0] stateReg; // @[Realigner.scala 68:25]
  wire  _T_11 = stateReg == 2'h1; // @[Realigner.scala 101:30]
  wire  pc4_sel = stateReg == 2'h1 & addri & ~io_ral_jmp; // @[Realigner.scala 101:50]
  wire  conc_sel = stateReg == 2'h2; // @[Realigner.scala 103:30]
  wire [31:0] _T_5 = conc_sel ? conc_instr : io_ral_instruction_i; // @[Realigner.scala 59:69]
  wire  _T_7 = 2'h0 == stateReg; // @[Conditional.scala 37:30]
  wire [1:0] _GEN_0 = addri ? 2'h1 : 2'h0; // @[Realigner.scala 73:20 Realigner.scala 74:18 Realigner.scala 76:18]
  wire  _T_8 = 2'h1 == stateReg; // @[Conditional.scala 37:30]
  wire [1:0] _GEN_1 = io_ral_jmp ? 2'h1 : 2'h2; // @[Realigner.scala 81:27 Realigner.scala 82:20 Realigner.scala 84:20]
  wire  _T_9 = 2'h2 == stateReg; // @[Conditional.scala 37:30]
  assign io_ral_address_o = pc4_sel ? _T_3 : io_ral_address_i; // @[Realigner.scala 56:26]
  assign io_ral_instruction_o = _T_11 ? 32'h13 : _T_5; // @[Realigner.scala 59:30]
  assign io_ral_halt_o = stateReg == 2'h1; // @[Realigner.scala 100:30]
  always @(posedge clock) begin
    if (reset) begin // @[Realigner.scala 49:24]
      lhw_reg <= 16'h0; // @[Realigner.scala 49:24]
    end else begin
      lhw_reg <= io_ral_instruction_i[31:16]; // @[Realigner.scala 51:11]
    end
    if (reset) begin // @[Realigner.scala 68:25]
      stateReg <= 2'h0; // @[Realigner.scala 68:25]
    end else if (_T_7) begin // @[Conditional.scala 40:58]
      stateReg <= _GEN_0;
    end else if (_T_8) begin // @[Conditional.scala 39:67]
      if (addri) begin // @[Realigner.scala 80:18]
        stateReg <= _GEN_1;
      end else begin
        stateReg <= 2'h0; // @[Realigner.scala 87:18]
      end
    end else if (_T_9) begin // @[Conditional.scala 39:67]
      stateReg <= _GEN_0;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  lhw_reg = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  stateReg = _RAND_1[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module CompressedDecoder(
  input  [31:0] io_instruction_i,
  output        io_is_comp,
  output [31:0] io_instruction_o
);
  wire  _T_1 = 2'h0 == io_instruction_i[1:0]; // @[Conditional.scala 37:30]
  wire  _T_3 = 2'h0 == io_instruction_i[15:14]; // @[Conditional.scala 37:30]
  wire [3:0] hi_hi_hi_lo = io_instruction_i[10:7]; // @[CompressedDecoder.scala 47:70]
  wire [1:0] hi_hi_lo = io_instruction_i[12:11]; // @[CompressedDecoder.scala 47:95]
  wire  hi_lo_hi_hi = io_instruction_i[5]; // @[CompressedDecoder.scala 47:121]
  wire  hi_lo_hi_lo = io_instruction_i[6]; // @[CompressedDecoder.scala 48:47]
  wire [2:0] lo_lo_hi = io_instruction_i[4:2]; // @[CompressedDecoder.scala 48:143]
  wire [31:0] _T_4 = {2'h0,hi_hi_hi_lo,hi_hi_lo,hi_lo_hi_hi,hi_lo_hi_lo,2'h0,10'h41,lo_lo_hi,7'h13}; // @[Cat.scala 30:58]
  wire  _T_5 = 2'h1 == io_instruction_i[15:14]; // @[Conditional.scala 37:30]
  wire [2:0] hi_hi_lo_1 = io_instruction_i[12:10]; // @[CompressedDecoder.scala 54:88]
  wire [2:0] lo_hi_hi_hi = io_instruction_i[9:7]; // @[CompressedDecoder.scala 55:68]
  wire [31:0] _T_6 = {5'h0,hi_lo_hi_hi,hi_hi_lo_1,hi_lo_hi_lo,4'h1,lo_hi_hi_hi,3'h2,2'h1,lo_lo_hi,7'h3}; // @[Cat.scala 30:58]
  wire  _T_7 = 2'h3 == io_instruction_i[15:14]; // @[Conditional.scala 37:30]
  wire  hi_hi_lo_2 = io_instruction_i[12]; // @[CompressedDecoder.scala 61:88]
  wire [1:0] lo_hi_lo = io_instruction_i[11:10]; // @[CompressedDecoder.scala 62:108]
  wire [17:0] lo_2 = {lo_hi_hi_hi,3'h2,lo_hi_lo,hi_lo_hi_lo,2'h0,7'h23}; // @[Cat.scala 30:58]
  wire [31:0] _T_8 = {5'h0,hi_lo_hi_hi,hi_hi_lo_2,2'h1,lo_lo_hi,2'h1,lo_2}; // @[Cat.scala 30:58]
  wire  _T_9 = 2'h2 == io_instruction_i[15:14]; // @[Conditional.scala 37:30]
  wire [31:0] _GEN_3 = _T_7 ? _T_8 : io_instruction_i; // @[Conditional.scala 39:67 CompressedDecoder.scala 61:28]
  wire  _GEN_4 = _T_5 | _T_7; // @[Conditional.scala 39:67 CompressedDecoder.scala 53:22]
  wire [31:0] _GEN_5 = _T_5 ? _T_6 : _GEN_3; // @[Conditional.scala 39:67 CompressedDecoder.scala 54:28]
  wire  _GEN_6 = _T_3 | _GEN_4; // @[Conditional.scala 40:58 CompressedDecoder.scala 46:22]
  wire [31:0] _GEN_7 = _T_3 ? _T_4 : _GEN_5; // @[Conditional.scala 40:58 CompressedDecoder.scala 47:28]
  wire  _T_10 = 2'h1 == io_instruction_i[1:0]; // @[Conditional.scala 37:30]
  wire  _T_12 = 3'h0 == io_instruction_i[15:13]; // @[Conditional.scala 37:30]
  wire [5:0] hi_hi_hi_3 = hi_hi_lo_2 ? 6'h3f : 6'h0; // @[Bitwise.scala 72:12]
  wire [4:0] hi_lo_hi_3 = io_instruction_i[6:2]; // @[CompressedDecoder.scala 86:103]
  wire [4:0] hi_lo_lo = io_instruction_i[11:7]; // @[CompressedDecoder.scala 87:47]
  wire [31:0] _T_15 = {hi_hi_hi_3,hi_hi_lo_2,hi_lo_hi_3,hi_lo_lo,3'h0,hi_lo_lo,7'h13}; // @[Cat.scala 30:58]
  wire  _T_16 = 3'h1 == io_instruction_i[15:13]; // @[Conditional.scala 37:30]
  wire  hi_hi_hi_lo_3 = io_instruction_i[8]; // @[CompressedDecoder.scala 93:73]
  wire [1:0] hi_hi_lo_4 = io_instruction_i[10:9]; // @[CompressedDecoder.scala 93:94]
  wire  hi_lo_hi_lo_2 = io_instruction_i[7]; // @[CompressedDecoder.scala 94:47]
  wire  hi_lo_lo_1 = io_instruction_i[2]; // @[CompressedDecoder.scala 94:67]
  wire  lo_hi_hi_hi_2 = io_instruction_i[11]; // @[CompressedDecoder.scala 94:88]
  wire [2:0] lo_hi_hi_lo = io_instruction_i[5:3]; // @[CompressedDecoder.scala 94:110]
  wire [8:0] lo_hi_lo_2 = hi_hi_lo_2 ? 9'h1ff : 9'h0; // @[Bitwise.scala 72:12]
  wire  lo_lo_hi_lo = ~io_instruction_i[15]; // @[CompressedDecoder.scala 95:82]
  wire [24:0] lo_4 = {lo_hi_hi_hi_2,lo_hi_hi_lo,lo_hi_lo_2,4'h0,lo_lo_hi_lo,7'h6f}; // @[Cat.scala 30:58]
  wire [31:0] _T_20 = {hi_hi_lo_2,hi_hi_hi_lo_3,hi_hi_lo_4,hi_lo_hi_lo,hi_lo_hi_lo_2,hi_lo_lo_1,lo_4}; // @[Cat.scala 30:58]
  wire  _T_21 = 3'h5 == io_instruction_i[15:13]; // @[Conditional.scala 37:30]
  wire  _T_26 = 3'h2 == io_instruction_i[15:13]; // @[Conditional.scala 37:30]
  wire [31:0] _T_29 = {hi_hi_hi_3,hi_hi_lo_2,hi_lo_hi_3,5'h0,3'h0,hi_lo_lo,7'h13}; // @[Cat.scala 30:58]
  wire  _T_30 = 3'h3 == io_instruction_i[15:13]; // @[Conditional.scala 37:30]
  wire [14:0] hi_hi_7 = hi_hi_lo_2 ? 15'h7fff : 15'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_33 = {hi_hi_7,hi_lo_hi_3,hi_lo_lo,7'h37}; // @[Cat.scala 30:58]
  wire [2:0] hi_hi_hi_hi_4 = hi_hi_lo_2 ? 3'h7 : 3'h0; // @[Bitwise.scala 72:12]
  wire [1:0] hi_hi_hi_lo_5 = io_instruction_i[4:3]; // @[CompressedDecoder.scala 122:84]
  wire [31:0] _T_38 = {hi_hi_hi_hi_4,hi_hi_hi_lo_5,hi_lo_hi_hi,hi_lo_lo_1,hi_lo_hi_lo,24'h10113}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_8 = hi_lo_lo == 5'h2 ? _T_38 : _T_33; // @[CompressedDecoder.scala 120:62 CompressedDecoder.scala 122:31 CompressedDecoder.scala 118:28]
  wire  _T_39 = 3'h4 == io_instruction_i[15:13]; // @[Conditional.scala 37:30]
  wire  _T_41 = 2'h0 == lo_hi_lo; // @[Conditional.scala 37:30]
  wire  hi_hi_hi_lo_6 = io_instruction_i[10]; // @[CompressedDecoder.scala 134:63]
  wire [31:0] _T_42 = {1'h0,hi_hi_hi_lo_6,5'h0,hi_lo_hi_3,2'h1,lo_hi_hi_hi,3'h5,2'h1,lo_hi_hi_hi,7'h13}; // @[Cat.scala 30:58]
  wire  _T_43 = 2'h1 == lo_hi_lo; // @[Conditional.scala 37:30]
  wire  _T_45 = 2'h2 == lo_hi_lo; // @[Conditional.scala 37:30]
  wire [31:0] _T_48 = {hi_hi_hi_3,hi_hi_lo_2,hi_lo_hi_3,2'h1,lo_hi_hi_hi,5'h1d,lo_hi_hi_hi,7'h13}; // @[Cat.scala 30:58]
  wire  _T_49 = 2'h3 == lo_hi_lo; // @[Conditional.scala 37:30]
  wire  _T_51 = 2'h0 == io_instruction_i[6:5]; // @[Conditional.scala 37:30]
  wire [31:0] _T_52 = {9'h81,lo_lo_hi,2'h1,lo_hi_hi_hi,3'h0,2'h1,lo_hi_hi_hi,7'h33}; // @[Cat.scala 30:58]
  wire  _T_53 = 2'h1 == io_instruction_i[6:5]; // @[Conditional.scala 37:30]
  wire [31:0] _T_54 = {9'h1,lo_lo_hi,2'h1,lo_hi_hi_hi,5'h11,lo_hi_hi_hi,7'h33}; // @[Cat.scala 30:58]
  wire  _T_55 = 2'h2 == io_instruction_i[6:5]; // @[Conditional.scala 37:30]
  wire [31:0] _T_56 = {9'h1,lo_lo_hi,2'h1,lo_hi_hi_hi,5'h19,lo_hi_hi_hi,7'h33}; // @[Cat.scala 30:58]
  wire  _T_57 = 2'h3 == io_instruction_i[6:5]; // @[Conditional.scala 37:30]
  wire [31:0] _T_58 = {9'h1,lo_lo_hi,2'h1,lo_hi_hi_hi,5'h1d,lo_hi_hi_hi,7'h33}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_10 = _T_57 ? _T_58 : io_instruction_i; // @[Conditional.scala 39:67 CompressedDecoder.scala 180:36 CompressedDecoder.scala 35:20]
  wire  _GEN_11 = _T_55 | _T_57; // @[Conditional.scala 39:67 CompressedDecoder.scala 172:30]
  wire [31:0] _GEN_12 = _T_55 ? _T_56 : _GEN_10; // @[Conditional.scala 39:67 CompressedDecoder.scala 173:36]
  wire  _GEN_13 = _T_53 | _GEN_11; // @[Conditional.scala 39:67 CompressedDecoder.scala 165:30]
  wire [31:0] _GEN_14 = _T_53 ? _T_54 : _GEN_12; // @[Conditional.scala 39:67 CompressedDecoder.scala 166:36]
  wire  _GEN_15 = _T_51 | _GEN_13; // @[Conditional.scala 40:58 CompressedDecoder.scala 158:30]
  wire [31:0] _GEN_16 = _T_51 ? _T_52 : _GEN_14; // @[Conditional.scala 40:58 CompressedDecoder.scala 159:36]
  wire  _GEN_17 = _T_49 & _GEN_15; // @[Conditional.scala 39:67 CompressedDecoder.scala 34:14]
  wire [31:0] _GEN_18 = _T_49 ? _GEN_16 : io_instruction_i; // @[Conditional.scala 39:67 CompressedDecoder.scala 35:20]
  wire  _GEN_19 = _T_45 | _GEN_17; // @[Conditional.scala 39:67 CompressedDecoder.scala 147:26]
  wire [31:0] _GEN_20 = _T_45 ? _T_48 : _GEN_18; // @[Conditional.scala 39:67 CompressedDecoder.scala 148:32]
  wire  _GEN_21 = _T_43 | _GEN_19; // @[Conditional.scala 39:67 CompressedDecoder.scala 140:26]
  wire [31:0] _GEN_22 = _T_43 ? _T_42 : _GEN_20; // @[Conditional.scala 39:67 CompressedDecoder.scala 141:32]
  wire  _GEN_23 = _T_41 | _GEN_21; // @[Conditional.scala 40:58 CompressedDecoder.scala 133:26]
  wire [31:0] _GEN_24 = _T_41 ? _T_42 : _GEN_22; // @[Conditional.scala 40:58 CompressedDecoder.scala 134:32]
  wire  _T_59 = 3'h6 == io_instruction_i[15:13]; // @[Conditional.scala 37:30]
  wire [3:0] hi_hi_hi_hi_9 = hi_hi_lo_2 ? 4'hf : 4'h0; // @[Bitwise.scala 72:12]
  wire  lo_hi_hi_lo_2 = io_instruction_i[13]; // @[CompressedDecoder.scala 192:89]
  wire [14:0] lo_16 = {2'h0,lo_hi_hi_lo_2,lo_hi_lo,hi_hi_hi_lo_5,hi_hi_lo_2,7'h63}; // @[Cat.scala 30:58]
  wire [31:0] _T_62 = {hi_hi_hi_hi_9,io_instruction_i[6:5],hi_lo_lo_1,7'h1,lo_hi_hi_hi,lo_16}; // @[Cat.scala 30:58]
  wire  _T_63 = 3'h7 == io_instruction_i[15:13]; // @[Conditional.scala 37:30]
  wire [31:0] _GEN_26 = _T_63 ? _T_62 : io_instruction_i; // @[Conditional.scala 39:67 CompressedDecoder.scala 199:28 CompressedDecoder.scala 35:20]
  wire  _GEN_27 = _T_59 | _T_63; // @[Conditional.scala 39:67 CompressedDecoder.scala 190:22]
  wire [31:0] _GEN_28 = _T_59 ? _T_62 : _GEN_26; // @[Conditional.scala 39:67 CompressedDecoder.scala 191:28]
  wire  _GEN_29 = _T_39 ? _GEN_23 : _GEN_27; // @[Conditional.scala 39:67]
  wire [31:0] _GEN_30 = _T_39 ? _GEN_24 : _GEN_28; // @[Conditional.scala 39:67]
  wire  _GEN_31 = _T_30 | _GEN_29; // @[Conditional.scala 39:67 CompressedDecoder.scala 117:22]
  wire [31:0] _GEN_32 = _T_30 ? _GEN_8 : _GEN_30; // @[Conditional.scala 39:67]
  wire  _GEN_33 = _T_26 | _GEN_31; // @[Conditional.scala 39:67 CompressedDecoder.scala 109:22]
  wire [31:0] _GEN_34 = _T_26 ? _T_29 : _GEN_32; // @[Conditional.scala 39:67 CompressedDecoder.scala 110:28]
  wire  _GEN_35 = _T_21 | _GEN_33; // @[Conditional.scala 39:67 CompressedDecoder.scala 100:22]
  wire [31:0] _GEN_36 = _T_21 ? _T_20 : _GEN_34; // @[Conditional.scala 39:67 CompressedDecoder.scala 101:28]
  wire  _GEN_37 = _T_16 | _GEN_35; // @[Conditional.scala 39:67 CompressedDecoder.scala 92:22]
  wire [31:0] _GEN_38 = _T_16 ? _T_20 : _GEN_36; // @[Conditional.scala 39:67 CompressedDecoder.scala 93:28]
  wire  _GEN_39 = _T_12 | _GEN_37; // @[Conditional.scala 40:58 CompressedDecoder.scala 85:22]
  wire [31:0] _GEN_40 = _T_12 ? _T_15 : _GEN_38; // @[Conditional.scala 40:58 CompressedDecoder.scala 86:28]
  wire  _T_67 = 2'h2 == io_instruction_i[1:0]; // @[Conditional.scala 37:30]
  wire [31:0] _T_70 = {7'h0,hi_lo_hi_3,hi_lo_lo,3'h1,hi_lo_lo,7'h13}; // @[Cat.scala 30:58]
  wire [1:0] hi_hi_hi_lo_11 = io_instruction_i[3:2]; // @[CompressedDecoder.scala 227:67]
  wire [2:0] hi_lo_hi_13 = io_instruction_i[6:4]; // @[CompressedDecoder.scala 227:112]
  wire [31:0] _T_72 = {4'h0,hi_hi_hi_lo_11,hi_hi_lo_2,hi_lo_hi_13,2'h0,8'h12,hi_lo_lo,7'h3}; // @[Cat.scala 30:58]
  wire  _T_77 = hi_lo_hi_3 != 5'h0; // @[CompressedDecoder.scala 235:40]
  wire [31:0] _T_78 = {7'h0,hi_lo_hi_3,8'h0,hi_lo_lo,7'h33}; // @[Cat.scala 30:58]
  wire [31:0] _T_79 = {12'h0,hi_lo_lo,15'h67}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_42 = hi_lo_hi_3 != 5'h0 ? _T_78 : _T_79; // @[CompressedDecoder.scala 235:62 CompressedDecoder.scala 240:32 CompressedDecoder.scala 245:32]
  wire [31:0] _T_82 = {7'h0,hi_lo_hi_3,hi_lo_lo,3'h0,hi_lo_lo,7'h33}; // @[Cat.scala 30:58]
  wire [31:0] _T_85 = {12'h0,hi_lo_lo,7'h0,8'he7}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_44 = hi_lo_lo == 5'h0 ? 32'h100073 : _T_85; // @[CompressedDecoder.scala 256:65 CompressedDecoder.scala 259:34 CompressedDecoder.scala 263:34]
  wire [31:0] _GEN_46 = _T_77 ? _T_82 : _GEN_44; // @[CompressedDecoder.scala 249:62 CompressedDecoder.scala 253:32]
  wire [31:0] _GEN_48 = ~hi_hi_lo_2 ? _GEN_42 : _GEN_46; // @[CompressedDecoder.scala 233:50]
  wire [1:0] hi_hi_hi_lo_12 = io_instruction_i[8:7]; // @[CompressedDecoder.scala 272:67]
  wire [2:0] lo_hi_lo_9 = io_instruction_i[11:9]; // @[CompressedDecoder.scala 273:47]
  wire [31:0] _T_87 = {4'h0,hi_hi_hi_lo_12,hi_hi_lo_2,hi_lo_hi_3,5'h2,3'h2,lo_hi_lo_9,9'h23}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_50 = _T_7 ? _T_87 : io_instruction_i; // @[Conditional.scala 39:67 CompressedDecoder.scala 272:28 CompressedDecoder.scala 35:20]
  wire [31:0] _GEN_52 = _T_9 ? _GEN_48 : _GEN_50; // @[Conditional.scala 39:67]
  wire  _GEN_53 = _T_5 | (_T_9 | _T_7); // @[Conditional.scala 39:67 CompressedDecoder.scala 226:22]
  wire [31:0] _GEN_54 = _T_5 ? _T_72 : _GEN_52; // @[Conditional.scala 39:67 CompressedDecoder.scala 227:28]
  wire  _GEN_55 = _T_3 | _GEN_53; // @[Conditional.scala 40:58 CompressedDecoder.scala 219:22]
  wire [31:0] _GEN_56 = _T_3 ? _T_70 : _GEN_54; // @[Conditional.scala 40:58 CompressedDecoder.scala 220:28]
  wire [31:0] _GEN_60 = _T_67 ? _GEN_56 : io_instruction_i; // @[Conditional.scala 39:67]
  wire  _GEN_61 = _T_10 ? _GEN_39 : _T_67 & _GEN_55; // @[Conditional.scala 39:67]
  wire [31:0] _GEN_62 = _T_10 ? _GEN_40 : _GEN_60; // @[Conditional.scala 39:67]
  wire  _GEN_63 = _T_1 ? _GEN_6 : _GEN_61; // @[Conditional.scala 40:58]
  wire [31:0] _GEN_64 = _T_1 ? _GEN_7 : _GEN_62; // @[Conditional.scala 40:58]
  assign io_is_comp = io_instruction_i == 32'h0 ? 1'h0 : _GEN_63; // @[CompressedDecoder.scala 285:47 CompressedDecoder.scala 287:18]
  assign io_instruction_o = io_instruction_i == 32'h0 ? io_instruction_i : _GEN_64; // @[CompressedDecoder.scala 285:47 CompressedDecoder.scala 288:24]
endmodule
module Core(
  input          clock,
  input          reset,
  output [31:0]  io_pin,
  output [127:0] io_Vpin,
  output         io_dmemReq_valid,
  output [31:0]  io_dmemReq_bits_addrRequest,
  output [31:0]  io_dmemReq_bits_dataRequest,
  output [3:0]   io_dmemReq_bits_activeByteLane,
  output         io_dmemReq_bits_isWrite,
  input          io_dmemRsp_valid,
  input  [31:0]  io_dmemRsp_bits_dataResponse,
  output         io_imemReq_valid,
  output [31:0]  io_imemReq_bits_addrRequest,
  output [31:0]  io_imemReq_bits_dataRequest,
  output [3:0]   io_imemReq_bits_activeByteLane,
  output         io_imemReq_bits_isWrite,
  input          io_imemRsp_valid,
  input  [31:0]  io_imemRsp_bits_dataResponse,
  output [31:0]  io_rvfiUInt_0,
  output [31:0]  io_rvfiUInt_1,
  output [31:0]  io_rvfiUInt_2,
  output [31:0]  io_rvfiUInt_3,
  output [31:0]  io_rvfiSInt_0,
  output [31:0]  io_rvfiSInt_1,
  output [31:0]  io_rvfiSInt_2,
  output [31:0]  io_rvfiSInt_3,
  output [31:0]  io_rvfiSInt_4,
  output         io_rvfiBool_0,
  output [4:0]   io_rvfiRegAddr_0,
  output [4:0]   io_rvfiRegAddr_1,
  output [4:0]   io_rvfiRegAddr_2,
  output [31:0]  io_fcsr_o_data
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [127:0] _RAND_24;
  reg [127:0] _RAND_25;
  reg [127:0] _RAND_26;
  reg [127:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [127:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [127:0] _RAND_65;
  reg [31:0] _RAND_66;
  reg [31:0] _RAND_67;
  reg [31:0] _RAND_68;
  reg [31:0] _RAND_69;
  reg [31:0] _RAND_70;
  reg [31:0] _RAND_71;
  reg [31:0] _RAND_72;
  reg [31:0] _RAND_73;
  reg [31:0] _RAND_74;
  reg [31:0] _RAND_75;
  reg [31:0] _RAND_76;
  reg [31:0] _RAND_77;
  reg [31:0] _RAND_78;
  reg [31:0] _RAND_79;
  reg [31:0] _RAND_80;
  reg [31:0] _RAND_81;
  reg [31:0] _RAND_82;
  reg [31:0] _RAND_83;
  reg [31:0] _RAND_84;
  reg [31:0] _RAND_85;
  reg [31:0] _RAND_86;
  reg [31:0] _RAND_87;
  reg [31:0] _RAND_88;
  reg [31:0] _RAND_89;
  reg [31:0] _RAND_90;
  reg [31:0] _RAND_91;
  reg [31:0] _RAND_92;
  reg [31:0] _RAND_93;
`endif // RANDOMIZE_REG_INIT
  wire  InstructionFetch_reset; // @[Core.scala 158:18]
  wire [31:0] InstructionFetch_io_address; // @[Core.scala 158:18]
  wire [31:0] InstructionFetch_io_instruction; // @[Core.scala 158:18]
  wire  InstructionFetch_io_stall; // @[Core.scala 158:18]
  wire  InstructionFetch_io_coreInstrReq_ready; // @[Core.scala 158:18]
  wire  InstructionFetch_io_coreInstrReq_valid; // @[Core.scala 158:18]
  wire [31:0] InstructionFetch_io_coreInstrReq_bits_addrRequest; // @[Core.scala 158:18]
  wire [31:0] InstructionFetch_io_coreInstrReq_bits_dataRequest; // @[Core.scala 158:18]
  wire [3:0] InstructionFetch_io_coreInstrReq_bits_activeByteLane; // @[Core.scala 158:18]
  wire  InstructionFetch_io_coreInstrReq_bits_isWrite; // @[Core.scala 158:18]
  wire  InstructionFetch_io_coreInstrResp_ready; // @[Core.scala 158:18]
  wire  InstructionFetch_io_coreInstrResp_valid; // @[Core.scala 158:18]
  wire [31:0] InstructionFetch_io_coreInstrResp_bits_dataResponse; // @[Core.scala 158:18]
  wire  IDecode_clock; // @[Core.scala 160:23]
  wire  IDecode_reset; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_id_instruction; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_writeData; // @[Core.scala 160:23]
  wire [4:0] IDecode_io_writeReg; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_pcAddress; // @[Core.scala 160:23]
  wire  IDecode_io_ctl_writeEnable; // @[Core.scala 160:23]
  wire  IDecode_io_id_ex_mem_read; // @[Core.scala 160:23]
  wire  IDecode_io_ex_mem_mem_read; // @[Core.scala 160:23]
  wire  IDecode_io_dmem_resp_valid; // @[Core.scala 160:23]
  wire [4:0] IDecode_io_id_ex_rd; // @[Core.scala 160:23]
  wire [4:0] IDecode_io_ex_mem_rd; // @[Core.scala 160:23]
  wire  IDecode_io_id_ex_branch; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_ex_mem_ins; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_mem_wb_ins; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_ex_ins; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_ex_result; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_ex_mem_result; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_mem_wb_result; // @[Core.scala 160:23]
  wire  IDecode_io_id_ex_regWr; // @[Core.scala 160:23]
  wire  IDecode_io_ex_mem_regWr; // @[Core.scala 160:23]
  wire  IDecode_io_csr_Ex; // @[Core.scala 160:23]
  wire  IDecode_io_csr_Mem; // @[Core.scala 160:23]
  wire  IDecode_io_csr_Wb; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_csr_Ex_data; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_csr_Mem_data; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_csr_Wb_data; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_dmem_data; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_immediate; // @[Core.scala 160:23]
  wire [4:0] IDecode_io_writeRegAddress; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_readData1; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_readData2; // @[Core.scala 160:23]
  wire [6:0] IDecode_io_func7; // @[Core.scala 160:23]
  wire [2:0] IDecode_io_func3; // @[Core.scala 160:23]
  wire [5:0] IDecode_io_func6; // @[Core.scala 160:23]
  wire  IDecode_io_ctl_aluSrc; // @[Core.scala 160:23]
  wire [1:0] IDecode_io_ctl_memToReg; // @[Core.scala 160:23]
  wire  IDecode_io_ctl_regWrite; // @[Core.scala 160:23]
  wire  IDecode_io_ctl_memRead; // @[Core.scala 160:23]
  wire  IDecode_io_ctl_memWrite; // @[Core.scala 160:23]
  wire  IDecode_io_ctl_branch; // @[Core.scala 160:23]
  wire [1:0] IDecode_io_ctl_aluOp; // @[Core.scala 160:23]
  wire [1:0] IDecode_io_ctl_jump; // @[Core.scala 160:23]
  wire  IDecode_io_ctl_v_RegWrite; // @[Core.scala 160:23]
  wire  IDecode_io_ctl_v_opBsel; // @[Core.scala 160:23]
  wire [3:0] IDecode_io_ctl_v_Ex_sel; // @[Core.scala 160:23]
  wire [4:0] IDecode_io_ctl_v_aluop; // @[Core.scala 160:23]
  wire  IDecode_io_ctl_v_vset; // @[Core.scala 160:23]
  wire [3:0] IDecode_io_ctl_v_load; // @[Core.scala 160:23]
  wire  IDecode_io_ctl_v_ins; // @[Core.scala 160:23]
  wire [127:0] IDecode_io_write_data; // @[Core.scala 160:23]
  wire [4:0] IDecode_io_wb_addr; // @[Core.scala 160:23]
  wire  IDecode_io_wb_RegWrite; // @[Core.scala 160:23]
  wire [3:0] IDecode_io_id_lmul_count; // @[Core.scala 160:23]
  wire [3:0] IDecode_io_id_lmul_vs1in_vs2in; // @[Core.scala 160:23]
  wire [127:0] IDecode_io_vs0_data; // @[Core.scala 160:23]
  wire [127:0] IDecode_io_vs1_data; // @[Core.scala 160:23]
  wire [127:0] IDecode_io_vs2_data; // @[Core.scala 160:23]
  wire  IDecode_io_reg_write; // @[Core.scala 160:23]
  wire [4:0] IDecode_io_vs1_addr; // @[Core.scala 160:23]
  wire [4:0] IDecode_io_vs2_addr; // @[Core.scala 160:23]
  wire [4:0] IDecode_io_vd_addr; // @[Core.scala 160:23]
  wire [127:0] IDecode_io_vd_data; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_v_z_imm; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_v_addi_imm; // @[Core.scala 160:23]
  wire [10:0] IDecode_io_vtypei; // @[Core.scala 160:23]
  wire [10:0] IDecode_io_vtypei_out; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_vl; // @[Core.scala 160:23]
  wire  IDecode_io_ctl_vset; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_vl_out; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_vstart_out; // @[Core.scala 160:23]
  wire [1:0] IDecode_io_ctl_aluSrc1; // @[Core.scala 160:23]
  wire  IDecode_io_hdu_pcWrite; // @[Core.scala 160:23]
  wire  IDecode_io_hdu_if_reg_write; // @[Core.scala 160:23]
  wire  IDecode_io_pcSrc; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_pcPlusOffset; // @[Core.scala 160:23]
  wire  IDecode_io_ifid_flush; // @[Core.scala 160:23]
  wire  IDecode_io_stall; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_csr_i_misa; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_csr_i_mhartid; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_csr_o_data; // @[Core.scala 160:23]
  wire  IDecode_io_is_csr; // @[Core.scala 160:23]
  wire [31:0] IDecode_io_fscr_o_data; // @[Core.scala 160:23]
  wire [4:0] IDecode_io_rs_addr_0; // @[Core.scala 160:23]
  wire [4:0] IDecode_io_rs_addr_1; // @[Core.scala 160:23]
  wire  Execute_clock; // @[Core.scala 163:18]
  wire  Execute_reset; // @[Core.scala 163:18]
  wire [31:0] Execute_io_immediate; // @[Core.scala 163:18]
  wire [31:0] Execute_io_readData1; // @[Core.scala 163:18]
  wire [31:0] Execute_io_readData2; // @[Core.scala 163:18]
  wire [31:0] Execute_io_pcAddress; // @[Core.scala 163:18]
  wire [6:0] Execute_io_func7; // @[Core.scala 163:18]
  wire [2:0] Execute_io_func3; // @[Core.scala 163:18]
  wire [31:0] Execute_io_mem_result; // @[Core.scala 163:18]
  wire [31:0] Execute_io_wb_result; // @[Core.scala 163:18]
  wire  Execute_io_ex_mem_regWrite; // @[Core.scala 163:18]
  wire  Execute_io_mem_wb_regWrite; // @[Core.scala 163:18]
  wire [31:0] Execute_io_id_ex_ins; // @[Core.scala 163:18]
  wire [31:0] Execute_io_ex_mem_ins; // @[Core.scala 163:18]
  wire [31:0] Execute_io_mem_wb_ins; // @[Core.scala 163:18]
  wire  Execute_io_ctl_aluSrc; // @[Core.scala 163:18]
  wire [1:0] Execute_io_ctl_aluOp; // @[Core.scala 163:18]
  wire [1:0] Execute_io_ctl_aluSrc1; // @[Core.scala 163:18]
  wire [5:0] Execute_io_func6; // @[Core.scala 163:18]
  wire [2:0] Execute_io_v_ctl_aluop; // @[Core.scala 163:18]
  wire [3:0] Execute_io_v_ctl_exsel; // @[Core.scala 163:18]
  wire  Execute_io_v_ctl_regwrite; // @[Core.scala 163:18]
  wire  Execute_io_v_ctl_opBsel; // @[Core.scala 163:18]
  wire  Execute_io_v_ctl_v_load; // @[Core.scala 163:18]
  wire  Execute_io_v_ctl_v_ins; // @[Core.scala 163:18]
  wire  Execute_io_v_ctl_vset; // @[Core.scala 163:18]
  wire [127:0] Execute_io_vs1_data; // @[Core.scala 163:18]
  wire [127:0] Execute_io_vs2_data; // @[Core.scala 163:18]
  wire [31:0] Execute_io_vl; // @[Core.scala 163:18]
  wire [31:0] Execute_io_vstart; // @[Core.scala 163:18]
  wire [127:0] Execute_io_vd_data; // @[Core.scala 163:18]
  wire  Execute_io_vma; // @[Core.scala 163:18]
  wire  Execute_io_vta; // @[Core.scala 163:18]
  wire  Execute_io_vm; // @[Core.scala 163:18]
  wire [127:0] Execute_io_vs0; // @[Core.scala 163:18]
  wire [4:0] Execute_io_vd_addr; // @[Core.scala 163:18]
  wire [2:0] Execute_io_v_sew; // @[Core.scala 163:18]
  wire [31:0] Execute_io_zimm; // @[Core.scala 163:18]
  wire [31:0] Execute_io_v_addi_imm; // @[Core.scala 163:18]
  wire [127:0] Execute_io_vec_mem_res; // @[Core.scala 163:18]
  wire [127:0] Execute_io_vec_wb_res; // @[Core.scala 163:18]
  wire [4:0] Execute_io_fu_ex_reg_vd; // @[Core.scala 163:18]
  wire [4:0] Execute_io_fu_mem_reg_vd; // @[Core.scala 163:18]
  wire [4:0] Execute_io_fu_reg_vs1; // @[Core.scala 163:18]
  wire [4:0] Execute_io_fu_reg_vs2; // @[Core.scala 163:18]
  wire  Execute_io_fu_ex_reg_write; // @[Core.scala 163:18]
  wire  Execute_io_fu_mem_reg_write; // @[Core.scala 163:18]
  wire [127:0] Execute_io_vec_alu_res; // @[Core.scala 163:18]
  wire [31:0] Execute_io_vec_vl; // @[Core.scala 163:18]
  wire [4:0] Execute_io_vec_rd_out; // @[Core.scala 163:18]
  wire [31:0] Execute_io_vec_avl_o; // @[Core.scala 163:18]
  wire [31:0] Execute_io_vec_valmax_o; // @[Core.scala 163:18]
  wire [31:0] Execute_io_writeData; // @[Core.scala 163:18]
  wire [31:0] Execute_io_ALUresult; // @[Core.scala 163:18]
  wire  Execute_io_stall; // @[Core.scala 163:18]
  wire  MEM_clock; // @[Core.scala 165:19]
  wire  MEM_reset; // @[Core.scala 165:19]
  wire [31:0] MEM_io_aluResultIn; // @[Core.scala 165:19]
  wire [31:0] MEM_io_writeData; // @[Core.scala 165:19]
  wire  MEM_io_writeEnable; // @[Core.scala 165:19]
  wire  MEM_io_readEnable; // @[Core.scala 165:19]
  wire [31:0] MEM_io_readData; // @[Core.scala 165:19]
  wire [2:0] MEM_io_f3; // @[Core.scala 165:19]
  wire  MEM_io_dccmReq_valid; // @[Core.scala 165:19]
  wire [31:0] MEM_io_dccmReq_bits_addrRequest; // @[Core.scala 165:19]
  wire [31:0] MEM_io_dccmReq_bits_dataRequest; // @[Core.scala 165:19]
  wire [3:0] MEM_io_dccmReq_bits_activeByteLane; // @[Core.scala 165:19]
  wire  MEM_io_dccmReq_bits_isWrite; // @[Core.scala 165:19]
  wire  MEM_io_dccmRsp_valid; // @[Core.scala 165:19]
  wire [31:0] MEM_io_dccmRsp_bits_dataResponse; // @[Core.scala 165:19]
  wire  pc_clock; // @[Core.scala 173:18]
  wire  pc_reset; // @[Core.scala 173:18]
  wire [31:0] pc_io_in; // @[Core.scala 173:18]
  wire  pc_io_halt; // @[Core.scala 173:18]
  wire [31:0] pc_io_out; // @[Core.scala 173:18]
  wire [31:0] pc_io_pc4; // @[Core.scala 173:18]
  wire [31:0] pc_io_pc2; // @[Core.scala 173:18]
  wire  Realigner_clock; // @[Core.scala 351:20]
  wire  Realigner_reset; // @[Core.scala 351:20]
  wire [31:0] Realigner_io_ral_address_i; // @[Core.scala 351:20]
  wire [31:0] Realigner_io_ral_instruction_i; // @[Core.scala 351:20]
  wire  Realigner_io_ral_jmp; // @[Core.scala 351:20]
  wire [31:0] Realigner_io_ral_address_o; // @[Core.scala 351:20]
  wire [31:0] Realigner_io_ral_instruction_o; // @[Core.scala 351:20]
  wire  Realigner_io_ral_halt_o; // @[Core.scala 351:20]
  wire [31:0] CompressedDecoder_io_instruction_i; // @[Core.scala 365:20]
  wire  CompressedDecoder_io_is_comp; // @[Core.scala 365:20]
  wire [31:0] CompressedDecoder_io_instruction_o; // @[Core.scala 365:20]
  reg [31:0] if_reg_pc; // @[Core.scala 36:26]
  reg [31:0] if_reg_ins; // @[Core.scala 37:27]
  reg [3:0] if_reg_lmul_v; // @[Core.scala 40:30]
  reg [31:0] id_reg_pc; // @[Core.scala 43:26]
  reg [31:0] id_reg_rd1; // @[Core.scala 44:27]
  reg [31:0] id_reg_rd2; // @[Core.scala 45:27]
  reg [31:0] id_reg_imm; // @[Core.scala 46:27]
  reg [4:0] id_reg_wra; // @[Core.scala 47:27]
  reg [6:0] id_reg_f7; // @[Core.scala 48:26]
  reg [2:0] id_reg_f3; // @[Core.scala 50:26]
  reg [31:0] id_reg_ins; // @[Core.scala 51:27]
  reg  id_reg_ctl_aluSrc; // @[Core.scala 52:34]
  reg [1:0] id_reg_ctl_aluSrc1; // @[Core.scala 53:35]
  reg [1:0] id_reg_ctl_memToReg; // @[Core.scala 54:36]
  reg  id_reg_ctl_regWrite; // @[Core.scala 55:36]
  reg  id_reg_ctl_memRead; // @[Core.scala 56:35]
  reg  id_reg_ctl_memWrite; // @[Core.scala 57:36]
  reg [1:0] id_reg_ctl_aluOp; // @[Core.scala 59:33]
  reg  id_reg_is_csr; // @[Core.scala 61:30]
  reg [31:0] id_reg_csr_data; // @[Core.scala 62:32]
  reg [10:0] id_reg_z_imm; // @[Core.scala 67:29]
  reg [31:0] id_reg_vstart_out; // @[Core.scala 69:34]
  reg [31:0] id_reg_vtype; // @[Core.scala 70:29]
  reg [31:0] id_reg_v_addi_imm; // @[Core.scala 71:34]
  reg [127:0] id_reg_v0_data; // @[Core.scala 72:31]
  reg [127:0] id_reg_v1_data; // @[Core.scala 73:31]
  reg [127:0] id_reg_v2_data; // @[Core.scala 74:31]
  reg [127:0] id_reg_vd_data; // @[Core.scala 75:31]
  reg [4:0] id_reg_vs1_addr; // @[Core.scala 76:32]
  reg [4:0] id_reg_vs2_addr; // @[Core.scala 77:32]
  reg [4:0] id_reg_vd_addr; // @[Core.scala 78:31]
  reg [3:0] id_reg_lmul_v; // @[Core.scala 79:30]
  reg  id_reg_ctl_RegWrite; // @[Core.scala 84:36]
  reg  id_reg_ctl_opBsel; // @[Core.scala 87:34]
  reg [3:0] id_reg_ctl_Ex_sel; // @[Core.scala 88:34]
  reg [4:0] id_reg_ctl_aluop; // @[Core.scala 90:33]
  reg  id_reg_ctl_vset; // @[Core.scala 91:32]
  reg  id_reg_ctl_v_load; // @[Core.scala 92:34]
  reg  id_reg_ctl_v_ins; // @[Core.scala 93:33]
  reg [31:0] ex_reg_result; // @[Core.scala 102:30]
  reg [31:0] ex_reg_wd; // @[Core.scala 103:26]
  reg [4:0] ex_reg_wra; // @[Core.scala 104:27]
  reg [31:0] ex_reg_ins; // @[Core.scala 105:27]
  reg [1:0] ex_reg_ctl_memToReg; // @[Core.scala 106:36]
  reg  ex_reg_ctl_regWrite; // @[Core.scala 107:36]
  reg  ex_reg_ctl_memRead; // @[Core.scala 108:35]
  reg  ex_reg_ctl_memWrite; // @[Core.scala 109:36]
  reg [31:0] ex_reg_pc; // @[Core.scala 111:26]
  reg  ex_reg_is_csr; // @[Core.scala 112:30]
  reg [31:0] ex_reg_csr_data; // @[Core.scala 113:32]
  reg [127:0] ex_reg_vec_alu_res; // @[Core.scala 116:35]
  reg [31:0] ex_reg_vl; // @[Core.scala 118:26]
  reg [4:0] ex_reg_vd_addr; // @[Core.scala 125:31]
  reg [3:0] ex_reg_lmul_v; // @[Core.scala 126:30]
  reg  ex_reg_vset; // @[Core.scala 128:28]
  reg  ex_reg_reg_write; // @[Core.scala 129:33]
  reg [10:0] ex_reg_vtype; // @[Core.scala 130:29]
  reg [31:0] mem_reg_ins; // @[Core.scala 134:28]
  reg [31:0] mem_reg_result; // @[Core.scala 135:31]
  reg [4:0] mem_reg_wra; // @[Core.scala 137:28]
  reg [1:0] mem_reg_ctl_memToReg; // @[Core.scala 138:37]
  reg  mem_reg_ctl_regWrite; // @[Core.scala 139:37]
  reg [31:0] mem_reg_pc; // @[Core.scala 140:27]
  reg  mem_reg_is_csr; // @[Core.scala 141:31]
  reg [31:0] mem_reg_csr_data; // @[Core.scala 142:33]
  reg [127:0] mem_reg_vec_alu_out; // @[Core.scala 145:36]
  reg [31:0] mem_reg_vec_vl; // @[Core.scala 146:31]
  reg [10:0] mem_reg_vtype; // @[Core.scala 147:30]
  reg [4:0] mem_reg_vec_vd_addr; // @[Core.scala 151:36]
  reg [3:0] mem_reg_lmul_v; // @[Core.scala 153:31]
  reg  mem_reg_vset; // @[Core.scala 154:29]
  reg  mem_reg_vec_reg_write; // @[Core.scala 155:38]
  reg [2:0] lmul; // @[Core.scala 188:19]
  wire [31:0] instruction = CompressedDecoder_io_instruction_o; // @[Core.scala 178:25 Core.scala 368:18]
  wire  _T_1 = instruction[6:0] == 7'h57; // @[Core.scala 189:22]
  wire  _T_3 = instruction[14:12] == 3'h7; // @[Core.scala 189:59]
  wire [31:0] _GEN_1 = lmul == 3'h3 ? 32'h7 : 32'h0; // @[Core.scala 213:32 Core.scala 214:21]
  wire [31:0] _GEN_2 = lmul == 3'h2 ? 32'h3 : _GEN_1; // @[Core.scala 209:32 Core.scala 210:21]
  wire [31:0] _GEN_3 = lmul == 3'h1 ? 32'h1 : _GEN_2; // @[Core.scala 205:32 Core.scala 206:21]
  reg [31:0] lmul_reg; // @[Core.scala 224:25]
  wire [31:0] vlmul_count = lmul == 3'h0 ? 32'h0 : _GEN_3; // @[Core.scala 201:27 Core.scala 202:21]
  wire  _T_22 = lmul_reg != vlmul_count & _T_1 & instruction[14:12] != 3'h7; // @[Core.scala 225:70]
  wire [31:0] _T_24 = lmul_reg + 32'h1; // @[Core.scala 227:30]
  wire [31:0] _T_26 = mem_reg_vset ? $signed(mem_reg_vec_vl) : $signed(IDecode_io_vl_out); // @[Core.scala 283:43]
  wire  _T_31 = mem_reg_vset ? mem_reg_vtype[7] : IDecode_io_vtypei_out[7]; // @[Core.scala 286:50]
  wire  _T_36 = mem_reg_vset ? mem_reg_vtype[6] : IDecode_io_vtypei_out[6]; // @[Core.scala 287:50]
  wire [2:0] _T_43 = mem_reg_vset ? mem_reg_vtype[5:3] : IDecode_io_vtypei_out[5:3]; // @[Core.scala 291:55]
  wire [6:0] _GEN_8 = instruction[6:0] == 7'h33 ? instruction[31:25] : 7'h0; // @[Core.scala 382:42 Core.scala 383:11 Core.scala 385:11]
  wire [5:0] func7 = _GEN_8[5:0]; // @[Core.scala 381:19]
  wire  IF_stall = func7 == 6'h1 & (instruction[14:12] == 3'h4 | instruction[14:12] == 3'h5 | instruction[14:12] == 3'h6
     | _T_3); // @[Core.scala 388:32]
  wire  ral_halt_o = Realigner_io_ral_halt_o;
  wire [31:0] next_pc_selector = {{31'd0}, _T_22};
  wire  is_comp = CompressedDecoder_io_is_comp;
  wire [31:0] _T_68 = is_comp ? $signed(pc_io_pc2) : $signed(pc_io_pc4); // @[Core.scala 395:113]
  wire [31:0] _T_69 = IDecode_io_pcSrc ? $signed(IDecode_io_pcPlusOffset) : $signed(_T_68); // @[Core.scala 395:73]
  wire [31:0] _T_70 = IDecode_io_hdu_pcWrite ? $signed(_T_69) : $signed(pc_io_out); // @[Core.scala 395:53]
  wire [31:0] _T_82 = mem_reg_pc + 32'h4; // @[Core.scala 618:28]
  wire [31:0] _GEN_14 = mem_reg_ctl_memToReg == 2'h2 ? _T_82 : mem_reg_result; // @[Core.scala 617:44 Core.scala 618:15 Core.scala 622:15]
  reg [31:0] REG__0; // @[Core.scala 642:23]
  reg [31:0] REG__1; // @[Core.scala 642:23]
  reg [31:0] REG__2; // @[Core.scala 642:23]
  reg [31:0] REG__3; // @[Core.scala 642:23]
  reg [4:0] REG_1_0; // @[Core.scala 643:53]
  reg [4:0] REG_1_1; // @[Core.scala 643:53]
  reg [4:0] REG_1_2; // @[Core.scala 643:53]
  reg [4:0] REG_2_0; // @[Core.scala 643:53]
  reg [4:0] REG_2_1; // @[Core.scala 643:53]
  reg [4:0] REG_2_2; // @[Core.scala 643:53]
  reg [31:0] REG_3_0; // @[Core.scala 644:53]
  reg [31:0] REG_3_1; // @[Core.scala 644:53]
  reg [31:0] REG_4_0; // @[Core.scala 644:53]
  reg [31:0] REG_4_1; // @[Core.scala 644:53]
  reg [31:0] REG_5; // @[Core.scala 645:31]
  reg [31:0] REG_6; // @[Core.scala 646:32]
  reg  REG_7_0; // @[Core.scala 647:25]
  reg  REG_7_1; // @[Core.scala 647:25]
  reg  REG_7_2; // @[Core.scala 647:25]
  reg  REG_7_3; // @[Core.scala 647:25]
  InstructionFetch InstructionFetch ( // @[Core.scala 158:18]
    .reset(InstructionFetch_reset),
    .io_address(InstructionFetch_io_address),
    .io_instruction(InstructionFetch_io_instruction),
    .io_stall(InstructionFetch_io_stall),
    .io_coreInstrReq_ready(InstructionFetch_io_coreInstrReq_ready),
    .io_coreInstrReq_valid(InstructionFetch_io_coreInstrReq_valid),
    .io_coreInstrReq_bits_addrRequest(InstructionFetch_io_coreInstrReq_bits_addrRequest),
    .io_coreInstrReq_bits_dataRequest(InstructionFetch_io_coreInstrReq_bits_dataRequest),
    .io_coreInstrReq_bits_activeByteLane(InstructionFetch_io_coreInstrReq_bits_activeByteLane),
    .io_coreInstrReq_bits_isWrite(InstructionFetch_io_coreInstrReq_bits_isWrite),
    .io_coreInstrResp_ready(InstructionFetch_io_coreInstrResp_ready),
    .io_coreInstrResp_valid(InstructionFetch_io_coreInstrResp_valid),
    .io_coreInstrResp_bits_dataResponse(InstructionFetch_io_coreInstrResp_bits_dataResponse)
  );
  InstructionDecode IDecode ( // @[Core.scala 160:23]
    .clock(IDecode_clock),
    .reset(IDecode_reset),
    .io_id_instruction(IDecode_io_id_instruction),
    .io_writeData(IDecode_io_writeData),
    .io_writeReg(IDecode_io_writeReg),
    .io_pcAddress(IDecode_io_pcAddress),
    .io_ctl_writeEnable(IDecode_io_ctl_writeEnable),
    .io_id_ex_mem_read(IDecode_io_id_ex_mem_read),
    .io_ex_mem_mem_read(IDecode_io_ex_mem_mem_read),
    .io_dmem_resp_valid(IDecode_io_dmem_resp_valid),
    .io_id_ex_rd(IDecode_io_id_ex_rd),
    .io_ex_mem_rd(IDecode_io_ex_mem_rd),
    .io_id_ex_branch(IDecode_io_id_ex_branch),
    .io_ex_mem_ins(IDecode_io_ex_mem_ins),
    .io_mem_wb_ins(IDecode_io_mem_wb_ins),
    .io_ex_ins(IDecode_io_ex_ins),
    .io_ex_result(IDecode_io_ex_result),
    .io_ex_mem_result(IDecode_io_ex_mem_result),
    .io_mem_wb_result(IDecode_io_mem_wb_result),
    .io_id_ex_regWr(IDecode_io_id_ex_regWr),
    .io_ex_mem_regWr(IDecode_io_ex_mem_regWr),
    .io_csr_Ex(IDecode_io_csr_Ex),
    .io_csr_Mem(IDecode_io_csr_Mem),
    .io_csr_Wb(IDecode_io_csr_Wb),
    .io_csr_Ex_data(IDecode_io_csr_Ex_data),
    .io_csr_Mem_data(IDecode_io_csr_Mem_data),
    .io_csr_Wb_data(IDecode_io_csr_Wb_data),
    .io_dmem_data(IDecode_io_dmem_data),
    .io_immediate(IDecode_io_immediate),
    .io_writeRegAddress(IDecode_io_writeRegAddress),
    .io_readData1(IDecode_io_readData1),
    .io_readData2(IDecode_io_readData2),
    .io_func7(IDecode_io_func7),
    .io_func3(IDecode_io_func3),
    .io_func6(IDecode_io_func6),
    .io_ctl_aluSrc(IDecode_io_ctl_aluSrc),
    .io_ctl_memToReg(IDecode_io_ctl_memToReg),
    .io_ctl_regWrite(IDecode_io_ctl_regWrite),
    .io_ctl_memRead(IDecode_io_ctl_memRead),
    .io_ctl_memWrite(IDecode_io_ctl_memWrite),
    .io_ctl_branch(IDecode_io_ctl_branch),
    .io_ctl_aluOp(IDecode_io_ctl_aluOp),
    .io_ctl_jump(IDecode_io_ctl_jump),
    .io_ctl_v_RegWrite(IDecode_io_ctl_v_RegWrite),
    .io_ctl_v_opBsel(IDecode_io_ctl_v_opBsel),
    .io_ctl_v_Ex_sel(IDecode_io_ctl_v_Ex_sel),
    .io_ctl_v_aluop(IDecode_io_ctl_v_aluop),
    .io_ctl_v_vset(IDecode_io_ctl_v_vset),
    .io_ctl_v_load(IDecode_io_ctl_v_load),
    .io_ctl_v_ins(IDecode_io_ctl_v_ins),
    .io_write_data(IDecode_io_write_data),
    .io_wb_addr(IDecode_io_wb_addr),
    .io_wb_RegWrite(IDecode_io_wb_RegWrite),
    .io_id_lmul_count(IDecode_io_id_lmul_count),
    .io_id_lmul_vs1in_vs2in(IDecode_io_id_lmul_vs1in_vs2in),
    .io_vs0_data(IDecode_io_vs0_data),
    .io_vs1_data(IDecode_io_vs1_data),
    .io_vs2_data(IDecode_io_vs2_data),
    .io_reg_write(IDecode_io_reg_write),
    .io_vs1_addr(IDecode_io_vs1_addr),
    .io_vs2_addr(IDecode_io_vs2_addr),
    .io_vd_addr(IDecode_io_vd_addr),
    .io_vd_data(IDecode_io_vd_data),
    .io_v_z_imm(IDecode_io_v_z_imm),
    .io_v_addi_imm(IDecode_io_v_addi_imm),
    .io_vtypei(IDecode_io_vtypei),
    .io_vtypei_out(IDecode_io_vtypei_out),
    .io_vl(IDecode_io_vl),
    .io_ctl_vset(IDecode_io_ctl_vset),
    .io_vl_out(IDecode_io_vl_out),
    .io_vstart_out(IDecode_io_vstart_out),
    .io_ctl_aluSrc1(IDecode_io_ctl_aluSrc1),
    .io_hdu_pcWrite(IDecode_io_hdu_pcWrite),
    .io_hdu_if_reg_write(IDecode_io_hdu_if_reg_write),
    .io_pcSrc(IDecode_io_pcSrc),
    .io_pcPlusOffset(IDecode_io_pcPlusOffset),
    .io_ifid_flush(IDecode_io_ifid_flush),
    .io_stall(IDecode_io_stall),
    .io_csr_i_misa(IDecode_io_csr_i_misa),
    .io_csr_i_mhartid(IDecode_io_csr_i_mhartid),
    .io_csr_o_data(IDecode_io_csr_o_data),
    .io_is_csr(IDecode_io_is_csr),
    .io_fscr_o_data(IDecode_io_fscr_o_data),
    .io_rs_addr_0(IDecode_io_rs_addr_0),
    .io_rs_addr_1(IDecode_io_rs_addr_1)
  );
  Execute Execute ( // @[Core.scala 163:18]
    .clock(Execute_clock),
    .reset(Execute_reset),
    .io_immediate(Execute_io_immediate),
    .io_readData1(Execute_io_readData1),
    .io_readData2(Execute_io_readData2),
    .io_pcAddress(Execute_io_pcAddress),
    .io_func7(Execute_io_func7),
    .io_func3(Execute_io_func3),
    .io_mem_result(Execute_io_mem_result),
    .io_wb_result(Execute_io_wb_result),
    .io_ex_mem_regWrite(Execute_io_ex_mem_regWrite),
    .io_mem_wb_regWrite(Execute_io_mem_wb_regWrite),
    .io_id_ex_ins(Execute_io_id_ex_ins),
    .io_ex_mem_ins(Execute_io_ex_mem_ins),
    .io_mem_wb_ins(Execute_io_mem_wb_ins),
    .io_ctl_aluSrc(Execute_io_ctl_aluSrc),
    .io_ctl_aluOp(Execute_io_ctl_aluOp),
    .io_ctl_aluSrc1(Execute_io_ctl_aluSrc1),
    .io_func6(Execute_io_func6),
    .io_v_ctl_aluop(Execute_io_v_ctl_aluop),
    .io_v_ctl_exsel(Execute_io_v_ctl_exsel),
    .io_v_ctl_regwrite(Execute_io_v_ctl_regwrite),
    .io_v_ctl_opBsel(Execute_io_v_ctl_opBsel),
    .io_v_ctl_v_load(Execute_io_v_ctl_v_load),
    .io_v_ctl_v_ins(Execute_io_v_ctl_v_ins),
    .io_v_ctl_vset(Execute_io_v_ctl_vset),
    .io_vs1_data(Execute_io_vs1_data),
    .io_vs2_data(Execute_io_vs2_data),
    .io_vl(Execute_io_vl),
    .io_vstart(Execute_io_vstart),
    .io_vd_data(Execute_io_vd_data),
    .io_vma(Execute_io_vma),
    .io_vta(Execute_io_vta),
    .io_vm(Execute_io_vm),
    .io_vs0(Execute_io_vs0),
    .io_vd_addr(Execute_io_vd_addr),
    .io_v_sew(Execute_io_v_sew),
    .io_zimm(Execute_io_zimm),
    .io_v_addi_imm(Execute_io_v_addi_imm),
    .io_vec_mem_res(Execute_io_vec_mem_res),
    .io_vec_wb_res(Execute_io_vec_wb_res),
    .io_fu_ex_reg_vd(Execute_io_fu_ex_reg_vd),
    .io_fu_mem_reg_vd(Execute_io_fu_mem_reg_vd),
    .io_fu_reg_vs1(Execute_io_fu_reg_vs1),
    .io_fu_reg_vs2(Execute_io_fu_reg_vs2),
    .io_fu_ex_reg_write(Execute_io_fu_ex_reg_write),
    .io_fu_mem_reg_write(Execute_io_fu_mem_reg_write),
    .io_vec_alu_res(Execute_io_vec_alu_res),
    .io_vec_vl(Execute_io_vec_vl),
    .io_vec_rd_out(Execute_io_vec_rd_out),
    .io_vec_avl_o(Execute_io_vec_avl_o),
    .io_vec_valmax_o(Execute_io_vec_valmax_o),
    .io_writeData(Execute_io_writeData),
    .io_ALUresult(Execute_io_ALUresult),
    .io_stall(Execute_io_stall)
  );
  MemoryFetch MEM ( // @[Core.scala 165:19]
    .clock(MEM_clock),
    .reset(MEM_reset),
    .io_aluResultIn(MEM_io_aluResultIn),
    .io_writeData(MEM_io_writeData),
    .io_writeEnable(MEM_io_writeEnable),
    .io_readEnable(MEM_io_readEnable),
    .io_readData(MEM_io_readData),
    .io_f3(MEM_io_f3),
    .io_dccmReq_valid(MEM_io_dccmReq_valid),
    .io_dccmReq_bits_addrRequest(MEM_io_dccmReq_bits_addrRequest),
    .io_dccmReq_bits_dataRequest(MEM_io_dccmReq_bits_dataRequest),
    .io_dccmReq_bits_activeByteLane(MEM_io_dccmReq_bits_activeByteLane),
    .io_dccmReq_bits_isWrite(MEM_io_dccmReq_bits_isWrite),
    .io_dccmRsp_valid(MEM_io_dccmRsp_valid),
    .io_dccmRsp_bits_dataResponse(MEM_io_dccmRsp_bits_dataResponse)
  );
  PC pc ( // @[Core.scala 173:18]
    .clock(pc_clock),
    .reset(pc_reset),
    .io_in(pc_io_in),
    .io_halt(pc_io_halt),
    .io_out(pc_io_out),
    .io_pc4(pc_io_pc4),
    .io_pc2(pc_io_pc2)
  );
  Realigner Realigner ( // @[Core.scala 351:20]
    .clock(Realigner_clock),
    .reset(Realigner_reset),
    .io_ral_address_i(Realigner_io_ral_address_i),
    .io_ral_instruction_i(Realigner_io_ral_instruction_i),
    .io_ral_jmp(Realigner_io_ral_jmp),
    .io_ral_address_o(Realigner_io_ral_address_o),
    .io_ral_instruction_o(Realigner_io_ral_instruction_o),
    .io_ral_halt_o(Realigner_io_ral_halt_o)
  );
  CompressedDecoder CompressedDecoder ( // @[Core.scala 365:20]
    .io_instruction_i(CompressedDecoder_io_instruction_i),
    .io_is_comp(CompressedDecoder_io_is_comp),
    .io_instruction_o(CompressedDecoder_io_instruction_o)
  );
  assign io_pin = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_14; // @[Core.scala 614:38 Core.scala 615:13]
  assign io_Vpin = IDecode_io_vd_data; // @[Core.scala 636:25]
  assign io_dmemReq_valid = MEM_io_dccmReq_valid; // @[Core.scala 559:14]
  assign io_dmemReq_bits_addrRequest = MEM_io_dccmReq_bits_addrRequest; // @[Core.scala 559:14]
  assign io_dmemReq_bits_dataRequest = MEM_io_dccmReq_bits_dataRequest; // @[Core.scala 559:14]
  assign io_dmemReq_bits_activeByteLane = MEM_io_dccmReq_bits_activeByteLane; // @[Core.scala 559:14]
  assign io_dmemReq_bits_isWrite = MEM_io_dccmReq_bits_isWrite; // @[Core.scala 559:14]
  assign io_imemReq_valid = InstructionFetch_io_coreInstrReq_valid; // @[Core.scala 175:14]
  assign io_imemReq_bits_addrRequest = InstructionFetch_io_coreInstrReq_bits_addrRequest; // @[Core.scala 175:14]
  assign io_imemReq_bits_dataRequest = InstructionFetch_io_coreInstrReq_bits_dataRequest; // @[Core.scala 175:14]
  assign io_imemReq_bits_activeByteLane = InstructionFetch_io_coreInstrReq_bits_activeByteLane; // @[Core.scala 175:14]
  assign io_imemReq_bits_isWrite = InstructionFetch_io_coreInstrReq_bits_isWrite; // @[Core.scala 175:14]
  assign io_rvfiUInt_0 = mem_reg_pc; // @[Core.scala 688:19]
  assign io_rvfiUInt_1 = REG__3; // @[Core.scala 688:19]
  assign io_rvfiUInt_2 = mem_reg_ins; // @[Core.scala 688:19]
  assign io_rvfiUInt_3 = REG_5; // @[Core.scala 688:19]
  assign io_rvfiSInt_0 = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_14; // @[Core.scala 682:36]
  assign io_rvfiSInt_1 = REG_3_1; // @[Core.scala 657:30]
  assign io_rvfiSInt_2 = REG_4_1; // @[Core.scala 657:30]
  assign io_rvfiSInt_3 = MEM_io_readData; // @[Core.scala 683:44]
  assign io_rvfiSInt_4 = REG_6; // @[Core.scala 688:19]
  assign io_rvfiBool_0 = REG_7_3; // @[Core.scala 688:19]
  assign io_rvfiRegAddr_0 = mem_reg_wra; // @[Core.scala 614:38 Core.scala 616:13]
  assign io_rvfiRegAddr_1 = REG_1_2; // @[Core.scala 654:33]
  assign io_rvfiRegAddr_2 = REG_2_2; // @[Core.scala 654:33]
  assign io_fcsr_o_data = IDecode_io_fscr_o_data; // @[Core.scala 167:18]
  assign InstructionFetch_reset = reset;
  assign InstructionFetch_io_address = Realigner_io_ral_address_o; // @[Core.scala 357:26]
  assign InstructionFetch_io_stall = Execute_io_stall | IDecode_io_stall | IF_stall; // @[Core.scala 390:48]
  assign InstructionFetch_io_coreInstrReq_ready = 1'h1; // @[Core.scala 175:14]
  assign InstructionFetch_io_coreInstrResp_valid = io_imemRsp_valid; // @[Core.scala 176:20]
  assign InstructionFetch_io_coreInstrResp_bits_dataResponse = io_imemRsp_bits_dataResponse; // @[Core.scala 176:20]
  assign IDecode_clock = clock;
  assign IDecode_reset = reset;
  assign IDecode_io_id_instruction = if_reg_ins; // @[Core.scala 458:21]
  assign IDecode_io_writeData = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_14; // @[Core.scala 614:38 Core.scala 615:13]
  assign IDecode_io_writeReg = mem_reg_wra; // @[Core.scala 614:38 Core.scala 616:13]
  assign IDecode_io_pcAddress = if_reg_pc; // @[Core.scala 459:16]
  assign IDecode_io_ctl_writeEnable = mem_reg_ctl_regWrite; // @[Core.scala 631:22]
  assign IDecode_io_id_ex_mem_read = id_reg_ctl_memRead; // @[Core.scala 532:21]
  assign IDecode_io_ex_mem_mem_read = ex_reg_ctl_memRead; // @[Core.scala 533:22]
  assign IDecode_io_dmem_resp_valid = io_dmemRsp_valid; // @[Core.scala 460:22]
  assign IDecode_io_id_ex_rd = id_reg_ins[11:7]; // @[Core.scala 540:28]
  assign IDecode_io_ex_mem_rd = ex_reg_ins[11:7]; // @[Core.scala 542:29]
  assign IDecode_io_id_ex_branch = id_reg_ins[6:0] == 7'h63; // @[Core.scala 541:42]
  assign IDecode_io_ex_mem_ins = ex_reg_ins; // @[Core.scala 464:17]
  assign IDecode_io_mem_wb_ins = mem_reg_ins; // @[Core.scala 465:17]
  assign IDecode_io_ex_ins = id_reg_ins; // @[Core.scala 463:13]
  assign IDecode_io_ex_result = Execute_io_ALUresult; // @[Core.scala 543:16]
  assign IDecode_io_ex_mem_result = ex_reg_result; // @[Core.scala 466:20]
  assign IDecode_io_mem_wb_result = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_14; // @[Core.scala 614:38 Core.scala 615:13]
  assign IDecode_io_id_ex_regWr = id_reg_ctl_regWrite; // @[Core.scala 470:18]
  assign IDecode_io_ex_mem_regWr = ex_reg_ctl_regWrite; // @[Core.scala 471:19]
  assign IDecode_io_csr_Ex = id_reg_is_csr; // @[Core.scala 544:13]
  assign IDecode_io_csr_Mem = ex_reg_is_csr; // @[Core.scala 604:14]
  assign IDecode_io_csr_Wb = mem_reg_is_csr; // @[Core.scala 632:13]
  assign IDecode_io_csr_Ex_data = id_reg_csr_data; // @[Core.scala 545:18]
  assign IDecode_io_csr_Mem_data = ex_reg_csr_data; // @[Core.scala 605:19]
  assign IDecode_io_csr_Wb_data = mem_reg_csr_data; // @[Core.scala 633:18]
  assign IDecode_io_dmem_data = io_dmemRsp_bits_dataResponse; // @[Core.scala 634:16]
  assign IDecode_io_write_data = mem_reg_vec_alu_out; // @[Core.scala 340:17]
  assign IDecode_io_wb_addr = mem_reg_vec_vd_addr; // @[Core.scala 337:14]
  assign IDecode_io_wb_RegWrite = mem_reg_vec_reg_write; // @[Core.scala 336:18]
  assign IDecode_io_id_lmul_count = mem_reg_lmul_v; // @[Core.scala 338:20]
  assign IDecode_io_id_lmul_vs1in_vs2in = if_reg_lmul_v; // @[Core.scala 263:28]
  assign IDecode_io_vtypei = mem_reg_vtype; // @[Core.scala 343:13]
  assign IDecode_io_vl = mem_reg_vec_vl; // @[Core.scala 342:9]
  assign IDecode_io_ctl_vset = mem_reg_vset; // @[Core.scala 341:15]
  assign IDecode_io_csr_i_misa = 32'h0;
  assign IDecode_io_csr_i_mhartid = 32'h0;
  assign Execute_clock = clock;
  assign Execute_reset = reset;
  assign Execute_io_immediate = id_reg_imm; // @[Core.scala 481:16]
  assign Execute_io_readData1 = id_reg_rd1; // @[Core.scala 482:16]
  assign Execute_io_readData2 = id_reg_rd2; // @[Core.scala 483:16]
  assign Execute_io_pcAddress = id_reg_pc; // @[Core.scala 484:16]
  assign Execute_io_func7 = id_reg_f7; // @[Core.scala 486:12]
  assign Execute_io_func3 = id_reg_f3; // @[Core.scala 485:12]
  assign Execute_io_mem_result = ex_reg_result; // @[Core.scala 603:17]
  assign Execute_io_wb_result = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_14; // @[Core.scala 614:38 Core.scala 615:13]
  assign Execute_io_ex_mem_regWrite = ex_reg_ctl_regWrite; // @[Core.scala 597:22]
  assign Execute_io_mem_wb_regWrite = mem_reg_ctl_regWrite; // @[Core.scala 629:22]
  assign Execute_io_id_ex_ins = id_reg_ins; // @[Core.scala 537:16]
  assign Execute_io_ex_mem_ins = ex_reg_ins; // @[Core.scala 538:17]
  assign Execute_io_mem_wb_ins = mem_reg_ins; // @[Core.scala 539:17]
  assign Execute_io_ctl_aluSrc = id_reg_ctl_aluSrc; // @[Core.scala 487:17]
  assign Execute_io_ctl_aluOp = id_reg_ctl_aluOp; // @[Core.scala 488:16]
  assign Execute_io_ctl_aluSrc1 = id_reg_ctl_aluSrc1; // @[Core.scala 489:18]
  assign Execute_io_func6 = id_reg_ins[31:26]; // @[Core.scala 272:25]
  assign Execute_io_v_ctl_aluop = id_reg_ctl_aluop[2:0]; // @[Core.scala 273:18]
  assign Execute_io_v_ctl_exsel = id_reg_ctl_Ex_sel; // @[Core.scala 274:18]
  assign Execute_io_v_ctl_regwrite = id_reg_ctl_RegWrite; // @[Core.scala 275:21]
  assign Execute_io_v_ctl_opBsel = id_reg_ctl_opBsel; // @[Core.scala 276:19]
  assign Execute_io_v_ctl_v_load = id_reg_ctl_v_load; // @[Core.scala 277:19]
  assign Execute_io_v_ctl_v_ins = id_reg_ctl_v_ins; // @[Core.scala 278:18]
  assign Execute_io_v_ctl_vset = id_reg_ctl_vset; // @[Core.scala 279:17]
  assign Execute_io_vs1_data = id_reg_v1_data; // @[Core.scala 281:15]
  assign Execute_io_vs2_data = id_reg_v2_data; // @[Core.scala 282:15]
  assign Execute_io_vl = ex_reg_vset ? $signed(ex_reg_vl) : $signed(_T_26); // @[Core.scala 283:15]
  assign Execute_io_vstart = id_reg_vstart_out; // @[Core.scala 284:13]
  assign Execute_io_vd_data = id_reg_vd_data; // @[Core.scala 285:14]
  assign Execute_io_vma = ex_reg_vset ? ex_reg_vtype[7] : _T_31; // @[Core.scala 286:16]
  assign Execute_io_vta = ex_reg_vset ? ex_reg_vtype[6] : _T_36; // @[Core.scala 287:16]
  assign Execute_io_vm = id_reg_ins[25]; // @[Core.scala 288:22]
  assign Execute_io_vs0 = id_reg_v0_data; // @[Core.scala 289:10]
  assign Execute_io_vd_addr = id_reg_ins[11:7]; // @[Core.scala 290:27]
  assign Execute_io_v_sew = ex_reg_vset ? ex_reg_vtype[5:3] : _T_43; // @[Core.scala 291:18]
  assign Execute_io_zimm = id_reg_vtype; // @[Core.scala 292:11]
  assign Execute_io_v_addi_imm = id_reg_v_addi_imm; // @[Core.scala 293:17]
  assign Execute_io_vec_mem_res = ex_reg_vec_alu_res; // @[Core.scala 318:18]
  assign Execute_io_vec_wb_res = mem_reg_vec_alu_out; // @[Core.scala 335:17]
  assign Execute_io_fu_ex_reg_vd = ex_reg_vd_addr; // @[Core.scala 297:19]
  assign Execute_io_fu_mem_reg_vd = mem_reg_vec_vd_addr; // @[Core.scala 298:20]
  assign Execute_io_fu_reg_vs1 = id_reg_vs1_addr; // @[Core.scala 295:17]
  assign Execute_io_fu_reg_vs2 = id_reg_vs2_addr; // @[Core.scala 296:17]
  assign Execute_io_fu_ex_reg_write = ex_reg_reg_write; // @[Core.scala 310:22]
  assign Execute_io_fu_mem_reg_write = mem_reg_vec_reg_write; // @[Core.scala 300:23]
  assign MEM_clock = clock;
  assign MEM_reset = reset;
  assign MEM_io_aluResultIn = ex_reg_result; // @[Core.scala 598:22]
  assign MEM_io_writeData = ex_reg_wd; // @[Core.scala 599:20]
  assign MEM_io_writeEnable = ex_reg_ctl_memWrite; // @[Core.scala 601:22]
  assign MEM_io_readEnable = ex_reg_ctl_memRead; // @[Core.scala 600:21]
  assign MEM_io_f3 = ex_reg_ins[14:12]; // @[Core.scala 602:26]
  assign MEM_io_dccmRsp_valid = io_dmemRsp_valid; // @[Core.scala 560:18]
  assign MEM_io_dccmRsp_bits_dataResponse = io_dmemRsp_bits_dataResponse; // @[Core.scala 560:18]
  assign pc_clock = clock;
  assign pc_reset = reset;
  assign pc_io_in = next_pc_selector == 32'h1 ? $signed(pc_io_out) : $signed(_T_70); // @[Core.scala 395:16]
  assign pc_io_halt = Execute_io_stall | IDecode_io_stall | IF_stall | ~io_imemReq_valid | ral_halt_o; // @[Core.scala 393:78]
  assign Realigner_clock = clock;
  assign Realigner_reset = reset;
  assign Realigner_io_ral_address_i = pc_io_in; // @[Core.scala 353:44]
  assign Realigner_io_ral_instruction_i = InstructionFetch_io_instruction; // @[Core.scala 354:26]
  assign Realigner_io_ral_jmp = IDecode_io_pcSrc; // @[Core.scala 355:26]
  assign CompressedDecoder_io_instruction_i = Realigner_io_ral_instruction_o; // @[Core.scala 367:22]
  always @(posedge clock) begin
    if (reset) begin // @[Core.scala 36:26]
      if_reg_pc <= 32'h0; // @[Core.scala 36:26]
    end else if (IDecode_io_hdu_if_reg_write) begin // @[Core.scala 398:29]
      if_reg_pc <= pc_io_out; // @[Core.scala 399:15]
    end
    if (reset) begin // @[Core.scala 37:27]
      if_reg_ins <= 32'h0; // @[Core.scala 37:27]
    end else if (IDecode_io_ifid_flush) begin // @[Core.scala 402:23]
      if_reg_ins <= 32'h0; // @[Core.scala 403:16]
    end else if (IDecode_io_hdu_if_reg_write) begin // @[Core.scala 398:29]
      if_reg_ins <= instruction; // @[Core.scala 400:16]
    end
    if (reset) begin // @[Core.scala 40:30]
      if_reg_lmul_v <= 4'h0; // @[Core.scala 40:30]
    end else begin
      if_reg_lmul_v <= lmul_reg[3:0];
    end
    if (reset) begin // @[Core.scala 43:26]
      id_reg_pc <= 32'h0; // @[Core.scala 43:26]
    end else begin
      id_reg_pc <= if_reg_pc; // @[Core.scala 419:13]
    end
    if (reset) begin // @[Core.scala 44:27]
      id_reg_rd1 <= 32'h0; // @[Core.scala 44:27]
    end else begin
      id_reg_rd1 <= IDecode_io_readData1; // @[Core.scala 411:14]
    end
    if (reset) begin // @[Core.scala 45:27]
      id_reg_rd2 <= 32'h0; // @[Core.scala 45:27]
    end else begin
      id_reg_rd2 <= IDecode_io_readData2; // @[Core.scala 412:14]
    end
    if (reset) begin // @[Core.scala 46:27]
      id_reg_imm <= 32'h0; // @[Core.scala 46:27]
    end else begin
      id_reg_imm <= IDecode_io_immediate; // @[Core.scala 413:14]
    end
    if (reset) begin // @[Core.scala 47:27]
      id_reg_wra <= 5'h0; // @[Core.scala 47:27]
    end else if (!(Execute_io_stall)) begin // @[Core.scala 550:17]
      id_reg_wra <= IDecode_io_writeRegAddress; // @[Core.scala 414:14]
    end
    if (reset) begin // @[Core.scala 48:26]
      id_reg_f7 <= 7'h0; // @[Core.scala 48:26]
    end else begin
      id_reg_f7 <= IDecode_io_func7; // @[Core.scala 417:13]
    end
    if (reset) begin // @[Core.scala 50:26]
      id_reg_f3 <= 3'h0; // @[Core.scala 50:26]
    end else begin
      id_reg_f3 <= IDecode_io_func3; // @[Core.scala 415:13]
    end
    if (reset) begin // @[Core.scala 51:27]
      id_reg_ins <= 32'h0; // @[Core.scala 51:27]
    end else begin
      id_reg_ins <= if_reg_ins; // @[Core.scala 418:14]
    end
    if (reset) begin // @[Core.scala 52:34]
      id_reg_ctl_aluSrc <= 1'h0; // @[Core.scala 52:34]
    end else begin
      id_reg_ctl_aluSrc <= IDecode_io_ctl_aluSrc; // @[Core.scala 420:21]
    end
    if (reset) begin // @[Core.scala 53:35]
      id_reg_ctl_aluSrc1 <= 2'h0; // @[Core.scala 53:35]
    end else begin
      id_reg_ctl_aluSrc1 <= IDecode_io_ctl_aluSrc1; // @[Core.scala 428:22]
    end
    if (reset) begin // @[Core.scala 54:36]
      id_reg_ctl_memToReg <= 2'h0; // @[Core.scala 54:36]
    end else begin
      id_reg_ctl_memToReg <= IDecode_io_ctl_memToReg; // @[Core.scala 421:23]
    end
    if (reset) begin // @[Core.scala 55:36]
      id_reg_ctl_regWrite <= 1'h0; // @[Core.scala 55:36]
    end else if (!(Execute_io_stall)) begin // @[Core.scala 550:17]
      id_reg_ctl_regWrite <= IDecode_io_ctl_regWrite | IDecode_io_ctl_v_RegWrite; // @[Core.scala 422:23]
    end
    if (reset) begin // @[Core.scala 56:35]
      id_reg_ctl_memRead <= 1'h0; // @[Core.scala 56:35]
    end else begin
      id_reg_ctl_memRead <= IDecode_io_ctl_memRead; // @[Core.scala 423:22]
    end
    if (reset) begin // @[Core.scala 57:36]
      id_reg_ctl_memWrite <= 1'h0; // @[Core.scala 57:36]
    end else begin
      id_reg_ctl_memWrite <= IDecode_io_ctl_memWrite; // @[Core.scala 424:23]
    end
    if (reset) begin // @[Core.scala 59:33]
      id_reg_ctl_aluOp <= 2'h0; // @[Core.scala 59:33]
    end else begin
      id_reg_ctl_aluOp <= IDecode_io_ctl_aluOp; // @[Core.scala 426:20]
    end
    if (reset) begin // @[Core.scala 61:30]
      id_reg_is_csr <= 1'h0; // @[Core.scala 61:30]
    end else begin
      id_reg_is_csr <= IDecode_io_is_csr; // @[Core.scala 429:17]
    end
    if (reset) begin // @[Core.scala 62:32]
      id_reg_csr_data <= 32'h0; // @[Core.scala 62:32]
    end else begin
      id_reg_csr_data <= IDecode_io_csr_o_data; // @[Core.scala 430:19]
    end
    if (reset) begin // @[Core.scala 67:29]
      id_reg_z_imm <= 11'sh0; // @[Core.scala 67:29]
    end else begin
      id_reg_z_imm <= IDecode_io_v_z_imm[10:0]; // @[Core.scala 243:18]
    end
    if (reset) begin // @[Core.scala 69:34]
      id_reg_vstart_out <= 32'sh0; // @[Core.scala 69:34]
    end else begin
      id_reg_vstart_out <= IDecode_io_vstart_out; // @[Core.scala 244:23]
    end
    if (reset) begin // @[Core.scala 70:29]
      id_reg_vtype <= 32'sh0; // @[Core.scala 70:29]
    end else begin
      id_reg_vtype <= {{21{IDecode_io_vtypei_out[10]}},IDecode_io_vtypei_out}; // @[Core.scala 245:18]
    end
    if (reset) begin // @[Core.scala 71:34]
      id_reg_v_addi_imm <= 32'sh0; // @[Core.scala 71:34]
    end else begin
      id_reg_v_addi_imm <= IDecode_io_v_addi_imm; // @[Core.scala 246:23]
    end
    if (reset) begin // @[Core.scala 72:31]
      id_reg_v0_data <= 128'sh0; // @[Core.scala 72:31]
    end else begin
      id_reg_v0_data <= IDecode_io_vs0_data; // @[Core.scala 247:20]
    end
    if (reset) begin // @[Core.scala 73:31]
      id_reg_v1_data <= 128'sh0; // @[Core.scala 73:31]
    end else begin
      id_reg_v1_data <= IDecode_io_vs1_data; // @[Core.scala 248:20]
    end
    if (reset) begin // @[Core.scala 74:31]
      id_reg_v2_data <= 128'sh0; // @[Core.scala 74:31]
    end else begin
      id_reg_v2_data <= IDecode_io_vs2_data; // @[Core.scala 249:20]
    end
    if (reset) begin // @[Core.scala 75:31]
      id_reg_vd_data <= 128'sh0; // @[Core.scala 75:31]
    end else begin
      id_reg_vd_data <= IDecode_io_vd_data; // @[Core.scala 250:20]
    end
    if (reset) begin // @[Core.scala 76:32]
      id_reg_vs1_addr <= 5'h0; // @[Core.scala 76:32]
    end else begin
      id_reg_vs1_addr <= IDecode_io_vs1_addr; // @[Core.scala 260:21]
    end
    if (reset) begin // @[Core.scala 77:32]
      id_reg_vs2_addr <= 5'h0; // @[Core.scala 77:32]
    end else begin
      id_reg_vs2_addr <= IDecode_io_vs2_addr; // @[Core.scala 261:21]
    end
    if (reset) begin // @[Core.scala 78:31]
      id_reg_vd_addr <= 5'h0; // @[Core.scala 78:31]
    end else begin
      id_reg_vd_addr <= IDecode_io_vd_addr; // @[Core.scala 259:20]
    end
    if (reset) begin // @[Core.scala 79:30]
      id_reg_lmul_v <= 4'h0; // @[Core.scala 79:30]
    end else begin
      id_reg_lmul_v <= if_reg_lmul_v; // @[Core.scala 262:20]
    end
    if (reset) begin // @[Core.scala 84:36]
      id_reg_ctl_RegWrite <= 1'h0; // @[Core.scala 84:36]
    end else begin
      id_reg_ctl_RegWrite <= IDecode_io_ctl_v_RegWrite; // @[Core.scala 251:25]
    end
    if (reset) begin // @[Core.scala 87:34]
      id_reg_ctl_opBsel <= 1'h0; // @[Core.scala 87:34]
    end else begin
      id_reg_ctl_opBsel <= IDecode_io_ctl_v_opBsel; // @[Core.scala 252:23]
    end
    if (reset) begin // @[Core.scala 88:34]
      id_reg_ctl_Ex_sel <= 4'h0; // @[Core.scala 88:34]
    end else begin
      id_reg_ctl_Ex_sel <= IDecode_io_ctl_v_Ex_sel; // @[Core.scala 253:23]
    end
    if (reset) begin // @[Core.scala 90:33]
      id_reg_ctl_aluop <= 5'h0; // @[Core.scala 90:33]
    end else begin
      id_reg_ctl_aluop <= IDecode_io_ctl_v_aluop; // @[Core.scala 254:22]
    end
    if (reset) begin // @[Core.scala 91:32]
      id_reg_ctl_vset <= 1'h0; // @[Core.scala 91:32]
    end else begin
      id_reg_ctl_vset <= IDecode_io_ctl_v_vset; // @[Core.scala 255:21]
    end
    if (reset) begin // @[Core.scala 92:34]
      id_reg_ctl_v_load <= 1'h0; // @[Core.scala 92:34]
    end else begin
      id_reg_ctl_v_load <= IDecode_io_ctl_v_load[0]; // @[Core.scala 256:23]
    end
    if (reset) begin // @[Core.scala 93:33]
      id_reg_ctl_v_ins <= 1'h0; // @[Core.scala 93:33]
    end else begin
      id_reg_ctl_v_ins <= IDecode_io_ctl_v_ins; // @[Core.scala 257:22]
    end
    if (reset) begin // @[Core.scala 102:30]
      ex_reg_result <= 32'h0; // @[Core.scala 102:30]
    end else begin
      ex_reg_result <= Execute_io_ALUresult; // @[Core.scala 591:19]
    end
    if (reset) begin // @[Core.scala 103:26]
      ex_reg_wd <= 32'h0; // @[Core.scala 103:26]
    end else begin
      ex_reg_wd <= Execute_io_writeData; // @[Core.scala 590:15]
    end
    if (reset) begin // @[Core.scala 104:27]
      ex_reg_wra <= 5'h0; // @[Core.scala 104:27]
    end else begin
      ex_reg_wra <= id_reg_wra; // @[Core.scala 524:14]
    end
    if (reset) begin // @[Core.scala 105:27]
      ex_reg_ins <= 32'h0; // @[Core.scala 105:27]
    end else begin
      ex_reg_ins <= id_reg_ins; // @[Core.scala 525:14]
    end
    if (reset) begin // @[Core.scala 106:36]
      ex_reg_ctl_memToReg <= 2'h0; // @[Core.scala 106:36]
    end else begin
      ex_reg_ctl_memToReg <= id_reg_ctl_memToReg; // @[Core.scala 526:23]
    end
    if (reset) begin // @[Core.scala 107:36]
      ex_reg_ctl_regWrite <= 1'h0; // @[Core.scala 107:36]
    end else begin
      ex_reg_ctl_regWrite <= id_reg_ctl_regWrite; // @[Core.scala 527:23]
    end
    if (reset) begin // @[Core.scala 108:35]
      ex_reg_ctl_memRead <= 1'h0; // @[Core.scala 108:35]
    end else begin
      ex_reg_ctl_memRead <= id_reg_ctl_memRead; // @[Core.scala 588:24]
    end
    if (reset) begin // @[Core.scala 109:36]
      ex_reg_ctl_memWrite <= 1'h0; // @[Core.scala 109:36]
    end else begin
      ex_reg_ctl_memWrite <= id_reg_ctl_memWrite; // @[Core.scala 589:25]
    end
    if (reset) begin // @[Core.scala 111:26]
      ex_reg_pc <= 32'h0; // @[Core.scala 111:26]
    end else begin
      ex_reg_pc <= id_reg_pc; // @[Core.scala 523:13]
    end
    if (reset) begin // @[Core.scala 112:30]
      ex_reg_is_csr <= 1'h0; // @[Core.scala 112:30]
    end else begin
      ex_reg_is_csr <= id_reg_is_csr; // @[Core.scala 528:17]
    end
    if (reset) begin // @[Core.scala 113:32]
      ex_reg_csr_data <= 32'h0; // @[Core.scala 113:32]
    end else begin
      ex_reg_csr_data <= id_reg_csr_data; // @[Core.scala 529:19]
    end
    if (reset) begin // @[Core.scala 116:35]
      ex_reg_vec_alu_res <= 128'sh0; // @[Core.scala 116:35]
    end else begin
      ex_reg_vec_alu_res <= Execute_io_vec_alu_res; // @[Core.scala 303:22]
    end
    if (reset) begin // @[Core.scala 118:26]
      ex_reg_vl <= 32'sh0; // @[Core.scala 118:26]
    end else begin
      ex_reg_vl <= Execute_io_vec_vl; // @[Core.scala 304:13]
    end
    if (reset) begin // @[Core.scala 125:31]
      ex_reg_vd_addr <= 5'h0; // @[Core.scala 125:31]
    end else begin
      ex_reg_vd_addr <= id_reg_vd_addr; // @[Core.scala 311:18]
    end
    if (reset) begin // @[Core.scala 126:30]
      ex_reg_lmul_v <= 4'h0; // @[Core.scala 126:30]
    end else begin
      ex_reg_lmul_v <= id_reg_lmul_v; // @[Core.scala 312:17]
    end
    if (reset) begin // @[Core.scala 128:28]
      ex_reg_vset <= 1'h0; // @[Core.scala 128:28]
    end else begin
      ex_reg_vset <= id_reg_ctl_vset; // @[Core.scala 280:15]
    end
    if (reset) begin // @[Core.scala 129:33]
      ex_reg_reg_write <= 1'h0; // @[Core.scala 129:33]
    end else begin
      ex_reg_reg_write <= id_reg_ctl_RegWrite; // @[Core.scala 309:20]
    end
    if (reset) begin // @[Core.scala 130:29]
      ex_reg_vtype <= 11'sh0; // @[Core.scala 130:29]
    end else begin
      ex_reg_vtype <= id_reg_z_imm; // @[Core.scala 302:16]
    end
    if (reset) begin // @[Core.scala 134:28]
      mem_reg_ins <= 32'h0; // @[Core.scala 134:28]
    end else begin
      mem_reg_ins <= ex_reg_ins; // @[Core.scala 585:17]
    end
    if (reset) begin // @[Core.scala 135:31]
      mem_reg_result <= 32'h0; // @[Core.scala 135:31]
    end else begin
      mem_reg_result <= ex_reg_result; // @[Core.scala 582:20]
    end
    if (reset) begin // @[Core.scala 137:28]
      mem_reg_wra <= 5'h0; // @[Core.scala 137:28]
    end else begin
      mem_reg_wra <= ex_reg_wra; // @[Core.scala 593:15]
    end
    if (reset) begin // @[Core.scala 138:37]
      mem_reg_ctl_memToReg <= 2'h0; // @[Core.scala 138:37]
    end else begin
      mem_reg_ctl_memToReg <= ex_reg_ctl_memToReg; // @[Core.scala 594:24]
    end
    if (reset) begin // @[Core.scala 139:37]
      mem_reg_ctl_regWrite <= 1'h0; // @[Core.scala 139:37]
    end else begin
      mem_reg_ctl_regWrite <= ex_reg_ctl_regWrite; // @[Core.scala 584:26]
    end
    if (reset) begin // @[Core.scala 140:27]
      mem_reg_pc <= 32'h0; // @[Core.scala 140:27]
    end else begin
      mem_reg_pc <= ex_reg_pc; // @[Core.scala 586:16]
    end
    if (reset) begin // @[Core.scala 141:31]
      mem_reg_is_csr <= 1'h0; // @[Core.scala 141:31]
    end else begin
      mem_reg_is_csr <= ex_reg_is_csr; // @[Core.scala 595:18]
    end
    if (reset) begin // @[Core.scala 142:33]
      mem_reg_csr_data <= 32'h0; // @[Core.scala 142:33]
    end else begin
      mem_reg_csr_data <= ex_reg_csr_data; // @[Core.scala 596:20]
    end
    if (reset) begin // @[Core.scala 145:36]
      mem_reg_vec_alu_out <= 128'sh0; // @[Core.scala 145:36]
    end else begin
      mem_reg_vec_alu_out <= ex_reg_vec_alu_res; // @[Core.scala 319:23]
    end
    if (reset) begin // @[Core.scala 146:31]
      mem_reg_vec_vl <= 32'sh0; // @[Core.scala 146:31]
    end else begin
      mem_reg_vec_vl <= ex_reg_vl; // @[Core.scala 321:18]
    end
    if (reset) begin // @[Core.scala 147:30]
      mem_reg_vtype <= 11'sh0; // @[Core.scala 147:30]
    end else begin
      mem_reg_vtype <= ex_reg_vtype; // @[Core.scala 322:17]
    end
    if (reset) begin // @[Core.scala 151:36]
      mem_reg_vec_vd_addr <= 5'h0; // @[Core.scala 151:36]
    end else begin
      mem_reg_vec_vd_addr <= ex_reg_vd_addr; // @[Core.scala 327:23]
    end
    if (reset) begin // @[Core.scala 153:31]
      mem_reg_lmul_v <= 4'h0; // @[Core.scala 153:31]
    end else begin
      mem_reg_lmul_v <= ex_reg_lmul_v; // @[Core.scala 328:18]
    end
    if (reset) begin // @[Core.scala 154:29]
      mem_reg_vset <= 1'h0; // @[Core.scala 154:29]
    end else begin
      mem_reg_vset <= ex_reg_vset; // @[Core.scala 320:16]
    end
    if (reset) begin // @[Core.scala 155:38]
      mem_reg_vec_reg_write <= 1'h0; // @[Core.scala 155:38]
    end else begin
      mem_reg_vec_reg_write <= ex_reg_reg_write; // @[Core.scala 326:25]
    end
    if (reset) begin // @[Core.scala 188:19]
      lmul <= 3'h0; // @[Core.scala 188:19]
    end else if (instruction[6:0] == 7'h57 & instruction[14:12] == 3'h7 & (~instruction[31] | instruction[31:30] == 2'h3
      )) begin // @[Core.scala 189:133]
      lmul <= instruction[22:20]; // @[Core.scala 190:8]
    end
    if (reset) begin // @[Core.scala 224:25]
      lmul_reg <= 32'h0; // @[Core.scala 224:25]
    end else if (lmul_reg != vlmul_count & _T_1 & instruction[14:12] != 3'h7) begin // @[Core.scala 225:103]
      lmul_reg <= _T_24; // @[Core.scala 227:18]
    end else begin
      lmul_reg <= 32'h0; // @[Core.scala 231:18]
    end
    REG__0 <= next_pc_selector == 32'h1 ? $signed(pc_io_out) : $signed(_T_70); // @[Core.scala 666:25]
    REG__1 <= REG__0; // @[Core.scala 660:23]
    REG__2 <= REG__1; // @[Core.scala 660:23]
    REG__3 <= REG__2; // @[Core.scala 660:23]
    REG_1_0 <= IDecode_io_rs_addr_0; // @[Core.scala 653:25]
    REG_1_1 <= REG_1_0; // @[Core.scala 651:31]
    REG_1_2 <= REG_1_1; // @[Core.scala 651:31]
    REG_2_0 <= IDecode_io_rs_addr_1; // @[Core.scala 653:25]
    REG_2_1 <= REG_2_0; // @[Core.scala 651:31]
    REG_2_2 <= REG_2_1; // @[Core.scala 651:31]
    REG_3_0 <= id_reg_rd1; // @[Core.scala 668:38]
    REG_3_1 <= REG_3_0; // @[Core.scala 656:25]
    REG_4_0 <= id_reg_rd2; // @[Core.scala 669:38]
    REG_4_1 <= REG_4_0; // @[Core.scala 656:25]
    if (reset) begin // @[Core.scala 645:31]
      REG_5 <= 32'h0; // @[Core.scala 645:31]
    end else begin
      REG_5 <= ex_reg_result; // @[Core.scala 688:19]
    end
    if (reset) begin // @[Core.scala 646:32]
      REG_6 <= 32'sh0; // @[Core.scala 646:32]
    end else begin
      REG_6 <= ex_reg_wd; // @[Core.scala 688:19]
    end
    REG_7_0 <= IDecode_io_hdu_if_reg_write; // @[Core.scala 688:19]
    REG_7_1 <= REG_7_0; // @[Core.scala 661:25]
    REG_7_2 <= REG_7_1; // @[Core.scala 661:25]
    REG_7_3 <= REG_7_2; // @[Core.scala 661:25]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  if_reg_pc = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  if_reg_ins = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  if_reg_lmul_v = _RAND_2[3:0];
  _RAND_3 = {1{`RANDOM}};
  id_reg_pc = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  id_reg_rd1 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  id_reg_rd2 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  id_reg_imm = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  id_reg_wra = _RAND_7[4:0];
  _RAND_8 = {1{`RANDOM}};
  id_reg_f7 = _RAND_8[6:0];
  _RAND_9 = {1{`RANDOM}};
  id_reg_f3 = _RAND_9[2:0];
  _RAND_10 = {1{`RANDOM}};
  id_reg_ins = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  id_reg_ctl_aluSrc = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  id_reg_ctl_aluSrc1 = _RAND_12[1:0];
  _RAND_13 = {1{`RANDOM}};
  id_reg_ctl_memToReg = _RAND_13[1:0];
  _RAND_14 = {1{`RANDOM}};
  id_reg_ctl_regWrite = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  id_reg_ctl_memRead = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  id_reg_ctl_memWrite = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  id_reg_ctl_aluOp = _RAND_17[1:0];
  _RAND_18 = {1{`RANDOM}};
  id_reg_is_csr = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  id_reg_csr_data = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  id_reg_z_imm = _RAND_20[10:0];
  _RAND_21 = {1{`RANDOM}};
  id_reg_vstart_out = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  id_reg_vtype = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  id_reg_v_addi_imm = _RAND_23[31:0];
  _RAND_24 = {4{`RANDOM}};
  id_reg_v0_data = _RAND_24[127:0];
  _RAND_25 = {4{`RANDOM}};
  id_reg_v1_data = _RAND_25[127:0];
  _RAND_26 = {4{`RANDOM}};
  id_reg_v2_data = _RAND_26[127:0];
  _RAND_27 = {4{`RANDOM}};
  id_reg_vd_data = _RAND_27[127:0];
  _RAND_28 = {1{`RANDOM}};
  id_reg_vs1_addr = _RAND_28[4:0];
  _RAND_29 = {1{`RANDOM}};
  id_reg_vs2_addr = _RAND_29[4:0];
  _RAND_30 = {1{`RANDOM}};
  id_reg_vd_addr = _RAND_30[4:0];
  _RAND_31 = {1{`RANDOM}};
  id_reg_lmul_v = _RAND_31[3:0];
  _RAND_32 = {1{`RANDOM}};
  id_reg_ctl_RegWrite = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  id_reg_ctl_opBsel = _RAND_33[0:0];
  _RAND_34 = {1{`RANDOM}};
  id_reg_ctl_Ex_sel = _RAND_34[3:0];
  _RAND_35 = {1{`RANDOM}};
  id_reg_ctl_aluop = _RAND_35[4:0];
  _RAND_36 = {1{`RANDOM}};
  id_reg_ctl_vset = _RAND_36[0:0];
  _RAND_37 = {1{`RANDOM}};
  id_reg_ctl_v_load = _RAND_37[0:0];
  _RAND_38 = {1{`RANDOM}};
  id_reg_ctl_v_ins = _RAND_38[0:0];
  _RAND_39 = {1{`RANDOM}};
  ex_reg_result = _RAND_39[31:0];
  _RAND_40 = {1{`RANDOM}};
  ex_reg_wd = _RAND_40[31:0];
  _RAND_41 = {1{`RANDOM}};
  ex_reg_wra = _RAND_41[4:0];
  _RAND_42 = {1{`RANDOM}};
  ex_reg_ins = _RAND_42[31:0];
  _RAND_43 = {1{`RANDOM}};
  ex_reg_ctl_memToReg = _RAND_43[1:0];
  _RAND_44 = {1{`RANDOM}};
  ex_reg_ctl_regWrite = _RAND_44[0:0];
  _RAND_45 = {1{`RANDOM}};
  ex_reg_ctl_memRead = _RAND_45[0:0];
  _RAND_46 = {1{`RANDOM}};
  ex_reg_ctl_memWrite = _RAND_46[0:0];
  _RAND_47 = {1{`RANDOM}};
  ex_reg_pc = _RAND_47[31:0];
  _RAND_48 = {1{`RANDOM}};
  ex_reg_is_csr = _RAND_48[0:0];
  _RAND_49 = {1{`RANDOM}};
  ex_reg_csr_data = _RAND_49[31:0];
  _RAND_50 = {4{`RANDOM}};
  ex_reg_vec_alu_res = _RAND_50[127:0];
  _RAND_51 = {1{`RANDOM}};
  ex_reg_vl = _RAND_51[31:0];
  _RAND_52 = {1{`RANDOM}};
  ex_reg_vd_addr = _RAND_52[4:0];
  _RAND_53 = {1{`RANDOM}};
  ex_reg_lmul_v = _RAND_53[3:0];
  _RAND_54 = {1{`RANDOM}};
  ex_reg_vset = _RAND_54[0:0];
  _RAND_55 = {1{`RANDOM}};
  ex_reg_reg_write = _RAND_55[0:0];
  _RAND_56 = {1{`RANDOM}};
  ex_reg_vtype = _RAND_56[10:0];
  _RAND_57 = {1{`RANDOM}};
  mem_reg_ins = _RAND_57[31:0];
  _RAND_58 = {1{`RANDOM}};
  mem_reg_result = _RAND_58[31:0];
  _RAND_59 = {1{`RANDOM}};
  mem_reg_wra = _RAND_59[4:0];
  _RAND_60 = {1{`RANDOM}};
  mem_reg_ctl_memToReg = _RAND_60[1:0];
  _RAND_61 = {1{`RANDOM}};
  mem_reg_ctl_regWrite = _RAND_61[0:0];
  _RAND_62 = {1{`RANDOM}};
  mem_reg_pc = _RAND_62[31:0];
  _RAND_63 = {1{`RANDOM}};
  mem_reg_is_csr = _RAND_63[0:0];
  _RAND_64 = {1{`RANDOM}};
  mem_reg_csr_data = _RAND_64[31:0];
  _RAND_65 = {4{`RANDOM}};
  mem_reg_vec_alu_out = _RAND_65[127:0];
  _RAND_66 = {1{`RANDOM}};
  mem_reg_vec_vl = _RAND_66[31:0];
  _RAND_67 = {1{`RANDOM}};
  mem_reg_vtype = _RAND_67[10:0];
  _RAND_68 = {1{`RANDOM}};
  mem_reg_vec_vd_addr = _RAND_68[4:0];
  _RAND_69 = {1{`RANDOM}};
  mem_reg_lmul_v = _RAND_69[3:0];
  _RAND_70 = {1{`RANDOM}};
  mem_reg_vset = _RAND_70[0:0];
  _RAND_71 = {1{`RANDOM}};
  mem_reg_vec_reg_write = _RAND_71[0:0];
  _RAND_72 = {1{`RANDOM}};
  lmul = _RAND_72[2:0];
  _RAND_73 = {1{`RANDOM}};
  lmul_reg = _RAND_73[31:0];
  _RAND_74 = {1{`RANDOM}};
  REG__0 = _RAND_74[31:0];
  _RAND_75 = {1{`RANDOM}};
  REG__1 = _RAND_75[31:0];
  _RAND_76 = {1{`RANDOM}};
  REG__2 = _RAND_76[31:0];
  _RAND_77 = {1{`RANDOM}};
  REG__3 = _RAND_77[31:0];
  _RAND_78 = {1{`RANDOM}};
  REG_1_0 = _RAND_78[4:0];
  _RAND_79 = {1{`RANDOM}};
  REG_1_1 = _RAND_79[4:0];
  _RAND_80 = {1{`RANDOM}};
  REG_1_2 = _RAND_80[4:0];
  _RAND_81 = {1{`RANDOM}};
  REG_2_0 = _RAND_81[4:0];
  _RAND_82 = {1{`RANDOM}};
  REG_2_1 = _RAND_82[4:0];
  _RAND_83 = {1{`RANDOM}};
  REG_2_2 = _RAND_83[4:0];
  _RAND_84 = {1{`RANDOM}};
  REG_3_0 = _RAND_84[31:0];
  _RAND_85 = {1{`RANDOM}};
  REG_3_1 = _RAND_85[31:0];
  _RAND_86 = {1{`RANDOM}};
  REG_4_0 = _RAND_86[31:0];
  _RAND_87 = {1{`RANDOM}};
  REG_4_1 = _RAND_87[31:0];
  _RAND_88 = {1{`RANDOM}};
  REG_5 = _RAND_88[31:0];
  _RAND_89 = {1{`RANDOM}};
  REG_6 = _RAND_89[31:0];
  _RAND_90 = {1{`RANDOM}};
  REG_7_0 = _RAND_90[0:0];
  _RAND_91 = {1{`RANDOM}};
  REG_7_1 = _RAND_91[0:0];
  _RAND_92 = {1{`RANDOM}};
  REG_7_2 = _RAND_92[0:0];
  _RAND_93 = {1{`RANDOM}};
  REG_7_3 = _RAND_93[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SRamTop(
  input         clock,
  input         reset,
  input         io_req_valid,
  input  [31:0] io_req_bits_addrRequest,
  input  [31:0] io_req_bits_dataRequest,
  input  [3:0]  io_req_bits_activeByteLane,
  input         io_req_bits_isWrite,
  output        io_rsp_valid,
  output [31:0] io_rsp_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  sram_clk_i; // @[SRamTop.scala 21:22]
  wire  sram_rst_i; // @[SRamTop.scala 21:22]
  wire  sram_csb_i; // @[SRamTop.scala 21:22]
  wire  sram_we_i; // @[SRamTop.scala 21:22]
  wire [3:0] sram_wmask_i; // @[SRamTop.scala 21:22]
  wire [12:0] sram_addr_i; // @[SRamTop.scala 21:22]
  wire [31:0] sram_wdata_i; // @[SRamTop.scala 21:22]
  wire [31:0] sram_rdata_o; // @[SRamTop.scala 21:22]
  reg  validReg; // @[SRamTop.scala 14:27]
  wire  _T_5 = io_req_valid & io_req_bits_isWrite; // @[SRamTop.scala 49:34]
  wire  _GEN_0 = io_req_valid & io_req_bits_isWrite ? 1'h0 : 1'h1; // @[SRamTop.scala 49:58 SRamTop.scala 54:27 SRamTop.scala 29:19]
  wire  _GEN_6 = io_req_valid & ~io_req_bits_isWrite | _T_5; // @[SRamTop.scala 40:52 SRamTop.scala 43:22]
  sram_top #(.IFILE_IN("")) sram ( // @[SRamTop.scala 21:22]
    .clk_i(sram_clk_i),
    .rst_i(sram_rst_i),
    .csb_i(sram_csb_i),
    .we_i(sram_we_i),
    .wmask_i(sram_wmask_i),
    .addr_i(sram_addr_i),
    .wdata_i(sram_wdata_i),
    .rdata_o(sram_rdata_o)
  );
  assign io_rsp_valid = validReg; // @[SRamTop.scala 15:18]
  assign io_rsp_bits_dataResponse = sram_rdata_o; // @[SRamTop.scala 67:30]
  assign sram_clk_i = clock; // @[SRamTop.scala 23:36]
  assign sram_rst_i = reset; // @[SRamTop.scala 25:24]
  assign sram_csb_i = io_req_valid & ~io_req_bits_isWrite ? 1'h0 : _GEN_0; // @[SRamTop.scala 40:52 SRamTop.scala 44:27]
  assign sram_we_i = io_req_valid & ~io_req_bits_isWrite; // @[SRamTop.scala 40:27]
  assign sram_wmask_i = io_req_bits_activeByteLane; // @[SRamTop.scala 49:58 SRamTop.scala 56:29]
  assign sram_addr_i = io_req_bits_addrRequest[12:0];
  assign sram_wdata_i = io_req_bits_dataRequest; // @[SRamTop.scala 49:58 SRamTop.scala 58:29]
  always @(posedge clock) begin
    if (reset) begin // @[SRamTop.scala 14:27]
      validReg <= 1'h0; // @[SRamTop.scala 14:27]
    end else begin
      validReg <= _GEN_6;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  validReg = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SRamTop_1(
  input         clock,
  input         reset,
  input         io_req_valid,
  input  [31:0] io_req_bits_addrRequest,
  input  [31:0] io_req_bits_dataRequest,
  input  [3:0]  io_req_bits_activeByteLane,
  input         io_req_bits_isWrite,
  output        io_rsp_valid,
  output [31:0] io_rsp_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  sram_clk_i; // @[SRamTop.scala 21:22]
  wire  sram_rst_i; // @[SRamTop.scala 21:22]
  wire  sram_csb_i; // @[SRamTop.scala 21:22]
  wire  sram_we_i; // @[SRamTop.scala 21:22]
  wire [3:0] sram_wmask_i; // @[SRamTop.scala 21:22]
  wire [12:0] sram_addr_i; // @[SRamTop.scala 21:22]
  wire [31:0] sram_wdata_i; // @[SRamTop.scala 21:22]
  wire [31:0] sram_rdata_o; // @[SRamTop.scala 21:22]
  reg  validReg; // @[SRamTop.scala 14:27]
  wire  _T_5 = io_req_valid & io_req_bits_isWrite; // @[SRamTop.scala 49:34]
  wire  _GEN_0 = io_req_valid & io_req_bits_isWrite ? 1'h0 : 1'h1; // @[SRamTop.scala 49:58 SRamTop.scala 54:27 SRamTop.scala 29:19]
  wire  _GEN_6 = io_req_valid & ~io_req_bits_isWrite | _T_5; // @[SRamTop.scala 40:52 SRamTop.scala 43:22]
  sram_top #(.IFILE_IN("/home/maira/Desktop/lateef/nucleusrv/asm.txt")) sram ( // @[SRamTop.scala 21:22]
    .clk_i(sram_clk_i),
    .rst_i(sram_rst_i),
    .csb_i(sram_csb_i),
    .we_i(sram_we_i),
    .wmask_i(sram_wmask_i),
    .addr_i(sram_addr_i),
    .wdata_i(sram_wdata_i),
    .rdata_o(sram_rdata_o)
  );
  assign io_rsp_valid = validReg; // @[SRamTop.scala 15:18]
  assign io_rsp_bits_dataResponse = sram_rdata_o; // @[SRamTop.scala 67:30]
  assign sram_clk_i = clock; // @[SRamTop.scala 23:36]
  assign sram_rst_i = reset; // @[SRamTop.scala 25:24]
  assign sram_csb_i = io_req_valid & ~io_req_bits_isWrite ? 1'h0 : _GEN_0; // @[SRamTop.scala 40:52 SRamTop.scala 44:27]
  assign sram_we_i = io_req_valid & ~io_req_bits_isWrite; // @[SRamTop.scala 40:27]
  assign sram_wmask_i = io_req_bits_activeByteLane; // @[SRamTop.scala 49:58 SRamTop.scala 56:29]
  assign sram_addr_i = io_req_bits_addrRequest[12:0];
  assign sram_wdata_i = io_req_bits_dataRequest; // @[SRamTop.scala 49:58 SRamTop.scala 58:29]
  always @(posedge clock) begin
    if (reset) begin // @[SRamTop.scala 14:27]
      validReg <= 1'h0; // @[SRamTop.scala 14:27]
    end else begin
      validReg <= _GEN_6;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  validReg = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Tracer(
  input         clock,
  input         reset,
  input  [31:0] io_rvfiUInt_0,
  input  [31:0] io_rvfiUInt_1,
  input  [31:0] io_rvfiUInt_2,
  input  [31:0] io_rvfiUInt_3,
  input  [31:0] io_rvfiSInt_0,
  input  [31:0] io_rvfiSInt_1,
  input  [31:0] io_rvfiSInt_2,
  input  [31:0] io_rvfiSInt_3,
  input  [31:0] io_rvfiSInt_4,
  input         io_rvfiBool_0,
  input  [4:0]  io_rvfiRegAddr_0,
  input  [4:0]  io_rvfiRegAddr_1,
  input  [4:0]  io_rvfiRegAddr_2
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] clkCycle; // @[Tracer.scala 18:31]
  wire [31:0] _T_1 = clkCycle + 32'h1; // @[Tracer.scala 19:24]
  wire  _T_3 = io_rvfiBool_0 & io_rvfiUInt_2 != 32'h0; // @[Tracer.scala 44:28]
  always @(posedge clock) begin
    if (reset) begin // @[Tracer.scala 18:31]
      clkCycle <= 32'h0; // @[Tracer.scala 18:31]
    end else begin
      clkCycle <= _T_1; // @[Tracer.scala 19:12]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3 & ~reset) begin
          $fwrite(32'h80000002,
            "ClkCycle: %d, pc_rdata: %x, pc_wdata: %x, insn: %x, mode: %d, rs1_addr: %d, rs1_rdata: %x, rs2_addr: %d, rs2_rdata: %x, rd_addr: %d, rd_wdata: %x, mem_addr: %x, mem_rdata: %x, mem_wdata: %x\n"
            ,clkCycle,io_rvfiUInt_0,io_rvfiUInt_1,io_rvfiUInt_2,2'h3,io_rvfiRegAddr_1,io_rvfiSInt_1,io_rvfiRegAddr_2,
            io_rvfiSInt_2,io_rvfiRegAddr_0,io_rvfiSInt_0,io_rvfiUInt_3,io_rvfiSInt_3,io_rvfiSInt_4); // @[Tracer.scala 45:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  clkCycle = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Top(
  input          clock,
  input          reset,
  output [31:0]  io_pin,
  output [127:0] io_v_pin,
  output [31:0]  io_fcsr
);
  wire  core_clock; // @[Top.scala 17:26]
  wire  core_reset; // @[Top.scala 17:26]
  wire [31:0] core_io_pin; // @[Top.scala 17:26]
  wire [127:0] core_io_Vpin; // @[Top.scala 17:26]
  wire  core_io_dmemReq_valid; // @[Top.scala 17:26]
  wire [31:0] core_io_dmemReq_bits_addrRequest; // @[Top.scala 17:26]
  wire [31:0] core_io_dmemReq_bits_dataRequest; // @[Top.scala 17:26]
  wire [3:0] core_io_dmemReq_bits_activeByteLane; // @[Top.scala 17:26]
  wire  core_io_dmemReq_bits_isWrite; // @[Top.scala 17:26]
  wire  core_io_dmemRsp_valid; // @[Top.scala 17:26]
  wire [31:0] core_io_dmemRsp_bits_dataResponse; // @[Top.scala 17:26]
  wire  core_io_imemReq_valid; // @[Top.scala 17:26]
  wire [31:0] core_io_imemReq_bits_addrRequest; // @[Top.scala 17:26]
  wire [31:0] core_io_imemReq_bits_dataRequest; // @[Top.scala 17:26]
  wire [3:0] core_io_imemReq_bits_activeByteLane; // @[Top.scala 17:26]
  wire  core_io_imemReq_bits_isWrite; // @[Top.scala 17:26]
  wire  core_io_imemRsp_valid; // @[Top.scala 17:26]
  wire [31:0] core_io_imemRsp_bits_dataResponse; // @[Top.scala 17:26]
  wire [31:0] core_io_rvfiUInt_0; // @[Top.scala 17:26]
  wire [31:0] core_io_rvfiUInt_1; // @[Top.scala 17:26]
  wire [31:0] core_io_rvfiUInt_2; // @[Top.scala 17:26]
  wire [31:0] core_io_rvfiUInt_3; // @[Top.scala 17:26]
  wire [31:0] core_io_rvfiSInt_0; // @[Top.scala 17:26]
  wire [31:0] core_io_rvfiSInt_1; // @[Top.scala 17:26]
  wire [31:0] core_io_rvfiSInt_2; // @[Top.scala 17:26]
  wire [31:0] core_io_rvfiSInt_3; // @[Top.scala 17:26]
  wire [31:0] core_io_rvfiSInt_4; // @[Top.scala 17:26]
  wire  core_io_rvfiBool_0; // @[Top.scala 17:26]
  wire [4:0] core_io_rvfiRegAddr_0; // @[Top.scala 17:26]
  wire [4:0] core_io_rvfiRegAddr_1; // @[Top.scala 17:26]
  wire [4:0] core_io_rvfiRegAddr_2; // @[Top.scala 17:26]
  wire [31:0] core_io_fcsr_o_data; // @[Top.scala 17:26]
  wire  dmem_clock; // @[Top.scala 21:20]
  wire  dmem_reset; // @[Top.scala 21:20]
  wire  dmem_io_req_valid; // @[Top.scala 21:20]
  wire [31:0] dmem_io_req_bits_addrRequest; // @[Top.scala 21:20]
  wire [31:0] dmem_io_req_bits_dataRequest; // @[Top.scala 21:20]
  wire [3:0] dmem_io_req_bits_activeByteLane; // @[Top.scala 21:20]
  wire  dmem_io_req_bits_isWrite; // @[Top.scala 21:20]
  wire  dmem_io_rsp_valid; // @[Top.scala 21:20]
  wire [31:0] dmem_io_rsp_bits_dataResponse; // @[Top.scala 21:20]
  wire  imem_clock; // @[Top.scala 22:20]
  wire  imem_reset; // @[Top.scala 22:20]
  wire  imem_io_req_valid; // @[Top.scala 22:20]
  wire [31:0] imem_io_req_bits_addrRequest; // @[Top.scala 22:20]
  wire [31:0] imem_io_req_bits_dataRequest; // @[Top.scala 22:20]
  wire [3:0] imem_io_req_bits_activeByteLane; // @[Top.scala 22:20]
  wire  imem_io_req_bits_isWrite; // @[Top.scala 22:20]
  wire  imem_io_rsp_valid; // @[Top.scala 22:20]
  wire [31:0] imem_io_rsp_bits_dataResponse; // @[Top.scala 22:20]
  wire  Tracer_clock; // @[Top.scala 37:24]
  wire  Tracer_reset; // @[Top.scala 37:24]
  wire [31:0] Tracer_io_rvfiUInt_0; // @[Top.scala 37:24]
  wire [31:0] Tracer_io_rvfiUInt_1; // @[Top.scala 37:24]
  wire [31:0] Tracer_io_rvfiUInt_2; // @[Top.scala 37:24]
  wire [31:0] Tracer_io_rvfiUInt_3; // @[Top.scala 37:24]
  wire [31:0] Tracer_io_rvfiSInt_0; // @[Top.scala 37:24]
  wire [31:0] Tracer_io_rvfiSInt_1; // @[Top.scala 37:24]
  wire [31:0] Tracer_io_rvfiSInt_2; // @[Top.scala 37:24]
  wire [31:0] Tracer_io_rvfiSInt_3; // @[Top.scala 37:24]
  wire [31:0] Tracer_io_rvfiSInt_4; // @[Top.scala 37:24]
  wire  Tracer_io_rvfiBool_0; // @[Top.scala 37:24]
  wire [4:0] Tracer_io_rvfiRegAddr_0; // @[Top.scala 37:24]
  wire [4:0] Tracer_io_rvfiRegAddr_1; // @[Top.scala 37:24]
  wire [4:0] Tracer_io_rvfiRegAddr_2; // @[Top.scala 37:24]
  Core core ( // @[Top.scala 17:26]
    .clock(core_clock),
    .reset(core_reset),
    .io_pin(core_io_pin),
    .io_Vpin(core_io_Vpin),
    .io_dmemReq_valid(core_io_dmemReq_valid),
    .io_dmemReq_bits_addrRequest(core_io_dmemReq_bits_addrRequest),
    .io_dmemReq_bits_dataRequest(core_io_dmemReq_bits_dataRequest),
    .io_dmemReq_bits_activeByteLane(core_io_dmemReq_bits_activeByteLane),
    .io_dmemReq_bits_isWrite(core_io_dmemReq_bits_isWrite),
    .io_dmemRsp_valid(core_io_dmemRsp_valid),
    .io_dmemRsp_bits_dataResponse(core_io_dmemRsp_bits_dataResponse),
    .io_imemReq_valid(core_io_imemReq_valid),
    .io_imemReq_bits_addrRequest(core_io_imemReq_bits_addrRequest),
    .io_imemReq_bits_dataRequest(core_io_imemReq_bits_dataRequest),
    .io_imemReq_bits_activeByteLane(core_io_imemReq_bits_activeByteLane),
    .io_imemReq_bits_isWrite(core_io_imemReq_bits_isWrite),
    .io_imemRsp_valid(core_io_imemRsp_valid),
    .io_imemRsp_bits_dataResponse(core_io_imemRsp_bits_dataResponse),
    .io_rvfiUInt_0(core_io_rvfiUInt_0),
    .io_rvfiUInt_1(core_io_rvfiUInt_1),
    .io_rvfiUInt_2(core_io_rvfiUInt_2),
    .io_rvfiUInt_3(core_io_rvfiUInt_3),
    .io_rvfiSInt_0(core_io_rvfiSInt_0),
    .io_rvfiSInt_1(core_io_rvfiSInt_1),
    .io_rvfiSInt_2(core_io_rvfiSInt_2),
    .io_rvfiSInt_3(core_io_rvfiSInt_3),
    .io_rvfiSInt_4(core_io_rvfiSInt_4),
    .io_rvfiBool_0(core_io_rvfiBool_0),
    .io_rvfiRegAddr_0(core_io_rvfiRegAddr_0),
    .io_rvfiRegAddr_1(core_io_rvfiRegAddr_1),
    .io_rvfiRegAddr_2(core_io_rvfiRegAddr_2),
    .io_fcsr_o_data(core_io_fcsr_o_data)
  );
  SRamTop dmem ( // @[Top.scala 21:20]
    .clock(dmem_clock),
    .reset(dmem_reset),
    .io_req_valid(dmem_io_req_valid),
    .io_req_bits_addrRequest(dmem_io_req_bits_addrRequest),
    .io_req_bits_dataRequest(dmem_io_req_bits_dataRequest),
    .io_req_bits_activeByteLane(dmem_io_req_bits_activeByteLane),
    .io_req_bits_isWrite(dmem_io_req_bits_isWrite),
    .io_rsp_valid(dmem_io_rsp_valid),
    .io_rsp_bits_dataResponse(dmem_io_rsp_bits_dataResponse)
  );
  SRamTop_1 imem ( // @[Top.scala 22:20]
    .clock(imem_clock),
    .reset(imem_reset),
    .io_req_valid(imem_io_req_valid),
    .io_req_bits_addrRequest(imem_io_req_bits_addrRequest),
    .io_req_bits_dataRequest(imem_io_req_bits_dataRequest),
    .io_req_bits_activeByteLane(imem_io_req_bits_activeByteLane),
    .io_req_bits_isWrite(imem_io_req_bits_isWrite),
    .io_rsp_valid(imem_io_rsp_valid),
    .io_rsp_bits_dataResponse(imem_io_rsp_bits_dataResponse)
  );
  Tracer Tracer ( // @[Top.scala 37:24]
    .clock(Tracer_clock),
    .reset(Tracer_reset),
    .io_rvfiUInt_0(Tracer_io_rvfiUInt_0),
    .io_rvfiUInt_1(Tracer_io_rvfiUInt_1),
    .io_rvfiUInt_2(Tracer_io_rvfiUInt_2),
    .io_rvfiUInt_3(Tracer_io_rvfiUInt_3),
    .io_rvfiSInt_0(Tracer_io_rvfiSInt_0),
    .io_rvfiSInt_1(Tracer_io_rvfiSInt_1),
    .io_rvfiSInt_2(Tracer_io_rvfiSInt_2),
    .io_rvfiSInt_3(Tracer_io_rvfiSInt_3),
    .io_rvfiSInt_4(Tracer_io_rvfiSInt_4),
    .io_rvfiBool_0(Tracer_io_rvfiBool_0),
    .io_rvfiRegAddr_0(Tracer_io_rvfiRegAddr_0),
    .io_rvfiRegAddr_1(Tracer_io_rvfiRegAddr_1),
    .io_rvfiRegAddr_2(Tracer_io_rvfiRegAddr_2)
  );
  assign io_pin = core_io_pin; // @[Top.scala 33:10]
  assign io_v_pin = core_io_Vpin; // @[Top.scala 49:12]
  assign io_fcsr = core_io_fcsr_o_data; // @[Top.scala 34:11]
  assign core_clock = clock;
  assign core_reset = reset;
  assign core_io_dmemRsp_valid = dmem_io_rsp_valid; // @[Top.scala 30:19]
  assign core_io_dmemRsp_bits_dataResponse = dmem_io_rsp_bits_dataResponse; // @[Top.scala 30:19]
  assign core_io_imemRsp_valid = imem_io_rsp_valid; // @[Top.scala 25:19]
  assign core_io_imemRsp_bits_dataResponse = imem_io_rsp_bits_dataResponse; // @[Top.scala 25:19]
  assign dmem_clock = clock;
  assign dmem_reset = reset;
  assign dmem_io_req_valid = core_io_dmemReq_valid; // @[Top.scala 31:15]
  assign dmem_io_req_bits_addrRequest = core_io_dmemReq_bits_addrRequest; // @[Top.scala 31:15]
  assign dmem_io_req_bits_dataRequest = core_io_dmemReq_bits_dataRequest; // @[Top.scala 31:15]
  assign dmem_io_req_bits_activeByteLane = core_io_dmemReq_bits_activeByteLane; // @[Top.scala 31:15]
  assign dmem_io_req_bits_isWrite = core_io_dmemReq_bits_isWrite; // @[Top.scala 31:15]
  assign imem_clock = clock;
  assign imem_reset = reset;
  assign imem_io_req_valid = core_io_imemReq_valid; // @[Top.scala 26:15]
  assign imem_io_req_bits_addrRequest = core_io_imemReq_bits_addrRequest; // @[Top.scala 26:15]
  assign imem_io_req_bits_dataRequest = core_io_imemReq_bits_dataRequest; // @[Top.scala 26:15]
  assign imem_io_req_bits_activeByteLane = core_io_imemReq_bits_activeByteLane; // @[Top.scala 26:15]
  assign imem_io_req_bits_isWrite = core_io_imemReq_bits_isWrite; // @[Top.scala 26:15]
  assign Tracer_clock = clock;
  assign Tracer_reset = reset;
  assign Tracer_io_rvfiUInt_0 = core_io_rvfiUInt_0; // @[Top.scala 45:19]
  assign Tracer_io_rvfiUInt_1 = core_io_rvfiUInt_1; // @[Top.scala 45:19]
  assign Tracer_io_rvfiUInt_2 = core_io_rvfiUInt_2; // @[Top.scala 45:19]
  assign Tracer_io_rvfiUInt_3 = core_io_rvfiUInt_3; // @[Top.scala 45:19]
  assign Tracer_io_rvfiSInt_0 = core_io_rvfiSInt_0; // @[Top.scala 45:19]
  assign Tracer_io_rvfiSInt_1 = core_io_rvfiSInt_1; // @[Top.scala 45:19]
  assign Tracer_io_rvfiSInt_2 = core_io_rvfiSInt_2; // @[Top.scala 45:19]
  assign Tracer_io_rvfiSInt_3 = core_io_rvfiSInt_3; // @[Top.scala 45:19]
  assign Tracer_io_rvfiSInt_4 = core_io_rvfiSInt_4; // @[Top.scala 45:19]
  assign Tracer_io_rvfiBool_0 = core_io_rvfiBool_0; // @[Top.scala 45:19]
  assign Tracer_io_rvfiRegAddr_0 = core_io_rvfiRegAddr_0; // @[Top.scala 45:19]
  assign Tracer_io_rvfiRegAddr_1 = core_io_rvfiRegAddr_1; // @[Top.scala 45:19]
  assign Tracer_io_rvfiRegAddr_2 = core_io_rvfiRegAddr_2; // @[Top.scala 45:19]
endmodule
