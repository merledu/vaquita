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
  output        io_v_load,
  output        io_v_store,
  output        io_v_ins,
  output        io_RegRead,
  output        io_V_MemToReg,
  output        io_V_MemRead,
  output        io_memWrite
);
  wire [1:0] configtype = io_Instruction[31:30]; // @[Vcontrol.scala 34:36]
  wire [6:0] opcode = io_Instruction[6:0]; // @[Vcontrol.scala 35:32]
  wire [2:0] func3 = io_Instruction[14:12]; // @[Vcontrol.scala 36:31]
  wire  _T = 7'h57 == opcode; // @[Conditional.scala 37:30]
  wire  _T_1 = func3 == 3'h7; // @[Vcontrol.scala 44:25]
  wire  _T_11 = _T_1 & configtype == 2'h3; // @[Vcontrol.scala 55:42]
  wire  _T_14 = func3 == 3'h3; // @[Vcontrol.scala 70:31]
  wire [2:0] _GEN_1 = func3 == 3'h3 ? 3'h4 : 3'h0; // @[Vcontrol.scala 70:45 Vcontrol.scala 74:26 Vcontrol.scala 23:15]
  wire  _GEN_3 = func3 == 3'h4 | _T_14; // @[Vcontrol.scala 65:45 Vcontrol.scala 66:28]
  wire [2:0] _GEN_4 = func3 == 3'h4 ? 3'h4 : _GEN_1; // @[Vcontrol.scala 65:45 Vcontrol.scala 68:26]
  wire  _GEN_5 = func3 == 3'h4 ? 1'h0 : _T_14; // @[Vcontrol.scala 65:45 Vcontrol.scala 22:15]
  wire  _GEN_7 = func3 == 3'h0 | _GEN_3; // @[Vcontrol.scala 59:45 Vcontrol.scala 60:28]
  wire [2:0] _GEN_8 = func3 == 3'h0 ? 3'h4 : _GEN_4; // @[Vcontrol.scala 59:45 Vcontrol.scala 62:26]
  wire  _GEN_10 = func3 == 3'h0 ? 1'h0 : _GEN_5; // @[Vcontrol.scala 59:45 Vcontrol.scala 22:15]
  wire  _GEN_11 = _T_1 & configtype == 2'h3 | _GEN_7; // @[Vcontrol.scala 55:67 Vcontrol.scala 56:28]
  wire [2:0] _GEN_12 = _T_1 & configtype == 2'h3 ? 3'h3 : _GEN_8; // @[Vcontrol.scala 55:67 Vcontrol.scala 57:26]
  wire  _GEN_14 = _T_1 & configtype == 2'h3 ? 1'h0 : _GEN_7; // @[Vcontrol.scala 55:67 Vcontrol.scala 24:14]
  wire  _GEN_16 = _T_1 & configtype == 2'h3 ? 1'h0 : _GEN_10; // @[Vcontrol.scala 55:67 Vcontrol.scala 22:15]
  wire  _GEN_17 = _T_1 & configtype == 2'h2 | _GEN_11; // @[Vcontrol.scala 49:67 Vcontrol.scala 50:28]
  wire  _GEN_18 = _T_1 & configtype == 2'h2 | _GEN_14; // @[Vcontrol.scala 49:67 Vcontrol.scala 51:25]
  wire  _GEN_19 = _T_1 & configtype == 2'h2 | _GEN_16; // @[Vcontrol.scala 49:67 Vcontrol.scala 52:26]
  wire [2:0] _GEN_20 = _T_1 & configtype == 2'h2 ? 3'h3 : _GEN_12; // @[Vcontrol.scala 49:67 Vcontrol.scala 53:26]
  wire  _GEN_21 = _T_1 & configtype == 2'h2 | _T_11; // @[Vcontrol.scala 49:67 Vcontrol.scala 54:25]
  wire  _GEN_23 = _T_1 & configtype == 2'h2 ? 1'h0 : _GEN_14; // @[Vcontrol.scala 49:67 Vcontrol.scala 28:16]
  wire  _GEN_24 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) | _GEN_17; // @[Vcontrol.scala 44:90 Vcontrol.scala 45:28]
  wire  _GEN_25 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) | _GEN_19; // @[Vcontrol.scala 44:90 Vcontrol.scala 46:26]
  wire [2:0] _GEN_26 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) ? 3'h3 : _GEN_20; // @[Vcontrol.scala 44:90 Vcontrol.scala 47:26]
  wire  _GEN_27 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) | _GEN_21; // @[Vcontrol.scala 44:90 Vcontrol.scala 48:25]
  wire  _GEN_28 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) ? 1'h0 : _GEN_18; // @[Vcontrol.scala 44:90 Vcontrol.scala 24:14]
  wire  _GEN_30 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) ? 1'h0 : _GEN_23; // @[Vcontrol.scala 44:90 Vcontrol.scala 28:16]
  wire  _T_15 = 7'h27 == opcode; // @[Conditional.scala 37:30]
  wire  _T_16 = 7'h7 == opcode; // @[Conditional.scala 37:30]
  wire  _GEN_36 = _T_15 ? 1'h0 : _T_16; // @[Conditional.scala 39:67 Vcontrol.scala 26:15]
  wire [2:0] _GEN_40 = _T ? _GEN_26 : 3'h0; // @[Conditional.scala 40:58]
  wire  _GEN_42 = _T & _GEN_28; // @[Conditional.scala 40:58]
  assign io_RegWrite = _T & _GEN_24; // @[Conditional.scala 40:58]
  assign io_opBsel = _T & _GEN_25; // @[Conditional.scala 40:58]
  assign io_Ex_sel = {{1'd0}, _GEN_40}; // @[Conditional.scala 40:58]
  assign io_aluop = {{4'd0}, _GEN_42}; // @[Conditional.scala 40:58]
  assign io_vset = _T & _GEN_27; // @[Conditional.scala 40:58]
  assign io_v_load = _T ? 1'h0 : _GEN_36; // @[Conditional.scala 40:58 Vcontrol.scala 26:15]
  assign io_v_store = _T ? 1'h0 : _T_15; // @[Conditional.scala 40:58 Vcontrol.scala 29:16]
  assign io_v_ins = _T | _T_15; // @[Conditional.scala 40:58]
  assign io_RegRead = _T ? _GEN_30 : _T_15; // @[Conditional.scala 40:58]
  assign io_V_MemToReg = 1'h0; // @[Vcontrol.scala 30:19]
  assign io_V_MemRead = 1'h0; // @[Vcontrol.scala 31:18]
  assign io_memWrite = _T ? 1'h0 : _T_15; // @[Conditional.scala 40:58 Vcontrol.scala 29:16]
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
  output [127:0] io_vs3_data,
  input  [127:0] io_vd_data,
  input          io_reg_write,
  input          io_reg_read,
  output [127:0] io_vd_dataout
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
  reg [127:0] register_0; // @[Vreg.scala 27:25]
  reg [127:0] register_1; // @[Vreg.scala 27:25]
  reg [127:0] register_2; // @[Vreg.scala 27:25]
  reg [127:0] register_3; // @[Vreg.scala 27:25]
  reg [127:0] register_4; // @[Vreg.scala 27:25]
  reg [127:0] register_5; // @[Vreg.scala 27:25]
  reg [127:0] register_6; // @[Vreg.scala 27:25]
  reg [127:0] register_7; // @[Vreg.scala 27:25]
  reg [127:0] register_8; // @[Vreg.scala 27:25]
  reg [127:0] register_9; // @[Vreg.scala 27:25]
  reg [127:0] register_10; // @[Vreg.scala 27:25]
  reg [127:0] register_11; // @[Vreg.scala 27:25]
  reg [127:0] register_12; // @[Vreg.scala 27:25]
  reg [127:0] register_13; // @[Vreg.scala 27:25]
  reg [127:0] register_14; // @[Vreg.scala 27:25]
  reg [127:0] register_15; // @[Vreg.scala 27:25]
  reg [127:0] register_16; // @[Vreg.scala 27:25]
  reg [127:0] register_17; // @[Vreg.scala 27:25]
  reg [127:0] register_18; // @[Vreg.scala 27:25]
  reg [127:0] register_19; // @[Vreg.scala 27:25]
  reg [127:0] register_20; // @[Vreg.scala 27:25]
  reg [127:0] register_21; // @[Vreg.scala 27:25]
  reg [127:0] register_22; // @[Vreg.scala 27:25]
  reg [127:0] register_23; // @[Vreg.scala 27:25]
  reg [127:0] register_24; // @[Vreg.scala 27:25]
  reg [127:0] register_25; // @[Vreg.scala 27:25]
  reg [127:0] register_26; // @[Vreg.scala 27:25]
  reg [127:0] register_27; // @[Vreg.scala 27:25]
  reg [127:0] register_28; // @[Vreg.scala 27:25]
  reg [127:0] register_29; // @[Vreg.scala 27:25]
  reg [127:0] register_30; // @[Vreg.scala 27:25]
  reg [127:0] register_31; // @[Vreg.scala 27:25]
  wire [4:0] _GEN_268 = {{1'd0}, io_lmul_vs1in_vs2in}; // @[Vreg.scala 28:27]
  wire [4:0] vs1_in = io_vs1_addr + _GEN_268; // @[Vreg.scala 28:27]
  wire [4:0] vs2_in = io_vs2_addr + _GEN_268; // @[Vreg.scala 29:27]
  wire [4:0] vs3_in = io_vd_addr + _GEN_268; // @[Vreg.scala 30:27]
  wire [4:0] _GEN_271 = {{1'd0}, io_lmul_count}; // @[Vreg.scala 31:26]
  wire [4:0] vsd_in = io_vd_addr + _GEN_271; // @[Vreg.scala 31:26]
  wire [127:0] _GEN_1 = 5'h1 == vs1_in ? $signed(register_1) : $signed(register_0); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_2 = 5'h2 == vs1_in ? $signed(register_2) : $signed(_GEN_1); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_3 = 5'h3 == vs1_in ? $signed(register_3) : $signed(_GEN_2); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_4 = 5'h4 == vs1_in ? $signed(register_4) : $signed(_GEN_3); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_5 = 5'h5 == vs1_in ? $signed(register_5) : $signed(_GEN_4); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_6 = 5'h6 == vs1_in ? $signed(register_6) : $signed(_GEN_5); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_7 = 5'h7 == vs1_in ? $signed(register_7) : $signed(_GEN_6); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_8 = 5'h8 == vs1_in ? $signed(register_8) : $signed(_GEN_7); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_9 = 5'h9 == vs1_in ? $signed(register_9) : $signed(_GEN_8); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_10 = 5'ha == vs1_in ? $signed(register_10) : $signed(_GEN_9); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_11 = 5'hb == vs1_in ? $signed(register_11) : $signed(_GEN_10); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_12 = 5'hc == vs1_in ? $signed(register_12) : $signed(_GEN_11); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_13 = 5'hd == vs1_in ? $signed(register_13) : $signed(_GEN_12); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_14 = 5'he == vs1_in ? $signed(register_14) : $signed(_GEN_13); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_15 = 5'hf == vs1_in ? $signed(register_15) : $signed(_GEN_14); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_16 = 5'h10 == vs1_in ? $signed(register_16) : $signed(_GEN_15); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_17 = 5'h11 == vs1_in ? $signed(register_17) : $signed(_GEN_16); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_18 = 5'h12 == vs1_in ? $signed(register_18) : $signed(_GEN_17); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_19 = 5'h13 == vs1_in ? $signed(register_19) : $signed(_GEN_18); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_20 = 5'h14 == vs1_in ? $signed(register_20) : $signed(_GEN_19); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_21 = 5'h15 == vs1_in ? $signed(register_21) : $signed(_GEN_20); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_22 = 5'h16 == vs1_in ? $signed(register_22) : $signed(_GEN_21); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_23 = 5'h17 == vs1_in ? $signed(register_23) : $signed(_GEN_22); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_24 = 5'h18 == vs1_in ? $signed(register_24) : $signed(_GEN_23); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_25 = 5'h19 == vs1_in ? $signed(register_25) : $signed(_GEN_24); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_26 = 5'h1a == vs1_in ? $signed(register_26) : $signed(_GEN_25); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_27 = 5'h1b == vs1_in ? $signed(register_27) : $signed(_GEN_26); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_28 = 5'h1c == vs1_in ? $signed(register_28) : $signed(_GEN_27); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_29 = 5'h1d == vs1_in ? $signed(register_29) : $signed(_GEN_28); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_30 = 5'h1e == vs1_in ? $signed(register_30) : $signed(_GEN_29); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_31 = 5'h1f == vs1_in ? $signed(register_31) : $signed(_GEN_30); // @[Vreg.scala 37:13 Vreg.scala 37:13]
  wire [127:0] _GEN_33 = 5'h1 == vs2_in ? $signed(register_1) : $signed(register_0); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_34 = 5'h2 == vs2_in ? $signed(register_2) : $signed(_GEN_33); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_35 = 5'h3 == vs2_in ? $signed(register_3) : $signed(_GEN_34); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_36 = 5'h4 == vs2_in ? $signed(register_4) : $signed(_GEN_35); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_37 = 5'h5 == vs2_in ? $signed(register_5) : $signed(_GEN_36); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_38 = 5'h6 == vs2_in ? $signed(register_6) : $signed(_GEN_37); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_39 = 5'h7 == vs2_in ? $signed(register_7) : $signed(_GEN_38); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_40 = 5'h8 == vs2_in ? $signed(register_8) : $signed(_GEN_39); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_41 = 5'h9 == vs2_in ? $signed(register_9) : $signed(_GEN_40); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_42 = 5'ha == vs2_in ? $signed(register_10) : $signed(_GEN_41); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_43 = 5'hb == vs2_in ? $signed(register_11) : $signed(_GEN_42); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_44 = 5'hc == vs2_in ? $signed(register_12) : $signed(_GEN_43); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_45 = 5'hd == vs2_in ? $signed(register_13) : $signed(_GEN_44); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_46 = 5'he == vs2_in ? $signed(register_14) : $signed(_GEN_45); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_47 = 5'hf == vs2_in ? $signed(register_15) : $signed(_GEN_46); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_48 = 5'h10 == vs2_in ? $signed(register_16) : $signed(_GEN_47); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_49 = 5'h11 == vs2_in ? $signed(register_17) : $signed(_GEN_48); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_50 = 5'h12 == vs2_in ? $signed(register_18) : $signed(_GEN_49); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_51 = 5'h13 == vs2_in ? $signed(register_19) : $signed(_GEN_50); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_52 = 5'h14 == vs2_in ? $signed(register_20) : $signed(_GEN_51); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_53 = 5'h15 == vs2_in ? $signed(register_21) : $signed(_GEN_52); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_54 = 5'h16 == vs2_in ? $signed(register_22) : $signed(_GEN_53); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_55 = 5'h17 == vs2_in ? $signed(register_23) : $signed(_GEN_54); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_56 = 5'h18 == vs2_in ? $signed(register_24) : $signed(_GEN_55); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_57 = 5'h19 == vs2_in ? $signed(register_25) : $signed(_GEN_56); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_58 = 5'h1a == vs2_in ? $signed(register_26) : $signed(_GEN_57); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_59 = 5'h1b == vs2_in ? $signed(register_27) : $signed(_GEN_58); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_60 = 5'h1c == vs2_in ? $signed(register_28) : $signed(_GEN_59); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_61 = 5'h1d == vs2_in ? $signed(register_29) : $signed(_GEN_60); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_62 = 5'h1e == vs2_in ? $signed(register_30) : $signed(_GEN_61); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_63 = 5'h1f == vs2_in ? $signed(register_31) : $signed(_GEN_62); // @[Vreg.scala 38:13 Vreg.scala 38:13]
  wire [127:0] _GEN_65 = 5'h1 == vs3_in ? $signed(register_1) : $signed(register_0); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_66 = 5'h2 == vs3_in ? $signed(register_2) : $signed(_GEN_65); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_67 = 5'h3 == vs3_in ? $signed(register_3) : $signed(_GEN_66); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_68 = 5'h4 == vs3_in ? $signed(register_4) : $signed(_GEN_67); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_69 = 5'h5 == vs3_in ? $signed(register_5) : $signed(_GEN_68); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_70 = 5'h6 == vs3_in ? $signed(register_6) : $signed(_GEN_69); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_71 = 5'h7 == vs3_in ? $signed(register_7) : $signed(_GEN_70); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_72 = 5'h8 == vs3_in ? $signed(register_8) : $signed(_GEN_71); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_73 = 5'h9 == vs3_in ? $signed(register_9) : $signed(_GEN_72); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_74 = 5'ha == vs3_in ? $signed(register_10) : $signed(_GEN_73); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_75 = 5'hb == vs3_in ? $signed(register_11) : $signed(_GEN_74); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_76 = 5'hc == vs3_in ? $signed(register_12) : $signed(_GEN_75); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_77 = 5'hd == vs3_in ? $signed(register_13) : $signed(_GEN_76); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_78 = 5'he == vs3_in ? $signed(register_14) : $signed(_GEN_77); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_79 = 5'hf == vs3_in ? $signed(register_15) : $signed(_GEN_78); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_80 = 5'h10 == vs3_in ? $signed(register_16) : $signed(_GEN_79); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_81 = 5'h11 == vs3_in ? $signed(register_17) : $signed(_GEN_80); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_82 = 5'h12 == vs3_in ? $signed(register_18) : $signed(_GEN_81); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_83 = 5'h13 == vs3_in ? $signed(register_19) : $signed(_GEN_82); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_84 = 5'h14 == vs3_in ? $signed(register_20) : $signed(_GEN_83); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_85 = 5'h15 == vs3_in ? $signed(register_21) : $signed(_GEN_84); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_86 = 5'h16 == vs3_in ? $signed(register_22) : $signed(_GEN_85); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_87 = 5'h17 == vs3_in ? $signed(register_23) : $signed(_GEN_86); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_88 = 5'h18 == vs3_in ? $signed(register_24) : $signed(_GEN_87); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_89 = 5'h19 == vs3_in ? $signed(register_25) : $signed(_GEN_88); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_90 = 5'h1a == vs3_in ? $signed(register_26) : $signed(_GEN_89); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_91 = 5'h1b == vs3_in ? $signed(register_27) : $signed(_GEN_90); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_92 = 5'h1c == vs3_in ? $signed(register_28) : $signed(_GEN_91); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_93 = 5'h1d == vs3_in ? $signed(register_29) : $signed(_GEN_92); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_94 = 5'h1e == vs3_in ? $signed(register_30) : $signed(_GEN_93); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_95 = 5'h1f == vs3_in ? $signed(register_31) : $signed(_GEN_94); // @[Vreg.scala 40:13 Vreg.scala 40:13]
  wire [127:0] _GEN_96 = 5'h0 == vsd_in ? $signed(io_vd_data) : $signed(register_0); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_97 = 5'h1 == vsd_in ? $signed(io_vd_data) : $signed(register_1); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_98 = 5'h2 == vsd_in ? $signed(io_vd_data) : $signed(register_2); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_99 = 5'h3 == vsd_in ? $signed(io_vd_data) : $signed(register_3); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_100 = 5'h4 == vsd_in ? $signed(io_vd_data) : $signed(register_4); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_101 = 5'h5 == vsd_in ? $signed(io_vd_data) : $signed(register_5); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_102 = 5'h6 == vsd_in ? $signed(io_vd_data) : $signed(register_6); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_103 = 5'h7 == vsd_in ? $signed(io_vd_data) : $signed(register_7); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_104 = 5'h8 == vsd_in ? $signed(io_vd_data) : $signed(register_8); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_105 = 5'h9 == vsd_in ? $signed(io_vd_data) : $signed(register_9); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_106 = 5'ha == vsd_in ? $signed(io_vd_data) : $signed(register_10); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_107 = 5'hb == vsd_in ? $signed(io_vd_data) : $signed(register_11); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_108 = 5'hc == vsd_in ? $signed(io_vd_data) : $signed(register_12); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_109 = 5'hd == vsd_in ? $signed(io_vd_data) : $signed(register_13); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_110 = 5'he == vsd_in ? $signed(io_vd_data) : $signed(register_14); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_111 = 5'hf == vsd_in ? $signed(io_vd_data) : $signed(register_15); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_112 = 5'h10 == vsd_in ? $signed(io_vd_data) : $signed(register_16); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_113 = 5'h11 == vsd_in ? $signed(io_vd_data) : $signed(register_17); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_114 = 5'h12 == vsd_in ? $signed(io_vd_data) : $signed(register_18); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_115 = 5'h13 == vsd_in ? $signed(io_vd_data) : $signed(register_19); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_116 = 5'h14 == vsd_in ? $signed(io_vd_data) : $signed(register_20); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_117 = 5'h15 == vsd_in ? $signed(io_vd_data) : $signed(register_21); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_118 = 5'h16 == vsd_in ? $signed(io_vd_data) : $signed(register_22); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_119 = 5'h17 == vsd_in ? $signed(io_vd_data) : $signed(register_23); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_120 = 5'h18 == vsd_in ? $signed(io_vd_data) : $signed(register_24); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_121 = 5'h19 == vsd_in ? $signed(io_vd_data) : $signed(register_25); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_122 = 5'h1a == vsd_in ? $signed(io_vd_data) : $signed(register_26); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_123 = 5'h1b == vsd_in ? $signed(io_vd_data) : $signed(register_27); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_124 = 5'h1c == vsd_in ? $signed(io_vd_data) : $signed(register_28); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_125 = 5'h1d == vsd_in ? $signed(io_vd_data) : $signed(register_29); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_126 = 5'h1e == vsd_in ? $signed(io_vd_data) : $signed(register_30); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_127 = 5'h1f == vsd_in ? $signed(io_vd_data) : $signed(register_31); // @[Vreg.scala 43:24 Vreg.scala 43:24 Vreg.scala 27:25]
  wire [127:0] _GEN_192 = io_reg_write & io_reg_read ? $signed(_GEN_31) : $signed(128'sh0); // @[Vreg.scala 53:58 Vreg.scala 55:17 Vreg.scala 60:17]
  wire [127:0] _GEN_193 = io_reg_write & io_reg_read ? $signed(_GEN_63) : $signed(128'sh0); // @[Vreg.scala 53:58 Vreg.scala 56:17 Vreg.scala 61:17]
  wire [127:0] _GEN_194 = io_reg_write & io_reg_read ? $signed(register_0) : $signed(128'sh0); // @[Vreg.scala 53:58 Vreg.scala 57:17 Vreg.scala 62:17]
  wire [127:0] _GEN_195 = io_reg_write & io_reg_read ? $signed(_GEN_95) : $signed(128'sh0); // @[Vreg.scala 53:58 Vreg.scala 58:17 Vreg.scala 63:17]
  wire [127:0] _GEN_196 = ~io_reg_write & io_reg_read ? $signed(_GEN_31) : $signed(_GEN_192); // @[Vreg.scala 48:58 Vreg.scala 49:17]
  wire [127:0] _GEN_197 = ~io_reg_write & io_reg_read ? $signed(_GEN_63) : $signed(_GEN_193); // @[Vreg.scala 48:58 Vreg.scala 50:17]
  wire [127:0] _GEN_198 = ~io_reg_write & io_reg_read ? $signed(register_0) : $signed(_GEN_194); // @[Vreg.scala 48:58 Vreg.scala 51:17]
  wire [127:0] _GEN_199 = ~io_reg_write & io_reg_read ? $signed(_GEN_95) : $signed(_GEN_195); // @[Vreg.scala 48:58 Vreg.scala 52:17]
  assign io_vs0_data = io_reg_write & ~io_reg_read ? $signed(128'sh0) : $signed(_GEN_198); // @[Vreg.scala 42:54 Vreg.scala 46:19]
  assign io_vs1_data = io_reg_write & ~io_reg_read ? $signed(128'sh0) : $signed(_GEN_196); // @[Vreg.scala 42:54 Vreg.scala 44:19]
  assign io_vs2_data = io_reg_write & ~io_reg_read ? $signed(128'sh0) : $signed(_GEN_197); // @[Vreg.scala 42:54 Vreg.scala 45:19]
  assign io_vs3_data = io_reg_write & ~io_reg_read ? $signed(128'sh0) : $signed(_GEN_199); // @[Vreg.scala 42:54 Vreg.scala 47:19]
  assign io_vd_dataout = io_vd_data; // @[Vreg.scala 26:17]
  always @(posedge clock) begin
    if (reset) begin // @[Vreg.scala 27:25]
      register_0 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_0 <= _GEN_96;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_0 <= _GEN_96;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_1 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_1 <= _GEN_97;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_1 <= _GEN_97;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_2 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_2 <= _GEN_98;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_2 <= _GEN_98;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_3 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_3 <= _GEN_99;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_3 <= _GEN_99;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_4 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_4 <= _GEN_100;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_4 <= _GEN_100;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_5 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_5 <= _GEN_101;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_5 <= _GEN_101;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_6 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_6 <= _GEN_102;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_6 <= _GEN_102;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_7 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_7 <= _GEN_103;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_7 <= _GEN_103;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_8 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_8 <= _GEN_104;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_8 <= _GEN_104;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_9 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_9 <= _GEN_105;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_9 <= _GEN_105;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_10 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_10 <= _GEN_106;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_10 <= _GEN_106;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_11 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_11 <= _GEN_107;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_11 <= _GEN_107;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_12 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_12 <= _GEN_108;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_12 <= _GEN_108;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_13 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_13 <= _GEN_109;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_13 <= _GEN_109;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_14 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_14 <= _GEN_110;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_14 <= _GEN_110;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_15 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_15 <= _GEN_111;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_15 <= _GEN_111;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_16 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_16 <= _GEN_112;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_16 <= _GEN_112;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_17 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_17 <= _GEN_113;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_17 <= _GEN_113;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_18 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_18 <= _GEN_114;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_18 <= _GEN_114;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_19 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_19 <= _GEN_115;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_19 <= _GEN_115;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_20 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_20 <= _GEN_116;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_20 <= _GEN_116;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_21 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_21 <= _GEN_117;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_21 <= _GEN_117;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_22 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_22 <= _GEN_118;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_22 <= _GEN_118;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_23 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_23 <= _GEN_119;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_23 <= _GEN_119;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_24 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_24 <= _GEN_120;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_24 <= _GEN_120;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_25 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_25 <= _GEN_121;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_25 <= _GEN_121;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_26 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_26 <= _GEN_122;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_26 <= _GEN_122;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_27 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_27 <= _GEN_123;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_27 <= _GEN_123;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_28 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_28 <= _GEN_124;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_28 <= _GEN_124;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_29 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_29 <= _GEN_125;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_29 <= _GEN_125;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_30 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_30 <= _GEN_126;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
        register_30 <= _GEN_126;
      end
    end
    if (reset) begin // @[Vreg.scala 27:25]
      register_31 <= 128'sh0; // @[Vreg.scala 27:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 42:54]
      register_31 <= _GEN_127;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 48:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 53:58]
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
  output         io_ctl_v_memRead,
  output         io_ctl_v_memWrite,
  output         io_ctl_v_reg_read,
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
  output [127:0] io_vs3_data,
  output [127:0] io_id_wbvs3_data,
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
  wire  csr_clock; // @[InstructionDecode.scala 116:19]
  wire  csr_reset; // @[InstructionDecode.scala 116:19]
  wire [31:0] csr_io_i_misa_value; // @[InstructionDecode.scala 116:19]
  wire [31:0] csr_io_i_mhartid_value; // @[InstructionDecode.scala 116:19]
  wire [31:0] csr_io_i_data; // @[InstructionDecode.scala 116:19]
  wire [4:0] csr_io_i_imm; // @[InstructionDecode.scala 116:19]
  wire [31:0] csr_io_o_data; // @[InstructionDecode.scala 116:19]
  wire [2:0] csr_io_i_opr; // @[InstructionDecode.scala 116:19]
  wire [11:0] csr_io_i_addr; // @[InstructionDecode.scala 116:19]
  wire  csr_io_i_w_en; // @[InstructionDecode.scala 116:19]
  wire [31:0] csr_io_fcsr_o_data; // @[InstructionDecode.scala 116:19]
  wire  csrController_io_regWrExecute; // @[InstructionDecode.scala 128:29]
  wire [4:0] csrController_io_rdSelExecute; // @[InstructionDecode.scala 128:29]
  wire  csrController_io_csrWrExecute; // @[InstructionDecode.scala 128:29]
  wire  csrController_io_regWrMemory; // @[InstructionDecode.scala 128:29]
  wire [4:0] csrController_io_rdSelMemory; // @[InstructionDecode.scala 128:29]
  wire  csrController_io_csrWrMemory; // @[InstructionDecode.scala 128:29]
  wire  csrController_io_regWrWriteback; // @[InstructionDecode.scala 128:29]
  wire [4:0] csrController_io_rdSelWriteback; // @[InstructionDecode.scala 128:29]
  wire  csrController_io_csrWrWriteback; // @[InstructionDecode.scala 128:29]
  wire [4:0] csrController_io_rs1SelDecode; // @[InstructionDecode.scala 128:29]
  wire  csrController_io_csrInstDecode; // @[InstructionDecode.scala 128:29]
  wire [2:0] csrController_io_forwardRS1; // @[InstructionDecode.scala 128:29]
  wire  hdu_io_id_ex_memRead; // @[InstructionDecode.scala 143:19]
  wire  hdu_io_ex_mem_memRead; // @[InstructionDecode.scala 143:19]
  wire  hdu_io_id_ex_branch; // @[InstructionDecode.scala 143:19]
  wire [4:0] hdu_io_id_ex_rd; // @[InstructionDecode.scala 143:19]
  wire [4:0] hdu_io_ex_mem_rd; // @[InstructionDecode.scala 143:19]
  wire [4:0] hdu_io_id_rs1; // @[InstructionDecode.scala 143:19]
  wire [4:0] hdu_io_id_rs2; // @[InstructionDecode.scala 143:19]
  wire  hdu_io_taken; // @[InstructionDecode.scala 143:19]
  wire [1:0] hdu_io_jump; // @[InstructionDecode.scala 143:19]
  wire  hdu_io_branch; // @[InstructionDecode.scala 143:19]
  wire  hdu_io_if_reg_write; // @[InstructionDecode.scala 143:19]
  wire  hdu_io_pc_write; // @[InstructionDecode.scala 143:19]
  wire  hdu_io_ctl_mux; // @[InstructionDecode.scala 143:19]
  wire  hdu_io_ifid_flush; // @[InstructionDecode.scala 143:19]
  wire  hdu_io_take_branch; // @[InstructionDecode.scala 143:19]
  wire [31:0] control_io_in; // @[InstructionDecode.scala 158:23]
  wire  control_io_aluSrc; // @[InstructionDecode.scala 158:23]
  wire [1:0] control_io_memToReg; // @[InstructionDecode.scala 158:23]
  wire  control_io_regWrite; // @[InstructionDecode.scala 158:23]
  wire  control_io_memRead; // @[InstructionDecode.scala 158:23]
  wire  control_io_memWrite; // @[InstructionDecode.scala 158:23]
  wire  control_io_branch; // @[InstructionDecode.scala 158:23]
  wire [1:0] control_io_aluOp; // @[InstructionDecode.scala 158:23]
  wire [1:0] control_io_jump; // @[InstructionDecode.scala 158:23]
  wire [1:0] control_io_aluSrc1; // @[InstructionDecode.scala 158:23]
  wire [31:0] Vcontrol_io_Instruction; // @[InstructionDecode.scala 175:24]
  wire  Vcontrol_io_RegWrite; // @[InstructionDecode.scala 175:24]
  wire  Vcontrol_io_opBsel; // @[InstructionDecode.scala 175:24]
  wire [3:0] Vcontrol_io_Ex_sel; // @[InstructionDecode.scala 175:24]
  wire [4:0] Vcontrol_io_aluop; // @[InstructionDecode.scala 175:24]
  wire  Vcontrol_io_vset; // @[InstructionDecode.scala 175:24]
  wire  Vcontrol_io_v_load; // @[InstructionDecode.scala 175:24]
  wire  Vcontrol_io_v_store; // @[InstructionDecode.scala 175:24]
  wire  Vcontrol_io_v_ins; // @[InstructionDecode.scala 175:24]
  wire  Vcontrol_io_RegRead; // @[InstructionDecode.scala 175:24]
  wire  Vcontrol_io_V_MemToReg; // @[InstructionDecode.scala 175:24]
  wire  Vcontrol_io_V_MemRead; // @[InstructionDecode.scala 175:24]
  wire  Vcontrol_io_memWrite; // @[InstructionDecode.scala 175:24]
  wire  registers_clock; // @[InstructionDecode.scala 189:25]
  wire  registers_reset; // @[InstructionDecode.scala 189:25]
  wire [4:0] registers_io_readAddress_0; // @[InstructionDecode.scala 189:25]
  wire [4:0] registers_io_readAddress_1; // @[InstructionDecode.scala 189:25]
  wire  registers_io_writeEnable; // @[InstructionDecode.scala 189:25]
  wire [4:0] registers_io_writeAddress; // @[InstructionDecode.scala 189:25]
  wire [31:0] registers_io_writeData; // @[InstructionDecode.scala 189:25]
  wire [31:0] registers_io_readData_0; // @[InstructionDecode.scala 189:25]
  wire [31:0] registers_io_readData_1; // @[InstructionDecode.scala 189:25]
  wire  v_registers_clock; // @[InstructionDecode.scala 205:27]
  wire  v_registers_reset; // @[InstructionDecode.scala 205:27]
  wire [4:0] v_registers_io_vs1_addr; // @[InstructionDecode.scala 205:27]
  wire [4:0] v_registers_io_vs2_addr; // @[InstructionDecode.scala 205:27]
  wire [4:0] v_registers_io_vd_addr; // @[InstructionDecode.scala 205:27]
  wire [3:0] v_registers_io_lmul_count; // @[InstructionDecode.scala 205:27]
  wire [3:0] v_registers_io_lmul_vs1in_vs2in; // @[InstructionDecode.scala 205:27]
  wire [127:0] v_registers_io_vs0_data; // @[InstructionDecode.scala 205:27]
  wire [127:0] v_registers_io_vs1_data; // @[InstructionDecode.scala 205:27]
  wire [127:0] v_registers_io_vs2_data; // @[InstructionDecode.scala 205:27]
  wire [127:0] v_registers_io_vs3_data; // @[InstructionDecode.scala 205:27]
  wire [127:0] v_registers_io_vd_data; // @[InstructionDecode.scala 205:27]
  wire  v_registers_io_reg_write; // @[InstructionDecode.scala 205:27]
  wire  v_registers_io_reg_read; // @[InstructionDecode.scala 205:27]
  wire [127:0] v_registers_io_vd_dataout; // @[InstructionDecode.scala 205:27]
  wire [31:0] immediate_io_instruction; // @[InstructionDecode.scala 253:25]
  wire [31:0] immediate_io_out; // @[InstructionDecode.scala 253:25]
  wire [31:0] v_immediate_io_instruction; // @[InstructionDecode.scala 257:27]
  wire [31:0] v_immediate_io_z_imm; // @[InstructionDecode.scala 257:27]
  wire [31:0] v_immediate_io_addi_imm; // @[InstructionDecode.scala 257:27]
  wire  vec_csr_clock; // @[InstructionDecode.scala 263:23]
  wire  vec_csr_reset; // @[InstructionDecode.scala 263:23]
  wire [10:0] vec_csr_io_vtypei; // @[InstructionDecode.scala 263:23]
  wire [31:0] vec_csr_io_vl; // @[InstructionDecode.scala 263:23]
  wire  vec_csr_io_vset; // @[InstructionDecode.scala 263:23]
  wire [31:0] vec_csr_io_vl_out; // @[InstructionDecode.scala 263:23]
  wire [31:0] vec_csr_io_vtype_out; // @[InstructionDecode.scala 263:23]
  wire [31:0] vec_csr_io_vstart_out; // @[InstructionDecode.scala 263:23]
  wire  bu_io_branch; // @[InstructionDecode.scala 296:18]
  wire [2:0] bu_io_funct3; // @[InstructionDecode.scala 296:18]
  wire [31:0] bu_io_rd1; // @[InstructionDecode.scala 296:18]
  wire [31:0] bu_io_rd2; // @[InstructionDecode.scala 296:18]
  wire  bu_io_take_branch; // @[InstructionDecode.scala 296:18]
  wire  bu_io_taken; // @[InstructionDecode.scala 296:18]
  wire [31:0] _T_17 = io_csr_Wb ? io_csr_Wb_data : io_writeData; // @[InstructionDecode.scala 200:34]
  wire [31:0] _GEN_5 = io_id_instruction[19:15] == 5'h0 ? 32'h0 : io_writeData; // @[InstructionDecode.scala 234:30 InstructionDecode.scala 235:20 InstructionDecode.scala 237:20]
  wire [31:0] _GEN_7 = io_id_instruction[24:20] == 5'h0 ? 32'h0 : io_writeData; // @[InstructionDecode.scala 243:30 InstructionDecode.scala 244:20 InstructionDecode.scala 246:20]
  wire [10:0] _T_31 = io_id_instruction[30:20]; // @[InstructionDecode.scala 269:43]
  wire  _T_33 = io_id_instruction[19:15] == io_ex_mem_ins[11:7]; // @[InstructionDecode.scala 278:20]
  wire  _T_35 = io_id_instruction[19:15] == io_mem_wb_ins[11:7]; // @[InstructionDecode.scala 280:26]
  wire [31:0] _GEN_9 = io_id_instruction[19:15] == io_mem_wb_ins[11:7] ? io_mem_wb_result : io_readData1; // @[InstructionDecode.scala 280:52 InstructionDecode.scala 281:14 InstructionDecode.scala 284:14]
  wire [31:0] _GEN_11 = io_id_instruction[24:20] == io_mem_wb_ins[11:7] ? io_mem_wb_result : io_readData2; // @[InstructionDecode.scala 288:52 InstructionDecode.scala 289:14 InstructionDecode.scala 292:14]
  wire  _T_42 = io_id_instruction[19:15] == io_ex_ins[11:7]; // @[InstructionDecode.scala 306:22]
  wire [31:0] _GEN_13 = _T_42 ? io_ex_result : io_readData1; // @[InstructionDecode.scala 312:47 InstructionDecode.scala 313:14 InstructionDecode.scala 315:16]
  wire [31:0] _GEN_14 = _T_35 ? io_mem_wb_result : _GEN_13; // @[InstructionDecode.scala 310:52 InstructionDecode.scala 311:14]
  wire [31:0] _GEN_15 = _T_33 ? io_ex_mem_result : _GEN_14; // @[InstructionDecode.scala 308:54 InstructionDecode.scala 309:14]
  wire [31:0] j_offset = io_id_instruction[19:15] == io_ex_ins[11:7] ? io_ex_result : _GEN_15; // @[InstructionDecode.scala 306:43 InstructionDecode.scala 307:16]
  wire [31:0] _T_51 = io_pcAddress + io_immediate; // @[InstructionDecode.scala 320:37]
  wire [31:0] _T_54 = j_offset + io_immediate; // @[InstructionDecode.scala 322:35]
  wire [31:0] _T_56 = io_pcAddress + immediate_io_out; // @[InstructionDecode.scala 325:39]
  wire [31:0] _GEN_17 = io_ctl_jump == 2'h2 ? _T_54 : _T_56; // @[InstructionDecode.scala 321:35 InstructionDecode.scala 322:23 InstructionDecode.scala 325:23]
  wire  _T_66 = io_func3 == 3'h5; // @[InstructionDecode.scala 340:107]
  wire [31:0] _T_79 = io_ex_mem_mem_read ? io_dmem_data : io_ex_mem_result; // @[InstructionDecode.scala 350:15]
  wire [31:0] _T_81 = 3'h1 == csrController_io_forwardRS1 ? io_ex_result : registers_io_readData_1; // @[Mux.scala 80:57]
  wire [31:0] _T_83 = 3'h2 == csrController_io_forwardRS1 ? _T_79 : _T_81; // @[Mux.scala 80:57]
  wire [31:0] _T_85 = 3'h3 == csrController_io_forwardRS1 ? io_writeData : _T_83; // @[Mux.scala 80:57]
  wire [31:0] _T_87 = 3'h4 == csrController_io_forwardRS1 ? io_csr_Ex_data : _T_85; // @[Mux.scala 80:57]
  wire [31:0] _T_89 = 3'h5 == csrController_io_forwardRS1 ? io_csr_Mem_data : _T_87; // @[Mux.scala 80:57]
  CSR csr ( // @[InstructionDecode.scala 116:19]
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
  CSRController csrController ( // @[InstructionDecode.scala 128:29]
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
  HazardUnit hdu ( // @[InstructionDecode.scala 143:19]
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
  Control control ( // @[InstructionDecode.scala 158:23]
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
  controldec Vcontrol ( // @[InstructionDecode.scala 175:24]
    .io_Instruction(Vcontrol_io_Instruction),
    .io_RegWrite(Vcontrol_io_RegWrite),
    .io_opBsel(Vcontrol_io_opBsel),
    .io_Ex_sel(Vcontrol_io_Ex_sel),
    .io_aluop(Vcontrol_io_aluop),
    .io_vset(Vcontrol_io_vset),
    .io_v_load(Vcontrol_io_v_load),
    .io_v_store(Vcontrol_io_v_store),
    .io_v_ins(Vcontrol_io_v_ins),
    .io_RegRead(Vcontrol_io_RegRead),
    .io_V_MemToReg(Vcontrol_io_V_MemToReg),
    .io_V_MemRead(Vcontrol_io_V_MemRead),
    .io_memWrite(Vcontrol_io_memWrite)
  );
  Registers registers ( // @[InstructionDecode.scala 189:25]
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
  vregfile v_registers ( // @[InstructionDecode.scala 205:27]
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
    .io_vs3_data(v_registers_io_vs3_data),
    .io_vd_data(v_registers_io_vd_data),
    .io_reg_write(v_registers_io_reg_write),
    .io_reg_read(v_registers_io_reg_read),
    .io_vd_dataout(v_registers_io_vd_dataout)
  );
  ImmediateGen immediate ( // @[InstructionDecode.scala 253:25]
    .io_instruction(immediate_io_instruction),
    .io_out(immediate_io_out)
  );
  ImmdValGen1 v_immediate ( // @[InstructionDecode.scala 257:27]
    .io_instruction(v_immediate_io_instruction),
    .io_z_imm(v_immediate_io_z_imm),
    .io_addi_imm(v_immediate_io_addi_imm)
  );
  v_csr vec_csr ( // @[InstructionDecode.scala 263:23]
    .clock(vec_csr_clock),
    .reset(vec_csr_reset),
    .io_vtypei(vec_csr_io_vtypei),
    .io_vl(vec_csr_io_vl),
    .io_vset(vec_csr_io_vset),
    .io_vl_out(vec_csr_io_vl_out),
    .io_vtype_out(vec_csr_io_vtype_out),
    .io_vstart_out(vec_csr_io_vstart_out)
  );
  BranchUnit bu ( // @[InstructionDecode.scala 296:18]
    .io_branch(bu_io_branch),
    .io_funct3(bu_io_funct3),
    .io_rd1(bu_io_rd1),
    .io_rd2(bu_io_rd2),
    .io_take_branch(bu_io_take_branch),
    .io_taken(bu_io_taken)
  );
  assign io_immediate = immediate_io_out; // @[InstructionDecode.scala 255:16]
  assign io_writeRegAddress = io_id_instruction[11:7]; // @[InstructionDecode.scala 337:42]
  assign io_readData1 = io_ctl_writeEnable & io_writeReg == io_id_instruction[19:15] ? _GEN_5 : registers_io_readData_0; // @[InstructionDecode.scala 233:60 InstructionDecode.scala 240:18]
  assign io_readData2 = io_ctl_writeEnable & io_writeReg == io_id_instruction[24:20] ? _GEN_7 : registers_io_readData_1; // @[InstructionDecode.scala 242:60 InstructionDecode.scala 249:18]
  assign io_func7 = io_id_instruction[6:0] == 7'h33 | io_id_instruction[6:0] == 7'h13 & io_func3 == 3'h5 ?
    io_id_instruction[31:25] : 7'h0; // @[InstructionDecode.scala 340:117 InstructionDecode.scala 341:14 InstructionDecode.scala 343:14]
  assign io_func3 = io_id_instruction[14:12]; // @[InstructionDecode.scala 338:32]
  assign io_func6 = io_id_instruction[31:26]; // @[InstructionDecode.scala 339:32]
  assign io_ctl_aluSrc = control_io_aluSrc; // @[InstructionDecode.scala 161:17]
  assign io_ctl_memToReg = control_io_memToReg; // @[InstructionDecode.scala 165:19]
  assign io_ctl_regWrite = hdu_io_ctl_mux & io_id_instruction != 32'h13 & control_io_regWrite; // @[InstructionDecode.scala 167:57 InstructionDecode.scala 169:21 InstructionDecode.scala 172:21]
  assign io_ctl_memRead = control_io_memRead; // @[InstructionDecode.scala 164:18]
  assign io_ctl_memWrite = hdu_io_ctl_mux & io_id_instruction != 32'h13 & control_io_memWrite; // @[InstructionDecode.scala 167:57 InstructionDecode.scala 168:21 InstructionDecode.scala 171:21]
  assign io_ctl_branch = control_io_branch; // @[InstructionDecode.scala 163:17]
  assign io_ctl_aluOp = control_io_aluOp; // @[InstructionDecode.scala 160:16]
  assign io_ctl_jump = control_io_jump; // @[InstructionDecode.scala 166:15]
  assign io_ctl_v_RegWrite = Vcontrol_io_RegWrite; // @[InstructionDecode.scala 178:21]
  assign io_ctl_v_opBsel = Vcontrol_io_opBsel; // @[InstructionDecode.scala 179:19]
  assign io_ctl_v_Ex_sel = Vcontrol_io_Ex_sel; // @[InstructionDecode.scala 180:19]
  assign io_ctl_v_aluop = Vcontrol_io_aluop; // @[InstructionDecode.scala 181:18]
  assign io_ctl_v_vset = Vcontrol_io_vset; // @[InstructionDecode.scala 182:17]
  assign io_ctl_v_load = {{3'd0}, Vcontrol_io_v_load}; // @[InstructionDecode.scala 183:17]
  assign io_ctl_v_ins = Vcontrol_io_v_ins; // @[InstructionDecode.scala 184:16]
  assign io_ctl_v_memRead = Vcontrol_io_V_MemRead; // @[InstructionDecode.scala 185:20]
  assign io_ctl_v_memWrite = Vcontrol_io_memWrite; // @[InstructionDecode.scala 186:21]
  assign io_ctl_v_reg_read = Vcontrol_io_RegRead; // @[InstructionDecode.scala 187:21]
  assign io_vs0_data = v_registers_io_vs0_data; // @[InstructionDecode.scala 214:15]
  assign io_vs1_data = v_registers_io_vs1_data; // @[InstructionDecode.scala 215:15]
  assign io_vs2_data = v_registers_io_vs2_data; // @[InstructionDecode.scala 216:15]
  assign io_reg_write = Vcontrol_io_RegWrite; // @[InstructionDecode.scala 219:16]
  assign io_vs1_addr = io_id_instruction[19:15]; // @[InstructionDecode.scala 220:35]
  assign io_vs2_addr = io_id_instruction[24:20]; // @[InstructionDecode.scala 221:35]
  assign io_vd_addr = io_id_instruction[11:7]; // @[InstructionDecode.scala 222:34]
  assign io_vs3_data = v_registers_io_vs3_data; // @[InstructionDecode.scala 218:15]
  assign io_id_wbvs3_data = v_registers_io_vd_dataout; // @[InstructionDecode.scala 227:20]
  assign io_v_z_imm = {{21{_T_31[10]}},_T_31}; // @[InstructionDecode.scala 269:43]
  assign io_v_addi_imm = v_immediate_io_addi_imm; // @[InstructionDecode.scala 260:17]
  assign io_vtypei_out = vec_csr_io_vtype_out[10:0]; // @[InstructionDecode.scala 271:17]
  assign io_vl_out = vec_csr_io_vl_out; // @[InstructionDecode.scala 270:13]
  assign io_vstart_out = vec_csr_io_vstart_out; // @[InstructionDecode.scala 272:17]
  assign io_ctl_aluSrc1 = control_io_aluSrc1; // @[InstructionDecode.scala 162:18]
  assign io_hdu_pcWrite = hdu_io_pc_write; // @[InstructionDecode.scala 154:18]
  assign io_hdu_if_reg_write = hdu_io_if_reg_write; // @[InstructionDecode.scala 155:23]
  assign io_pcSrc = bu_io_taken | io_ctl_jump != 2'h0; // @[InstructionDecode.scala 328:20]
  assign io_pcPlusOffset = io_ctl_jump == 2'h1 ? _T_51 : _GEN_17; // @[InstructionDecode.scala 319:29 InstructionDecode.scala 320:21]
  assign io_ifid_flush = hdu_io_ifid_flush; // @[InstructionDecode.scala 335:17]
  assign io_stall = io_func7 == 7'h1 & (io_func3 == 3'h4 | _T_66 | io_func3 == 3'h6 | io_func3 == 3'h7); // @[InstructionDecode.scala 346:32]
  assign io_csr_o_data = csr_io_o_data; // @[InstructionDecode.scala 125:31]
  assign io_is_csr = io_id_instruction[6:0] == 7'h73; // @[InstructionDecode.scala 124:58]
  assign io_fscr_o_data = csr_io_fcsr_o_data; // @[InstructionDecode.scala 126:31]
  assign io_rs_addr_0 = io_id_instruction[19:15]; // @[InstructionDecode.scala 191:38]
  assign io_rs_addr_1 = io_id_instruction[24:20]; // @[InstructionDecode.scala 192:38]
  assign csr_clock = clock;
  assign csr_reset = reset;
  assign csr_io_i_misa_value = io_csr_i_misa; // @[InstructionDecode.scala 117:31]
  assign csr_io_i_mhartid_value = io_csr_i_mhartid; // @[InstructionDecode.scala 118:31]
  assign csr_io_i_data = 3'h6 == csrController_io_forwardRS1 ? io_csr_Wb_data : _T_89; // @[Mux.scala 80:57]
  assign csr_io_i_imm = io_id_instruction[19:15]; // @[InstructionDecode.scala 119:51]
  assign csr_io_i_opr = io_id_instruction[14:12]; // @[InstructionDecode.scala 120:51]
  assign csr_io_i_addr = io_id_instruction[31:20]; // @[InstructionDecode.scala 121:51]
  assign csr_io_i_w_en = io_is_csr & io_id_instruction[19:15] != 5'h0; // @[InstructionDecode.scala 122:44]
  assign csrController_io_regWrExecute = io_id_ex_regWr; // @[InstructionDecode.scala 129:36]
  assign csrController_io_rdSelExecute = io_id_ex_rd; // @[InstructionDecode.scala 130:36]
  assign csrController_io_csrWrExecute = io_csr_Ex; // @[InstructionDecode.scala 131:36]
  assign csrController_io_regWrMemory = io_ex_mem_regWr; // @[InstructionDecode.scala 132:36]
  assign csrController_io_rdSelMemory = io_ex_mem_rd; // @[InstructionDecode.scala 133:36]
  assign csrController_io_csrWrMemory = io_csr_Mem; // @[InstructionDecode.scala 134:36]
  assign csrController_io_regWrWriteback = io_ctl_writeEnable; // @[InstructionDecode.scala 135:36]
  assign csrController_io_rdSelWriteback = io_writeReg; // @[InstructionDecode.scala 136:36]
  assign csrController_io_csrWrWriteback = io_csr_Wb; // @[InstructionDecode.scala 137:36]
  assign csrController_io_rs1SelDecode = io_id_instruction[19:15]; // @[InstructionDecode.scala 138:56]
  assign csrController_io_csrInstDecode = io_id_instruction[6:0] == 7'h73; // @[InstructionDecode.scala 139:63]
  assign hdu_io_id_ex_memRead = io_id_ex_mem_read; // @[InstructionDecode.scala 145:24]
  assign hdu_io_ex_mem_memRead = io_ex_mem_mem_read; // @[InstructionDecode.scala 146:25]
  assign hdu_io_id_ex_branch = io_id_ex_branch; // @[InstructionDecode.scala 148:23]
  assign hdu_io_id_ex_rd = io_id_ex_rd; // @[InstructionDecode.scala 147:19]
  assign hdu_io_ex_mem_rd = io_ex_mem_rd; // @[InstructionDecode.scala 149:20]
  assign hdu_io_id_rs1 = io_id_instruction[19:15]; // @[InstructionDecode.scala 150:37]
  assign hdu_io_id_rs2 = io_id_instruction[24:20]; // @[InstructionDecode.scala 151:37]
  assign hdu_io_taken = bu_io_taken; // @[InstructionDecode.scala 302:16]
  assign hdu_io_jump = io_ctl_jump; // @[InstructionDecode.scala 152:15]
  assign hdu_io_branch = io_ctl_branch; // @[InstructionDecode.scala 153:17]
  assign control_io_in = io_id_instruction; // @[InstructionDecode.scala 159:17]
  assign Vcontrol_io_Instruction = io_id_instruction; // @[InstructionDecode.scala 177:27]
  assign registers_clock = clock;
  assign registers_reset = reset;
  assign registers_io_readAddress_0 = io_id_instruction[19:15]; // @[InstructionDecode.scala 191:38]
  assign registers_io_readAddress_1 = io_id_instruction[24:20]; // @[InstructionDecode.scala 192:38]
  assign registers_io_writeEnable = io_ctl_vset ? io_ctl_vset : io_ctl_writeEnable | io_csr_Wb; // @[InstructionDecode.scala 195:28 InstructionDecode.scala 196:30 InstructionDecode.scala 201:30]
  assign registers_io_writeAddress = io_ctl_vset ? io_wb_addr : io_writeReg; // @[InstructionDecode.scala 195:28 InstructionDecode.scala 198:31 InstructionDecode.scala 202:31]
  assign registers_io_writeData = io_ctl_vset ? io_vl : _T_17; // @[InstructionDecode.scala 195:28 InstructionDecode.scala 197:28 InstructionDecode.scala 200:28]
  assign v_registers_clock = clock;
  assign v_registers_reset = reset;
  assign v_registers_io_vs1_addr = io_id_instruction[19:15]; // @[InstructionDecode.scala 208:47]
  assign v_registers_io_vs2_addr = io_id_instruction[24:20]; // @[InstructionDecode.scala 209:47]
  assign v_registers_io_vd_addr = io_wb_addr; // @[InstructionDecode.scala 210:26]
  assign v_registers_io_lmul_count = io_id_lmul_count; // @[InstructionDecode.scala 223:29]
  assign v_registers_io_lmul_vs1in_vs2in = io_id_lmul_vs1in_vs2in; // @[InstructionDecode.scala 224:35]
  assign v_registers_io_vd_data = io_write_data; // @[InstructionDecode.scala 207:26]
  assign v_registers_io_reg_write = io_wb_RegWrite; // @[InstructionDecode.scala 211:28]
  assign v_registers_io_reg_read = Vcontrol_io_RegRead; // @[InstructionDecode.scala 212:27]
  assign immediate_io_instruction = io_id_instruction; // @[InstructionDecode.scala 254:28]
  assign v_immediate_io_instruction = io_id_instruction; // @[InstructionDecode.scala 259:30]
  assign vec_csr_clock = clock;
  assign vec_csr_reset = reset;
  assign vec_csr_io_vtypei = io_vtypei; // @[InstructionDecode.scala 266:21]
  assign vec_csr_io_vl = io_vl; // @[InstructionDecode.scala 265:17]
  assign vec_csr_io_vset = io_ctl_vset; // @[InstructionDecode.scala 267:19]
  assign bu_io_branch = io_ctl_branch; // @[InstructionDecode.scala 297:16]
  assign bu_io_funct3 = io_id_instruction[14:12]; // @[InstructionDecode.scala 298:36]
  assign bu_io_rd1 = io_id_instruction[19:15] == io_ex_mem_ins[11:7] ? io_ex_mem_result : _GEN_9; // @[InstructionDecode.scala 278:46 InstructionDecode.scala 279:12]
  assign bu_io_rd2 = io_id_instruction[24:20] == io_ex_mem_ins[11:7] ? io_ex_mem_result : _GEN_11; // @[InstructionDecode.scala 286:46 InstructionDecode.scala 287:12]
  assign bu_io_take_branch = hdu_io_take_branch; // @[InstructionDecode.scala 301:21]
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
  input  [4:0] io_reg_vs3,
  input        io_ex_reg_write,
  input        io_mem_reg_write,
  output [1:0] io_forwardA,
  output [1:0] io_forwardB,
  output [1:0] io_forwardC
);
  wire  _T_1 = io_ex_reg_rd != 5'h0; // @[ForwardingUnit.scala 34:52]
  wire  _T_5 = io_ex_reg_vd != 5'h0; // @[ForwardingUnit.scala 36:58]
  wire  _T_9 = io_mem_reg_rd != 5'h0; // @[ForwardingUnit.scala 38:60]
  wire  _T_13 = io_mem_reg_vd != 5'h0; // @[ForwardingUnit.scala 40:60]
  wire [1:0] _GEN_0 = io_reg_vs1 == io_mem_reg_vd & io_mem_reg_vd != 5'h0 & io_mem_reg_write ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 40:88 ForwardingUnit.scala 41:17 ForwardingUnit.scala 43:17]
  wire [1:0] _GEN_1 = io_reg_rs1 == io_mem_reg_rd & io_mem_reg_rd != 5'h0 & io_mem_regWrite ? 2'h2 : _GEN_0; // @[ForwardingUnit.scala 38:87 ForwardingUnit.scala 39:17]
  wire [1:0] _GEN_2 = io_reg_vs1 == io_ex_reg_vd & io_ex_reg_vd != 5'h0 & io_ex_reg_write ? 2'h1 : _GEN_1; // @[ForwardingUnit.scala 36:85 ForwardingUnit.scala 37:17]
  wire [1:0] _GEN_4 = io_reg_vs2 == io_mem_reg_vd & _T_13 & io_mem_reg_write ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 52:88 ForwardingUnit.scala 53:17 ForwardingUnit.scala 55:17]
  wire [1:0] _GEN_5 = io_reg_rs2 == io_mem_reg_rd & _T_9 & io_mem_regWrite ? 2'h2 : _GEN_4; // @[ForwardingUnit.scala 50:87 ForwardingUnit.scala 51:17]
  wire [1:0] _GEN_6 = io_reg_vs2 == io_ex_reg_vd & _T_5 & io_ex_reg_write ? 2'h1 : _GEN_5; // @[ForwardingUnit.scala 48:85 ForwardingUnit.scala 49:17]
  wire [1:0] _GEN_8 = io_reg_vs3 == io_mem_reg_vd & _T_13 & io_mem_reg_write ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 60:88 ForwardingUnit.scala 61:17 ForwardingUnit.scala 64:17]
  assign io_forwardA = io_reg_rs1 == io_ex_reg_rd & io_ex_reg_rd != 5'h0 & io_ex_regWrite ? 2'h1 : _GEN_2; // @[ForwardingUnit.scala 34:78 ForwardingUnit.scala 35:17]
  assign io_forwardB = io_reg_rs2 == io_ex_reg_rd & _T_1 & io_ex_regWrite ? 2'h1 : _GEN_6; // @[ForwardingUnit.scala 46:78 ForwardingUnit.scala 47:17]
  assign io_forwardC = io_reg_vs3 == io_ex_reg_vd & _T_5 & io_ex_reg_write ? 2'h1 : _GEN_8; // @[ForwardingUnit.scala 58:79 ForwardingUnit.scala 59:17]
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
  input  [127:0] io_vs0,
  input  [127:0] io_vd,
  input  [31:0]  io_vl,
  input  [31:0]  io_vstart,
  input          io_vma,
  input          io_vta,
  input          io_vm,
  input  [4:0]   io_vd_addr,
  input  [8:0]   io_aluc,
  input  [2:0]   io_sew,
  input          io_v_ins,
  output [127:0] io_v_output,
  output [127:0] io_vs3
);
  wire [7:0] sew_8_a_0 = io_vs1[7:0]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_1 = io_vs1[15:8]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_2 = io_vs1[23:16]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_3 = io_vs1[31:24]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_4 = io_vs1[39:32]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_5 = io_vs1[47:40]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_6 = io_vs1[55:48]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_7 = io_vs1[63:56]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_8 = io_vs1[71:64]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_9 = io_vs1[79:72]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_10 = io_vs1[87:80]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_11 = io_vs1[95:88]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_12 = io_vs1[103:96]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_13 = io_vs1[111:104]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_14 = io_vs1[119:112]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_a_15 = io_vs1[127:120]; // @[Valu.scala 70:64]
  wire [7:0] sew_8_b_0 = io_vs2[7:0]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_1 = io_vs2[15:8]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_2 = io_vs2[23:16]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_3 = io_vs2[31:24]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_4 = io_vs2[39:32]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_5 = io_vs2[47:40]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_6 = io_vs2[55:48]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_7 = io_vs2[63:56]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_8 = io_vs2[71:64]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_9 = io_vs2[79:72]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_10 = io_vs2[87:80]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_11 = io_vs2[95:88]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_12 = io_vs2[103:96]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_13 = io_vs2[111:104]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_14 = io_vs2[119:112]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_15 = io_vs2[127:120]; // @[Valu.scala 71:64]
  wire [15:0] sew_16_a_0 = io_vs1[15:0]; // @[Valu.scala 72:67]
  wire [15:0] sew_16_a_1 = io_vs1[31:16]; // @[Valu.scala 72:67]
  wire [15:0] sew_16_a_2 = io_vs1[47:32]; // @[Valu.scala 72:67]
  wire [15:0] sew_16_a_3 = io_vs1[63:48]; // @[Valu.scala 72:67]
  wire [15:0] sew_16_a_4 = io_vs1[79:64]; // @[Valu.scala 72:67]
  wire [15:0] sew_16_a_5 = io_vs1[95:80]; // @[Valu.scala 72:67]
  wire [15:0] sew_16_a_6 = io_vs1[111:96]; // @[Valu.scala 72:67]
  wire [15:0] sew_16_a_7 = io_vs1[127:112]; // @[Valu.scala 72:67]
  wire [15:0] sew_16_b_0 = io_vs2[15:0]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_b_1 = io_vs2[31:16]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_b_2 = io_vs2[47:32]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_b_3 = io_vs2[63:48]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_b_4 = io_vs2[79:64]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_b_5 = io_vs2[95:80]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_b_6 = io_vs2[111:96]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_b_7 = io_vs2[127:112]; // @[Valu.scala 73:67]
  wire [31:0] sew_32_a_0 = io_vs1[31:0]; // @[Valu.scala 74:67]
  wire [31:0] sew_32_a_1 = io_vs1[63:32]; // @[Valu.scala 74:67]
  wire [31:0] sew_32_a_2 = io_vs1[95:64]; // @[Valu.scala 74:67]
  wire [31:0] sew_32_a_3 = io_vs1[127:96]; // @[Valu.scala 74:67]
  wire [31:0] sew_32_b_0 = io_vs2[31:0]; // @[Valu.scala 75:67]
  wire [31:0] sew_32_b_1 = io_vs2[63:32]; // @[Valu.scala 75:67]
  wire [31:0] sew_32_b_2 = io_vs2[95:64]; // @[Valu.scala 75:67]
  wire [31:0] sew_32_b_3 = io_vs2[127:96]; // @[Valu.scala 75:67]
  wire [63:0] sew_64_a_0 = io_vs1[63:0]; // @[Valu.scala 76:67]
  wire [63:0] sew_64_a_1 = io_vs1[127:64]; // @[Valu.scala 76:67]
  wire [63:0] sew_64_b_0 = io_vs2[63:0]; // @[Valu.scala 77:67]
  wire [63:0] sew_64_b_1 = io_vs2[127:64]; // @[Valu.scala 77:67]
  wire [7:0] sew_8_vd_0 = io_vd[7:0]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_1 = io_vd[15:8]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_2 = io_vd[23:16]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_3 = io_vd[31:24]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_4 = io_vd[39:32]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_5 = io_vd[47:40]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_6 = io_vd[55:48]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_7 = io_vd[63:56]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_8 = io_vd[71:64]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_9 = io_vd[79:72]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_10 = io_vd[87:80]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_11 = io_vd[95:88]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_12 = io_vd[103:96]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_13 = io_vd[111:104]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_14 = io_vd[119:112]; // @[Valu.scala 84:64]
  wire [7:0] sew_8_vd_15 = io_vd[127:120]; // @[Valu.scala 84:64]
  wire [15:0] sew_16_vd_0 = io_vd[15:0]; // @[Valu.scala 85:67]
  wire [15:0] sew_16_vd_1 = io_vd[31:16]; // @[Valu.scala 85:67]
  wire [15:0] sew_16_vd_2 = io_vd[47:32]; // @[Valu.scala 85:67]
  wire [15:0] sew_16_vd_3 = io_vd[63:48]; // @[Valu.scala 85:67]
  wire [15:0] sew_16_vd_4 = io_vd[79:64]; // @[Valu.scala 85:67]
  wire [15:0] sew_16_vd_5 = io_vd[95:80]; // @[Valu.scala 85:67]
  wire [15:0] sew_16_vd_6 = io_vd[111:96]; // @[Valu.scala 85:67]
  wire [15:0] sew_16_vd_7 = io_vd[127:112]; // @[Valu.scala 85:67]
  wire [31:0] sew_32_vd_0 = io_vd[31:0]; // @[Valu.scala 86:67]
  wire [31:0] sew_32_vd_1 = io_vd[63:32]; // @[Valu.scala 86:67]
  wire [31:0] sew_32_vd_2 = io_vd[95:64]; // @[Valu.scala 86:67]
  wire [31:0] sew_32_vd_3 = io_vd[127:96]; // @[Valu.scala 86:67]
  wire [63:0] sew_64_vd_0 = io_vd[63:0]; // @[Valu.scala 87:67]
  wire [63:0] sew_64_vd_1 = io_vd[127:64]; // @[Valu.scala 87:67]
  wire  _T_180 = io_sew == 3'h3; // @[Valu.scala 199:22]
  wire  _T_182 = io_aluc[2:0] == 3'h0; // @[Valu.scala 199:52]
  wire  _T_184 = 32'h0 < io_vstart; // @[Valu.scala 93:16]
  wire  _T_187 = 32'h0 >= io_vstart & 32'h0 < io_vl; // @[Valu.scala 94:29]
  wire  _T_191 = ~io_vm & ~io_vs0[0]; // @[Valu.scala 95:47]
  wire  _T_193 = ~io_vm & ~io_vs0[0] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_199 = _T_191 & io_vma; // @[Valu.scala 96:72]
  wire [63:0] _T_202 = $signed(sew_64_a_0) + $signed(sew_64_b_0); // @[Valu.scala 100:35]
  wire [63:0] _T_205 = $signed(sew_64_a_0) - $signed(sew_64_b_0); // @[Valu.scala 101:37]
  wire [63:0] _T_207 = $signed(sew_64_a_0) & $signed(sew_64_b_0); // @[Valu.scala 102:36]
  wire [63:0] _T_209 = $signed(sew_64_a_0) | $signed(sew_64_b_0); // @[Valu.scala 103:35]
  wire [63:0] _T_211 = $signed(sew_64_a_0) ^ $signed(sew_64_b_0); // @[Valu.scala 104:36]
  wire [63:0] _T_212 = io_vs2[63:0]; // @[Valu.scala 105:40]
  wire [63:0] _T_213 = io_vs1[63:0]; // @[Valu.scala 105:58]
  wire [63:0] _T_215 = _T_212 <= _T_213 ? $signed(sew_64_b_0) : $signed(sew_64_a_0); // @[Valu.scala 105:31]
  wire [63:0] _T_217 = $signed(sew_64_b_0) <= $signed(sew_64_a_0) ? $signed(sew_64_b_0) : $signed(sew_64_a_0); // @[Valu.scala 106:30]
  wire [63:0] _T_219 = 9'h0 == io_aluc ? $signed(_T_202) : $signed(64'sh0); // @[Mux.scala 80:57]
  wire [63:0] _T_221 = 9'hb8 == io_aluc ? $signed(_T_205) : $signed(_T_219); // @[Mux.scala 80:57]
  wire [63:0] _T_223 = 9'h48 == io_aluc ? $signed(_T_207) : $signed(_T_221); // @[Mux.scala 80:57]
  wire [63:0] _T_225 = 9'h50 == io_aluc ? $signed(_T_209) : $signed(_T_223); // @[Mux.scala 80:57]
  wire [63:0] _T_227 = 9'h58 == io_aluc ? $signed(_T_211) : $signed(_T_225); // @[Mux.scala 80:57]
  wire [63:0] _T_229 = 9'h20 == io_aluc ? $signed(_T_215) : $signed(_T_227); // @[Mux.scala 80:57]
  wire [63:0] _T_231 = 9'h28 == io_aluc ? $signed(_T_217) : $signed(_T_229); // @[Mux.scala 80:57]
  wire [63:0] _T_232 = _T_191 & io_vma ? $signed(-64'sh1) : $signed(_T_231); // @[Valu.scala 96:36]
  wire [63:0] _T_233 = ~io_vm & ~io_vs0[0] & ~io_vma ? $signed(sew_64_vd_0) : $signed(_T_232); // @[Valu.scala 95:32]
  wire  _T_234 = ~io_vta; // @[Valu.scala 110:20]
  wire [63:0] _T_239 = ~io_vta & 32'h0 >= io_vl ? $signed(sew_64_vd_0) : $signed(-64'sh1); // @[Valu.scala 110:12]
  wire [63:0] _T_240 = 32'h0 >= io_vstart & 32'h0 < io_vl ? $signed(_T_233) : $signed(_T_239); // @[Valu.scala 94:11]
  wire  _T_242 = 32'h1 < io_vstart; // @[Valu.scala 93:16]
  wire  _T_245 = 32'h1 >= io_vstart & 32'h1 < io_vl; // @[Valu.scala 94:29]
  wire  _T_249 = ~io_vm & ~io_vs0[1]; // @[Valu.scala 95:47]
  wire  _T_251 = ~io_vm & ~io_vs0[1] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_257 = _T_249 & io_vma; // @[Valu.scala 96:72]
  wire [63:0] _T_260 = $signed(sew_64_a_1) + $signed(sew_64_b_1); // @[Valu.scala 100:35]
  wire [63:0] _T_263 = $signed(sew_64_a_1) - $signed(sew_64_b_1); // @[Valu.scala 101:37]
  wire [63:0] _T_265 = $signed(sew_64_a_1) & $signed(sew_64_b_1); // @[Valu.scala 102:36]
  wire [63:0] _T_267 = $signed(sew_64_a_1) | $signed(sew_64_b_1); // @[Valu.scala 103:35]
  wire [63:0] _T_269 = $signed(sew_64_a_1) ^ $signed(sew_64_b_1); // @[Valu.scala 104:36]
  wire [63:0] _T_270 = io_vs2[127:64]; // @[Valu.scala 105:40]
  wire [63:0] _T_271 = io_vs1[127:64]; // @[Valu.scala 105:58]
  wire [63:0] _T_273 = _T_270 <= _T_271 ? $signed(sew_64_b_1) : $signed(sew_64_a_1); // @[Valu.scala 105:31]
  wire [63:0] _T_275 = $signed(sew_64_b_1) <= $signed(sew_64_a_1) ? $signed(sew_64_b_1) : $signed(sew_64_a_1); // @[Valu.scala 106:30]
  wire [63:0] _T_277 = 9'h0 == io_aluc ? $signed(_T_260) : $signed(64'sh0); // @[Mux.scala 80:57]
  wire [63:0] _T_279 = 9'hb8 == io_aluc ? $signed(_T_263) : $signed(_T_277); // @[Mux.scala 80:57]
  wire [63:0] _T_281 = 9'h48 == io_aluc ? $signed(_T_265) : $signed(_T_279); // @[Mux.scala 80:57]
  wire [63:0] _T_283 = 9'h50 == io_aluc ? $signed(_T_267) : $signed(_T_281); // @[Mux.scala 80:57]
  wire [63:0] _T_285 = 9'h58 == io_aluc ? $signed(_T_269) : $signed(_T_283); // @[Mux.scala 80:57]
  wire [63:0] _T_287 = 9'h20 == io_aluc ? $signed(_T_273) : $signed(_T_285); // @[Mux.scala 80:57]
  wire [63:0] _T_289 = 9'h28 == io_aluc ? $signed(_T_275) : $signed(_T_287); // @[Mux.scala 80:57]
  wire [63:0] _T_290 = _T_249 & io_vma ? $signed(-64'sh1) : $signed(_T_289); // @[Valu.scala 96:36]
  wire [63:0] _T_291 = ~io_vm & ~io_vs0[1] & ~io_vma ? $signed(sew_64_vd_1) : $signed(_T_290); // @[Valu.scala 95:32]
  wire [63:0] _T_297 = ~io_vta & 32'h1 >= io_vl ? $signed(sew_64_vd_1) : $signed(-64'sh1); // @[Valu.scala 110:12]
  wire [63:0] _T_298 = 32'h1 >= io_vstart & 32'h1 < io_vl ? $signed(_T_291) : $signed(_T_297); // @[Valu.scala 94:11]
  wire [63:0] lo = 32'h0 < io_vstart ? $signed(sew_64_vd_0) : $signed(_T_240); // @[Cat.scala 30:58]
  wire [63:0] hi = 32'h1 < io_vstart ? $signed(sew_64_vd_1) : $signed(_T_298); // @[Cat.scala 30:58]
  wire [127:0] _T_301 = {hi,lo}; // @[Valu.scala 113:24]
  wire  _T_302 = io_sew == 3'h2; // @[Valu.scala 201:28]
  wire [31:0] _T_324 = $signed(sew_32_a_0) + $signed(sew_32_b_0); // @[Valu.scala 100:35]
  wire [31:0] _T_327 = $signed(sew_32_a_0) - $signed(sew_32_b_0); // @[Valu.scala 101:37]
  wire [31:0] _T_329 = $signed(sew_32_a_0) & $signed(sew_32_b_0); // @[Valu.scala 102:36]
  wire [31:0] _T_331 = $signed(sew_32_a_0) | $signed(sew_32_b_0); // @[Valu.scala 103:35]
  wire [31:0] _T_333 = $signed(sew_32_a_0) ^ $signed(sew_32_b_0); // @[Valu.scala 104:36]
  wire [31:0] _T_334 = io_vs2[31:0]; // @[Valu.scala 105:40]
  wire [31:0] _T_335 = io_vs1[31:0]; // @[Valu.scala 105:58]
  wire [31:0] _T_337 = _T_334 <= _T_335 ? $signed(sew_32_b_0) : $signed(sew_32_a_0); // @[Valu.scala 105:31]
  wire [31:0] _T_339 = $signed(sew_32_b_0) <= $signed(sew_32_a_0) ? $signed(sew_32_b_0) : $signed(sew_32_a_0); // @[Valu.scala 106:30]
  wire [31:0] _T_341 = 9'h0 == io_aluc ? $signed(_T_324) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_343 = 9'hb8 == io_aluc ? $signed(_T_327) : $signed(_T_341); // @[Mux.scala 80:57]
  wire [31:0] _T_345 = 9'h48 == io_aluc ? $signed(_T_329) : $signed(_T_343); // @[Mux.scala 80:57]
  wire [31:0] _T_347 = 9'h50 == io_aluc ? $signed(_T_331) : $signed(_T_345); // @[Mux.scala 80:57]
  wire [31:0] _T_349 = 9'h58 == io_aluc ? $signed(_T_333) : $signed(_T_347); // @[Mux.scala 80:57]
  wire [31:0] _T_351 = 9'h20 == io_aluc ? $signed(_T_337) : $signed(_T_349); // @[Mux.scala 80:57]
  wire [31:0] _T_353 = 9'h28 == io_aluc ? $signed(_T_339) : $signed(_T_351); // @[Mux.scala 80:57]
  wire [31:0] _T_354 = _T_191 & io_vma ? $signed(-32'sh1) : $signed(_T_353); // @[Valu.scala 96:36]
  wire [31:0] _T_355 = ~io_vm & ~io_vs0[0] & ~io_vma ? $signed(sew_32_vd_0) : $signed(_T_354); // @[Valu.scala 95:32]
  wire [31:0] _T_361 = ~io_vta & 32'h0 >= io_vl ? $signed(sew_32_vd_0) : $signed(-32'sh1); // @[Valu.scala 110:12]
  wire [31:0] _T_362 = 32'h0 >= io_vstart & 32'h0 < io_vl ? $signed(_T_355) : $signed(_T_361); // @[Valu.scala 94:11]
  wire [31:0] _T_382 = $signed(sew_32_a_1) + $signed(sew_32_b_1); // @[Valu.scala 100:35]
  wire [31:0] _T_385 = $signed(sew_32_a_1) - $signed(sew_32_b_1); // @[Valu.scala 101:37]
  wire [31:0] _T_387 = $signed(sew_32_a_1) & $signed(sew_32_b_1); // @[Valu.scala 102:36]
  wire [31:0] _T_389 = $signed(sew_32_a_1) | $signed(sew_32_b_1); // @[Valu.scala 103:35]
  wire [31:0] _T_391 = $signed(sew_32_a_1) ^ $signed(sew_32_b_1); // @[Valu.scala 104:36]
  wire [31:0] _T_392 = io_vs2[63:32]; // @[Valu.scala 105:40]
  wire [31:0] _T_393 = io_vs1[63:32]; // @[Valu.scala 105:58]
  wire [31:0] _T_395 = _T_392 <= _T_393 ? $signed(sew_32_b_1) : $signed(sew_32_a_1); // @[Valu.scala 105:31]
  wire [31:0] _T_397 = $signed(sew_32_b_1) <= $signed(sew_32_a_1) ? $signed(sew_32_b_1) : $signed(sew_32_a_1); // @[Valu.scala 106:30]
  wire [31:0] _T_399 = 9'h0 == io_aluc ? $signed(_T_382) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_401 = 9'hb8 == io_aluc ? $signed(_T_385) : $signed(_T_399); // @[Mux.scala 80:57]
  wire [31:0] _T_403 = 9'h48 == io_aluc ? $signed(_T_387) : $signed(_T_401); // @[Mux.scala 80:57]
  wire [31:0] _T_405 = 9'h50 == io_aluc ? $signed(_T_389) : $signed(_T_403); // @[Mux.scala 80:57]
  wire [31:0] _T_407 = 9'h58 == io_aluc ? $signed(_T_391) : $signed(_T_405); // @[Mux.scala 80:57]
  wire [31:0] _T_409 = 9'h20 == io_aluc ? $signed(_T_395) : $signed(_T_407); // @[Mux.scala 80:57]
  wire [31:0] _T_411 = 9'h28 == io_aluc ? $signed(_T_397) : $signed(_T_409); // @[Mux.scala 80:57]
  wire [31:0] _T_412 = _T_249 & io_vma ? $signed(-32'sh1) : $signed(_T_411); // @[Valu.scala 96:36]
  wire [31:0] _T_413 = ~io_vm & ~io_vs0[1] & ~io_vma ? $signed(sew_32_vd_1) : $signed(_T_412); // @[Valu.scala 95:32]
  wire [31:0] _T_419 = ~io_vta & 32'h1 >= io_vl ? $signed(sew_32_vd_1) : $signed(-32'sh1); // @[Valu.scala 110:12]
  wire [31:0] _T_420 = 32'h1 >= io_vstart & 32'h1 < io_vl ? $signed(_T_413) : $signed(_T_419); // @[Valu.scala 94:11]
  wire  _T_422 = 32'h2 < io_vstart; // @[Valu.scala 93:16]
  wire  _T_425 = 32'h2 >= io_vstart & 32'h2 < io_vl; // @[Valu.scala 94:29]
  wire  _T_429 = ~io_vm & ~io_vs0[2]; // @[Valu.scala 95:47]
  wire  _T_431 = ~io_vm & ~io_vs0[2] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_437 = _T_429 & io_vma; // @[Valu.scala 96:72]
  wire [31:0] _T_440 = $signed(sew_32_a_2) + $signed(sew_32_b_2); // @[Valu.scala 100:35]
  wire [31:0] _T_443 = $signed(sew_32_a_2) - $signed(sew_32_b_2); // @[Valu.scala 101:37]
  wire [31:0] _T_445 = $signed(sew_32_a_2) & $signed(sew_32_b_2); // @[Valu.scala 102:36]
  wire [31:0] _T_447 = $signed(sew_32_a_2) | $signed(sew_32_b_2); // @[Valu.scala 103:35]
  wire [31:0] _T_449 = $signed(sew_32_a_2) ^ $signed(sew_32_b_2); // @[Valu.scala 104:36]
  wire [31:0] _T_450 = io_vs2[95:64]; // @[Valu.scala 105:40]
  wire [31:0] _T_451 = io_vs1[95:64]; // @[Valu.scala 105:58]
  wire [31:0] _T_453 = _T_450 <= _T_451 ? $signed(sew_32_b_2) : $signed(sew_32_a_2); // @[Valu.scala 105:31]
  wire [31:0] _T_455 = $signed(sew_32_b_2) <= $signed(sew_32_a_2) ? $signed(sew_32_b_2) : $signed(sew_32_a_2); // @[Valu.scala 106:30]
  wire [31:0] _T_457 = 9'h0 == io_aluc ? $signed(_T_440) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_459 = 9'hb8 == io_aluc ? $signed(_T_443) : $signed(_T_457); // @[Mux.scala 80:57]
  wire [31:0] _T_461 = 9'h48 == io_aluc ? $signed(_T_445) : $signed(_T_459); // @[Mux.scala 80:57]
  wire [31:0] _T_463 = 9'h50 == io_aluc ? $signed(_T_447) : $signed(_T_461); // @[Mux.scala 80:57]
  wire [31:0] _T_465 = 9'h58 == io_aluc ? $signed(_T_449) : $signed(_T_463); // @[Mux.scala 80:57]
  wire [31:0] _T_467 = 9'h20 == io_aluc ? $signed(_T_453) : $signed(_T_465); // @[Mux.scala 80:57]
  wire [31:0] _T_469 = 9'h28 == io_aluc ? $signed(_T_455) : $signed(_T_467); // @[Mux.scala 80:57]
  wire [31:0] _T_470 = _T_429 & io_vma ? $signed(-32'sh1) : $signed(_T_469); // @[Valu.scala 96:36]
  wire [31:0] _T_471 = ~io_vm & ~io_vs0[2] & ~io_vma ? $signed(sew_32_vd_2) : $signed(_T_470); // @[Valu.scala 95:32]
  wire [31:0] _T_477 = ~io_vta & 32'h2 >= io_vl ? $signed(sew_32_vd_2) : $signed(-32'sh1); // @[Valu.scala 110:12]
  wire [31:0] _T_478 = 32'h2 >= io_vstart & 32'h2 < io_vl ? $signed(_T_471) : $signed(_T_477); // @[Valu.scala 94:11]
  wire  _T_480 = 32'h3 < io_vstart; // @[Valu.scala 93:16]
  wire  _T_483 = 32'h3 >= io_vstart & 32'h3 < io_vl; // @[Valu.scala 94:29]
  wire  _T_487 = ~io_vm & ~io_vs0[3]; // @[Valu.scala 95:47]
  wire  _T_489 = ~io_vm & ~io_vs0[3] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_495 = _T_487 & io_vma; // @[Valu.scala 96:72]
  wire [31:0] _T_498 = $signed(sew_32_a_3) + $signed(sew_32_b_3); // @[Valu.scala 100:35]
  wire [31:0] _T_501 = $signed(sew_32_a_3) - $signed(sew_32_b_3); // @[Valu.scala 101:37]
  wire [31:0] _T_503 = $signed(sew_32_a_3) & $signed(sew_32_b_3); // @[Valu.scala 102:36]
  wire [31:0] _T_505 = $signed(sew_32_a_3) | $signed(sew_32_b_3); // @[Valu.scala 103:35]
  wire [31:0] _T_507 = $signed(sew_32_a_3) ^ $signed(sew_32_b_3); // @[Valu.scala 104:36]
  wire [31:0] _T_508 = io_vs2[127:96]; // @[Valu.scala 105:40]
  wire [31:0] _T_509 = io_vs1[127:96]; // @[Valu.scala 105:58]
  wire [31:0] _T_511 = _T_508 <= _T_509 ? $signed(sew_32_b_3) : $signed(sew_32_a_3); // @[Valu.scala 105:31]
  wire [31:0] _T_513 = $signed(sew_32_b_3) <= $signed(sew_32_a_3) ? $signed(sew_32_b_3) : $signed(sew_32_a_3); // @[Valu.scala 106:30]
  wire [31:0] _T_515 = 9'h0 == io_aluc ? $signed(_T_498) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_517 = 9'hb8 == io_aluc ? $signed(_T_501) : $signed(_T_515); // @[Mux.scala 80:57]
  wire [31:0] _T_519 = 9'h48 == io_aluc ? $signed(_T_503) : $signed(_T_517); // @[Mux.scala 80:57]
  wire [31:0] _T_521 = 9'h50 == io_aluc ? $signed(_T_505) : $signed(_T_519); // @[Mux.scala 80:57]
  wire [31:0] _T_523 = 9'h58 == io_aluc ? $signed(_T_507) : $signed(_T_521); // @[Mux.scala 80:57]
  wire [31:0] _T_525 = 9'h20 == io_aluc ? $signed(_T_511) : $signed(_T_523); // @[Mux.scala 80:57]
  wire [31:0] _T_527 = 9'h28 == io_aluc ? $signed(_T_513) : $signed(_T_525); // @[Mux.scala 80:57]
  wire [31:0] _T_528 = _T_487 & io_vma ? $signed(-32'sh1) : $signed(_T_527); // @[Valu.scala 96:36]
  wire [31:0] _T_529 = ~io_vm & ~io_vs0[3] & ~io_vma ? $signed(sew_32_vd_3) : $signed(_T_528); // @[Valu.scala 95:32]
  wire [31:0] _T_535 = ~io_vta & 32'h3 >= io_vl ? $signed(sew_32_vd_3) : $signed(-32'sh1); // @[Valu.scala 110:12]
  wire [31:0] _T_536 = 32'h3 >= io_vstart & 32'h3 < io_vl ? $signed(_T_529) : $signed(_T_535); // @[Valu.scala 94:11]
  wire [31:0] lo_lo = 32'h0 < io_vstart ? $signed(sew_32_vd_0) : $signed(_T_362); // @[Cat.scala 30:58]
  wire [31:0] lo_hi = 32'h1 < io_vstart ? $signed(sew_32_vd_1) : $signed(_T_420); // @[Cat.scala 30:58]
  wire [31:0] hi_lo = 32'h2 < io_vstart ? $signed(sew_32_vd_2) : $signed(_T_478); // @[Cat.scala 30:58]
  wire [31:0] hi_hi = 32'h3 < io_vstart ? $signed(sew_32_vd_3) : $signed(_T_536); // @[Cat.scala 30:58]
  wire [127:0] _T_539 = {hi_hi,hi_lo,lo_hi,lo_lo}; // @[Valu.scala 113:24]
  wire  _T_540 = io_sew == 3'h1; // @[Valu.scala 203:27]
  wire [15:0] _T_562 = $signed(sew_16_a_0) + $signed(sew_16_b_0); // @[Valu.scala 100:35]
  wire [15:0] _T_565 = $signed(sew_16_a_0) - $signed(sew_16_b_0); // @[Valu.scala 101:37]
  wire [15:0] _T_567 = $signed(sew_16_a_0) & $signed(sew_16_b_0); // @[Valu.scala 102:36]
  wire [15:0] _T_569 = $signed(sew_16_a_0) | $signed(sew_16_b_0); // @[Valu.scala 103:35]
  wire [15:0] _T_571 = $signed(sew_16_a_0) ^ $signed(sew_16_b_0); // @[Valu.scala 104:36]
  wire [15:0] _T_572 = io_vs2[15:0]; // @[Valu.scala 105:40]
  wire [15:0] _T_573 = io_vs1[15:0]; // @[Valu.scala 105:58]
  wire [15:0] _T_575 = _T_572 <= _T_573 ? $signed(sew_16_b_0) : $signed(sew_16_a_0); // @[Valu.scala 105:31]
  wire [15:0] _T_577 = $signed(sew_16_b_0) <= $signed(sew_16_a_0) ? $signed(sew_16_b_0) : $signed(sew_16_a_0); // @[Valu.scala 106:30]
  wire [15:0] _T_579 = 9'h0 == io_aluc ? $signed(_T_562) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_581 = 9'hb8 == io_aluc ? $signed(_T_565) : $signed(_T_579); // @[Mux.scala 80:57]
  wire [15:0] _T_583 = 9'h48 == io_aluc ? $signed(_T_567) : $signed(_T_581); // @[Mux.scala 80:57]
  wire [15:0] _T_585 = 9'h50 == io_aluc ? $signed(_T_569) : $signed(_T_583); // @[Mux.scala 80:57]
  wire [15:0] _T_587 = 9'h58 == io_aluc ? $signed(_T_571) : $signed(_T_585); // @[Mux.scala 80:57]
  wire [15:0] _T_589 = 9'h20 == io_aluc ? $signed(_T_575) : $signed(_T_587); // @[Mux.scala 80:57]
  wire [15:0] _T_591 = 9'h28 == io_aluc ? $signed(_T_577) : $signed(_T_589); // @[Mux.scala 80:57]
  wire [15:0] _T_592 = _T_191 & io_vma ? $signed(-16'sh1) : $signed(_T_591); // @[Valu.scala 96:36]
  wire [15:0] _T_593 = ~io_vm & ~io_vs0[0] & ~io_vma ? $signed(sew_16_vd_0) : $signed(_T_592); // @[Valu.scala 95:32]
  wire [15:0] _T_599 = ~io_vta & 32'h0 >= io_vl ? $signed(sew_16_vd_0) : $signed(-16'sh1); // @[Valu.scala 110:12]
  wire [15:0] _T_600 = 32'h0 >= io_vstart & 32'h0 < io_vl ? $signed(_T_593) : $signed(_T_599); // @[Valu.scala 94:11]
  wire [15:0] _T_620 = $signed(sew_16_a_1) + $signed(sew_16_b_1); // @[Valu.scala 100:35]
  wire [15:0] _T_623 = $signed(sew_16_a_1) - $signed(sew_16_b_1); // @[Valu.scala 101:37]
  wire [15:0] _T_625 = $signed(sew_16_a_1) & $signed(sew_16_b_1); // @[Valu.scala 102:36]
  wire [15:0] _T_627 = $signed(sew_16_a_1) | $signed(sew_16_b_1); // @[Valu.scala 103:35]
  wire [15:0] _T_629 = $signed(sew_16_a_1) ^ $signed(sew_16_b_1); // @[Valu.scala 104:36]
  wire [15:0] _T_630 = io_vs2[31:16]; // @[Valu.scala 105:40]
  wire [15:0] _T_631 = io_vs1[31:16]; // @[Valu.scala 105:58]
  wire [15:0] _T_633 = _T_630 <= _T_631 ? $signed(sew_16_b_1) : $signed(sew_16_a_1); // @[Valu.scala 105:31]
  wire [15:0] _T_635 = $signed(sew_16_b_1) <= $signed(sew_16_a_1) ? $signed(sew_16_b_1) : $signed(sew_16_a_1); // @[Valu.scala 106:30]
  wire [15:0] _T_637 = 9'h0 == io_aluc ? $signed(_T_620) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_639 = 9'hb8 == io_aluc ? $signed(_T_623) : $signed(_T_637); // @[Mux.scala 80:57]
  wire [15:0] _T_641 = 9'h48 == io_aluc ? $signed(_T_625) : $signed(_T_639); // @[Mux.scala 80:57]
  wire [15:0] _T_643 = 9'h50 == io_aluc ? $signed(_T_627) : $signed(_T_641); // @[Mux.scala 80:57]
  wire [15:0] _T_645 = 9'h58 == io_aluc ? $signed(_T_629) : $signed(_T_643); // @[Mux.scala 80:57]
  wire [15:0] _T_647 = 9'h20 == io_aluc ? $signed(_T_633) : $signed(_T_645); // @[Mux.scala 80:57]
  wire [15:0] _T_649 = 9'h28 == io_aluc ? $signed(_T_635) : $signed(_T_647); // @[Mux.scala 80:57]
  wire [15:0] _T_650 = _T_249 & io_vma ? $signed(-16'sh1) : $signed(_T_649); // @[Valu.scala 96:36]
  wire [15:0] _T_651 = ~io_vm & ~io_vs0[1] & ~io_vma ? $signed(sew_16_vd_1) : $signed(_T_650); // @[Valu.scala 95:32]
  wire [15:0] _T_657 = ~io_vta & 32'h1 >= io_vl ? $signed(sew_16_vd_1) : $signed(-16'sh1); // @[Valu.scala 110:12]
  wire [15:0] _T_658 = 32'h1 >= io_vstart & 32'h1 < io_vl ? $signed(_T_651) : $signed(_T_657); // @[Valu.scala 94:11]
  wire [15:0] _T_678 = $signed(sew_16_a_2) + $signed(sew_16_b_2); // @[Valu.scala 100:35]
  wire [15:0] _T_681 = $signed(sew_16_a_2) - $signed(sew_16_b_2); // @[Valu.scala 101:37]
  wire [15:0] _T_683 = $signed(sew_16_a_2) & $signed(sew_16_b_2); // @[Valu.scala 102:36]
  wire [15:0] _T_685 = $signed(sew_16_a_2) | $signed(sew_16_b_2); // @[Valu.scala 103:35]
  wire [15:0] _T_687 = $signed(sew_16_a_2) ^ $signed(sew_16_b_2); // @[Valu.scala 104:36]
  wire [15:0] _T_688 = io_vs2[47:32]; // @[Valu.scala 105:40]
  wire [15:0] _T_689 = io_vs1[47:32]; // @[Valu.scala 105:58]
  wire [15:0] _T_691 = _T_688 <= _T_689 ? $signed(sew_16_b_2) : $signed(sew_16_a_2); // @[Valu.scala 105:31]
  wire [15:0] _T_693 = $signed(sew_16_b_2) <= $signed(sew_16_a_2) ? $signed(sew_16_b_2) : $signed(sew_16_a_2); // @[Valu.scala 106:30]
  wire [15:0] _T_695 = 9'h0 == io_aluc ? $signed(_T_678) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_697 = 9'hb8 == io_aluc ? $signed(_T_681) : $signed(_T_695); // @[Mux.scala 80:57]
  wire [15:0] _T_699 = 9'h48 == io_aluc ? $signed(_T_683) : $signed(_T_697); // @[Mux.scala 80:57]
  wire [15:0] _T_701 = 9'h50 == io_aluc ? $signed(_T_685) : $signed(_T_699); // @[Mux.scala 80:57]
  wire [15:0] _T_703 = 9'h58 == io_aluc ? $signed(_T_687) : $signed(_T_701); // @[Mux.scala 80:57]
  wire [15:0] _T_705 = 9'h20 == io_aluc ? $signed(_T_691) : $signed(_T_703); // @[Mux.scala 80:57]
  wire [15:0] _T_707 = 9'h28 == io_aluc ? $signed(_T_693) : $signed(_T_705); // @[Mux.scala 80:57]
  wire [15:0] _T_708 = _T_429 & io_vma ? $signed(-16'sh1) : $signed(_T_707); // @[Valu.scala 96:36]
  wire [15:0] _T_709 = ~io_vm & ~io_vs0[2] & ~io_vma ? $signed(sew_16_vd_2) : $signed(_T_708); // @[Valu.scala 95:32]
  wire [15:0] _T_715 = ~io_vta & 32'h2 >= io_vl ? $signed(sew_16_vd_2) : $signed(-16'sh1); // @[Valu.scala 110:12]
  wire [15:0] _T_716 = 32'h2 >= io_vstart & 32'h2 < io_vl ? $signed(_T_709) : $signed(_T_715); // @[Valu.scala 94:11]
  wire [15:0] _T_736 = $signed(sew_16_a_3) + $signed(sew_16_b_3); // @[Valu.scala 100:35]
  wire [15:0] _T_739 = $signed(sew_16_a_3) - $signed(sew_16_b_3); // @[Valu.scala 101:37]
  wire [15:0] _T_741 = $signed(sew_16_a_3) & $signed(sew_16_b_3); // @[Valu.scala 102:36]
  wire [15:0] _T_743 = $signed(sew_16_a_3) | $signed(sew_16_b_3); // @[Valu.scala 103:35]
  wire [15:0] _T_745 = $signed(sew_16_a_3) ^ $signed(sew_16_b_3); // @[Valu.scala 104:36]
  wire [15:0] _T_746 = io_vs2[63:48]; // @[Valu.scala 105:40]
  wire [15:0] _T_747 = io_vs1[63:48]; // @[Valu.scala 105:58]
  wire [15:0] _T_749 = _T_746 <= _T_747 ? $signed(sew_16_b_3) : $signed(sew_16_a_3); // @[Valu.scala 105:31]
  wire [15:0] _T_751 = $signed(sew_16_b_3) <= $signed(sew_16_a_3) ? $signed(sew_16_b_3) : $signed(sew_16_a_3); // @[Valu.scala 106:30]
  wire [15:0] _T_753 = 9'h0 == io_aluc ? $signed(_T_736) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_755 = 9'hb8 == io_aluc ? $signed(_T_739) : $signed(_T_753); // @[Mux.scala 80:57]
  wire [15:0] _T_757 = 9'h48 == io_aluc ? $signed(_T_741) : $signed(_T_755); // @[Mux.scala 80:57]
  wire [15:0] _T_759 = 9'h50 == io_aluc ? $signed(_T_743) : $signed(_T_757); // @[Mux.scala 80:57]
  wire [15:0] _T_761 = 9'h58 == io_aluc ? $signed(_T_745) : $signed(_T_759); // @[Mux.scala 80:57]
  wire [15:0] _T_763 = 9'h20 == io_aluc ? $signed(_T_749) : $signed(_T_761); // @[Mux.scala 80:57]
  wire [15:0] _T_765 = 9'h28 == io_aluc ? $signed(_T_751) : $signed(_T_763); // @[Mux.scala 80:57]
  wire [15:0] _T_766 = _T_487 & io_vma ? $signed(-16'sh1) : $signed(_T_765); // @[Valu.scala 96:36]
  wire [15:0] _T_767 = ~io_vm & ~io_vs0[3] & ~io_vma ? $signed(sew_16_vd_3) : $signed(_T_766); // @[Valu.scala 95:32]
  wire [15:0] _T_773 = ~io_vta & 32'h3 >= io_vl ? $signed(sew_16_vd_3) : $signed(-16'sh1); // @[Valu.scala 110:12]
  wire [15:0] _T_774 = 32'h3 >= io_vstart & 32'h3 < io_vl ? $signed(_T_767) : $signed(_T_773); // @[Valu.scala 94:11]
  wire  _T_776 = 32'h4 < io_vstart; // @[Valu.scala 93:16]
  wire  _T_779 = 32'h4 >= io_vstart & 32'h4 < io_vl; // @[Valu.scala 94:29]
  wire  _T_783 = ~io_vm & ~io_vs0[4]; // @[Valu.scala 95:47]
  wire  _T_785 = ~io_vm & ~io_vs0[4] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_791 = _T_783 & io_vma; // @[Valu.scala 96:72]
  wire [15:0] _T_794 = $signed(sew_16_a_4) + $signed(sew_16_b_4); // @[Valu.scala 100:35]
  wire [15:0] _T_797 = $signed(sew_16_a_4) - $signed(sew_16_b_4); // @[Valu.scala 101:37]
  wire [15:0] _T_799 = $signed(sew_16_a_4) & $signed(sew_16_b_4); // @[Valu.scala 102:36]
  wire [15:0] _T_801 = $signed(sew_16_a_4) | $signed(sew_16_b_4); // @[Valu.scala 103:35]
  wire [15:0] _T_803 = $signed(sew_16_a_4) ^ $signed(sew_16_b_4); // @[Valu.scala 104:36]
  wire [15:0] _T_804 = io_vs2[79:64]; // @[Valu.scala 105:40]
  wire [15:0] _T_805 = io_vs1[79:64]; // @[Valu.scala 105:58]
  wire [15:0] _T_807 = _T_804 <= _T_805 ? $signed(sew_16_b_4) : $signed(sew_16_a_4); // @[Valu.scala 105:31]
  wire [15:0] _T_809 = $signed(sew_16_b_4) <= $signed(sew_16_a_4) ? $signed(sew_16_b_4) : $signed(sew_16_a_4); // @[Valu.scala 106:30]
  wire [15:0] _T_811 = 9'h0 == io_aluc ? $signed(_T_794) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_813 = 9'hb8 == io_aluc ? $signed(_T_797) : $signed(_T_811); // @[Mux.scala 80:57]
  wire [15:0] _T_815 = 9'h48 == io_aluc ? $signed(_T_799) : $signed(_T_813); // @[Mux.scala 80:57]
  wire [15:0] _T_817 = 9'h50 == io_aluc ? $signed(_T_801) : $signed(_T_815); // @[Mux.scala 80:57]
  wire [15:0] _T_819 = 9'h58 == io_aluc ? $signed(_T_803) : $signed(_T_817); // @[Mux.scala 80:57]
  wire [15:0] _T_821 = 9'h20 == io_aluc ? $signed(_T_807) : $signed(_T_819); // @[Mux.scala 80:57]
  wire [15:0] _T_823 = 9'h28 == io_aluc ? $signed(_T_809) : $signed(_T_821); // @[Mux.scala 80:57]
  wire [15:0] _T_824 = _T_783 & io_vma ? $signed(-16'sh1) : $signed(_T_823); // @[Valu.scala 96:36]
  wire [15:0] _T_825 = ~io_vm & ~io_vs0[4] & ~io_vma ? $signed(sew_16_vd_4) : $signed(_T_824); // @[Valu.scala 95:32]
  wire [15:0] _T_831 = ~io_vta & 32'h4 >= io_vl ? $signed(sew_16_vd_4) : $signed(-16'sh1); // @[Valu.scala 110:12]
  wire [15:0] _T_832 = 32'h4 >= io_vstart & 32'h4 < io_vl ? $signed(_T_825) : $signed(_T_831); // @[Valu.scala 94:11]
  wire  _T_834 = 32'h5 < io_vstart; // @[Valu.scala 93:16]
  wire  _T_837 = 32'h5 >= io_vstart & 32'h5 < io_vl; // @[Valu.scala 94:29]
  wire  _T_841 = ~io_vm & ~io_vs0[5]; // @[Valu.scala 95:47]
  wire  _T_843 = ~io_vm & ~io_vs0[5] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_849 = _T_841 & io_vma; // @[Valu.scala 96:72]
  wire [15:0] _T_852 = $signed(sew_16_a_5) + $signed(sew_16_b_5); // @[Valu.scala 100:35]
  wire [15:0] _T_855 = $signed(sew_16_a_5) - $signed(sew_16_b_5); // @[Valu.scala 101:37]
  wire [15:0] _T_857 = $signed(sew_16_a_5) & $signed(sew_16_b_5); // @[Valu.scala 102:36]
  wire [15:0] _T_859 = $signed(sew_16_a_5) | $signed(sew_16_b_5); // @[Valu.scala 103:35]
  wire [15:0] _T_861 = $signed(sew_16_a_5) ^ $signed(sew_16_b_5); // @[Valu.scala 104:36]
  wire [15:0] _T_862 = io_vs2[95:80]; // @[Valu.scala 105:40]
  wire [15:0] _T_863 = io_vs1[95:80]; // @[Valu.scala 105:58]
  wire [15:0] _T_865 = _T_862 <= _T_863 ? $signed(sew_16_b_5) : $signed(sew_16_a_5); // @[Valu.scala 105:31]
  wire [15:0] _T_867 = $signed(sew_16_b_5) <= $signed(sew_16_a_5) ? $signed(sew_16_b_5) : $signed(sew_16_a_5); // @[Valu.scala 106:30]
  wire [15:0] _T_869 = 9'h0 == io_aluc ? $signed(_T_852) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_871 = 9'hb8 == io_aluc ? $signed(_T_855) : $signed(_T_869); // @[Mux.scala 80:57]
  wire [15:0] _T_873 = 9'h48 == io_aluc ? $signed(_T_857) : $signed(_T_871); // @[Mux.scala 80:57]
  wire [15:0] _T_875 = 9'h50 == io_aluc ? $signed(_T_859) : $signed(_T_873); // @[Mux.scala 80:57]
  wire [15:0] _T_877 = 9'h58 == io_aluc ? $signed(_T_861) : $signed(_T_875); // @[Mux.scala 80:57]
  wire [15:0] _T_879 = 9'h20 == io_aluc ? $signed(_T_865) : $signed(_T_877); // @[Mux.scala 80:57]
  wire [15:0] _T_881 = 9'h28 == io_aluc ? $signed(_T_867) : $signed(_T_879); // @[Mux.scala 80:57]
  wire [15:0] _T_882 = _T_841 & io_vma ? $signed(-16'sh1) : $signed(_T_881); // @[Valu.scala 96:36]
  wire [15:0] _T_883 = ~io_vm & ~io_vs0[5] & ~io_vma ? $signed(sew_16_vd_5) : $signed(_T_882); // @[Valu.scala 95:32]
  wire [15:0] _T_889 = ~io_vta & 32'h5 >= io_vl ? $signed(sew_16_vd_5) : $signed(-16'sh1); // @[Valu.scala 110:12]
  wire [15:0] _T_890 = 32'h5 >= io_vstart & 32'h5 < io_vl ? $signed(_T_883) : $signed(_T_889); // @[Valu.scala 94:11]
  wire  _T_892 = 32'h6 < io_vstart; // @[Valu.scala 93:16]
  wire  _T_895 = 32'h6 >= io_vstart & 32'h6 < io_vl; // @[Valu.scala 94:29]
  wire  _T_899 = ~io_vm & ~io_vs0[6]; // @[Valu.scala 95:47]
  wire  _T_901 = ~io_vm & ~io_vs0[6] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_907 = _T_899 & io_vma; // @[Valu.scala 96:72]
  wire [15:0] _T_910 = $signed(sew_16_a_6) + $signed(sew_16_b_6); // @[Valu.scala 100:35]
  wire [15:0] _T_913 = $signed(sew_16_a_6) - $signed(sew_16_b_6); // @[Valu.scala 101:37]
  wire [15:0] _T_915 = $signed(sew_16_a_6) & $signed(sew_16_b_6); // @[Valu.scala 102:36]
  wire [15:0] _T_917 = $signed(sew_16_a_6) | $signed(sew_16_b_6); // @[Valu.scala 103:35]
  wire [15:0] _T_919 = $signed(sew_16_a_6) ^ $signed(sew_16_b_6); // @[Valu.scala 104:36]
  wire [15:0] _T_920 = io_vs2[111:96]; // @[Valu.scala 105:40]
  wire [15:0] _T_921 = io_vs1[111:96]; // @[Valu.scala 105:58]
  wire [15:0] _T_923 = _T_920 <= _T_921 ? $signed(sew_16_b_6) : $signed(sew_16_a_6); // @[Valu.scala 105:31]
  wire [15:0] _T_925 = $signed(sew_16_b_6) <= $signed(sew_16_a_6) ? $signed(sew_16_b_6) : $signed(sew_16_a_6); // @[Valu.scala 106:30]
  wire [15:0] _T_927 = 9'h0 == io_aluc ? $signed(_T_910) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_929 = 9'hb8 == io_aluc ? $signed(_T_913) : $signed(_T_927); // @[Mux.scala 80:57]
  wire [15:0] _T_931 = 9'h48 == io_aluc ? $signed(_T_915) : $signed(_T_929); // @[Mux.scala 80:57]
  wire [15:0] _T_933 = 9'h50 == io_aluc ? $signed(_T_917) : $signed(_T_931); // @[Mux.scala 80:57]
  wire [15:0] _T_935 = 9'h58 == io_aluc ? $signed(_T_919) : $signed(_T_933); // @[Mux.scala 80:57]
  wire [15:0] _T_937 = 9'h20 == io_aluc ? $signed(_T_923) : $signed(_T_935); // @[Mux.scala 80:57]
  wire [15:0] _T_939 = 9'h28 == io_aluc ? $signed(_T_925) : $signed(_T_937); // @[Mux.scala 80:57]
  wire [15:0] _T_940 = _T_899 & io_vma ? $signed(-16'sh1) : $signed(_T_939); // @[Valu.scala 96:36]
  wire [15:0] _T_941 = ~io_vm & ~io_vs0[6] & ~io_vma ? $signed(sew_16_vd_6) : $signed(_T_940); // @[Valu.scala 95:32]
  wire [15:0] _T_947 = ~io_vta & 32'h6 >= io_vl ? $signed(sew_16_vd_6) : $signed(-16'sh1); // @[Valu.scala 110:12]
  wire [15:0] _T_948 = 32'h6 >= io_vstart & 32'h6 < io_vl ? $signed(_T_941) : $signed(_T_947); // @[Valu.scala 94:11]
  wire  _T_950 = 32'h7 < io_vstart; // @[Valu.scala 93:16]
  wire  _T_953 = 32'h7 >= io_vstart & 32'h7 < io_vl; // @[Valu.scala 94:29]
  wire  _T_957 = ~io_vm & ~io_vs0[7]; // @[Valu.scala 95:47]
  wire  _T_959 = ~io_vm & ~io_vs0[7] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_965 = _T_957 & io_vma; // @[Valu.scala 96:72]
  wire [15:0] _T_968 = $signed(sew_16_a_7) + $signed(sew_16_b_7); // @[Valu.scala 100:35]
  wire [15:0] _T_971 = $signed(sew_16_a_7) - $signed(sew_16_b_7); // @[Valu.scala 101:37]
  wire [15:0] _T_973 = $signed(sew_16_a_7) & $signed(sew_16_b_7); // @[Valu.scala 102:36]
  wire [15:0] _T_975 = $signed(sew_16_a_7) | $signed(sew_16_b_7); // @[Valu.scala 103:35]
  wire [15:0] _T_977 = $signed(sew_16_a_7) ^ $signed(sew_16_b_7); // @[Valu.scala 104:36]
  wire [15:0] _T_978 = io_vs2[127:112]; // @[Valu.scala 105:40]
  wire [15:0] _T_979 = io_vs1[127:112]; // @[Valu.scala 105:58]
  wire [15:0] _T_981 = _T_978 <= _T_979 ? $signed(sew_16_b_7) : $signed(sew_16_a_7); // @[Valu.scala 105:31]
  wire [15:0] _T_983 = $signed(sew_16_b_7) <= $signed(sew_16_a_7) ? $signed(sew_16_b_7) : $signed(sew_16_a_7); // @[Valu.scala 106:30]
  wire [15:0] _T_985 = 9'h0 == io_aluc ? $signed(_T_968) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_987 = 9'hb8 == io_aluc ? $signed(_T_971) : $signed(_T_985); // @[Mux.scala 80:57]
  wire [15:0] _T_989 = 9'h48 == io_aluc ? $signed(_T_973) : $signed(_T_987); // @[Mux.scala 80:57]
  wire [15:0] _T_991 = 9'h50 == io_aluc ? $signed(_T_975) : $signed(_T_989); // @[Mux.scala 80:57]
  wire [15:0] _T_993 = 9'h58 == io_aluc ? $signed(_T_977) : $signed(_T_991); // @[Mux.scala 80:57]
  wire [15:0] _T_995 = 9'h20 == io_aluc ? $signed(_T_981) : $signed(_T_993); // @[Mux.scala 80:57]
  wire [15:0] _T_997 = 9'h28 == io_aluc ? $signed(_T_983) : $signed(_T_995); // @[Mux.scala 80:57]
  wire [15:0] _T_998 = _T_957 & io_vma ? $signed(-16'sh1) : $signed(_T_997); // @[Valu.scala 96:36]
  wire [15:0] _T_999 = ~io_vm & ~io_vs0[7] & ~io_vma ? $signed(sew_16_vd_7) : $signed(_T_998); // @[Valu.scala 95:32]
  wire [15:0] _T_1005 = ~io_vta & 32'h7 >= io_vl ? $signed(sew_16_vd_7) : $signed(-16'sh1); // @[Valu.scala 110:12]
  wire [15:0] _T_1006 = 32'h7 >= io_vstart & 32'h7 < io_vl ? $signed(_T_999) : $signed(_T_1005); // @[Valu.scala 94:11]
  wire [15:0] lo_lo_lo = 32'h0 < io_vstart ? $signed(sew_16_vd_0) : $signed(_T_600); // @[Cat.scala 30:58]
  wire [15:0] lo_lo_hi = 32'h1 < io_vstart ? $signed(sew_16_vd_1) : $signed(_T_658); // @[Cat.scala 30:58]
  wire [15:0] lo_hi_lo = 32'h2 < io_vstart ? $signed(sew_16_vd_2) : $signed(_T_716); // @[Cat.scala 30:58]
  wire [15:0] lo_hi_hi = 32'h3 < io_vstart ? $signed(sew_16_vd_3) : $signed(_T_774); // @[Cat.scala 30:58]
  wire [15:0] hi_lo_lo = 32'h4 < io_vstart ? $signed(sew_16_vd_4) : $signed(_T_832); // @[Cat.scala 30:58]
  wire [15:0] hi_lo_hi = 32'h5 < io_vstart ? $signed(sew_16_vd_5) : $signed(_T_890); // @[Cat.scala 30:58]
  wire [15:0] hi_hi_lo = 32'h6 < io_vstart ? $signed(sew_16_vd_6) : $signed(_T_948); // @[Cat.scala 30:58]
  wire [15:0] hi_hi_hi = 32'h7 < io_vstart ? $signed(sew_16_vd_7) : $signed(_T_1006); // @[Cat.scala 30:58]
  wire [127:0] _T_1009 = {hi_hi_hi,hi_hi_lo,hi_lo_hi,hi_lo_lo,lo_hi_hi,lo_hi_lo,lo_lo_hi,lo_lo_lo}; // @[Valu.scala 113:24]
  wire  _T_1010 = io_sew == 3'h0; // @[Valu.scala 205:31]
  wire [7:0] _T_1032 = $signed(sew_8_a_0) + $signed(sew_8_b_0); // @[Valu.scala 100:35]
  wire [7:0] _T_1035 = $signed(sew_8_a_0) - $signed(sew_8_b_0); // @[Valu.scala 101:37]
  wire [7:0] _T_1037 = $signed(sew_8_a_0) & $signed(sew_8_b_0); // @[Valu.scala 102:36]
  wire [7:0] _T_1039 = $signed(sew_8_a_0) | $signed(sew_8_b_0); // @[Valu.scala 103:35]
  wire [7:0] _T_1041 = $signed(sew_8_a_0) ^ $signed(sew_8_b_0); // @[Valu.scala 104:36]
  wire [7:0] _T_1042 = io_vs2[7:0]; // @[Valu.scala 105:40]
  wire [7:0] _T_1043 = io_vs1[7:0]; // @[Valu.scala 105:58]
  wire [7:0] _T_1045 = _T_1042 <= _T_1043 ? $signed(sew_8_b_0) : $signed(sew_8_a_0); // @[Valu.scala 105:31]
  wire [7:0] _T_1047 = $signed(sew_8_b_0) <= $signed(sew_8_a_0) ? $signed(sew_8_b_0) : $signed(sew_8_a_0); // @[Valu.scala 106:30]
  wire [7:0] _T_1049 = 9'h0 == io_aluc ? $signed(_T_1032) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1051 = 9'hb8 == io_aluc ? $signed(_T_1035) : $signed(_T_1049); // @[Mux.scala 80:57]
  wire [7:0] _T_1053 = 9'h48 == io_aluc ? $signed(_T_1037) : $signed(_T_1051); // @[Mux.scala 80:57]
  wire [7:0] _T_1055 = 9'h50 == io_aluc ? $signed(_T_1039) : $signed(_T_1053); // @[Mux.scala 80:57]
  wire [7:0] _T_1057 = 9'h58 == io_aluc ? $signed(_T_1041) : $signed(_T_1055); // @[Mux.scala 80:57]
  wire [7:0] _T_1059 = 9'h20 == io_aluc ? $signed(_T_1045) : $signed(_T_1057); // @[Mux.scala 80:57]
  wire [7:0] _T_1061 = 9'h28 == io_aluc ? $signed(_T_1047) : $signed(_T_1059); // @[Mux.scala 80:57]
  wire [7:0] _T_1062 = _T_191 & io_vma ? $signed(-8'sh1) : $signed(_T_1061); // @[Valu.scala 96:36]
  wire [7:0] _T_1063 = ~io_vm & ~io_vs0[0] & ~io_vma ? $signed(sew_8_vd_0) : $signed(_T_1062); // @[Valu.scala 95:32]
  wire [7:0] _T_1069 = ~io_vta & 32'h0 >= io_vl ? $signed(sew_8_vd_0) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1070 = 32'h0 >= io_vstart & 32'h0 < io_vl ? $signed(_T_1063) : $signed(_T_1069); // @[Valu.scala 94:11]
  wire [7:0] _T_1090 = $signed(sew_8_a_1) + $signed(sew_8_b_1); // @[Valu.scala 100:35]
  wire [7:0] _T_1093 = $signed(sew_8_a_1) - $signed(sew_8_b_1); // @[Valu.scala 101:37]
  wire [7:0] _T_1095 = $signed(sew_8_a_1) & $signed(sew_8_b_1); // @[Valu.scala 102:36]
  wire [7:0] _T_1097 = $signed(sew_8_a_1) | $signed(sew_8_b_1); // @[Valu.scala 103:35]
  wire [7:0] _T_1099 = $signed(sew_8_a_1) ^ $signed(sew_8_b_1); // @[Valu.scala 104:36]
  wire [7:0] _T_1100 = io_vs2[15:8]; // @[Valu.scala 105:40]
  wire [7:0] _T_1101 = io_vs1[15:8]; // @[Valu.scala 105:58]
  wire [7:0] _T_1103 = _T_1100 <= _T_1101 ? $signed(sew_8_b_1) : $signed(sew_8_a_1); // @[Valu.scala 105:31]
  wire [7:0] _T_1105 = $signed(sew_8_b_1) <= $signed(sew_8_a_1) ? $signed(sew_8_b_1) : $signed(sew_8_a_1); // @[Valu.scala 106:30]
  wire [7:0] _T_1107 = 9'h0 == io_aluc ? $signed(_T_1090) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1109 = 9'hb8 == io_aluc ? $signed(_T_1093) : $signed(_T_1107); // @[Mux.scala 80:57]
  wire [7:0] _T_1111 = 9'h48 == io_aluc ? $signed(_T_1095) : $signed(_T_1109); // @[Mux.scala 80:57]
  wire [7:0] _T_1113 = 9'h50 == io_aluc ? $signed(_T_1097) : $signed(_T_1111); // @[Mux.scala 80:57]
  wire [7:0] _T_1115 = 9'h58 == io_aluc ? $signed(_T_1099) : $signed(_T_1113); // @[Mux.scala 80:57]
  wire [7:0] _T_1117 = 9'h20 == io_aluc ? $signed(_T_1103) : $signed(_T_1115); // @[Mux.scala 80:57]
  wire [7:0] _T_1119 = 9'h28 == io_aluc ? $signed(_T_1105) : $signed(_T_1117); // @[Mux.scala 80:57]
  wire [7:0] _T_1120 = _T_249 & io_vma ? $signed(-8'sh1) : $signed(_T_1119); // @[Valu.scala 96:36]
  wire [7:0] _T_1121 = ~io_vm & ~io_vs0[1] & ~io_vma ? $signed(sew_8_vd_1) : $signed(_T_1120); // @[Valu.scala 95:32]
  wire [7:0] _T_1127 = ~io_vta & 32'h1 >= io_vl ? $signed(sew_8_vd_1) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1128 = 32'h1 >= io_vstart & 32'h1 < io_vl ? $signed(_T_1121) : $signed(_T_1127); // @[Valu.scala 94:11]
  wire [7:0] _T_1148 = $signed(sew_8_a_2) + $signed(sew_8_b_2); // @[Valu.scala 100:35]
  wire [7:0] _T_1151 = $signed(sew_8_a_2) - $signed(sew_8_b_2); // @[Valu.scala 101:37]
  wire [7:0] _T_1153 = $signed(sew_8_a_2) & $signed(sew_8_b_2); // @[Valu.scala 102:36]
  wire [7:0] _T_1155 = $signed(sew_8_a_2) | $signed(sew_8_b_2); // @[Valu.scala 103:35]
  wire [7:0] _T_1157 = $signed(sew_8_a_2) ^ $signed(sew_8_b_2); // @[Valu.scala 104:36]
  wire [7:0] _T_1158 = io_vs2[23:16]; // @[Valu.scala 105:40]
  wire [7:0] _T_1159 = io_vs1[23:16]; // @[Valu.scala 105:58]
  wire [7:0] _T_1161 = _T_1158 <= _T_1159 ? $signed(sew_8_b_2) : $signed(sew_8_a_2); // @[Valu.scala 105:31]
  wire [7:0] _T_1163 = $signed(sew_8_b_2) <= $signed(sew_8_a_2) ? $signed(sew_8_b_2) : $signed(sew_8_a_2); // @[Valu.scala 106:30]
  wire [7:0] _T_1165 = 9'h0 == io_aluc ? $signed(_T_1148) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1167 = 9'hb8 == io_aluc ? $signed(_T_1151) : $signed(_T_1165); // @[Mux.scala 80:57]
  wire [7:0] _T_1169 = 9'h48 == io_aluc ? $signed(_T_1153) : $signed(_T_1167); // @[Mux.scala 80:57]
  wire [7:0] _T_1171 = 9'h50 == io_aluc ? $signed(_T_1155) : $signed(_T_1169); // @[Mux.scala 80:57]
  wire [7:0] _T_1173 = 9'h58 == io_aluc ? $signed(_T_1157) : $signed(_T_1171); // @[Mux.scala 80:57]
  wire [7:0] _T_1175 = 9'h20 == io_aluc ? $signed(_T_1161) : $signed(_T_1173); // @[Mux.scala 80:57]
  wire [7:0] _T_1177 = 9'h28 == io_aluc ? $signed(_T_1163) : $signed(_T_1175); // @[Mux.scala 80:57]
  wire [7:0] _T_1178 = _T_429 & io_vma ? $signed(-8'sh1) : $signed(_T_1177); // @[Valu.scala 96:36]
  wire [7:0] _T_1179 = ~io_vm & ~io_vs0[2] & ~io_vma ? $signed(sew_8_vd_2) : $signed(_T_1178); // @[Valu.scala 95:32]
  wire [7:0] _T_1185 = ~io_vta & 32'h2 >= io_vl ? $signed(sew_8_vd_2) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1186 = 32'h2 >= io_vstart & 32'h2 < io_vl ? $signed(_T_1179) : $signed(_T_1185); // @[Valu.scala 94:11]
  wire [7:0] _T_1206 = $signed(sew_8_a_3) + $signed(sew_8_b_3); // @[Valu.scala 100:35]
  wire [7:0] _T_1209 = $signed(sew_8_a_3) - $signed(sew_8_b_3); // @[Valu.scala 101:37]
  wire [7:0] _T_1211 = $signed(sew_8_a_3) & $signed(sew_8_b_3); // @[Valu.scala 102:36]
  wire [7:0] _T_1213 = $signed(sew_8_a_3) | $signed(sew_8_b_3); // @[Valu.scala 103:35]
  wire [7:0] _T_1215 = $signed(sew_8_a_3) ^ $signed(sew_8_b_3); // @[Valu.scala 104:36]
  wire [7:0] _T_1216 = io_vs2[31:24]; // @[Valu.scala 105:40]
  wire [7:0] _T_1217 = io_vs1[31:24]; // @[Valu.scala 105:58]
  wire [7:0] _T_1219 = _T_1216 <= _T_1217 ? $signed(sew_8_b_3) : $signed(sew_8_a_3); // @[Valu.scala 105:31]
  wire [7:0] _T_1221 = $signed(sew_8_b_3) <= $signed(sew_8_a_3) ? $signed(sew_8_b_3) : $signed(sew_8_a_3); // @[Valu.scala 106:30]
  wire [7:0] _T_1223 = 9'h0 == io_aluc ? $signed(_T_1206) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1225 = 9'hb8 == io_aluc ? $signed(_T_1209) : $signed(_T_1223); // @[Mux.scala 80:57]
  wire [7:0] _T_1227 = 9'h48 == io_aluc ? $signed(_T_1211) : $signed(_T_1225); // @[Mux.scala 80:57]
  wire [7:0] _T_1229 = 9'h50 == io_aluc ? $signed(_T_1213) : $signed(_T_1227); // @[Mux.scala 80:57]
  wire [7:0] _T_1231 = 9'h58 == io_aluc ? $signed(_T_1215) : $signed(_T_1229); // @[Mux.scala 80:57]
  wire [7:0] _T_1233 = 9'h20 == io_aluc ? $signed(_T_1219) : $signed(_T_1231); // @[Mux.scala 80:57]
  wire [7:0] _T_1235 = 9'h28 == io_aluc ? $signed(_T_1221) : $signed(_T_1233); // @[Mux.scala 80:57]
  wire [7:0] _T_1236 = _T_487 & io_vma ? $signed(-8'sh1) : $signed(_T_1235); // @[Valu.scala 96:36]
  wire [7:0] _T_1237 = ~io_vm & ~io_vs0[3] & ~io_vma ? $signed(sew_8_vd_3) : $signed(_T_1236); // @[Valu.scala 95:32]
  wire [7:0] _T_1243 = ~io_vta & 32'h3 >= io_vl ? $signed(sew_8_vd_3) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1244 = 32'h3 >= io_vstart & 32'h3 < io_vl ? $signed(_T_1237) : $signed(_T_1243); // @[Valu.scala 94:11]
  wire [7:0] _T_1264 = $signed(sew_8_a_4) + $signed(sew_8_b_4); // @[Valu.scala 100:35]
  wire [7:0] _T_1267 = $signed(sew_8_a_4) - $signed(sew_8_b_4); // @[Valu.scala 101:37]
  wire [7:0] _T_1269 = $signed(sew_8_a_4) & $signed(sew_8_b_4); // @[Valu.scala 102:36]
  wire [7:0] _T_1271 = $signed(sew_8_a_4) | $signed(sew_8_b_4); // @[Valu.scala 103:35]
  wire [7:0] _T_1273 = $signed(sew_8_a_4) ^ $signed(sew_8_b_4); // @[Valu.scala 104:36]
  wire [7:0] _T_1274 = io_vs2[39:32]; // @[Valu.scala 105:40]
  wire [7:0] _T_1275 = io_vs1[39:32]; // @[Valu.scala 105:58]
  wire [7:0] _T_1277 = _T_1274 <= _T_1275 ? $signed(sew_8_b_4) : $signed(sew_8_a_4); // @[Valu.scala 105:31]
  wire [7:0] _T_1279 = $signed(sew_8_b_4) <= $signed(sew_8_a_4) ? $signed(sew_8_b_4) : $signed(sew_8_a_4); // @[Valu.scala 106:30]
  wire [7:0] _T_1281 = 9'h0 == io_aluc ? $signed(_T_1264) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1283 = 9'hb8 == io_aluc ? $signed(_T_1267) : $signed(_T_1281); // @[Mux.scala 80:57]
  wire [7:0] _T_1285 = 9'h48 == io_aluc ? $signed(_T_1269) : $signed(_T_1283); // @[Mux.scala 80:57]
  wire [7:0] _T_1287 = 9'h50 == io_aluc ? $signed(_T_1271) : $signed(_T_1285); // @[Mux.scala 80:57]
  wire [7:0] _T_1289 = 9'h58 == io_aluc ? $signed(_T_1273) : $signed(_T_1287); // @[Mux.scala 80:57]
  wire [7:0] _T_1291 = 9'h20 == io_aluc ? $signed(_T_1277) : $signed(_T_1289); // @[Mux.scala 80:57]
  wire [7:0] _T_1293 = 9'h28 == io_aluc ? $signed(_T_1279) : $signed(_T_1291); // @[Mux.scala 80:57]
  wire [7:0] _T_1294 = _T_783 & io_vma ? $signed(-8'sh1) : $signed(_T_1293); // @[Valu.scala 96:36]
  wire [7:0] _T_1295 = ~io_vm & ~io_vs0[4] & ~io_vma ? $signed(sew_8_vd_4) : $signed(_T_1294); // @[Valu.scala 95:32]
  wire [7:0] _T_1301 = ~io_vta & 32'h4 >= io_vl ? $signed(sew_8_vd_4) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1302 = 32'h4 >= io_vstart & 32'h4 < io_vl ? $signed(_T_1295) : $signed(_T_1301); // @[Valu.scala 94:11]
  wire [7:0] _T_1322 = $signed(sew_8_a_5) + $signed(sew_8_b_5); // @[Valu.scala 100:35]
  wire [7:0] _T_1325 = $signed(sew_8_a_5) - $signed(sew_8_b_5); // @[Valu.scala 101:37]
  wire [7:0] _T_1327 = $signed(sew_8_a_5) & $signed(sew_8_b_5); // @[Valu.scala 102:36]
  wire [7:0] _T_1329 = $signed(sew_8_a_5) | $signed(sew_8_b_5); // @[Valu.scala 103:35]
  wire [7:0] _T_1331 = $signed(sew_8_a_5) ^ $signed(sew_8_b_5); // @[Valu.scala 104:36]
  wire [7:0] _T_1332 = io_vs2[47:40]; // @[Valu.scala 105:40]
  wire [7:0] _T_1333 = io_vs1[47:40]; // @[Valu.scala 105:58]
  wire [7:0] _T_1335 = _T_1332 <= _T_1333 ? $signed(sew_8_b_5) : $signed(sew_8_a_5); // @[Valu.scala 105:31]
  wire [7:0] _T_1337 = $signed(sew_8_b_5) <= $signed(sew_8_a_5) ? $signed(sew_8_b_5) : $signed(sew_8_a_5); // @[Valu.scala 106:30]
  wire [7:0] _T_1339 = 9'h0 == io_aluc ? $signed(_T_1322) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1341 = 9'hb8 == io_aluc ? $signed(_T_1325) : $signed(_T_1339); // @[Mux.scala 80:57]
  wire [7:0] _T_1343 = 9'h48 == io_aluc ? $signed(_T_1327) : $signed(_T_1341); // @[Mux.scala 80:57]
  wire [7:0] _T_1345 = 9'h50 == io_aluc ? $signed(_T_1329) : $signed(_T_1343); // @[Mux.scala 80:57]
  wire [7:0] _T_1347 = 9'h58 == io_aluc ? $signed(_T_1331) : $signed(_T_1345); // @[Mux.scala 80:57]
  wire [7:0] _T_1349 = 9'h20 == io_aluc ? $signed(_T_1335) : $signed(_T_1347); // @[Mux.scala 80:57]
  wire [7:0] _T_1351 = 9'h28 == io_aluc ? $signed(_T_1337) : $signed(_T_1349); // @[Mux.scala 80:57]
  wire [7:0] _T_1352 = _T_841 & io_vma ? $signed(-8'sh1) : $signed(_T_1351); // @[Valu.scala 96:36]
  wire [7:0] _T_1353 = ~io_vm & ~io_vs0[5] & ~io_vma ? $signed(sew_8_vd_5) : $signed(_T_1352); // @[Valu.scala 95:32]
  wire [7:0] _T_1359 = ~io_vta & 32'h5 >= io_vl ? $signed(sew_8_vd_5) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1360 = 32'h5 >= io_vstart & 32'h5 < io_vl ? $signed(_T_1353) : $signed(_T_1359); // @[Valu.scala 94:11]
  wire [7:0] _T_1380 = $signed(sew_8_a_6) + $signed(sew_8_b_6); // @[Valu.scala 100:35]
  wire [7:0] _T_1383 = $signed(sew_8_a_6) - $signed(sew_8_b_6); // @[Valu.scala 101:37]
  wire [7:0] _T_1385 = $signed(sew_8_a_6) & $signed(sew_8_b_6); // @[Valu.scala 102:36]
  wire [7:0] _T_1387 = $signed(sew_8_a_6) | $signed(sew_8_b_6); // @[Valu.scala 103:35]
  wire [7:0] _T_1389 = $signed(sew_8_a_6) ^ $signed(sew_8_b_6); // @[Valu.scala 104:36]
  wire [7:0] _T_1390 = io_vs2[55:48]; // @[Valu.scala 105:40]
  wire [7:0] _T_1391 = io_vs1[55:48]; // @[Valu.scala 105:58]
  wire [7:0] _T_1393 = _T_1390 <= _T_1391 ? $signed(sew_8_b_6) : $signed(sew_8_a_6); // @[Valu.scala 105:31]
  wire [7:0] _T_1395 = $signed(sew_8_b_6) <= $signed(sew_8_a_6) ? $signed(sew_8_b_6) : $signed(sew_8_a_6); // @[Valu.scala 106:30]
  wire [7:0] _T_1397 = 9'h0 == io_aluc ? $signed(_T_1380) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1399 = 9'hb8 == io_aluc ? $signed(_T_1383) : $signed(_T_1397); // @[Mux.scala 80:57]
  wire [7:0] _T_1401 = 9'h48 == io_aluc ? $signed(_T_1385) : $signed(_T_1399); // @[Mux.scala 80:57]
  wire [7:0] _T_1403 = 9'h50 == io_aluc ? $signed(_T_1387) : $signed(_T_1401); // @[Mux.scala 80:57]
  wire [7:0] _T_1405 = 9'h58 == io_aluc ? $signed(_T_1389) : $signed(_T_1403); // @[Mux.scala 80:57]
  wire [7:0] _T_1407 = 9'h20 == io_aluc ? $signed(_T_1393) : $signed(_T_1405); // @[Mux.scala 80:57]
  wire [7:0] _T_1409 = 9'h28 == io_aluc ? $signed(_T_1395) : $signed(_T_1407); // @[Mux.scala 80:57]
  wire [7:0] _T_1410 = _T_899 & io_vma ? $signed(-8'sh1) : $signed(_T_1409); // @[Valu.scala 96:36]
  wire [7:0] _T_1411 = ~io_vm & ~io_vs0[6] & ~io_vma ? $signed(sew_8_vd_6) : $signed(_T_1410); // @[Valu.scala 95:32]
  wire [7:0] _T_1417 = ~io_vta & 32'h6 >= io_vl ? $signed(sew_8_vd_6) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1418 = 32'h6 >= io_vstart & 32'h6 < io_vl ? $signed(_T_1411) : $signed(_T_1417); // @[Valu.scala 94:11]
  wire [7:0] _T_1438 = $signed(sew_8_a_7) + $signed(sew_8_b_7); // @[Valu.scala 100:35]
  wire [7:0] _T_1441 = $signed(sew_8_a_7) - $signed(sew_8_b_7); // @[Valu.scala 101:37]
  wire [7:0] _T_1443 = $signed(sew_8_a_7) & $signed(sew_8_b_7); // @[Valu.scala 102:36]
  wire [7:0] _T_1445 = $signed(sew_8_a_7) | $signed(sew_8_b_7); // @[Valu.scala 103:35]
  wire [7:0] _T_1447 = $signed(sew_8_a_7) ^ $signed(sew_8_b_7); // @[Valu.scala 104:36]
  wire [7:0] _T_1448 = io_vs2[63:56]; // @[Valu.scala 105:40]
  wire [7:0] _T_1449 = io_vs1[63:56]; // @[Valu.scala 105:58]
  wire [7:0] _T_1451 = _T_1448 <= _T_1449 ? $signed(sew_8_b_7) : $signed(sew_8_a_7); // @[Valu.scala 105:31]
  wire [7:0] _T_1453 = $signed(sew_8_b_7) <= $signed(sew_8_a_7) ? $signed(sew_8_b_7) : $signed(sew_8_a_7); // @[Valu.scala 106:30]
  wire [7:0] _T_1455 = 9'h0 == io_aluc ? $signed(_T_1438) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1457 = 9'hb8 == io_aluc ? $signed(_T_1441) : $signed(_T_1455); // @[Mux.scala 80:57]
  wire [7:0] _T_1459 = 9'h48 == io_aluc ? $signed(_T_1443) : $signed(_T_1457); // @[Mux.scala 80:57]
  wire [7:0] _T_1461 = 9'h50 == io_aluc ? $signed(_T_1445) : $signed(_T_1459); // @[Mux.scala 80:57]
  wire [7:0] _T_1463 = 9'h58 == io_aluc ? $signed(_T_1447) : $signed(_T_1461); // @[Mux.scala 80:57]
  wire [7:0] _T_1465 = 9'h20 == io_aluc ? $signed(_T_1451) : $signed(_T_1463); // @[Mux.scala 80:57]
  wire [7:0] _T_1467 = 9'h28 == io_aluc ? $signed(_T_1453) : $signed(_T_1465); // @[Mux.scala 80:57]
  wire [7:0] _T_1468 = _T_957 & io_vma ? $signed(-8'sh1) : $signed(_T_1467); // @[Valu.scala 96:36]
  wire [7:0] _T_1469 = ~io_vm & ~io_vs0[7] & ~io_vma ? $signed(sew_8_vd_7) : $signed(_T_1468); // @[Valu.scala 95:32]
  wire [7:0] _T_1475 = ~io_vta & 32'h7 >= io_vl ? $signed(sew_8_vd_7) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1476 = 32'h7 >= io_vstart & 32'h7 < io_vl ? $signed(_T_1469) : $signed(_T_1475); // @[Valu.scala 94:11]
  wire  _T_1478 = 32'h8 < io_vstart; // @[Valu.scala 93:16]
  wire  _T_1481 = 32'h8 >= io_vstart & 32'h8 < io_vl; // @[Valu.scala 94:29]
  wire  _T_1485 = ~io_vm & ~io_vs0[8]; // @[Valu.scala 95:47]
  wire  _T_1487 = ~io_vm & ~io_vs0[8] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_1493 = _T_1485 & io_vma; // @[Valu.scala 96:72]
  wire [7:0] _T_1496 = $signed(sew_8_a_8) + $signed(sew_8_b_8); // @[Valu.scala 100:35]
  wire [7:0] _T_1499 = $signed(sew_8_a_8) - $signed(sew_8_b_8); // @[Valu.scala 101:37]
  wire [7:0] _T_1501 = $signed(sew_8_a_8) & $signed(sew_8_b_8); // @[Valu.scala 102:36]
  wire [7:0] _T_1503 = $signed(sew_8_a_8) | $signed(sew_8_b_8); // @[Valu.scala 103:35]
  wire [7:0] _T_1505 = $signed(sew_8_a_8) ^ $signed(sew_8_b_8); // @[Valu.scala 104:36]
  wire [7:0] _T_1506 = io_vs2[71:64]; // @[Valu.scala 105:40]
  wire [7:0] _T_1507 = io_vs1[71:64]; // @[Valu.scala 105:58]
  wire [7:0] _T_1509 = _T_1506 <= _T_1507 ? $signed(sew_8_b_8) : $signed(sew_8_a_8); // @[Valu.scala 105:31]
  wire [7:0] _T_1511 = $signed(sew_8_b_8) <= $signed(sew_8_a_8) ? $signed(sew_8_b_8) : $signed(sew_8_a_8); // @[Valu.scala 106:30]
  wire [7:0] _T_1513 = 9'h0 == io_aluc ? $signed(_T_1496) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1515 = 9'hb8 == io_aluc ? $signed(_T_1499) : $signed(_T_1513); // @[Mux.scala 80:57]
  wire [7:0] _T_1517 = 9'h48 == io_aluc ? $signed(_T_1501) : $signed(_T_1515); // @[Mux.scala 80:57]
  wire [7:0] _T_1519 = 9'h50 == io_aluc ? $signed(_T_1503) : $signed(_T_1517); // @[Mux.scala 80:57]
  wire [7:0] _T_1521 = 9'h58 == io_aluc ? $signed(_T_1505) : $signed(_T_1519); // @[Mux.scala 80:57]
  wire [7:0] _T_1523 = 9'h20 == io_aluc ? $signed(_T_1509) : $signed(_T_1521); // @[Mux.scala 80:57]
  wire [7:0] _T_1525 = 9'h28 == io_aluc ? $signed(_T_1511) : $signed(_T_1523); // @[Mux.scala 80:57]
  wire [7:0] _T_1526 = _T_1485 & io_vma ? $signed(-8'sh1) : $signed(_T_1525); // @[Valu.scala 96:36]
  wire [7:0] _T_1527 = ~io_vm & ~io_vs0[8] & ~io_vma ? $signed(sew_8_vd_8) : $signed(_T_1526); // @[Valu.scala 95:32]
  wire [7:0] _T_1533 = ~io_vta & 32'h8 >= io_vl ? $signed(sew_8_vd_8) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1534 = 32'h8 >= io_vstart & 32'h8 < io_vl ? $signed(_T_1527) : $signed(_T_1533); // @[Valu.scala 94:11]
  wire  _T_1536 = 32'h9 < io_vstart; // @[Valu.scala 93:16]
  wire  _T_1539 = 32'h9 >= io_vstart & 32'h9 < io_vl; // @[Valu.scala 94:29]
  wire  _T_1543 = ~io_vm & ~io_vs0[9]; // @[Valu.scala 95:47]
  wire  _T_1545 = ~io_vm & ~io_vs0[9] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_1551 = _T_1543 & io_vma; // @[Valu.scala 96:72]
  wire [7:0] _T_1554 = $signed(sew_8_a_9) + $signed(sew_8_b_9); // @[Valu.scala 100:35]
  wire [7:0] _T_1557 = $signed(sew_8_a_9) - $signed(sew_8_b_9); // @[Valu.scala 101:37]
  wire [7:0] _T_1559 = $signed(sew_8_a_9) & $signed(sew_8_b_9); // @[Valu.scala 102:36]
  wire [7:0] _T_1561 = $signed(sew_8_a_9) | $signed(sew_8_b_9); // @[Valu.scala 103:35]
  wire [7:0] _T_1563 = $signed(sew_8_a_9) ^ $signed(sew_8_b_9); // @[Valu.scala 104:36]
  wire [7:0] _T_1564 = io_vs2[79:72]; // @[Valu.scala 105:40]
  wire [7:0] _T_1565 = io_vs1[79:72]; // @[Valu.scala 105:58]
  wire [7:0] _T_1567 = _T_1564 <= _T_1565 ? $signed(sew_8_b_9) : $signed(sew_8_a_9); // @[Valu.scala 105:31]
  wire [7:0] _T_1569 = $signed(sew_8_b_9) <= $signed(sew_8_a_9) ? $signed(sew_8_b_9) : $signed(sew_8_a_9); // @[Valu.scala 106:30]
  wire [7:0] _T_1571 = 9'h0 == io_aluc ? $signed(_T_1554) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1573 = 9'hb8 == io_aluc ? $signed(_T_1557) : $signed(_T_1571); // @[Mux.scala 80:57]
  wire [7:0] _T_1575 = 9'h48 == io_aluc ? $signed(_T_1559) : $signed(_T_1573); // @[Mux.scala 80:57]
  wire [7:0] _T_1577 = 9'h50 == io_aluc ? $signed(_T_1561) : $signed(_T_1575); // @[Mux.scala 80:57]
  wire [7:0] _T_1579 = 9'h58 == io_aluc ? $signed(_T_1563) : $signed(_T_1577); // @[Mux.scala 80:57]
  wire [7:0] _T_1581 = 9'h20 == io_aluc ? $signed(_T_1567) : $signed(_T_1579); // @[Mux.scala 80:57]
  wire [7:0] _T_1583 = 9'h28 == io_aluc ? $signed(_T_1569) : $signed(_T_1581); // @[Mux.scala 80:57]
  wire [7:0] _T_1584 = _T_1543 & io_vma ? $signed(-8'sh1) : $signed(_T_1583); // @[Valu.scala 96:36]
  wire [7:0] _T_1585 = ~io_vm & ~io_vs0[9] & ~io_vma ? $signed(sew_8_vd_9) : $signed(_T_1584); // @[Valu.scala 95:32]
  wire [7:0] _T_1591 = ~io_vta & 32'h9 >= io_vl ? $signed(sew_8_vd_9) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1592 = 32'h9 >= io_vstart & 32'h9 < io_vl ? $signed(_T_1585) : $signed(_T_1591); // @[Valu.scala 94:11]
  wire  _T_1594 = 32'ha < io_vstart; // @[Valu.scala 93:16]
  wire  _T_1597 = 32'ha >= io_vstart & 32'ha < io_vl; // @[Valu.scala 94:29]
  wire  _T_1601 = ~io_vm & ~io_vs0[10]; // @[Valu.scala 95:47]
  wire  _T_1603 = ~io_vm & ~io_vs0[10] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_1609 = _T_1601 & io_vma; // @[Valu.scala 96:72]
  wire [7:0] _T_1612 = $signed(sew_8_a_10) + $signed(sew_8_b_10); // @[Valu.scala 100:35]
  wire [7:0] _T_1615 = $signed(sew_8_a_10) - $signed(sew_8_b_10); // @[Valu.scala 101:37]
  wire [7:0] _T_1617 = $signed(sew_8_a_10) & $signed(sew_8_b_10); // @[Valu.scala 102:36]
  wire [7:0] _T_1619 = $signed(sew_8_a_10) | $signed(sew_8_b_10); // @[Valu.scala 103:35]
  wire [7:0] _T_1621 = $signed(sew_8_a_10) ^ $signed(sew_8_b_10); // @[Valu.scala 104:36]
  wire [7:0] _T_1622 = io_vs2[87:80]; // @[Valu.scala 105:40]
  wire [7:0] _T_1623 = io_vs1[87:80]; // @[Valu.scala 105:58]
  wire [7:0] _T_1625 = _T_1622 <= _T_1623 ? $signed(sew_8_b_10) : $signed(sew_8_a_10); // @[Valu.scala 105:31]
  wire [7:0] _T_1627 = $signed(sew_8_b_10) <= $signed(sew_8_a_10) ? $signed(sew_8_b_10) : $signed(sew_8_a_10); // @[Valu.scala 106:30]
  wire [7:0] _T_1629 = 9'h0 == io_aluc ? $signed(_T_1612) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1631 = 9'hb8 == io_aluc ? $signed(_T_1615) : $signed(_T_1629); // @[Mux.scala 80:57]
  wire [7:0] _T_1633 = 9'h48 == io_aluc ? $signed(_T_1617) : $signed(_T_1631); // @[Mux.scala 80:57]
  wire [7:0] _T_1635 = 9'h50 == io_aluc ? $signed(_T_1619) : $signed(_T_1633); // @[Mux.scala 80:57]
  wire [7:0] _T_1637 = 9'h58 == io_aluc ? $signed(_T_1621) : $signed(_T_1635); // @[Mux.scala 80:57]
  wire [7:0] _T_1639 = 9'h20 == io_aluc ? $signed(_T_1625) : $signed(_T_1637); // @[Mux.scala 80:57]
  wire [7:0] _T_1641 = 9'h28 == io_aluc ? $signed(_T_1627) : $signed(_T_1639); // @[Mux.scala 80:57]
  wire [7:0] _T_1642 = _T_1601 & io_vma ? $signed(-8'sh1) : $signed(_T_1641); // @[Valu.scala 96:36]
  wire [7:0] _T_1643 = ~io_vm & ~io_vs0[10] & ~io_vma ? $signed(sew_8_vd_10) : $signed(_T_1642); // @[Valu.scala 95:32]
  wire [7:0] _T_1649 = ~io_vta & 32'ha >= io_vl ? $signed(sew_8_vd_10) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1650 = 32'ha >= io_vstart & 32'ha < io_vl ? $signed(_T_1643) : $signed(_T_1649); // @[Valu.scala 94:11]
  wire  _T_1652 = 32'hb < io_vstart; // @[Valu.scala 93:16]
  wire  _T_1655 = 32'hb >= io_vstart & 32'hb < io_vl; // @[Valu.scala 94:29]
  wire  _T_1659 = ~io_vm & ~io_vs0[11]; // @[Valu.scala 95:47]
  wire  _T_1661 = ~io_vm & ~io_vs0[11] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_1667 = _T_1659 & io_vma; // @[Valu.scala 96:72]
  wire [7:0] _T_1670 = $signed(sew_8_a_11) + $signed(sew_8_b_11); // @[Valu.scala 100:35]
  wire [7:0] _T_1673 = $signed(sew_8_a_11) - $signed(sew_8_b_11); // @[Valu.scala 101:37]
  wire [7:0] _T_1675 = $signed(sew_8_a_11) & $signed(sew_8_b_11); // @[Valu.scala 102:36]
  wire [7:0] _T_1677 = $signed(sew_8_a_11) | $signed(sew_8_b_11); // @[Valu.scala 103:35]
  wire [7:0] _T_1679 = $signed(sew_8_a_11) ^ $signed(sew_8_b_11); // @[Valu.scala 104:36]
  wire [7:0] _T_1680 = io_vs2[95:88]; // @[Valu.scala 105:40]
  wire [7:0] _T_1681 = io_vs1[95:88]; // @[Valu.scala 105:58]
  wire [7:0] _T_1683 = _T_1680 <= _T_1681 ? $signed(sew_8_b_11) : $signed(sew_8_a_11); // @[Valu.scala 105:31]
  wire [7:0] _T_1685 = $signed(sew_8_b_11) <= $signed(sew_8_a_11) ? $signed(sew_8_b_11) : $signed(sew_8_a_11); // @[Valu.scala 106:30]
  wire [7:0] _T_1687 = 9'h0 == io_aluc ? $signed(_T_1670) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1689 = 9'hb8 == io_aluc ? $signed(_T_1673) : $signed(_T_1687); // @[Mux.scala 80:57]
  wire [7:0] _T_1691 = 9'h48 == io_aluc ? $signed(_T_1675) : $signed(_T_1689); // @[Mux.scala 80:57]
  wire [7:0] _T_1693 = 9'h50 == io_aluc ? $signed(_T_1677) : $signed(_T_1691); // @[Mux.scala 80:57]
  wire [7:0] _T_1695 = 9'h58 == io_aluc ? $signed(_T_1679) : $signed(_T_1693); // @[Mux.scala 80:57]
  wire [7:0] _T_1697 = 9'h20 == io_aluc ? $signed(_T_1683) : $signed(_T_1695); // @[Mux.scala 80:57]
  wire [7:0] _T_1699 = 9'h28 == io_aluc ? $signed(_T_1685) : $signed(_T_1697); // @[Mux.scala 80:57]
  wire [7:0] _T_1700 = _T_1659 & io_vma ? $signed(-8'sh1) : $signed(_T_1699); // @[Valu.scala 96:36]
  wire [7:0] _T_1701 = ~io_vm & ~io_vs0[11] & ~io_vma ? $signed(sew_8_vd_11) : $signed(_T_1700); // @[Valu.scala 95:32]
  wire [7:0] _T_1707 = ~io_vta & 32'hb >= io_vl ? $signed(sew_8_vd_11) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1708 = 32'hb >= io_vstart & 32'hb < io_vl ? $signed(_T_1701) : $signed(_T_1707); // @[Valu.scala 94:11]
  wire  _T_1710 = 32'hc < io_vstart; // @[Valu.scala 93:16]
  wire  _T_1713 = 32'hc >= io_vstart & 32'hc < io_vl; // @[Valu.scala 94:29]
  wire  _T_1717 = ~io_vm & ~io_vs0[12]; // @[Valu.scala 95:47]
  wire  _T_1719 = ~io_vm & ~io_vs0[12] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_1725 = _T_1717 & io_vma; // @[Valu.scala 96:72]
  wire [7:0] _T_1728 = $signed(sew_8_a_12) + $signed(sew_8_b_12); // @[Valu.scala 100:35]
  wire [7:0] _T_1731 = $signed(sew_8_a_12) - $signed(sew_8_b_12); // @[Valu.scala 101:37]
  wire [7:0] _T_1733 = $signed(sew_8_a_12) & $signed(sew_8_b_12); // @[Valu.scala 102:36]
  wire [7:0] _T_1735 = $signed(sew_8_a_12) | $signed(sew_8_b_12); // @[Valu.scala 103:35]
  wire [7:0] _T_1737 = $signed(sew_8_a_12) ^ $signed(sew_8_b_12); // @[Valu.scala 104:36]
  wire [7:0] _T_1738 = io_vs2[103:96]; // @[Valu.scala 105:40]
  wire [7:0] _T_1739 = io_vs1[103:96]; // @[Valu.scala 105:58]
  wire [7:0] _T_1741 = _T_1738 <= _T_1739 ? $signed(sew_8_b_12) : $signed(sew_8_a_12); // @[Valu.scala 105:31]
  wire [7:0] _T_1743 = $signed(sew_8_b_12) <= $signed(sew_8_a_12) ? $signed(sew_8_b_12) : $signed(sew_8_a_12); // @[Valu.scala 106:30]
  wire [7:0] _T_1745 = 9'h0 == io_aluc ? $signed(_T_1728) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1747 = 9'hb8 == io_aluc ? $signed(_T_1731) : $signed(_T_1745); // @[Mux.scala 80:57]
  wire [7:0] _T_1749 = 9'h48 == io_aluc ? $signed(_T_1733) : $signed(_T_1747); // @[Mux.scala 80:57]
  wire [7:0] _T_1751 = 9'h50 == io_aluc ? $signed(_T_1735) : $signed(_T_1749); // @[Mux.scala 80:57]
  wire [7:0] _T_1753 = 9'h58 == io_aluc ? $signed(_T_1737) : $signed(_T_1751); // @[Mux.scala 80:57]
  wire [7:0] _T_1755 = 9'h20 == io_aluc ? $signed(_T_1741) : $signed(_T_1753); // @[Mux.scala 80:57]
  wire [7:0] _T_1757 = 9'h28 == io_aluc ? $signed(_T_1743) : $signed(_T_1755); // @[Mux.scala 80:57]
  wire [7:0] _T_1758 = _T_1717 & io_vma ? $signed(-8'sh1) : $signed(_T_1757); // @[Valu.scala 96:36]
  wire [7:0] _T_1759 = ~io_vm & ~io_vs0[12] & ~io_vma ? $signed(sew_8_vd_12) : $signed(_T_1758); // @[Valu.scala 95:32]
  wire [7:0] _T_1765 = ~io_vta & 32'hc >= io_vl ? $signed(sew_8_vd_12) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1766 = 32'hc >= io_vstart & 32'hc < io_vl ? $signed(_T_1759) : $signed(_T_1765); // @[Valu.scala 94:11]
  wire  _T_1768 = 32'hd < io_vstart; // @[Valu.scala 93:16]
  wire  _T_1771 = 32'hd >= io_vstart & 32'hd < io_vl; // @[Valu.scala 94:29]
  wire  _T_1775 = ~io_vm & ~io_vs0[13]; // @[Valu.scala 95:47]
  wire  _T_1777 = ~io_vm & ~io_vs0[13] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_1783 = _T_1775 & io_vma; // @[Valu.scala 96:72]
  wire [7:0] _T_1786 = $signed(sew_8_a_13) + $signed(sew_8_b_13); // @[Valu.scala 100:35]
  wire [7:0] _T_1789 = $signed(sew_8_a_13) - $signed(sew_8_b_13); // @[Valu.scala 101:37]
  wire [7:0] _T_1791 = $signed(sew_8_a_13) & $signed(sew_8_b_13); // @[Valu.scala 102:36]
  wire [7:0] _T_1793 = $signed(sew_8_a_13) | $signed(sew_8_b_13); // @[Valu.scala 103:35]
  wire [7:0] _T_1795 = $signed(sew_8_a_13) ^ $signed(sew_8_b_13); // @[Valu.scala 104:36]
  wire [7:0] _T_1796 = io_vs2[111:104]; // @[Valu.scala 105:40]
  wire [7:0] _T_1797 = io_vs1[111:104]; // @[Valu.scala 105:58]
  wire [7:0] _T_1799 = _T_1796 <= _T_1797 ? $signed(sew_8_b_13) : $signed(sew_8_a_13); // @[Valu.scala 105:31]
  wire [7:0] _T_1801 = $signed(sew_8_b_13) <= $signed(sew_8_a_13) ? $signed(sew_8_b_13) : $signed(sew_8_a_13); // @[Valu.scala 106:30]
  wire [7:0] _T_1803 = 9'h0 == io_aluc ? $signed(_T_1786) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1805 = 9'hb8 == io_aluc ? $signed(_T_1789) : $signed(_T_1803); // @[Mux.scala 80:57]
  wire [7:0] _T_1807 = 9'h48 == io_aluc ? $signed(_T_1791) : $signed(_T_1805); // @[Mux.scala 80:57]
  wire [7:0] _T_1809 = 9'h50 == io_aluc ? $signed(_T_1793) : $signed(_T_1807); // @[Mux.scala 80:57]
  wire [7:0] _T_1811 = 9'h58 == io_aluc ? $signed(_T_1795) : $signed(_T_1809); // @[Mux.scala 80:57]
  wire [7:0] _T_1813 = 9'h20 == io_aluc ? $signed(_T_1799) : $signed(_T_1811); // @[Mux.scala 80:57]
  wire [7:0] _T_1815 = 9'h28 == io_aluc ? $signed(_T_1801) : $signed(_T_1813); // @[Mux.scala 80:57]
  wire [7:0] _T_1816 = _T_1775 & io_vma ? $signed(-8'sh1) : $signed(_T_1815); // @[Valu.scala 96:36]
  wire [7:0] _T_1817 = ~io_vm & ~io_vs0[13] & ~io_vma ? $signed(sew_8_vd_13) : $signed(_T_1816); // @[Valu.scala 95:32]
  wire [7:0] _T_1823 = ~io_vta & 32'hd >= io_vl ? $signed(sew_8_vd_13) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1824 = 32'hd >= io_vstart & 32'hd < io_vl ? $signed(_T_1817) : $signed(_T_1823); // @[Valu.scala 94:11]
  wire  _T_1826 = 32'he < io_vstart; // @[Valu.scala 93:16]
  wire  _T_1829 = 32'he >= io_vstart & 32'he < io_vl; // @[Valu.scala 94:29]
  wire  _T_1833 = ~io_vm & ~io_vs0[14]; // @[Valu.scala 95:47]
  wire  _T_1835 = ~io_vm & ~io_vs0[14] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_1841 = _T_1833 & io_vma; // @[Valu.scala 96:72]
  wire [7:0] _T_1844 = $signed(sew_8_a_14) + $signed(sew_8_b_14); // @[Valu.scala 100:35]
  wire [7:0] _T_1847 = $signed(sew_8_a_14) - $signed(sew_8_b_14); // @[Valu.scala 101:37]
  wire [7:0] _T_1849 = $signed(sew_8_a_14) & $signed(sew_8_b_14); // @[Valu.scala 102:36]
  wire [7:0] _T_1851 = $signed(sew_8_a_14) | $signed(sew_8_b_14); // @[Valu.scala 103:35]
  wire [7:0] _T_1853 = $signed(sew_8_a_14) ^ $signed(sew_8_b_14); // @[Valu.scala 104:36]
  wire [7:0] _T_1854 = io_vs2[119:112]; // @[Valu.scala 105:40]
  wire [7:0] _T_1855 = io_vs1[119:112]; // @[Valu.scala 105:58]
  wire [7:0] _T_1857 = _T_1854 <= _T_1855 ? $signed(sew_8_b_14) : $signed(sew_8_a_14); // @[Valu.scala 105:31]
  wire [7:0] _T_1859 = $signed(sew_8_b_14) <= $signed(sew_8_a_14) ? $signed(sew_8_b_14) : $signed(sew_8_a_14); // @[Valu.scala 106:30]
  wire [7:0] _T_1861 = 9'h0 == io_aluc ? $signed(_T_1844) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1863 = 9'hb8 == io_aluc ? $signed(_T_1847) : $signed(_T_1861); // @[Mux.scala 80:57]
  wire [7:0] _T_1865 = 9'h48 == io_aluc ? $signed(_T_1849) : $signed(_T_1863); // @[Mux.scala 80:57]
  wire [7:0] _T_1867 = 9'h50 == io_aluc ? $signed(_T_1851) : $signed(_T_1865); // @[Mux.scala 80:57]
  wire [7:0] _T_1869 = 9'h58 == io_aluc ? $signed(_T_1853) : $signed(_T_1867); // @[Mux.scala 80:57]
  wire [7:0] _T_1871 = 9'h20 == io_aluc ? $signed(_T_1857) : $signed(_T_1869); // @[Mux.scala 80:57]
  wire [7:0] _T_1873 = 9'h28 == io_aluc ? $signed(_T_1859) : $signed(_T_1871); // @[Mux.scala 80:57]
  wire [7:0] _T_1874 = _T_1833 & io_vma ? $signed(-8'sh1) : $signed(_T_1873); // @[Valu.scala 96:36]
  wire [7:0] _T_1875 = ~io_vm & ~io_vs0[14] & ~io_vma ? $signed(sew_8_vd_14) : $signed(_T_1874); // @[Valu.scala 95:32]
  wire [7:0] _T_1881 = ~io_vta & 32'he >= io_vl ? $signed(sew_8_vd_14) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1882 = 32'he >= io_vstart & 32'he < io_vl ? $signed(_T_1875) : $signed(_T_1881); // @[Valu.scala 94:11]
  wire  _T_1884 = 32'hf < io_vstart; // @[Valu.scala 93:16]
  wire  _T_1887 = 32'hf >= io_vstart & 32'hf < io_vl; // @[Valu.scala 94:29]
  wire  _T_1891 = ~io_vm & ~io_vs0[15]; // @[Valu.scala 95:47]
  wire  _T_1893 = ~io_vm & ~io_vs0[15] & ~io_vma; // @[Valu.scala 95:68]
  wire  _T_1899 = _T_1891 & io_vma; // @[Valu.scala 96:72]
  wire [7:0] _T_1902 = $signed(sew_8_a_15) + $signed(sew_8_b_15); // @[Valu.scala 100:35]
  wire [7:0] _T_1905 = $signed(sew_8_a_15) - $signed(sew_8_b_15); // @[Valu.scala 101:37]
  wire [7:0] _T_1907 = $signed(sew_8_a_15) & $signed(sew_8_b_15); // @[Valu.scala 102:36]
  wire [7:0] _T_1909 = $signed(sew_8_a_15) | $signed(sew_8_b_15); // @[Valu.scala 103:35]
  wire [7:0] _T_1911 = $signed(sew_8_a_15) ^ $signed(sew_8_b_15); // @[Valu.scala 104:36]
  wire [7:0] _T_1912 = io_vs2[127:120]; // @[Valu.scala 105:40]
  wire [7:0] _T_1913 = io_vs1[127:120]; // @[Valu.scala 105:58]
  wire [7:0] _T_1915 = _T_1912 <= _T_1913 ? $signed(sew_8_b_15) : $signed(sew_8_a_15); // @[Valu.scala 105:31]
  wire [7:0] _T_1917 = $signed(sew_8_b_15) <= $signed(sew_8_a_15) ? $signed(sew_8_b_15) : $signed(sew_8_a_15); // @[Valu.scala 106:30]
  wire [7:0] _T_1919 = 9'h0 == io_aluc ? $signed(_T_1902) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_1921 = 9'hb8 == io_aluc ? $signed(_T_1905) : $signed(_T_1919); // @[Mux.scala 80:57]
  wire [7:0] _T_1923 = 9'h48 == io_aluc ? $signed(_T_1907) : $signed(_T_1921); // @[Mux.scala 80:57]
  wire [7:0] _T_1925 = 9'h50 == io_aluc ? $signed(_T_1909) : $signed(_T_1923); // @[Mux.scala 80:57]
  wire [7:0] _T_1927 = 9'h58 == io_aluc ? $signed(_T_1911) : $signed(_T_1925); // @[Mux.scala 80:57]
  wire [7:0] _T_1929 = 9'h20 == io_aluc ? $signed(_T_1915) : $signed(_T_1927); // @[Mux.scala 80:57]
  wire [7:0] _T_1931 = 9'h28 == io_aluc ? $signed(_T_1917) : $signed(_T_1929); // @[Mux.scala 80:57]
  wire [7:0] _T_1932 = _T_1891 & io_vma ? $signed(-8'sh1) : $signed(_T_1931); // @[Valu.scala 96:36]
  wire [7:0] _T_1933 = ~io_vm & ~io_vs0[15] & ~io_vma ? $signed(sew_8_vd_15) : $signed(_T_1932); // @[Valu.scala 95:32]
  wire [7:0] _T_1939 = ~io_vta & 32'hf >= io_vl ? $signed(sew_8_vd_15) : $signed(-8'sh1); // @[Valu.scala 110:12]
  wire [7:0] _T_1940 = 32'hf >= io_vstart & 32'hf < io_vl ? $signed(_T_1933) : $signed(_T_1939); // @[Valu.scala 94:11]
  wire [7:0] lo_lo_lo_lo = 32'h0 < io_vstart ? $signed(sew_8_vd_0) : $signed(_T_1070); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_lo_hi = 32'h1 < io_vstart ? $signed(sew_8_vd_1) : $signed(_T_1128); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_hi_lo = 32'h2 < io_vstart ? $signed(sew_8_vd_2) : $signed(_T_1186); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_hi_hi = 32'h3 < io_vstart ? $signed(sew_8_vd_3) : $signed(_T_1244); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_lo_lo = 32'h4 < io_vstart ? $signed(sew_8_vd_4) : $signed(_T_1302); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_lo_hi = 32'h5 < io_vstart ? $signed(sew_8_vd_5) : $signed(_T_1360); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_hi_lo = 32'h6 < io_vstart ? $signed(sew_8_vd_6) : $signed(_T_1418); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_hi_hi = 32'h7 < io_vstart ? $signed(sew_8_vd_7) : $signed(_T_1476); // @[Cat.scala 30:58]
  wire [63:0] lo_3 = {lo_hi_hi_hi,lo_hi_hi_lo,lo_hi_lo_hi,lo_hi_lo_lo,lo_lo_hi_hi,lo_lo_hi_lo,lo_lo_lo_hi,lo_lo_lo_lo}; // @[Cat.scala 30:58]
  wire [7:0] hi_lo_lo_lo = 32'h8 < io_vstart ? $signed(sew_8_vd_8) : $signed(_T_1534); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_lo_hi = 32'h9 < io_vstart ? $signed(sew_8_vd_9) : $signed(_T_1592); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_hi_lo = 32'ha < io_vstart ? $signed(sew_8_vd_10) : $signed(_T_1650); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_hi_hi = 32'hb < io_vstart ? $signed(sew_8_vd_11) : $signed(_T_1708); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_lo_lo = 32'hc < io_vstart ? $signed(sew_8_vd_12) : $signed(_T_1766); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_lo_hi = 32'hd < io_vstart ? $signed(sew_8_vd_13) : $signed(_T_1824); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_hi_lo = 32'he < io_vstart ? $signed(sew_8_vd_14) : $signed(_T_1882); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_hi_hi = 32'hf < io_vstart ? $signed(sew_8_vd_15) : $signed(_T_1940); // @[Cat.scala 30:58]
  wire [127:0] _T_1943 = {hi_hi_hi_hi,hi_hi_hi_lo,hi_hi_lo_hi,hi_hi_lo_lo,hi_lo_hi_hi,hi_lo_hi_lo,hi_lo_lo_hi,
    hi_lo_lo_lo,lo_3}; // @[Valu.scala 113:24]
  wire  _T_1946 = io_aluc[2:0] == 3'h3; // @[Valu.scala 209:56]
  wire [63:0] _T_1949 = {32'h0,io_in_B}; // @[Valu.scala 210:47]
  wire [63:0] _T_1968 = $signed(sew_64_b_0) + $signed(_T_1949); // @[Valu.scala 126:37]
  wire [63:0] _T_1971 = $signed(_T_1949) - $signed(sew_64_b_0); // @[Valu.scala 127:33]
  wire [63:0] _T_1973 = $signed(sew_64_b_0) & $signed(_T_1949); // @[Valu.scala 128:36]
  wire [63:0] _T_1975 = $signed(sew_64_b_0) | $signed(_T_1949); // @[Valu.scala 129:35]
  wire [63:0] _T_1977 = $signed(sew_64_b_0) ^ $signed(_T_1949); // @[Valu.scala 130:36]
  wire [63:0] _T_1979 = 9'h3 == io_aluc ? $signed(_T_1968) : $signed(64'sh0); // @[Mux.scala 80:57]
  wire [63:0] _T_1981 = 9'h1b == io_aluc ? $signed(_T_1971) : $signed(_T_1979); // @[Mux.scala 80:57]
  wire [63:0] _T_1983 = 9'h4b == io_aluc ? $signed(_T_1973) : $signed(_T_1981); // @[Mux.scala 80:57]
  wire [63:0] _T_1985 = 9'h2b == io_aluc ? $signed(_T_1975) : $signed(_T_1983); // @[Mux.scala 80:57]
  wire [63:0] _T_1987 = 9'h5b == io_aluc ? $signed(_T_1977) : $signed(_T_1985); // @[Mux.scala 80:57]
  wire [63:0] _T_1988 = _T_199 ? $signed(-64'sh1) : $signed(_T_1987); // @[Valu.scala 122:36]
  wire [63:0] _T_1989 = _T_193 ? $signed(sew_64_vd_0) : $signed(_T_1988); // @[Valu.scala 121:32]
  wire [63:0] _T_1996 = _T_187 ? $signed(_T_1989) : $signed(_T_239); // @[Valu.scala 120:11]
  wire [63:0] _T_2016 = $signed(sew_64_b_1) + $signed(_T_1949); // @[Valu.scala 126:37]
  wire [63:0] _T_2019 = $signed(_T_1949) - $signed(sew_64_b_1); // @[Valu.scala 127:33]
  wire [63:0] _T_2021 = $signed(sew_64_b_1) & $signed(_T_1949); // @[Valu.scala 128:36]
  wire [63:0] _T_2023 = $signed(sew_64_b_1) | $signed(_T_1949); // @[Valu.scala 129:35]
  wire [63:0] _T_2025 = $signed(sew_64_b_1) ^ $signed(_T_1949); // @[Valu.scala 130:36]
  wire [63:0] _T_2027 = 9'h3 == io_aluc ? $signed(_T_2016) : $signed(64'sh0); // @[Mux.scala 80:57]
  wire [63:0] _T_2029 = 9'h1b == io_aluc ? $signed(_T_2019) : $signed(_T_2027); // @[Mux.scala 80:57]
  wire [63:0] _T_2031 = 9'h4b == io_aluc ? $signed(_T_2021) : $signed(_T_2029); // @[Mux.scala 80:57]
  wire [63:0] _T_2033 = 9'h2b == io_aluc ? $signed(_T_2023) : $signed(_T_2031); // @[Mux.scala 80:57]
  wire [63:0] _T_2035 = 9'h5b == io_aluc ? $signed(_T_2025) : $signed(_T_2033); // @[Mux.scala 80:57]
  wire [63:0] _T_2036 = _T_257 ? $signed(-64'sh1) : $signed(_T_2035); // @[Valu.scala 122:36]
  wire [63:0] _T_2037 = _T_251 ? $signed(sew_64_vd_1) : $signed(_T_2036); // @[Valu.scala 121:32]
  wire [63:0] _T_2044 = _T_245 ? $signed(_T_2037) : $signed(_T_297); // @[Valu.scala 120:11]
  wire [63:0] lo_5 = _T_184 ? $signed(sew_64_vd_0) : $signed(_T_1996); // @[Cat.scala 30:58]
  wire [63:0] hi_5 = _T_242 ? $signed(sew_64_vd_1) : $signed(_T_2044); // @[Cat.scala 30:58]
  wire [127:0] _T_2047 = {hi_5,lo_5}; // @[Valu.scala 138:24]
  wire [31:0] _T_2072 = $signed(sew_32_b_0) + $signed(io_in_B); // @[Valu.scala 126:37]
  wire [31:0] _T_2075 = $signed(io_in_B) - $signed(sew_32_b_0); // @[Valu.scala 127:33]
  wire [31:0] _T_2077 = $signed(sew_32_b_0) & $signed(io_in_B); // @[Valu.scala 128:36]
  wire [31:0] _T_2079 = $signed(sew_32_b_0) | $signed(io_in_B); // @[Valu.scala 129:35]
  wire [31:0] _T_2081 = $signed(sew_32_b_0) ^ $signed(io_in_B); // @[Valu.scala 130:36]
  wire [31:0] _T_2083 = 9'h3 == io_aluc ? $signed(_T_2072) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_2085 = 9'h1b == io_aluc ? $signed(_T_2075) : $signed(_T_2083); // @[Mux.scala 80:57]
  wire [31:0] _T_2087 = 9'h4b == io_aluc ? $signed(_T_2077) : $signed(_T_2085); // @[Mux.scala 80:57]
  wire [31:0] _T_2089 = 9'h2b == io_aluc ? $signed(_T_2079) : $signed(_T_2087); // @[Mux.scala 80:57]
  wire [31:0] _T_2091 = 9'h5b == io_aluc ? $signed(_T_2081) : $signed(_T_2089); // @[Mux.scala 80:57]
  wire [31:0] _T_2092 = _T_199 ? $signed(-32'sh1) : $signed(_T_2091); // @[Valu.scala 122:36]
  wire [31:0] _T_2093 = _T_193 ? $signed(sew_32_vd_0) : $signed(_T_2092); // @[Valu.scala 121:32]
  wire [31:0] _T_2100 = _T_187 ? $signed(_T_2093) : $signed(_T_361); // @[Valu.scala 120:11]
  wire [31:0] _T_2120 = $signed(sew_32_b_1) + $signed(io_in_B); // @[Valu.scala 126:37]
  wire [31:0] _T_2123 = $signed(io_in_B) - $signed(sew_32_b_1); // @[Valu.scala 127:33]
  wire [31:0] _T_2125 = $signed(sew_32_b_1) & $signed(io_in_B); // @[Valu.scala 128:36]
  wire [31:0] _T_2127 = $signed(sew_32_b_1) | $signed(io_in_B); // @[Valu.scala 129:35]
  wire [31:0] _T_2129 = $signed(sew_32_b_1) ^ $signed(io_in_B); // @[Valu.scala 130:36]
  wire [31:0] _T_2131 = 9'h3 == io_aluc ? $signed(_T_2120) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_2133 = 9'h1b == io_aluc ? $signed(_T_2123) : $signed(_T_2131); // @[Mux.scala 80:57]
  wire [31:0] _T_2135 = 9'h4b == io_aluc ? $signed(_T_2125) : $signed(_T_2133); // @[Mux.scala 80:57]
  wire [31:0] _T_2137 = 9'h2b == io_aluc ? $signed(_T_2127) : $signed(_T_2135); // @[Mux.scala 80:57]
  wire [31:0] _T_2139 = 9'h5b == io_aluc ? $signed(_T_2129) : $signed(_T_2137); // @[Mux.scala 80:57]
  wire [31:0] _T_2140 = _T_257 ? $signed(-32'sh1) : $signed(_T_2139); // @[Valu.scala 122:36]
  wire [31:0] _T_2141 = _T_251 ? $signed(sew_32_vd_1) : $signed(_T_2140); // @[Valu.scala 121:32]
  wire [31:0] _T_2148 = _T_245 ? $signed(_T_2141) : $signed(_T_419); // @[Valu.scala 120:11]
  wire [31:0] _T_2168 = $signed(sew_32_b_2) + $signed(io_in_B); // @[Valu.scala 126:37]
  wire [31:0] _T_2171 = $signed(io_in_B) - $signed(sew_32_b_2); // @[Valu.scala 127:33]
  wire [31:0] _T_2173 = $signed(sew_32_b_2) & $signed(io_in_B); // @[Valu.scala 128:36]
  wire [31:0] _T_2175 = $signed(sew_32_b_2) | $signed(io_in_B); // @[Valu.scala 129:35]
  wire [31:0] _T_2177 = $signed(sew_32_b_2) ^ $signed(io_in_B); // @[Valu.scala 130:36]
  wire [31:0] _T_2179 = 9'h3 == io_aluc ? $signed(_T_2168) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_2181 = 9'h1b == io_aluc ? $signed(_T_2171) : $signed(_T_2179); // @[Mux.scala 80:57]
  wire [31:0] _T_2183 = 9'h4b == io_aluc ? $signed(_T_2173) : $signed(_T_2181); // @[Mux.scala 80:57]
  wire [31:0] _T_2185 = 9'h2b == io_aluc ? $signed(_T_2175) : $signed(_T_2183); // @[Mux.scala 80:57]
  wire [31:0] _T_2187 = 9'h5b == io_aluc ? $signed(_T_2177) : $signed(_T_2185); // @[Mux.scala 80:57]
  wire [31:0] _T_2188 = _T_437 ? $signed(-32'sh1) : $signed(_T_2187); // @[Valu.scala 122:36]
  wire [31:0] _T_2189 = _T_431 ? $signed(sew_32_vd_2) : $signed(_T_2188); // @[Valu.scala 121:32]
  wire [31:0] _T_2196 = _T_425 ? $signed(_T_2189) : $signed(_T_477); // @[Valu.scala 120:11]
  wire [31:0] _T_2216 = $signed(sew_32_b_3) + $signed(io_in_B); // @[Valu.scala 126:37]
  wire [31:0] _T_2219 = $signed(io_in_B) - $signed(sew_32_b_3); // @[Valu.scala 127:33]
  wire [31:0] _T_2221 = $signed(sew_32_b_3) & $signed(io_in_B); // @[Valu.scala 128:36]
  wire [31:0] _T_2223 = $signed(sew_32_b_3) | $signed(io_in_B); // @[Valu.scala 129:35]
  wire [31:0] _T_2225 = $signed(sew_32_b_3) ^ $signed(io_in_B); // @[Valu.scala 130:36]
  wire [31:0] _T_2227 = 9'h3 == io_aluc ? $signed(_T_2216) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_2229 = 9'h1b == io_aluc ? $signed(_T_2219) : $signed(_T_2227); // @[Mux.scala 80:57]
  wire [31:0] _T_2231 = 9'h4b == io_aluc ? $signed(_T_2221) : $signed(_T_2229); // @[Mux.scala 80:57]
  wire [31:0] _T_2233 = 9'h2b == io_aluc ? $signed(_T_2223) : $signed(_T_2231); // @[Mux.scala 80:57]
  wire [31:0] _T_2235 = 9'h5b == io_aluc ? $signed(_T_2225) : $signed(_T_2233); // @[Mux.scala 80:57]
  wire [31:0] _T_2236 = _T_495 ? $signed(-32'sh1) : $signed(_T_2235); // @[Valu.scala 122:36]
  wire [31:0] _T_2237 = _T_489 ? $signed(sew_32_vd_3) : $signed(_T_2236); // @[Valu.scala 121:32]
  wire [31:0] _T_2244 = _T_483 ? $signed(_T_2237) : $signed(_T_535); // @[Valu.scala 120:11]
  wire [31:0] lo_lo_3 = _T_184 ? $signed(sew_32_vd_0) : $signed(_T_2100); // @[Cat.scala 30:58]
  wire [31:0] lo_hi_3 = _T_242 ? $signed(sew_32_vd_1) : $signed(_T_2148); // @[Cat.scala 30:58]
  wire [31:0] hi_lo_3 = _T_422 ? $signed(sew_32_vd_2) : $signed(_T_2196); // @[Cat.scala 30:58]
  wire [31:0] hi_hi_3 = _T_480 ? $signed(sew_32_vd_3) : $signed(_T_2244); // @[Cat.scala 30:58]
  wire [127:0] _T_2247 = {hi_hi_3,hi_lo_3,lo_hi_3,lo_lo_3}; // @[Valu.scala 138:24]
  wire [7:0] _T_2253 = io_in_B[7:0]; // @[Valu.scala 216:36]
  wire [7:0] _T_2272 = $signed(sew_8_b_0) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2275 = $signed(_T_2253) - $signed(sew_8_b_0); // @[Valu.scala 127:33]
  wire [7:0] _T_2277 = $signed(sew_8_b_0) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2279 = $signed(sew_8_b_0) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2281 = $signed(sew_8_b_0) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2283 = 9'h3 == io_aluc ? $signed(_T_2272) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2285 = 9'h1b == io_aluc ? $signed(_T_2275) : $signed(_T_2283); // @[Mux.scala 80:57]
  wire [7:0] _T_2287 = 9'h4b == io_aluc ? $signed(_T_2277) : $signed(_T_2285); // @[Mux.scala 80:57]
  wire [7:0] _T_2289 = 9'h2b == io_aluc ? $signed(_T_2279) : $signed(_T_2287); // @[Mux.scala 80:57]
  wire [7:0] _T_2291 = 9'h5b == io_aluc ? $signed(_T_2281) : $signed(_T_2289); // @[Mux.scala 80:57]
  wire [7:0] _T_2292 = _T_199 ? $signed(-8'sh1) : $signed(_T_2291); // @[Valu.scala 122:36]
  wire [7:0] _T_2293 = _T_193 ? $signed(sew_8_vd_0) : $signed(_T_2292); // @[Valu.scala 121:32]
  wire [7:0] _T_2300 = _T_187 ? $signed(_T_2293) : $signed(_T_1069); // @[Valu.scala 120:11]
  wire [7:0] _T_2320 = $signed(sew_8_b_1) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2323 = $signed(_T_2253) - $signed(sew_8_b_1); // @[Valu.scala 127:33]
  wire [7:0] _T_2325 = $signed(sew_8_b_1) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2327 = $signed(sew_8_b_1) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2329 = $signed(sew_8_b_1) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2331 = 9'h3 == io_aluc ? $signed(_T_2320) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2333 = 9'h1b == io_aluc ? $signed(_T_2323) : $signed(_T_2331); // @[Mux.scala 80:57]
  wire [7:0] _T_2335 = 9'h4b == io_aluc ? $signed(_T_2325) : $signed(_T_2333); // @[Mux.scala 80:57]
  wire [7:0] _T_2337 = 9'h2b == io_aluc ? $signed(_T_2327) : $signed(_T_2335); // @[Mux.scala 80:57]
  wire [7:0] _T_2339 = 9'h5b == io_aluc ? $signed(_T_2329) : $signed(_T_2337); // @[Mux.scala 80:57]
  wire [7:0] _T_2340 = _T_257 ? $signed(-8'sh1) : $signed(_T_2339); // @[Valu.scala 122:36]
  wire [7:0] _T_2341 = _T_251 ? $signed(sew_8_vd_1) : $signed(_T_2340); // @[Valu.scala 121:32]
  wire [7:0] _T_2348 = _T_245 ? $signed(_T_2341) : $signed(_T_1127); // @[Valu.scala 120:11]
  wire [7:0] _T_2368 = $signed(sew_8_b_2) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2371 = $signed(_T_2253) - $signed(sew_8_b_2); // @[Valu.scala 127:33]
  wire [7:0] _T_2373 = $signed(sew_8_b_2) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2375 = $signed(sew_8_b_2) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2377 = $signed(sew_8_b_2) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2379 = 9'h3 == io_aluc ? $signed(_T_2368) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2381 = 9'h1b == io_aluc ? $signed(_T_2371) : $signed(_T_2379); // @[Mux.scala 80:57]
  wire [7:0] _T_2383 = 9'h4b == io_aluc ? $signed(_T_2373) : $signed(_T_2381); // @[Mux.scala 80:57]
  wire [7:0] _T_2385 = 9'h2b == io_aluc ? $signed(_T_2375) : $signed(_T_2383); // @[Mux.scala 80:57]
  wire [7:0] _T_2387 = 9'h5b == io_aluc ? $signed(_T_2377) : $signed(_T_2385); // @[Mux.scala 80:57]
  wire [7:0] _T_2388 = _T_437 ? $signed(-8'sh1) : $signed(_T_2387); // @[Valu.scala 122:36]
  wire [7:0] _T_2389 = _T_431 ? $signed(sew_8_vd_2) : $signed(_T_2388); // @[Valu.scala 121:32]
  wire [7:0] _T_2396 = _T_425 ? $signed(_T_2389) : $signed(_T_1185); // @[Valu.scala 120:11]
  wire [7:0] _T_2416 = $signed(sew_8_b_3) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2419 = $signed(_T_2253) - $signed(sew_8_b_3); // @[Valu.scala 127:33]
  wire [7:0] _T_2421 = $signed(sew_8_b_3) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2423 = $signed(sew_8_b_3) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2425 = $signed(sew_8_b_3) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2427 = 9'h3 == io_aluc ? $signed(_T_2416) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2429 = 9'h1b == io_aluc ? $signed(_T_2419) : $signed(_T_2427); // @[Mux.scala 80:57]
  wire [7:0] _T_2431 = 9'h4b == io_aluc ? $signed(_T_2421) : $signed(_T_2429); // @[Mux.scala 80:57]
  wire [7:0] _T_2433 = 9'h2b == io_aluc ? $signed(_T_2423) : $signed(_T_2431); // @[Mux.scala 80:57]
  wire [7:0] _T_2435 = 9'h5b == io_aluc ? $signed(_T_2425) : $signed(_T_2433); // @[Mux.scala 80:57]
  wire [7:0] _T_2436 = _T_495 ? $signed(-8'sh1) : $signed(_T_2435); // @[Valu.scala 122:36]
  wire [7:0] _T_2437 = _T_489 ? $signed(sew_8_vd_3) : $signed(_T_2436); // @[Valu.scala 121:32]
  wire [7:0] _T_2444 = _T_483 ? $signed(_T_2437) : $signed(_T_1243); // @[Valu.scala 120:11]
  wire [7:0] _T_2464 = $signed(sew_8_b_4) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2467 = $signed(_T_2253) - $signed(sew_8_b_4); // @[Valu.scala 127:33]
  wire [7:0] _T_2469 = $signed(sew_8_b_4) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2471 = $signed(sew_8_b_4) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2473 = $signed(sew_8_b_4) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2475 = 9'h3 == io_aluc ? $signed(_T_2464) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2477 = 9'h1b == io_aluc ? $signed(_T_2467) : $signed(_T_2475); // @[Mux.scala 80:57]
  wire [7:0] _T_2479 = 9'h4b == io_aluc ? $signed(_T_2469) : $signed(_T_2477); // @[Mux.scala 80:57]
  wire [7:0] _T_2481 = 9'h2b == io_aluc ? $signed(_T_2471) : $signed(_T_2479); // @[Mux.scala 80:57]
  wire [7:0] _T_2483 = 9'h5b == io_aluc ? $signed(_T_2473) : $signed(_T_2481); // @[Mux.scala 80:57]
  wire [7:0] _T_2484 = _T_791 ? $signed(-8'sh1) : $signed(_T_2483); // @[Valu.scala 122:36]
  wire [7:0] _T_2485 = _T_785 ? $signed(sew_8_vd_4) : $signed(_T_2484); // @[Valu.scala 121:32]
  wire [7:0] _T_2492 = _T_779 ? $signed(_T_2485) : $signed(_T_1301); // @[Valu.scala 120:11]
  wire [7:0] _T_2512 = $signed(sew_8_b_5) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2515 = $signed(_T_2253) - $signed(sew_8_b_5); // @[Valu.scala 127:33]
  wire [7:0] _T_2517 = $signed(sew_8_b_5) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2519 = $signed(sew_8_b_5) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2521 = $signed(sew_8_b_5) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2523 = 9'h3 == io_aluc ? $signed(_T_2512) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2525 = 9'h1b == io_aluc ? $signed(_T_2515) : $signed(_T_2523); // @[Mux.scala 80:57]
  wire [7:0] _T_2527 = 9'h4b == io_aluc ? $signed(_T_2517) : $signed(_T_2525); // @[Mux.scala 80:57]
  wire [7:0] _T_2529 = 9'h2b == io_aluc ? $signed(_T_2519) : $signed(_T_2527); // @[Mux.scala 80:57]
  wire [7:0] _T_2531 = 9'h5b == io_aluc ? $signed(_T_2521) : $signed(_T_2529); // @[Mux.scala 80:57]
  wire [7:0] _T_2532 = _T_849 ? $signed(-8'sh1) : $signed(_T_2531); // @[Valu.scala 122:36]
  wire [7:0] _T_2533 = _T_843 ? $signed(sew_8_vd_5) : $signed(_T_2532); // @[Valu.scala 121:32]
  wire [7:0] _T_2540 = _T_837 ? $signed(_T_2533) : $signed(_T_1359); // @[Valu.scala 120:11]
  wire [7:0] _T_2560 = $signed(sew_8_b_6) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2563 = $signed(_T_2253) - $signed(sew_8_b_6); // @[Valu.scala 127:33]
  wire [7:0] _T_2565 = $signed(sew_8_b_6) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2567 = $signed(sew_8_b_6) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2569 = $signed(sew_8_b_6) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2571 = 9'h3 == io_aluc ? $signed(_T_2560) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2573 = 9'h1b == io_aluc ? $signed(_T_2563) : $signed(_T_2571); // @[Mux.scala 80:57]
  wire [7:0] _T_2575 = 9'h4b == io_aluc ? $signed(_T_2565) : $signed(_T_2573); // @[Mux.scala 80:57]
  wire [7:0] _T_2577 = 9'h2b == io_aluc ? $signed(_T_2567) : $signed(_T_2575); // @[Mux.scala 80:57]
  wire [7:0] _T_2579 = 9'h5b == io_aluc ? $signed(_T_2569) : $signed(_T_2577); // @[Mux.scala 80:57]
  wire [7:0] _T_2580 = _T_907 ? $signed(-8'sh1) : $signed(_T_2579); // @[Valu.scala 122:36]
  wire [7:0] _T_2581 = _T_901 ? $signed(sew_8_vd_6) : $signed(_T_2580); // @[Valu.scala 121:32]
  wire [7:0] _T_2588 = _T_895 ? $signed(_T_2581) : $signed(_T_1417); // @[Valu.scala 120:11]
  wire [7:0] _T_2608 = $signed(sew_8_b_7) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2611 = $signed(_T_2253) - $signed(sew_8_b_7); // @[Valu.scala 127:33]
  wire [7:0] _T_2613 = $signed(sew_8_b_7) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2615 = $signed(sew_8_b_7) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2617 = $signed(sew_8_b_7) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2619 = 9'h3 == io_aluc ? $signed(_T_2608) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2621 = 9'h1b == io_aluc ? $signed(_T_2611) : $signed(_T_2619); // @[Mux.scala 80:57]
  wire [7:0] _T_2623 = 9'h4b == io_aluc ? $signed(_T_2613) : $signed(_T_2621); // @[Mux.scala 80:57]
  wire [7:0] _T_2625 = 9'h2b == io_aluc ? $signed(_T_2615) : $signed(_T_2623); // @[Mux.scala 80:57]
  wire [7:0] _T_2627 = 9'h5b == io_aluc ? $signed(_T_2617) : $signed(_T_2625); // @[Mux.scala 80:57]
  wire [7:0] _T_2628 = _T_965 ? $signed(-8'sh1) : $signed(_T_2627); // @[Valu.scala 122:36]
  wire [7:0] _T_2629 = _T_959 ? $signed(sew_8_vd_7) : $signed(_T_2628); // @[Valu.scala 121:32]
  wire [7:0] _T_2636 = _T_953 ? $signed(_T_2629) : $signed(_T_1475); // @[Valu.scala 120:11]
  wire [7:0] _T_2656 = $signed(sew_8_b_8) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2659 = $signed(_T_2253) - $signed(sew_8_b_8); // @[Valu.scala 127:33]
  wire [7:0] _T_2661 = $signed(sew_8_b_8) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2663 = $signed(sew_8_b_8) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2665 = $signed(sew_8_b_8) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2667 = 9'h3 == io_aluc ? $signed(_T_2656) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2669 = 9'h1b == io_aluc ? $signed(_T_2659) : $signed(_T_2667); // @[Mux.scala 80:57]
  wire [7:0] _T_2671 = 9'h4b == io_aluc ? $signed(_T_2661) : $signed(_T_2669); // @[Mux.scala 80:57]
  wire [7:0] _T_2673 = 9'h2b == io_aluc ? $signed(_T_2663) : $signed(_T_2671); // @[Mux.scala 80:57]
  wire [7:0] _T_2675 = 9'h5b == io_aluc ? $signed(_T_2665) : $signed(_T_2673); // @[Mux.scala 80:57]
  wire [7:0] _T_2676 = _T_1493 ? $signed(-8'sh1) : $signed(_T_2675); // @[Valu.scala 122:36]
  wire [7:0] _T_2677 = _T_1487 ? $signed(sew_8_vd_8) : $signed(_T_2676); // @[Valu.scala 121:32]
  wire [7:0] _T_2684 = _T_1481 ? $signed(_T_2677) : $signed(_T_1533); // @[Valu.scala 120:11]
  wire [7:0] _T_2704 = $signed(sew_8_b_9) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2707 = $signed(_T_2253) - $signed(sew_8_b_9); // @[Valu.scala 127:33]
  wire [7:0] _T_2709 = $signed(sew_8_b_9) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2711 = $signed(sew_8_b_9) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2713 = $signed(sew_8_b_9) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2715 = 9'h3 == io_aluc ? $signed(_T_2704) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2717 = 9'h1b == io_aluc ? $signed(_T_2707) : $signed(_T_2715); // @[Mux.scala 80:57]
  wire [7:0] _T_2719 = 9'h4b == io_aluc ? $signed(_T_2709) : $signed(_T_2717); // @[Mux.scala 80:57]
  wire [7:0] _T_2721 = 9'h2b == io_aluc ? $signed(_T_2711) : $signed(_T_2719); // @[Mux.scala 80:57]
  wire [7:0] _T_2723 = 9'h5b == io_aluc ? $signed(_T_2713) : $signed(_T_2721); // @[Mux.scala 80:57]
  wire [7:0] _T_2724 = _T_1551 ? $signed(-8'sh1) : $signed(_T_2723); // @[Valu.scala 122:36]
  wire [7:0] _T_2725 = _T_1545 ? $signed(sew_8_vd_9) : $signed(_T_2724); // @[Valu.scala 121:32]
  wire [7:0] _T_2732 = _T_1539 ? $signed(_T_2725) : $signed(_T_1591); // @[Valu.scala 120:11]
  wire [7:0] _T_2752 = $signed(sew_8_b_10) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2755 = $signed(_T_2253) - $signed(sew_8_b_10); // @[Valu.scala 127:33]
  wire [7:0] _T_2757 = $signed(sew_8_b_10) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2759 = $signed(sew_8_b_10) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2761 = $signed(sew_8_b_10) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2763 = 9'h3 == io_aluc ? $signed(_T_2752) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2765 = 9'h1b == io_aluc ? $signed(_T_2755) : $signed(_T_2763); // @[Mux.scala 80:57]
  wire [7:0] _T_2767 = 9'h4b == io_aluc ? $signed(_T_2757) : $signed(_T_2765); // @[Mux.scala 80:57]
  wire [7:0] _T_2769 = 9'h2b == io_aluc ? $signed(_T_2759) : $signed(_T_2767); // @[Mux.scala 80:57]
  wire [7:0] _T_2771 = 9'h5b == io_aluc ? $signed(_T_2761) : $signed(_T_2769); // @[Mux.scala 80:57]
  wire [7:0] _T_2772 = _T_1609 ? $signed(-8'sh1) : $signed(_T_2771); // @[Valu.scala 122:36]
  wire [7:0] _T_2773 = _T_1603 ? $signed(sew_8_vd_10) : $signed(_T_2772); // @[Valu.scala 121:32]
  wire [7:0] _T_2780 = _T_1597 ? $signed(_T_2773) : $signed(_T_1649); // @[Valu.scala 120:11]
  wire [7:0] _T_2800 = $signed(sew_8_b_11) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2803 = $signed(_T_2253) - $signed(sew_8_b_11); // @[Valu.scala 127:33]
  wire [7:0] _T_2805 = $signed(sew_8_b_11) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2807 = $signed(sew_8_b_11) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2809 = $signed(sew_8_b_11) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2811 = 9'h3 == io_aluc ? $signed(_T_2800) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2813 = 9'h1b == io_aluc ? $signed(_T_2803) : $signed(_T_2811); // @[Mux.scala 80:57]
  wire [7:0] _T_2815 = 9'h4b == io_aluc ? $signed(_T_2805) : $signed(_T_2813); // @[Mux.scala 80:57]
  wire [7:0] _T_2817 = 9'h2b == io_aluc ? $signed(_T_2807) : $signed(_T_2815); // @[Mux.scala 80:57]
  wire [7:0] _T_2819 = 9'h5b == io_aluc ? $signed(_T_2809) : $signed(_T_2817); // @[Mux.scala 80:57]
  wire [7:0] _T_2820 = _T_1667 ? $signed(-8'sh1) : $signed(_T_2819); // @[Valu.scala 122:36]
  wire [7:0] _T_2821 = _T_1661 ? $signed(sew_8_vd_11) : $signed(_T_2820); // @[Valu.scala 121:32]
  wire [7:0] _T_2828 = _T_1655 ? $signed(_T_2821) : $signed(_T_1707); // @[Valu.scala 120:11]
  wire [7:0] _T_2848 = $signed(sew_8_b_12) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2851 = $signed(_T_2253) - $signed(sew_8_b_12); // @[Valu.scala 127:33]
  wire [7:0] _T_2853 = $signed(sew_8_b_12) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2855 = $signed(sew_8_b_12) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2857 = $signed(sew_8_b_12) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2859 = 9'h3 == io_aluc ? $signed(_T_2848) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2861 = 9'h1b == io_aluc ? $signed(_T_2851) : $signed(_T_2859); // @[Mux.scala 80:57]
  wire [7:0] _T_2863 = 9'h4b == io_aluc ? $signed(_T_2853) : $signed(_T_2861); // @[Mux.scala 80:57]
  wire [7:0] _T_2865 = 9'h2b == io_aluc ? $signed(_T_2855) : $signed(_T_2863); // @[Mux.scala 80:57]
  wire [7:0] _T_2867 = 9'h5b == io_aluc ? $signed(_T_2857) : $signed(_T_2865); // @[Mux.scala 80:57]
  wire [7:0] _T_2868 = _T_1725 ? $signed(-8'sh1) : $signed(_T_2867); // @[Valu.scala 122:36]
  wire [7:0] _T_2869 = _T_1719 ? $signed(sew_8_vd_12) : $signed(_T_2868); // @[Valu.scala 121:32]
  wire [7:0] _T_2876 = _T_1713 ? $signed(_T_2869) : $signed(_T_1765); // @[Valu.scala 120:11]
  wire [7:0] _T_2896 = $signed(sew_8_b_13) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2899 = $signed(_T_2253) - $signed(sew_8_b_13); // @[Valu.scala 127:33]
  wire [7:0] _T_2901 = $signed(sew_8_b_13) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2903 = $signed(sew_8_b_13) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2905 = $signed(sew_8_b_13) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2907 = 9'h3 == io_aluc ? $signed(_T_2896) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2909 = 9'h1b == io_aluc ? $signed(_T_2899) : $signed(_T_2907); // @[Mux.scala 80:57]
  wire [7:0] _T_2911 = 9'h4b == io_aluc ? $signed(_T_2901) : $signed(_T_2909); // @[Mux.scala 80:57]
  wire [7:0] _T_2913 = 9'h2b == io_aluc ? $signed(_T_2903) : $signed(_T_2911); // @[Mux.scala 80:57]
  wire [7:0] _T_2915 = 9'h5b == io_aluc ? $signed(_T_2905) : $signed(_T_2913); // @[Mux.scala 80:57]
  wire [7:0] _T_2916 = _T_1783 ? $signed(-8'sh1) : $signed(_T_2915); // @[Valu.scala 122:36]
  wire [7:0] _T_2917 = _T_1777 ? $signed(sew_8_vd_13) : $signed(_T_2916); // @[Valu.scala 121:32]
  wire [7:0] _T_2924 = _T_1771 ? $signed(_T_2917) : $signed(_T_1823); // @[Valu.scala 120:11]
  wire [7:0] _T_2944 = $signed(sew_8_b_14) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2947 = $signed(_T_2253) - $signed(sew_8_b_14); // @[Valu.scala 127:33]
  wire [7:0] _T_2949 = $signed(sew_8_b_14) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2951 = $signed(sew_8_b_14) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_2953 = $signed(sew_8_b_14) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_2955 = 9'h3 == io_aluc ? $signed(_T_2944) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_2957 = 9'h1b == io_aluc ? $signed(_T_2947) : $signed(_T_2955); // @[Mux.scala 80:57]
  wire [7:0] _T_2959 = 9'h4b == io_aluc ? $signed(_T_2949) : $signed(_T_2957); // @[Mux.scala 80:57]
  wire [7:0] _T_2961 = 9'h2b == io_aluc ? $signed(_T_2951) : $signed(_T_2959); // @[Mux.scala 80:57]
  wire [7:0] _T_2963 = 9'h5b == io_aluc ? $signed(_T_2953) : $signed(_T_2961); // @[Mux.scala 80:57]
  wire [7:0] _T_2964 = _T_1841 ? $signed(-8'sh1) : $signed(_T_2963); // @[Valu.scala 122:36]
  wire [7:0] _T_2965 = _T_1835 ? $signed(sew_8_vd_14) : $signed(_T_2964); // @[Valu.scala 121:32]
  wire [7:0] _T_2972 = _T_1829 ? $signed(_T_2965) : $signed(_T_1881); // @[Valu.scala 120:11]
  wire [7:0] _T_2992 = $signed(sew_8_b_15) + $signed(_T_2253); // @[Valu.scala 126:37]
  wire [7:0] _T_2995 = $signed(_T_2253) - $signed(sew_8_b_15); // @[Valu.scala 127:33]
  wire [7:0] _T_2997 = $signed(sew_8_b_15) & $signed(_T_2253); // @[Valu.scala 128:36]
  wire [7:0] _T_2999 = $signed(sew_8_b_15) | $signed(_T_2253); // @[Valu.scala 129:35]
  wire [7:0] _T_3001 = $signed(sew_8_b_15) ^ $signed(_T_2253); // @[Valu.scala 130:36]
  wire [7:0] _T_3003 = 9'h3 == io_aluc ? $signed(_T_2992) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_3005 = 9'h1b == io_aluc ? $signed(_T_2995) : $signed(_T_3003); // @[Mux.scala 80:57]
  wire [7:0] _T_3007 = 9'h4b == io_aluc ? $signed(_T_2997) : $signed(_T_3005); // @[Mux.scala 80:57]
  wire [7:0] _T_3009 = 9'h2b == io_aluc ? $signed(_T_2999) : $signed(_T_3007); // @[Mux.scala 80:57]
  wire [7:0] _T_3011 = 9'h5b == io_aluc ? $signed(_T_3001) : $signed(_T_3009); // @[Mux.scala 80:57]
  wire [7:0] _T_3012 = _T_1899 ? $signed(-8'sh1) : $signed(_T_3011); // @[Valu.scala 122:36]
  wire [7:0] _T_3013 = _T_1893 ? $signed(sew_8_vd_15) : $signed(_T_3012); // @[Valu.scala 121:32]
  wire [7:0] _T_3020 = _T_1887 ? $signed(_T_3013) : $signed(_T_1939); // @[Valu.scala 120:11]
  wire [7:0] lo_lo_lo_lo_1 = _T_184 ? $signed(sew_8_vd_0) : $signed(_T_2300); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_lo_hi_1 = _T_242 ? $signed(sew_8_vd_1) : $signed(_T_2348); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_hi_lo_1 = _T_422 ? $signed(sew_8_vd_2) : $signed(_T_2396); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_hi_hi_1 = _T_480 ? $signed(sew_8_vd_3) : $signed(_T_2444); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_lo_lo_1 = _T_776 ? $signed(sew_8_vd_4) : $signed(_T_2492); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_lo_hi_1 = _T_834 ? $signed(sew_8_vd_5) : $signed(_T_2540); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_hi_lo_1 = _T_892 ? $signed(sew_8_vd_6) : $signed(_T_2588); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_hi_hi_1 = _T_950 ? $signed(sew_8_vd_7) : $signed(_T_2636); // @[Cat.scala 30:58]
  wire [63:0] lo_7 = {lo_hi_hi_hi_1,lo_hi_hi_lo_1,lo_hi_lo_hi_1,lo_hi_lo_lo_1,lo_lo_hi_hi_1,lo_lo_hi_lo_1,lo_lo_lo_hi_1,
    lo_lo_lo_lo_1}; // @[Cat.scala 30:58]
  wire [7:0] hi_lo_lo_lo_1 = _T_1478 ? $signed(sew_8_vd_8) : $signed(_T_2684); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_lo_hi_1 = _T_1536 ? $signed(sew_8_vd_9) : $signed(_T_2732); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_hi_lo_1 = _T_1594 ? $signed(sew_8_vd_10) : $signed(_T_2780); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_hi_hi_1 = _T_1652 ? $signed(sew_8_vd_11) : $signed(_T_2828); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_lo_lo_1 = _T_1710 ? $signed(sew_8_vd_12) : $signed(_T_2876); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_lo_hi_1 = _T_1768 ? $signed(sew_8_vd_13) : $signed(_T_2924); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_hi_lo_1 = _T_1826 ? $signed(sew_8_vd_14) : $signed(_T_2972); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_hi_hi_1 = _T_1884 ? $signed(sew_8_vd_15) : $signed(_T_3020); // @[Cat.scala 30:58]
  wire [127:0] _T_3023 = {hi_hi_hi_hi_1,hi_hi_hi_lo_1,hi_hi_lo_hi_1,hi_hi_lo_lo_1,hi_lo_hi_hi_1,hi_lo_hi_lo_1,
    hi_lo_lo_hi_1,hi_lo_lo_lo_1,lo_7}; // @[Valu.scala 138:24]
  wire [15:0] _T_3029 = io_in_B[15:0]; // @[Valu.scala 219:37]
  wire [15:0] _T_3048 = $signed(sew_16_b_0) + $signed(_T_3029); // @[Valu.scala 126:37]
  wire [15:0] _T_3051 = $signed(_T_3029) - $signed(sew_16_b_0); // @[Valu.scala 127:33]
  wire [15:0] _T_3053 = $signed(sew_16_b_0) & $signed(_T_3029); // @[Valu.scala 128:36]
  wire [15:0] _T_3055 = $signed(sew_16_b_0) | $signed(_T_3029); // @[Valu.scala 129:35]
  wire [15:0] _T_3057 = $signed(sew_16_b_0) ^ $signed(_T_3029); // @[Valu.scala 130:36]
  wire [15:0] _T_3059 = 9'h3 == io_aluc ? $signed(_T_3048) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3061 = 9'h1b == io_aluc ? $signed(_T_3051) : $signed(_T_3059); // @[Mux.scala 80:57]
  wire [15:0] _T_3063 = 9'h4b == io_aluc ? $signed(_T_3053) : $signed(_T_3061); // @[Mux.scala 80:57]
  wire [15:0] _T_3065 = 9'h2b == io_aluc ? $signed(_T_3055) : $signed(_T_3063); // @[Mux.scala 80:57]
  wire [15:0] _T_3067 = 9'h5b == io_aluc ? $signed(_T_3057) : $signed(_T_3065); // @[Mux.scala 80:57]
  wire [15:0] _T_3068 = _T_199 ? $signed(-16'sh1) : $signed(_T_3067); // @[Valu.scala 122:36]
  wire [15:0] _T_3069 = _T_193 ? $signed(sew_16_vd_0) : $signed(_T_3068); // @[Valu.scala 121:32]
  wire [15:0] _T_3076 = _T_187 ? $signed(_T_3069) : $signed(_T_599); // @[Valu.scala 120:11]
  wire [15:0] _T_3096 = $signed(sew_16_b_1) + $signed(_T_3029); // @[Valu.scala 126:37]
  wire [15:0] _T_3099 = $signed(_T_3029) - $signed(sew_16_b_1); // @[Valu.scala 127:33]
  wire [15:0] _T_3101 = $signed(sew_16_b_1) & $signed(_T_3029); // @[Valu.scala 128:36]
  wire [15:0] _T_3103 = $signed(sew_16_b_1) | $signed(_T_3029); // @[Valu.scala 129:35]
  wire [15:0] _T_3105 = $signed(sew_16_b_1) ^ $signed(_T_3029); // @[Valu.scala 130:36]
  wire [15:0] _T_3107 = 9'h3 == io_aluc ? $signed(_T_3096) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3109 = 9'h1b == io_aluc ? $signed(_T_3099) : $signed(_T_3107); // @[Mux.scala 80:57]
  wire [15:0] _T_3111 = 9'h4b == io_aluc ? $signed(_T_3101) : $signed(_T_3109); // @[Mux.scala 80:57]
  wire [15:0] _T_3113 = 9'h2b == io_aluc ? $signed(_T_3103) : $signed(_T_3111); // @[Mux.scala 80:57]
  wire [15:0] _T_3115 = 9'h5b == io_aluc ? $signed(_T_3105) : $signed(_T_3113); // @[Mux.scala 80:57]
  wire [15:0] _T_3116 = _T_257 ? $signed(-16'sh1) : $signed(_T_3115); // @[Valu.scala 122:36]
  wire [15:0] _T_3117 = _T_251 ? $signed(sew_16_vd_1) : $signed(_T_3116); // @[Valu.scala 121:32]
  wire [15:0] _T_3124 = _T_245 ? $signed(_T_3117) : $signed(_T_657); // @[Valu.scala 120:11]
  wire [15:0] _T_3144 = $signed(sew_16_b_2) + $signed(_T_3029); // @[Valu.scala 126:37]
  wire [15:0] _T_3147 = $signed(_T_3029) - $signed(sew_16_b_2); // @[Valu.scala 127:33]
  wire [15:0] _T_3149 = $signed(sew_16_b_2) & $signed(_T_3029); // @[Valu.scala 128:36]
  wire [15:0] _T_3151 = $signed(sew_16_b_2) | $signed(_T_3029); // @[Valu.scala 129:35]
  wire [15:0] _T_3153 = $signed(sew_16_b_2) ^ $signed(_T_3029); // @[Valu.scala 130:36]
  wire [15:0] _T_3155 = 9'h3 == io_aluc ? $signed(_T_3144) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3157 = 9'h1b == io_aluc ? $signed(_T_3147) : $signed(_T_3155); // @[Mux.scala 80:57]
  wire [15:0] _T_3159 = 9'h4b == io_aluc ? $signed(_T_3149) : $signed(_T_3157); // @[Mux.scala 80:57]
  wire [15:0] _T_3161 = 9'h2b == io_aluc ? $signed(_T_3151) : $signed(_T_3159); // @[Mux.scala 80:57]
  wire [15:0] _T_3163 = 9'h5b == io_aluc ? $signed(_T_3153) : $signed(_T_3161); // @[Mux.scala 80:57]
  wire [15:0] _T_3164 = _T_437 ? $signed(-16'sh1) : $signed(_T_3163); // @[Valu.scala 122:36]
  wire [15:0] _T_3165 = _T_431 ? $signed(sew_16_vd_2) : $signed(_T_3164); // @[Valu.scala 121:32]
  wire [15:0] _T_3172 = _T_425 ? $signed(_T_3165) : $signed(_T_715); // @[Valu.scala 120:11]
  wire [15:0] _T_3192 = $signed(sew_16_b_3) + $signed(_T_3029); // @[Valu.scala 126:37]
  wire [15:0] _T_3195 = $signed(_T_3029) - $signed(sew_16_b_3); // @[Valu.scala 127:33]
  wire [15:0] _T_3197 = $signed(sew_16_b_3) & $signed(_T_3029); // @[Valu.scala 128:36]
  wire [15:0] _T_3199 = $signed(sew_16_b_3) | $signed(_T_3029); // @[Valu.scala 129:35]
  wire [15:0] _T_3201 = $signed(sew_16_b_3) ^ $signed(_T_3029); // @[Valu.scala 130:36]
  wire [15:0] _T_3203 = 9'h3 == io_aluc ? $signed(_T_3192) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3205 = 9'h1b == io_aluc ? $signed(_T_3195) : $signed(_T_3203); // @[Mux.scala 80:57]
  wire [15:0] _T_3207 = 9'h4b == io_aluc ? $signed(_T_3197) : $signed(_T_3205); // @[Mux.scala 80:57]
  wire [15:0] _T_3209 = 9'h2b == io_aluc ? $signed(_T_3199) : $signed(_T_3207); // @[Mux.scala 80:57]
  wire [15:0] _T_3211 = 9'h5b == io_aluc ? $signed(_T_3201) : $signed(_T_3209); // @[Mux.scala 80:57]
  wire [15:0] _T_3212 = _T_495 ? $signed(-16'sh1) : $signed(_T_3211); // @[Valu.scala 122:36]
  wire [15:0] _T_3213 = _T_489 ? $signed(sew_16_vd_3) : $signed(_T_3212); // @[Valu.scala 121:32]
  wire [15:0] _T_3220 = _T_483 ? $signed(_T_3213) : $signed(_T_773); // @[Valu.scala 120:11]
  wire [15:0] _T_3240 = $signed(sew_16_b_4) + $signed(_T_3029); // @[Valu.scala 126:37]
  wire [15:0] _T_3243 = $signed(_T_3029) - $signed(sew_16_b_4); // @[Valu.scala 127:33]
  wire [15:0] _T_3245 = $signed(sew_16_b_4) & $signed(_T_3029); // @[Valu.scala 128:36]
  wire [15:0] _T_3247 = $signed(sew_16_b_4) | $signed(_T_3029); // @[Valu.scala 129:35]
  wire [15:0] _T_3249 = $signed(sew_16_b_4) ^ $signed(_T_3029); // @[Valu.scala 130:36]
  wire [15:0] _T_3251 = 9'h3 == io_aluc ? $signed(_T_3240) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3253 = 9'h1b == io_aluc ? $signed(_T_3243) : $signed(_T_3251); // @[Mux.scala 80:57]
  wire [15:0] _T_3255 = 9'h4b == io_aluc ? $signed(_T_3245) : $signed(_T_3253); // @[Mux.scala 80:57]
  wire [15:0] _T_3257 = 9'h2b == io_aluc ? $signed(_T_3247) : $signed(_T_3255); // @[Mux.scala 80:57]
  wire [15:0] _T_3259 = 9'h5b == io_aluc ? $signed(_T_3249) : $signed(_T_3257); // @[Mux.scala 80:57]
  wire [15:0] _T_3260 = _T_791 ? $signed(-16'sh1) : $signed(_T_3259); // @[Valu.scala 122:36]
  wire [15:0] _T_3261 = _T_785 ? $signed(sew_16_vd_4) : $signed(_T_3260); // @[Valu.scala 121:32]
  wire [15:0] _T_3268 = _T_779 ? $signed(_T_3261) : $signed(_T_831); // @[Valu.scala 120:11]
  wire [15:0] _T_3288 = $signed(sew_16_b_5) + $signed(_T_3029); // @[Valu.scala 126:37]
  wire [15:0] _T_3291 = $signed(_T_3029) - $signed(sew_16_b_5); // @[Valu.scala 127:33]
  wire [15:0] _T_3293 = $signed(sew_16_b_5) & $signed(_T_3029); // @[Valu.scala 128:36]
  wire [15:0] _T_3295 = $signed(sew_16_b_5) | $signed(_T_3029); // @[Valu.scala 129:35]
  wire [15:0] _T_3297 = $signed(sew_16_b_5) ^ $signed(_T_3029); // @[Valu.scala 130:36]
  wire [15:0] _T_3299 = 9'h3 == io_aluc ? $signed(_T_3288) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3301 = 9'h1b == io_aluc ? $signed(_T_3291) : $signed(_T_3299); // @[Mux.scala 80:57]
  wire [15:0] _T_3303 = 9'h4b == io_aluc ? $signed(_T_3293) : $signed(_T_3301); // @[Mux.scala 80:57]
  wire [15:0] _T_3305 = 9'h2b == io_aluc ? $signed(_T_3295) : $signed(_T_3303); // @[Mux.scala 80:57]
  wire [15:0] _T_3307 = 9'h5b == io_aluc ? $signed(_T_3297) : $signed(_T_3305); // @[Mux.scala 80:57]
  wire [15:0] _T_3308 = _T_849 ? $signed(-16'sh1) : $signed(_T_3307); // @[Valu.scala 122:36]
  wire [15:0] _T_3309 = _T_843 ? $signed(sew_16_vd_5) : $signed(_T_3308); // @[Valu.scala 121:32]
  wire [15:0] _T_3316 = _T_837 ? $signed(_T_3309) : $signed(_T_889); // @[Valu.scala 120:11]
  wire [15:0] _T_3336 = $signed(sew_16_b_6) + $signed(_T_3029); // @[Valu.scala 126:37]
  wire [15:0] _T_3339 = $signed(_T_3029) - $signed(sew_16_b_6); // @[Valu.scala 127:33]
  wire [15:0] _T_3341 = $signed(sew_16_b_6) & $signed(_T_3029); // @[Valu.scala 128:36]
  wire [15:0] _T_3343 = $signed(sew_16_b_6) | $signed(_T_3029); // @[Valu.scala 129:35]
  wire [15:0] _T_3345 = $signed(sew_16_b_6) ^ $signed(_T_3029); // @[Valu.scala 130:36]
  wire [15:0] _T_3347 = 9'h3 == io_aluc ? $signed(_T_3336) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3349 = 9'h1b == io_aluc ? $signed(_T_3339) : $signed(_T_3347); // @[Mux.scala 80:57]
  wire [15:0] _T_3351 = 9'h4b == io_aluc ? $signed(_T_3341) : $signed(_T_3349); // @[Mux.scala 80:57]
  wire [15:0] _T_3353 = 9'h2b == io_aluc ? $signed(_T_3343) : $signed(_T_3351); // @[Mux.scala 80:57]
  wire [15:0] _T_3355 = 9'h5b == io_aluc ? $signed(_T_3345) : $signed(_T_3353); // @[Mux.scala 80:57]
  wire [15:0] _T_3356 = _T_907 ? $signed(-16'sh1) : $signed(_T_3355); // @[Valu.scala 122:36]
  wire [15:0] _T_3357 = _T_901 ? $signed(sew_16_vd_6) : $signed(_T_3356); // @[Valu.scala 121:32]
  wire [15:0] _T_3364 = _T_895 ? $signed(_T_3357) : $signed(_T_947); // @[Valu.scala 120:11]
  wire [15:0] _T_3384 = $signed(sew_16_b_7) + $signed(_T_3029); // @[Valu.scala 126:37]
  wire [15:0] _T_3387 = $signed(_T_3029) - $signed(sew_16_b_7); // @[Valu.scala 127:33]
  wire [15:0] _T_3389 = $signed(sew_16_b_7) & $signed(_T_3029); // @[Valu.scala 128:36]
  wire [15:0] _T_3391 = $signed(sew_16_b_7) | $signed(_T_3029); // @[Valu.scala 129:35]
  wire [15:0] _T_3393 = $signed(sew_16_b_7) ^ $signed(_T_3029); // @[Valu.scala 130:36]
  wire [15:0] _T_3395 = 9'h3 == io_aluc ? $signed(_T_3384) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_3397 = 9'h1b == io_aluc ? $signed(_T_3387) : $signed(_T_3395); // @[Mux.scala 80:57]
  wire [15:0] _T_3399 = 9'h4b == io_aluc ? $signed(_T_3389) : $signed(_T_3397); // @[Mux.scala 80:57]
  wire [15:0] _T_3401 = 9'h2b == io_aluc ? $signed(_T_3391) : $signed(_T_3399); // @[Mux.scala 80:57]
  wire [15:0] _T_3403 = 9'h5b == io_aluc ? $signed(_T_3393) : $signed(_T_3401); // @[Mux.scala 80:57]
  wire [15:0] _T_3404 = _T_965 ? $signed(-16'sh1) : $signed(_T_3403); // @[Valu.scala 122:36]
  wire [15:0] _T_3405 = _T_959 ? $signed(sew_16_vd_7) : $signed(_T_3404); // @[Valu.scala 121:32]
  wire [15:0] _T_3412 = _T_953 ? $signed(_T_3405) : $signed(_T_1005); // @[Valu.scala 120:11]
  wire [15:0] lo_lo_lo_3 = _T_184 ? $signed(sew_16_vd_0) : $signed(_T_3076); // @[Cat.scala 30:58]
  wire [15:0] lo_lo_hi_3 = _T_242 ? $signed(sew_16_vd_1) : $signed(_T_3124); // @[Cat.scala 30:58]
  wire [15:0] lo_hi_lo_3 = _T_422 ? $signed(sew_16_vd_2) : $signed(_T_3172); // @[Cat.scala 30:58]
  wire [15:0] lo_hi_hi_3 = _T_480 ? $signed(sew_16_vd_3) : $signed(_T_3220); // @[Cat.scala 30:58]
  wire [15:0] hi_lo_lo_3 = _T_776 ? $signed(sew_16_vd_4) : $signed(_T_3268); // @[Cat.scala 30:58]
  wire [15:0] hi_lo_hi_3 = _T_834 ? $signed(sew_16_vd_5) : $signed(_T_3316); // @[Cat.scala 30:58]
  wire [15:0] hi_hi_lo_3 = _T_892 ? $signed(sew_16_vd_6) : $signed(_T_3364); // @[Cat.scala 30:58]
  wire [15:0] hi_hi_hi_3 = _T_950 ? $signed(sew_16_vd_7) : $signed(_T_3412); // @[Cat.scala 30:58]
  wire [127:0] _T_3415 = {hi_hi_hi_3,hi_hi_lo_3,hi_lo_hi_3,hi_lo_lo_3,lo_hi_hi_3,lo_hi_lo_3,lo_lo_hi_3,lo_lo_lo_3}; // @[Valu.scala 138:24]
  wire  _T_3418 = io_aluc[2:0] == 3'h4; // @[Valu.scala 223:55]
  wire [63:0] _T_3421 = {32'h0,io_in_A}; // @[Valu.scala 224:55]
  wire [63:0] _T_3440 = $signed(sew_64_b_0) + $signed(_T_3421); // @[Valu.scala 150:37]
  wire [63:0] _T_3443 = $signed(sew_64_b_0) - $signed(_T_3421); // @[Valu.scala 151:37]
  wire [63:0] _T_3446 = $signed(_T_3421) - $signed(sew_64_b_0); // @[Valu.scala 152:33]
  wire [63:0] _T_3448 = $signed(sew_64_b_0) & $signed(_T_3421); // @[Valu.scala 153:36]
  wire [63:0] _T_3450 = $signed(sew_64_b_0) | $signed(_T_3421); // @[Valu.scala 154:35]
  wire [63:0] _T_3452 = $signed(sew_64_b_0) ^ $signed(_T_3421); // @[Valu.scala 155:36]
  wire [63:0] _T_3453 = {32'h0,io_in_A}; // @[Valu.scala 156:36]
  wire [63:0] _T_3456 = _T_3453 <= _T_212 ? $signed(_T_3421) : $signed(sew_64_b_0); // @[Valu.scala 156:31]
  wire [63:0] _T_3458 = $signed(_T_3421) <= $signed(sew_64_b_0) ? $signed(_T_3421) : $signed(sew_64_b_0); // @[Valu.scala 157:30]
  wire [63:0] _T_3462 = _T_3453 >= _T_212 ? $signed(_T_3421) : $signed(sew_64_b_0); // @[Valu.scala 158:31]
  wire [63:0] _T_3464 = $signed(_T_3421) >= $signed(sew_64_b_0) ? $signed(_T_3421) : $signed(sew_64_b_0); // @[Valu.scala 159:30]
  wire [63:0] _T_3466 = 9'h4 == io_aluc ? $signed(_T_3440) : $signed(64'sh0); // @[Mux.scala 80:57]
  wire [63:0] _T_3468 = 9'h14 == io_aluc ? $signed(_T_3443) : $signed(_T_3466); // @[Mux.scala 80:57]
  wire [63:0] _T_3470 = 9'h1c == io_aluc ? $signed(_T_3446) : $signed(_T_3468); // @[Mux.scala 80:57]
  wire [63:0] _T_3472 = 9'h4c == io_aluc ? $signed(_T_3448) : $signed(_T_3470); // @[Mux.scala 80:57]
  wire [63:0] _T_3474 = 9'h54 == io_aluc ? $signed(_T_3450) : $signed(_T_3472); // @[Mux.scala 80:57]
  wire [63:0] _T_3476 = 9'h5c == io_aluc ? $signed(_T_3452) : $signed(_T_3474); // @[Mux.scala 80:57]
  wire [63:0] _T_3478 = 9'h24 == io_aluc ? $signed(_T_3456) : $signed(_T_3476); // @[Mux.scala 80:57]
  wire [63:0] _T_3480 = 9'h2c == io_aluc ? $signed(_T_3458) : $signed(_T_3478); // @[Mux.scala 80:57]
  wire [63:0] _T_3482 = 9'h34 == io_aluc ? $signed(_T_3462) : $signed(_T_3480); // @[Mux.scala 80:57]
  wire [63:0] _T_3484 = 9'h3c == io_aluc ? $signed(_T_3464) : $signed(_T_3482); // @[Mux.scala 80:57]
  wire [63:0] _T_3485 = _T_199 ? $signed(-64'sh1) : $signed(_T_3484); // @[Valu.scala 146:36]
  wire [63:0] _T_3486 = _T_193 ? $signed(sew_64_vd_0) : $signed(_T_3485); // @[Valu.scala 145:32]
  wire [63:0] _T_3493 = _T_187 ? $signed(_T_3486) : $signed(-64'sh1); // @[Valu.scala 144:11]
  wire [63:0] _T_3513 = $signed(sew_64_b_1) + $signed(_T_3421); // @[Valu.scala 150:37]
  wire [63:0] _T_3516 = $signed(sew_64_b_1) - $signed(_T_3421); // @[Valu.scala 151:37]
  wire [63:0] _T_3519 = $signed(_T_3421) - $signed(sew_64_b_1); // @[Valu.scala 152:33]
  wire [63:0] _T_3521 = $signed(sew_64_b_1) & $signed(_T_3421); // @[Valu.scala 153:36]
  wire [63:0] _T_3523 = $signed(sew_64_b_1) | $signed(_T_3421); // @[Valu.scala 154:35]
  wire [63:0] _T_3525 = $signed(sew_64_b_1) ^ $signed(_T_3421); // @[Valu.scala 155:36]
  wire [63:0] _T_3529 = _T_3453 <= _T_270 ? $signed(_T_3421) : $signed(sew_64_b_1); // @[Valu.scala 156:31]
  wire [63:0] _T_3531 = $signed(_T_3421) <= $signed(sew_64_b_1) ? $signed(_T_3421) : $signed(sew_64_b_1); // @[Valu.scala 157:30]
  wire [63:0] _T_3535 = _T_3453 >= _T_270 ? $signed(_T_3421) : $signed(sew_64_b_1); // @[Valu.scala 158:31]
  wire [63:0] _T_3537 = $signed(_T_3421) >= $signed(sew_64_b_1) ? $signed(_T_3421) : $signed(sew_64_b_1); // @[Valu.scala 159:30]
  wire [63:0] _T_3539 = 9'h4 == io_aluc ? $signed(_T_3513) : $signed(64'sh0); // @[Mux.scala 80:57]
  wire [63:0] _T_3541 = 9'h14 == io_aluc ? $signed(_T_3516) : $signed(_T_3539); // @[Mux.scala 80:57]
  wire [63:0] _T_3543 = 9'h1c == io_aluc ? $signed(_T_3519) : $signed(_T_3541); // @[Mux.scala 80:57]
  wire [63:0] _T_3545 = 9'h4c == io_aluc ? $signed(_T_3521) : $signed(_T_3543); // @[Mux.scala 80:57]
  wire [63:0] _T_3547 = 9'h54 == io_aluc ? $signed(_T_3523) : $signed(_T_3545); // @[Mux.scala 80:57]
  wire [63:0] _T_3549 = 9'h5c == io_aluc ? $signed(_T_3525) : $signed(_T_3547); // @[Mux.scala 80:57]
  wire [63:0] _T_3551 = 9'h24 == io_aluc ? $signed(_T_3529) : $signed(_T_3549); // @[Mux.scala 80:57]
  wire [63:0] _T_3553 = 9'h2c == io_aluc ? $signed(_T_3531) : $signed(_T_3551); // @[Mux.scala 80:57]
  wire [63:0] _T_3555 = 9'h34 == io_aluc ? $signed(_T_3535) : $signed(_T_3553); // @[Mux.scala 80:57]
  wire [63:0] _T_3557 = 9'h3c == io_aluc ? $signed(_T_3537) : $signed(_T_3555); // @[Mux.scala 80:57]
  wire [63:0] _T_3558 = _T_257 ? $signed(-64'sh1) : $signed(_T_3557); // @[Valu.scala 146:36]
  wire [63:0] _T_3559 = _T_251 ? $signed(sew_64_vd_1) : $signed(_T_3558); // @[Valu.scala 145:32]
  wire  _T_3562 = _T_234 & 32'h1 > io_vl; // @[Valu.scala 163:28]
  wire [63:0] _T_3565 = _T_234 & 32'h1 > io_vl ? $signed(sew_64_vd_1) : $signed(-64'sh1); // @[Valu.scala 163:12]
  wire [63:0] _T_3566 = _T_245 ? $signed(_T_3559) : $signed(_T_3565); // @[Valu.scala 144:11]
  wire [63:0] lo_10 = _T_184 ? $signed(sew_64_vd_0) : $signed(_T_3493); // @[Cat.scala 30:58]
  wire [63:0] hi_10 = _T_242 ? $signed(sew_64_vd_1) : $signed(_T_3566); // @[Cat.scala 30:58]
  wire [127:0] _T_3569 = {hi_10,lo_10}; // @[Valu.scala 166:24]
  wire [31:0] _T_3594 = $signed(sew_32_b_0) + $signed(io_in_A); // @[Valu.scala 150:37]
  wire [31:0] _T_3597 = $signed(sew_32_b_0) - $signed(io_in_A); // @[Valu.scala 151:37]
  wire [31:0] _T_3600 = $signed(io_in_A) - $signed(sew_32_b_0); // @[Valu.scala 152:33]
  wire [31:0] _T_3602 = $signed(sew_32_b_0) & $signed(io_in_A); // @[Valu.scala 153:36]
  wire [31:0] _T_3604 = $signed(sew_32_b_0) | $signed(io_in_A); // @[Valu.scala 154:35]
  wire [31:0] _T_3606 = $signed(sew_32_b_0) ^ $signed(io_in_A); // @[Valu.scala 155:36]
  wire [31:0] _T_3607 = io_in_A; // @[Valu.scala 156:36]
  wire [31:0] _T_3610 = io_in_A <= _T_334 ? $signed(io_in_A) : $signed(sew_32_b_0); // @[Valu.scala 156:31]
  wire [31:0] _T_3612 = $signed(io_in_A) <= $signed(sew_32_b_0) ? $signed(io_in_A) : $signed(sew_32_b_0); // @[Valu.scala 157:30]
  wire [31:0] _T_3616 = io_in_A >= _T_334 ? $signed(io_in_A) : $signed(sew_32_b_0); // @[Valu.scala 158:31]
  wire [31:0] _T_3618 = $signed(io_in_A) >= $signed(sew_32_b_0) ? $signed(io_in_A) : $signed(sew_32_b_0); // @[Valu.scala 159:30]
  wire [31:0] _T_3620 = 9'h4 == io_aluc ? $signed(_T_3594) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_3622 = 9'h14 == io_aluc ? $signed(_T_3597) : $signed(_T_3620); // @[Mux.scala 80:57]
  wire [31:0] _T_3624 = 9'h1c == io_aluc ? $signed(_T_3600) : $signed(_T_3622); // @[Mux.scala 80:57]
  wire [31:0] _T_3626 = 9'h4c == io_aluc ? $signed(_T_3602) : $signed(_T_3624); // @[Mux.scala 80:57]
  wire [31:0] _T_3628 = 9'h54 == io_aluc ? $signed(_T_3604) : $signed(_T_3626); // @[Mux.scala 80:57]
  wire [31:0] _T_3630 = 9'h5c == io_aluc ? $signed(_T_3606) : $signed(_T_3628); // @[Mux.scala 80:57]
  wire [31:0] _T_3632 = 9'h24 == io_aluc ? $signed(_T_3610) : $signed(_T_3630); // @[Mux.scala 80:57]
  wire [31:0] _T_3634 = 9'h2c == io_aluc ? $signed(_T_3612) : $signed(_T_3632); // @[Mux.scala 80:57]
  wire [31:0] _T_3636 = 9'h34 == io_aluc ? $signed(_T_3616) : $signed(_T_3634); // @[Mux.scala 80:57]
  wire [31:0] _T_3638 = 9'h3c == io_aluc ? $signed(_T_3618) : $signed(_T_3636); // @[Mux.scala 80:57]
  wire [31:0] _T_3639 = _T_199 ? $signed(-32'sh1) : $signed(_T_3638); // @[Valu.scala 146:36]
  wire [31:0] _T_3640 = _T_193 ? $signed(sew_32_vd_0) : $signed(_T_3639); // @[Valu.scala 145:32]
  wire [31:0] _T_3647 = _T_187 ? $signed(_T_3640) : $signed(-32'sh1); // @[Valu.scala 144:11]
  wire [31:0] _T_3667 = $signed(sew_32_b_1) + $signed(io_in_A); // @[Valu.scala 150:37]
  wire [31:0] _T_3670 = $signed(sew_32_b_1) - $signed(io_in_A); // @[Valu.scala 151:37]
  wire [31:0] _T_3673 = $signed(io_in_A) - $signed(sew_32_b_1); // @[Valu.scala 152:33]
  wire [31:0] _T_3675 = $signed(sew_32_b_1) & $signed(io_in_A); // @[Valu.scala 153:36]
  wire [31:0] _T_3677 = $signed(sew_32_b_1) | $signed(io_in_A); // @[Valu.scala 154:35]
  wire [31:0] _T_3679 = $signed(sew_32_b_1) ^ $signed(io_in_A); // @[Valu.scala 155:36]
  wire [31:0] _T_3683 = io_in_A <= _T_392 ? $signed(io_in_A) : $signed(sew_32_b_1); // @[Valu.scala 156:31]
  wire [31:0] _T_3685 = $signed(io_in_A) <= $signed(sew_32_b_1) ? $signed(io_in_A) : $signed(sew_32_b_1); // @[Valu.scala 157:30]
  wire [31:0] _T_3689 = io_in_A >= _T_392 ? $signed(io_in_A) : $signed(sew_32_b_1); // @[Valu.scala 158:31]
  wire [31:0] _T_3691 = $signed(io_in_A) >= $signed(sew_32_b_1) ? $signed(io_in_A) : $signed(sew_32_b_1); // @[Valu.scala 159:30]
  wire [31:0] _T_3693 = 9'h4 == io_aluc ? $signed(_T_3667) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_3695 = 9'h14 == io_aluc ? $signed(_T_3670) : $signed(_T_3693); // @[Mux.scala 80:57]
  wire [31:0] _T_3697 = 9'h1c == io_aluc ? $signed(_T_3673) : $signed(_T_3695); // @[Mux.scala 80:57]
  wire [31:0] _T_3699 = 9'h4c == io_aluc ? $signed(_T_3675) : $signed(_T_3697); // @[Mux.scala 80:57]
  wire [31:0] _T_3701 = 9'h54 == io_aluc ? $signed(_T_3677) : $signed(_T_3699); // @[Mux.scala 80:57]
  wire [31:0] _T_3703 = 9'h5c == io_aluc ? $signed(_T_3679) : $signed(_T_3701); // @[Mux.scala 80:57]
  wire [31:0] _T_3705 = 9'h24 == io_aluc ? $signed(_T_3683) : $signed(_T_3703); // @[Mux.scala 80:57]
  wire [31:0] _T_3707 = 9'h2c == io_aluc ? $signed(_T_3685) : $signed(_T_3705); // @[Mux.scala 80:57]
  wire [31:0] _T_3709 = 9'h34 == io_aluc ? $signed(_T_3689) : $signed(_T_3707); // @[Mux.scala 80:57]
  wire [31:0] _T_3711 = 9'h3c == io_aluc ? $signed(_T_3691) : $signed(_T_3709); // @[Mux.scala 80:57]
  wire [31:0] _T_3712 = _T_257 ? $signed(-32'sh1) : $signed(_T_3711); // @[Valu.scala 146:36]
  wire [31:0] _T_3713 = _T_251 ? $signed(sew_32_vd_1) : $signed(_T_3712); // @[Valu.scala 145:32]
  wire [31:0] _T_3719 = _T_234 & 32'h1 > io_vl ? $signed(sew_32_vd_1) : $signed(-32'sh1); // @[Valu.scala 163:12]
  wire [31:0] _T_3720 = _T_245 ? $signed(_T_3713) : $signed(_T_3719); // @[Valu.scala 144:11]
  wire [31:0] _T_3740 = $signed(sew_32_b_2) + $signed(io_in_A); // @[Valu.scala 150:37]
  wire [31:0] _T_3743 = $signed(sew_32_b_2) - $signed(io_in_A); // @[Valu.scala 151:37]
  wire [31:0] _T_3746 = $signed(io_in_A) - $signed(sew_32_b_2); // @[Valu.scala 152:33]
  wire [31:0] _T_3748 = $signed(sew_32_b_2) & $signed(io_in_A); // @[Valu.scala 153:36]
  wire [31:0] _T_3750 = $signed(sew_32_b_2) | $signed(io_in_A); // @[Valu.scala 154:35]
  wire [31:0] _T_3752 = $signed(sew_32_b_2) ^ $signed(io_in_A); // @[Valu.scala 155:36]
  wire [31:0] _T_3756 = io_in_A <= _T_450 ? $signed(io_in_A) : $signed(sew_32_b_2); // @[Valu.scala 156:31]
  wire [31:0] _T_3758 = $signed(io_in_A) <= $signed(sew_32_b_2) ? $signed(io_in_A) : $signed(sew_32_b_2); // @[Valu.scala 157:30]
  wire [31:0] _T_3762 = io_in_A >= _T_450 ? $signed(io_in_A) : $signed(sew_32_b_2); // @[Valu.scala 158:31]
  wire [31:0] _T_3764 = $signed(io_in_A) >= $signed(sew_32_b_2) ? $signed(io_in_A) : $signed(sew_32_b_2); // @[Valu.scala 159:30]
  wire [31:0] _T_3766 = 9'h4 == io_aluc ? $signed(_T_3740) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_3768 = 9'h14 == io_aluc ? $signed(_T_3743) : $signed(_T_3766); // @[Mux.scala 80:57]
  wire [31:0] _T_3770 = 9'h1c == io_aluc ? $signed(_T_3746) : $signed(_T_3768); // @[Mux.scala 80:57]
  wire [31:0] _T_3772 = 9'h4c == io_aluc ? $signed(_T_3748) : $signed(_T_3770); // @[Mux.scala 80:57]
  wire [31:0] _T_3774 = 9'h54 == io_aluc ? $signed(_T_3750) : $signed(_T_3772); // @[Mux.scala 80:57]
  wire [31:0] _T_3776 = 9'h5c == io_aluc ? $signed(_T_3752) : $signed(_T_3774); // @[Mux.scala 80:57]
  wire [31:0] _T_3778 = 9'h24 == io_aluc ? $signed(_T_3756) : $signed(_T_3776); // @[Mux.scala 80:57]
  wire [31:0] _T_3780 = 9'h2c == io_aluc ? $signed(_T_3758) : $signed(_T_3778); // @[Mux.scala 80:57]
  wire [31:0] _T_3782 = 9'h34 == io_aluc ? $signed(_T_3762) : $signed(_T_3780); // @[Mux.scala 80:57]
  wire [31:0] _T_3784 = 9'h3c == io_aluc ? $signed(_T_3764) : $signed(_T_3782); // @[Mux.scala 80:57]
  wire [31:0] _T_3785 = _T_437 ? $signed(-32'sh1) : $signed(_T_3784); // @[Valu.scala 146:36]
  wire [31:0] _T_3786 = _T_431 ? $signed(sew_32_vd_2) : $signed(_T_3785); // @[Valu.scala 145:32]
  wire  _T_3789 = _T_234 & 32'h2 > io_vl; // @[Valu.scala 163:28]
  wire [31:0] _T_3792 = _T_234 & 32'h2 > io_vl ? $signed(sew_32_vd_2) : $signed(-32'sh1); // @[Valu.scala 163:12]
  wire [31:0] _T_3793 = _T_425 ? $signed(_T_3786) : $signed(_T_3792); // @[Valu.scala 144:11]
  wire [31:0] _T_3813 = $signed(sew_32_b_3) + $signed(io_in_A); // @[Valu.scala 150:37]
  wire [31:0] _T_3816 = $signed(sew_32_b_3) - $signed(io_in_A); // @[Valu.scala 151:37]
  wire [31:0] _T_3819 = $signed(io_in_A) - $signed(sew_32_b_3); // @[Valu.scala 152:33]
  wire [31:0] _T_3821 = $signed(sew_32_b_3) & $signed(io_in_A); // @[Valu.scala 153:36]
  wire [31:0] _T_3823 = $signed(sew_32_b_3) | $signed(io_in_A); // @[Valu.scala 154:35]
  wire [31:0] _T_3825 = $signed(sew_32_b_3) ^ $signed(io_in_A); // @[Valu.scala 155:36]
  wire [31:0] _T_3829 = io_in_A <= _T_508 ? $signed(io_in_A) : $signed(sew_32_b_3); // @[Valu.scala 156:31]
  wire [31:0] _T_3831 = $signed(io_in_A) <= $signed(sew_32_b_3) ? $signed(io_in_A) : $signed(sew_32_b_3); // @[Valu.scala 157:30]
  wire [31:0] _T_3835 = io_in_A >= _T_508 ? $signed(io_in_A) : $signed(sew_32_b_3); // @[Valu.scala 158:31]
  wire [31:0] _T_3837 = $signed(io_in_A) >= $signed(sew_32_b_3) ? $signed(io_in_A) : $signed(sew_32_b_3); // @[Valu.scala 159:30]
  wire [31:0] _T_3839 = 9'h4 == io_aluc ? $signed(_T_3813) : $signed(32'sh0); // @[Mux.scala 80:57]
  wire [31:0] _T_3841 = 9'h14 == io_aluc ? $signed(_T_3816) : $signed(_T_3839); // @[Mux.scala 80:57]
  wire [31:0] _T_3843 = 9'h1c == io_aluc ? $signed(_T_3819) : $signed(_T_3841); // @[Mux.scala 80:57]
  wire [31:0] _T_3845 = 9'h4c == io_aluc ? $signed(_T_3821) : $signed(_T_3843); // @[Mux.scala 80:57]
  wire [31:0] _T_3847 = 9'h54 == io_aluc ? $signed(_T_3823) : $signed(_T_3845); // @[Mux.scala 80:57]
  wire [31:0] _T_3849 = 9'h5c == io_aluc ? $signed(_T_3825) : $signed(_T_3847); // @[Mux.scala 80:57]
  wire [31:0] _T_3851 = 9'h24 == io_aluc ? $signed(_T_3829) : $signed(_T_3849); // @[Mux.scala 80:57]
  wire [31:0] _T_3853 = 9'h2c == io_aluc ? $signed(_T_3831) : $signed(_T_3851); // @[Mux.scala 80:57]
  wire [31:0] _T_3855 = 9'h34 == io_aluc ? $signed(_T_3835) : $signed(_T_3853); // @[Mux.scala 80:57]
  wire [31:0] _T_3857 = 9'h3c == io_aluc ? $signed(_T_3837) : $signed(_T_3855); // @[Mux.scala 80:57]
  wire [31:0] _T_3858 = _T_495 ? $signed(-32'sh1) : $signed(_T_3857); // @[Valu.scala 146:36]
  wire [31:0] _T_3859 = _T_489 ? $signed(sew_32_vd_3) : $signed(_T_3858); // @[Valu.scala 145:32]
  wire  _T_3862 = _T_234 & 32'h3 > io_vl; // @[Valu.scala 163:28]
  wire [31:0] _T_3865 = _T_234 & 32'h3 > io_vl ? $signed(sew_32_vd_3) : $signed(-32'sh1); // @[Valu.scala 163:12]
  wire [31:0] _T_3866 = _T_483 ? $signed(_T_3859) : $signed(_T_3865); // @[Valu.scala 144:11]
  wire [31:0] lo_lo_6 = _T_184 ? $signed(sew_32_vd_0) : $signed(_T_3647); // @[Cat.scala 30:58]
  wire [31:0] lo_hi_6 = _T_242 ? $signed(sew_32_vd_1) : $signed(_T_3720); // @[Cat.scala 30:58]
  wire [31:0] hi_lo_6 = _T_422 ? $signed(sew_32_vd_2) : $signed(_T_3793); // @[Cat.scala 30:58]
  wire [31:0] hi_hi_6 = _T_480 ? $signed(sew_32_vd_3) : $signed(_T_3866); // @[Cat.scala 30:58]
  wire [127:0] _T_3869 = {hi_hi_6,hi_lo_6,lo_hi_6,lo_lo_6}; // @[Valu.scala 166:24]
  wire [7:0] _T_3875 = io_in_A[7:0]; // @[Valu.scala 230:40]
  wire [7:0] _T_3894 = $signed(sew_8_b_0) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_3897 = $signed(sew_8_b_0) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_3900 = $signed(_T_3875) - $signed(sew_8_b_0); // @[Valu.scala 152:33]
  wire [7:0] _T_3902 = $signed(sew_8_b_0) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_3904 = $signed(sew_8_b_0) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_3906 = $signed(sew_8_b_0) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_3907 = io_in_A[7:0]; // @[Valu.scala 156:36]
  wire [7:0] _T_3910 = _T_3907 <= _T_1042 ? $signed(_T_3875) : $signed(sew_8_b_0); // @[Valu.scala 156:31]
  wire [7:0] _T_3912 = $signed(_T_3875) <= $signed(sew_8_b_0) ? $signed(_T_3875) : $signed(sew_8_b_0); // @[Valu.scala 157:30]
  wire [7:0] _T_3916 = _T_3907 >= _T_1042 ? $signed(_T_3875) : $signed(sew_8_b_0); // @[Valu.scala 158:31]
  wire [7:0] _T_3918 = $signed(_T_3875) >= $signed(sew_8_b_0) ? $signed(_T_3875) : $signed(sew_8_b_0); // @[Valu.scala 159:30]
  wire [7:0] _T_3920 = 9'h4 == io_aluc ? $signed(_T_3894) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_3922 = 9'h14 == io_aluc ? $signed(_T_3897) : $signed(_T_3920); // @[Mux.scala 80:57]
  wire [7:0] _T_3924 = 9'h1c == io_aluc ? $signed(_T_3900) : $signed(_T_3922); // @[Mux.scala 80:57]
  wire [7:0] _T_3926 = 9'h4c == io_aluc ? $signed(_T_3902) : $signed(_T_3924); // @[Mux.scala 80:57]
  wire [7:0] _T_3928 = 9'h54 == io_aluc ? $signed(_T_3904) : $signed(_T_3926); // @[Mux.scala 80:57]
  wire [7:0] _T_3930 = 9'h5c == io_aluc ? $signed(_T_3906) : $signed(_T_3928); // @[Mux.scala 80:57]
  wire [7:0] _T_3932 = 9'h24 == io_aluc ? $signed(_T_3910) : $signed(_T_3930); // @[Mux.scala 80:57]
  wire [7:0] _T_3934 = 9'h2c == io_aluc ? $signed(_T_3912) : $signed(_T_3932); // @[Mux.scala 80:57]
  wire [7:0] _T_3936 = 9'h34 == io_aluc ? $signed(_T_3916) : $signed(_T_3934); // @[Mux.scala 80:57]
  wire [7:0] _T_3938 = 9'h3c == io_aluc ? $signed(_T_3918) : $signed(_T_3936); // @[Mux.scala 80:57]
  wire [7:0] _T_3939 = _T_199 ? $signed(-8'sh1) : $signed(_T_3938); // @[Valu.scala 146:36]
  wire [7:0] _T_3940 = _T_193 ? $signed(sew_8_vd_0) : $signed(_T_3939); // @[Valu.scala 145:32]
  wire [7:0] _T_3947 = _T_187 ? $signed(_T_3940) : $signed(-8'sh1); // @[Valu.scala 144:11]
  wire [7:0] _T_3967 = $signed(sew_8_b_1) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_3970 = $signed(sew_8_b_1) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_3973 = $signed(_T_3875) - $signed(sew_8_b_1); // @[Valu.scala 152:33]
  wire [7:0] _T_3975 = $signed(sew_8_b_1) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_3977 = $signed(sew_8_b_1) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_3979 = $signed(sew_8_b_1) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_3983 = _T_3907 <= _T_1100 ? $signed(_T_3875) : $signed(sew_8_b_1); // @[Valu.scala 156:31]
  wire [7:0] _T_3985 = $signed(_T_3875) <= $signed(sew_8_b_1) ? $signed(_T_3875) : $signed(sew_8_b_1); // @[Valu.scala 157:30]
  wire [7:0] _T_3989 = _T_3907 >= _T_1100 ? $signed(_T_3875) : $signed(sew_8_b_1); // @[Valu.scala 158:31]
  wire [7:0] _T_3991 = $signed(_T_3875) >= $signed(sew_8_b_1) ? $signed(_T_3875) : $signed(sew_8_b_1); // @[Valu.scala 159:30]
  wire [7:0] _T_3993 = 9'h4 == io_aluc ? $signed(_T_3967) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_3995 = 9'h14 == io_aluc ? $signed(_T_3970) : $signed(_T_3993); // @[Mux.scala 80:57]
  wire [7:0] _T_3997 = 9'h1c == io_aluc ? $signed(_T_3973) : $signed(_T_3995); // @[Mux.scala 80:57]
  wire [7:0] _T_3999 = 9'h4c == io_aluc ? $signed(_T_3975) : $signed(_T_3997); // @[Mux.scala 80:57]
  wire [7:0] _T_4001 = 9'h54 == io_aluc ? $signed(_T_3977) : $signed(_T_3999); // @[Mux.scala 80:57]
  wire [7:0] _T_4003 = 9'h5c == io_aluc ? $signed(_T_3979) : $signed(_T_4001); // @[Mux.scala 80:57]
  wire [7:0] _T_4005 = 9'h24 == io_aluc ? $signed(_T_3983) : $signed(_T_4003); // @[Mux.scala 80:57]
  wire [7:0] _T_4007 = 9'h2c == io_aluc ? $signed(_T_3985) : $signed(_T_4005); // @[Mux.scala 80:57]
  wire [7:0] _T_4009 = 9'h34 == io_aluc ? $signed(_T_3989) : $signed(_T_4007); // @[Mux.scala 80:57]
  wire [7:0] _T_4011 = 9'h3c == io_aluc ? $signed(_T_3991) : $signed(_T_4009); // @[Mux.scala 80:57]
  wire [7:0] _T_4012 = _T_257 ? $signed(-8'sh1) : $signed(_T_4011); // @[Valu.scala 146:36]
  wire [7:0] _T_4013 = _T_251 ? $signed(sew_8_vd_1) : $signed(_T_4012); // @[Valu.scala 145:32]
  wire [7:0] _T_4019 = _T_234 & 32'h1 > io_vl ? $signed(sew_8_vd_1) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4020 = _T_245 ? $signed(_T_4013) : $signed(_T_4019); // @[Valu.scala 144:11]
  wire [7:0] _T_4040 = $signed(sew_8_b_2) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4043 = $signed(sew_8_b_2) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4046 = $signed(_T_3875) - $signed(sew_8_b_2); // @[Valu.scala 152:33]
  wire [7:0] _T_4048 = $signed(sew_8_b_2) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4050 = $signed(sew_8_b_2) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4052 = $signed(sew_8_b_2) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4056 = _T_3907 <= _T_1158 ? $signed(_T_3875) : $signed(sew_8_b_2); // @[Valu.scala 156:31]
  wire [7:0] _T_4058 = $signed(_T_3875) <= $signed(sew_8_b_2) ? $signed(_T_3875) : $signed(sew_8_b_2); // @[Valu.scala 157:30]
  wire [7:0] _T_4062 = _T_3907 >= _T_1158 ? $signed(_T_3875) : $signed(sew_8_b_2); // @[Valu.scala 158:31]
  wire [7:0] _T_4064 = $signed(_T_3875) >= $signed(sew_8_b_2) ? $signed(_T_3875) : $signed(sew_8_b_2); // @[Valu.scala 159:30]
  wire [7:0] _T_4066 = 9'h4 == io_aluc ? $signed(_T_4040) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4068 = 9'h14 == io_aluc ? $signed(_T_4043) : $signed(_T_4066); // @[Mux.scala 80:57]
  wire [7:0] _T_4070 = 9'h1c == io_aluc ? $signed(_T_4046) : $signed(_T_4068); // @[Mux.scala 80:57]
  wire [7:0] _T_4072 = 9'h4c == io_aluc ? $signed(_T_4048) : $signed(_T_4070); // @[Mux.scala 80:57]
  wire [7:0] _T_4074 = 9'h54 == io_aluc ? $signed(_T_4050) : $signed(_T_4072); // @[Mux.scala 80:57]
  wire [7:0] _T_4076 = 9'h5c == io_aluc ? $signed(_T_4052) : $signed(_T_4074); // @[Mux.scala 80:57]
  wire [7:0] _T_4078 = 9'h24 == io_aluc ? $signed(_T_4056) : $signed(_T_4076); // @[Mux.scala 80:57]
  wire [7:0] _T_4080 = 9'h2c == io_aluc ? $signed(_T_4058) : $signed(_T_4078); // @[Mux.scala 80:57]
  wire [7:0] _T_4082 = 9'h34 == io_aluc ? $signed(_T_4062) : $signed(_T_4080); // @[Mux.scala 80:57]
  wire [7:0] _T_4084 = 9'h3c == io_aluc ? $signed(_T_4064) : $signed(_T_4082); // @[Mux.scala 80:57]
  wire [7:0] _T_4085 = _T_437 ? $signed(-8'sh1) : $signed(_T_4084); // @[Valu.scala 146:36]
  wire [7:0] _T_4086 = _T_431 ? $signed(sew_8_vd_2) : $signed(_T_4085); // @[Valu.scala 145:32]
  wire [7:0] _T_4092 = _T_234 & 32'h2 > io_vl ? $signed(sew_8_vd_2) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4093 = _T_425 ? $signed(_T_4086) : $signed(_T_4092); // @[Valu.scala 144:11]
  wire [7:0] _T_4113 = $signed(sew_8_b_3) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4116 = $signed(sew_8_b_3) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4119 = $signed(_T_3875) - $signed(sew_8_b_3); // @[Valu.scala 152:33]
  wire [7:0] _T_4121 = $signed(sew_8_b_3) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4123 = $signed(sew_8_b_3) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4125 = $signed(sew_8_b_3) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4129 = _T_3907 <= _T_1216 ? $signed(_T_3875) : $signed(sew_8_b_3); // @[Valu.scala 156:31]
  wire [7:0] _T_4131 = $signed(_T_3875) <= $signed(sew_8_b_3) ? $signed(_T_3875) : $signed(sew_8_b_3); // @[Valu.scala 157:30]
  wire [7:0] _T_4135 = _T_3907 >= _T_1216 ? $signed(_T_3875) : $signed(sew_8_b_3); // @[Valu.scala 158:31]
  wire [7:0] _T_4137 = $signed(_T_3875) >= $signed(sew_8_b_3) ? $signed(_T_3875) : $signed(sew_8_b_3); // @[Valu.scala 159:30]
  wire [7:0] _T_4139 = 9'h4 == io_aluc ? $signed(_T_4113) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4141 = 9'h14 == io_aluc ? $signed(_T_4116) : $signed(_T_4139); // @[Mux.scala 80:57]
  wire [7:0] _T_4143 = 9'h1c == io_aluc ? $signed(_T_4119) : $signed(_T_4141); // @[Mux.scala 80:57]
  wire [7:0] _T_4145 = 9'h4c == io_aluc ? $signed(_T_4121) : $signed(_T_4143); // @[Mux.scala 80:57]
  wire [7:0] _T_4147 = 9'h54 == io_aluc ? $signed(_T_4123) : $signed(_T_4145); // @[Mux.scala 80:57]
  wire [7:0] _T_4149 = 9'h5c == io_aluc ? $signed(_T_4125) : $signed(_T_4147); // @[Mux.scala 80:57]
  wire [7:0] _T_4151 = 9'h24 == io_aluc ? $signed(_T_4129) : $signed(_T_4149); // @[Mux.scala 80:57]
  wire [7:0] _T_4153 = 9'h2c == io_aluc ? $signed(_T_4131) : $signed(_T_4151); // @[Mux.scala 80:57]
  wire [7:0] _T_4155 = 9'h34 == io_aluc ? $signed(_T_4135) : $signed(_T_4153); // @[Mux.scala 80:57]
  wire [7:0] _T_4157 = 9'h3c == io_aluc ? $signed(_T_4137) : $signed(_T_4155); // @[Mux.scala 80:57]
  wire [7:0] _T_4158 = _T_495 ? $signed(-8'sh1) : $signed(_T_4157); // @[Valu.scala 146:36]
  wire [7:0] _T_4159 = _T_489 ? $signed(sew_8_vd_3) : $signed(_T_4158); // @[Valu.scala 145:32]
  wire [7:0] _T_4165 = _T_234 & 32'h3 > io_vl ? $signed(sew_8_vd_3) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4166 = _T_483 ? $signed(_T_4159) : $signed(_T_4165); // @[Valu.scala 144:11]
  wire [7:0] _T_4186 = $signed(sew_8_b_4) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4189 = $signed(sew_8_b_4) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4192 = $signed(_T_3875) - $signed(sew_8_b_4); // @[Valu.scala 152:33]
  wire [7:0] _T_4194 = $signed(sew_8_b_4) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4196 = $signed(sew_8_b_4) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4198 = $signed(sew_8_b_4) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4202 = _T_3907 <= _T_1274 ? $signed(_T_3875) : $signed(sew_8_b_4); // @[Valu.scala 156:31]
  wire [7:0] _T_4204 = $signed(_T_3875) <= $signed(sew_8_b_4) ? $signed(_T_3875) : $signed(sew_8_b_4); // @[Valu.scala 157:30]
  wire [7:0] _T_4208 = _T_3907 >= _T_1274 ? $signed(_T_3875) : $signed(sew_8_b_4); // @[Valu.scala 158:31]
  wire [7:0] _T_4210 = $signed(_T_3875) >= $signed(sew_8_b_4) ? $signed(_T_3875) : $signed(sew_8_b_4); // @[Valu.scala 159:30]
  wire [7:0] _T_4212 = 9'h4 == io_aluc ? $signed(_T_4186) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4214 = 9'h14 == io_aluc ? $signed(_T_4189) : $signed(_T_4212); // @[Mux.scala 80:57]
  wire [7:0] _T_4216 = 9'h1c == io_aluc ? $signed(_T_4192) : $signed(_T_4214); // @[Mux.scala 80:57]
  wire [7:0] _T_4218 = 9'h4c == io_aluc ? $signed(_T_4194) : $signed(_T_4216); // @[Mux.scala 80:57]
  wire [7:0] _T_4220 = 9'h54 == io_aluc ? $signed(_T_4196) : $signed(_T_4218); // @[Mux.scala 80:57]
  wire [7:0] _T_4222 = 9'h5c == io_aluc ? $signed(_T_4198) : $signed(_T_4220); // @[Mux.scala 80:57]
  wire [7:0] _T_4224 = 9'h24 == io_aluc ? $signed(_T_4202) : $signed(_T_4222); // @[Mux.scala 80:57]
  wire [7:0] _T_4226 = 9'h2c == io_aluc ? $signed(_T_4204) : $signed(_T_4224); // @[Mux.scala 80:57]
  wire [7:0] _T_4228 = 9'h34 == io_aluc ? $signed(_T_4208) : $signed(_T_4226); // @[Mux.scala 80:57]
  wire [7:0] _T_4230 = 9'h3c == io_aluc ? $signed(_T_4210) : $signed(_T_4228); // @[Mux.scala 80:57]
  wire [7:0] _T_4231 = _T_791 ? $signed(-8'sh1) : $signed(_T_4230); // @[Valu.scala 146:36]
  wire [7:0] _T_4232 = _T_785 ? $signed(sew_8_vd_4) : $signed(_T_4231); // @[Valu.scala 145:32]
  wire  _T_4235 = _T_234 & 32'h4 > io_vl; // @[Valu.scala 163:28]
  wire [7:0] _T_4238 = _T_234 & 32'h4 > io_vl ? $signed(sew_8_vd_4) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4239 = _T_779 ? $signed(_T_4232) : $signed(_T_4238); // @[Valu.scala 144:11]
  wire [7:0] _T_4259 = $signed(sew_8_b_5) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4262 = $signed(sew_8_b_5) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4265 = $signed(_T_3875) - $signed(sew_8_b_5); // @[Valu.scala 152:33]
  wire [7:0] _T_4267 = $signed(sew_8_b_5) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4269 = $signed(sew_8_b_5) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4271 = $signed(sew_8_b_5) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4275 = _T_3907 <= _T_1332 ? $signed(_T_3875) : $signed(sew_8_b_5); // @[Valu.scala 156:31]
  wire [7:0] _T_4277 = $signed(_T_3875) <= $signed(sew_8_b_5) ? $signed(_T_3875) : $signed(sew_8_b_5); // @[Valu.scala 157:30]
  wire [7:0] _T_4281 = _T_3907 >= _T_1332 ? $signed(_T_3875) : $signed(sew_8_b_5); // @[Valu.scala 158:31]
  wire [7:0] _T_4283 = $signed(_T_3875) >= $signed(sew_8_b_5) ? $signed(_T_3875) : $signed(sew_8_b_5); // @[Valu.scala 159:30]
  wire [7:0] _T_4285 = 9'h4 == io_aluc ? $signed(_T_4259) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4287 = 9'h14 == io_aluc ? $signed(_T_4262) : $signed(_T_4285); // @[Mux.scala 80:57]
  wire [7:0] _T_4289 = 9'h1c == io_aluc ? $signed(_T_4265) : $signed(_T_4287); // @[Mux.scala 80:57]
  wire [7:0] _T_4291 = 9'h4c == io_aluc ? $signed(_T_4267) : $signed(_T_4289); // @[Mux.scala 80:57]
  wire [7:0] _T_4293 = 9'h54 == io_aluc ? $signed(_T_4269) : $signed(_T_4291); // @[Mux.scala 80:57]
  wire [7:0] _T_4295 = 9'h5c == io_aluc ? $signed(_T_4271) : $signed(_T_4293); // @[Mux.scala 80:57]
  wire [7:0] _T_4297 = 9'h24 == io_aluc ? $signed(_T_4275) : $signed(_T_4295); // @[Mux.scala 80:57]
  wire [7:0] _T_4299 = 9'h2c == io_aluc ? $signed(_T_4277) : $signed(_T_4297); // @[Mux.scala 80:57]
  wire [7:0] _T_4301 = 9'h34 == io_aluc ? $signed(_T_4281) : $signed(_T_4299); // @[Mux.scala 80:57]
  wire [7:0] _T_4303 = 9'h3c == io_aluc ? $signed(_T_4283) : $signed(_T_4301); // @[Mux.scala 80:57]
  wire [7:0] _T_4304 = _T_849 ? $signed(-8'sh1) : $signed(_T_4303); // @[Valu.scala 146:36]
  wire [7:0] _T_4305 = _T_843 ? $signed(sew_8_vd_5) : $signed(_T_4304); // @[Valu.scala 145:32]
  wire  _T_4308 = _T_234 & 32'h5 > io_vl; // @[Valu.scala 163:28]
  wire [7:0] _T_4311 = _T_234 & 32'h5 > io_vl ? $signed(sew_8_vd_5) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4312 = _T_837 ? $signed(_T_4305) : $signed(_T_4311); // @[Valu.scala 144:11]
  wire [7:0] _T_4332 = $signed(sew_8_b_6) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4335 = $signed(sew_8_b_6) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4338 = $signed(_T_3875) - $signed(sew_8_b_6); // @[Valu.scala 152:33]
  wire [7:0] _T_4340 = $signed(sew_8_b_6) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4342 = $signed(sew_8_b_6) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4344 = $signed(sew_8_b_6) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4348 = _T_3907 <= _T_1390 ? $signed(_T_3875) : $signed(sew_8_b_6); // @[Valu.scala 156:31]
  wire [7:0] _T_4350 = $signed(_T_3875) <= $signed(sew_8_b_6) ? $signed(_T_3875) : $signed(sew_8_b_6); // @[Valu.scala 157:30]
  wire [7:0] _T_4354 = _T_3907 >= _T_1390 ? $signed(_T_3875) : $signed(sew_8_b_6); // @[Valu.scala 158:31]
  wire [7:0] _T_4356 = $signed(_T_3875) >= $signed(sew_8_b_6) ? $signed(_T_3875) : $signed(sew_8_b_6); // @[Valu.scala 159:30]
  wire [7:0] _T_4358 = 9'h4 == io_aluc ? $signed(_T_4332) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4360 = 9'h14 == io_aluc ? $signed(_T_4335) : $signed(_T_4358); // @[Mux.scala 80:57]
  wire [7:0] _T_4362 = 9'h1c == io_aluc ? $signed(_T_4338) : $signed(_T_4360); // @[Mux.scala 80:57]
  wire [7:0] _T_4364 = 9'h4c == io_aluc ? $signed(_T_4340) : $signed(_T_4362); // @[Mux.scala 80:57]
  wire [7:0] _T_4366 = 9'h54 == io_aluc ? $signed(_T_4342) : $signed(_T_4364); // @[Mux.scala 80:57]
  wire [7:0] _T_4368 = 9'h5c == io_aluc ? $signed(_T_4344) : $signed(_T_4366); // @[Mux.scala 80:57]
  wire [7:0] _T_4370 = 9'h24 == io_aluc ? $signed(_T_4348) : $signed(_T_4368); // @[Mux.scala 80:57]
  wire [7:0] _T_4372 = 9'h2c == io_aluc ? $signed(_T_4350) : $signed(_T_4370); // @[Mux.scala 80:57]
  wire [7:0] _T_4374 = 9'h34 == io_aluc ? $signed(_T_4354) : $signed(_T_4372); // @[Mux.scala 80:57]
  wire [7:0] _T_4376 = 9'h3c == io_aluc ? $signed(_T_4356) : $signed(_T_4374); // @[Mux.scala 80:57]
  wire [7:0] _T_4377 = _T_907 ? $signed(-8'sh1) : $signed(_T_4376); // @[Valu.scala 146:36]
  wire [7:0] _T_4378 = _T_901 ? $signed(sew_8_vd_6) : $signed(_T_4377); // @[Valu.scala 145:32]
  wire  _T_4381 = _T_234 & 32'h6 > io_vl; // @[Valu.scala 163:28]
  wire [7:0] _T_4384 = _T_234 & 32'h6 > io_vl ? $signed(sew_8_vd_6) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4385 = _T_895 ? $signed(_T_4378) : $signed(_T_4384); // @[Valu.scala 144:11]
  wire [7:0] _T_4405 = $signed(sew_8_b_7) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4408 = $signed(sew_8_b_7) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4411 = $signed(_T_3875) - $signed(sew_8_b_7); // @[Valu.scala 152:33]
  wire [7:0] _T_4413 = $signed(sew_8_b_7) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4415 = $signed(sew_8_b_7) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4417 = $signed(sew_8_b_7) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4421 = _T_3907 <= _T_1448 ? $signed(_T_3875) : $signed(sew_8_b_7); // @[Valu.scala 156:31]
  wire [7:0] _T_4423 = $signed(_T_3875) <= $signed(sew_8_b_7) ? $signed(_T_3875) : $signed(sew_8_b_7); // @[Valu.scala 157:30]
  wire [7:0] _T_4427 = _T_3907 >= _T_1448 ? $signed(_T_3875) : $signed(sew_8_b_7); // @[Valu.scala 158:31]
  wire [7:0] _T_4429 = $signed(_T_3875) >= $signed(sew_8_b_7) ? $signed(_T_3875) : $signed(sew_8_b_7); // @[Valu.scala 159:30]
  wire [7:0] _T_4431 = 9'h4 == io_aluc ? $signed(_T_4405) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4433 = 9'h14 == io_aluc ? $signed(_T_4408) : $signed(_T_4431); // @[Mux.scala 80:57]
  wire [7:0] _T_4435 = 9'h1c == io_aluc ? $signed(_T_4411) : $signed(_T_4433); // @[Mux.scala 80:57]
  wire [7:0] _T_4437 = 9'h4c == io_aluc ? $signed(_T_4413) : $signed(_T_4435); // @[Mux.scala 80:57]
  wire [7:0] _T_4439 = 9'h54 == io_aluc ? $signed(_T_4415) : $signed(_T_4437); // @[Mux.scala 80:57]
  wire [7:0] _T_4441 = 9'h5c == io_aluc ? $signed(_T_4417) : $signed(_T_4439); // @[Mux.scala 80:57]
  wire [7:0] _T_4443 = 9'h24 == io_aluc ? $signed(_T_4421) : $signed(_T_4441); // @[Mux.scala 80:57]
  wire [7:0] _T_4445 = 9'h2c == io_aluc ? $signed(_T_4423) : $signed(_T_4443); // @[Mux.scala 80:57]
  wire [7:0] _T_4447 = 9'h34 == io_aluc ? $signed(_T_4427) : $signed(_T_4445); // @[Mux.scala 80:57]
  wire [7:0] _T_4449 = 9'h3c == io_aluc ? $signed(_T_4429) : $signed(_T_4447); // @[Mux.scala 80:57]
  wire [7:0] _T_4450 = _T_965 ? $signed(-8'sh1) : $signed(_T_4449); // @[Valu.scala 146:36]
  wire [7:0] _T_4451 = _T_959 ? $signed(sew_8_vd_7) : $signed(_T_4450); // @[Valu.scala 145:32]
  wire  _T_4454 = _T_234 & 32'h7 > io_vl; // @[Valu.scala 163:28]
  wire [7:0] _T_4457 = _T_234 & 32'h7 > io_vl ? $signed(sew_8_vd_7) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4458 = _T_953 ? $signed(_T_4451) : $signed(_T_4457); // @[Valu.scala 144:11]
  wire [7:0] _T_4478 = $signed(sew_8_b_8) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4481 = $signed(sew_8_b_8) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4484 = $signed(_T_3875) - $signed(sew_8_b_8); // @[Valu.scala 152:33]
  wire [7:0] _T_4486 = $signed(sew_8_b_8) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4488 = $signed(sew_8_b_8) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4490 = $signed(sew_8_b_8) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4494 = _T_3907 <= _T_1506 ? $signed(_T_3875) : $signed(sew_8_b_8); // @[Valu.scala 156:31]
  wire [7:0] _T_4496 = $signed(_T_3875) <= $signed(sew_8_b_8) ? $signed(_T_3875) : $signed(sew_8_b_8); // @[Valu.scala 157:30]
  wire [7:0] _T_4500 = _T_3907 >= _T_1506 ? $signed(_T_3875) : $signed(sew_8_b_8); // @[Valu.scala 158:31]
  wire [7:0] _T_4502 = $signed(_T_3875) >= $signed(sew_8_b_8) ? $signed(_T_3875) : $signed(sew_8_b_8); // @[Valu.scala 159:30]
  wire [7:0] _T_4504 = 9'h4 == io_aluc ? $signed(_T_4478) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4506 = 9'h14 == io_aluc ? $signed(_T_4481) : $signed(_T_4504); // @[Mux.scala 80:57]
  wire [7:0] _T_4508 = 9'h1c == io_aluc ? $signed(_T_4484) : $signed(_T_4506); // @[Mux.scala 80:57]
  wire [7:0] _T_4510 = 9'h4c == io_aluc ? $signed(_T_4486) : $signed(_T_4508); // @[Mux.scala 80:57]
  wire [7:0] _T_4512 = 9'h54 == io_aluc ? $signed(_T_4488) : $signed(_T_4510); // @[Mux.scala 80:57]
  wire [7:0] _T_4514 = 9'h5c == io_aluc ? $signed(_T_4490) : $signed(_T_4512); // @[Mux.scala 80:57]
  wire [7:0] _T_4516 = 9'h24 == io_aluc ? $signed(_T_4494) : $signed(_T_4514); // @[Mux.scala 80:57]
  wire [7:0] _T_4518 = 9'h2c == io_aluc ? $signed(_T_4496) : $signed(_T_4516); // @[Mux.scala 80:57]
  wire [7:0] _T_4520 = 9'h34 == io_aluc ? $signed(_T_4500) : $signed(_T_4518); // @[Mux.scala 80:57]
  wire [7:0] _T_4522 = 9'h3c == io_aluc ? $signed(_T_4502) : $signed(_T_4520); // @[Mux.scala 80:57]
  wire [7:0] _T_4523 = _T_1493 ? $signed(-8'sh1) : $signed(_T_4522); // @[Valu.scala 146:36]
  wire [7:0] _T_4524 = _T_1487 ? $signed(sew_8_vd_8) : $signed(_T_4523); // @[Valu.scala 145:32]
  wire  _T_4527 = _T_234 & 32'h8 > io_vl; // @[Valu.scala 163:28]
  wire [7:0] _T_4530 = _T_234 & 32'h8 > io_vl ? $signed(sew_8_vd_8) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4531 = _T_1481 ? $signed(_T_4524) : $signed(_T_4530); // @[Valu.scala 144:11]
  wire [7:0] _T_4551 = $signed(sew_8_b_9) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4554 = $signed(sew_8_b_9) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4557 = $signed(_T_3875) - $signed(sew_8_b_9); // @[Valu.scala 152:33]
  wire [7:0] _T_4559 = $signed(sew_8_b_9) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4561 = $signed(sew_8_b_9) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4563 = $signed(sew_8_b_9) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4567 = _T_3907 <= _T_1564 ? $signed(_T_3875) : $signed(sew_8_b_9); // @[Valu.scala 156:31]
  wire [7:0] _T_4569 = $signed(_T_3875) <= $signed(sew_8_b_9) ? $signed(_T_3875) : $signed(sew_8_b_9); // @[Valu.scala 157:30]
  wire [7:0] _T_4573 = _T_3907 >= _T_1564 ? $signed(_T_3875) : $signed(sew_8_b_9); // @[Valu.scala 158:31]
  wire [7:0] _T_4575 = $signed(_T_3875) >= $signed(sew_8_b_9) ? $signed(_T_3875) : $signed(sew_8_b_9); // @[Valu.scala 159:30]
  wire [7:0] _T_4577 = 9'h4 == io_aluc ? $signed(_T_4551) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4579 = 9'h14 == io_aluc ? $signed(_T_4554) : $signed(_T_4577); // @[Mux.scala 80:57]
  wire [7:0] _T_4581 = 9'h1c == io_aluc ? $signed(_T_4557) : $signed(_T_4579); // @[Mux.scala 80:57]
  wire [7:0] _T_4583 = 9'h4c == io_aluc ? $signed(_T_4559) : $signed(_T_4581); // @[Mux.scala 80:57]
  wire [7:0] _T_4585 = 9'h54 == io_aluc ? $signed(_T_4561) : $signed(_T_4583); // @[Mux.scala 80:57]
  wire [7:0] _T_4587 = 9'h5c == io_aluc ? $signed(_T_4563) : $signed(_T_4585); // @[Mux.scala 80:57]
  wire [7:0] _T_4589 = 9'h24 == io_aluc ? $signed(_T_4567) : $signed(_T_4587); // @[Mux.scala 80:57]
  wire [7:0] _T_4591 = 9'h2c == io_aluc ? $signed(_T_4569) : $signed(_T_4589); // @[Mux.scala 80:57]
  wire [7:0] _T_4593 = 9'h34 == io_aluc ? $signed(_T_4573) : $signed(_T_4591); // @[Mux.scala 80:57]
  wire [7:0] _T_4595 = 9'h3c == io_aluc ? $signed(_T_4575) : $signed(_T_4593); // @[Mux.scala 80:57]
  wire [7:0] _T_4596 = _T_1551 ? $signed(-8'sh1) : $signed(_T_4595); // @[Valu.scala 146:36]
  wire [7:0] _T_4597 = _T_1545 ? $signed(sew_8_vd_9) : $signed(_T_4596); // @[Valu.scala 145:32]
  wire  _T_4600 = _T_234 & 32'h9 > io_vl; // @[Valu.scala 163:28]
  wire [7:0] _T_4603 = _T_234 & 32'h9 > io_vl ? $signed(sew_8_vd_9) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4604 = _T_1539 ? $signed(_T_4597) : $signed(_T_4603); // @[Valu.scala 144:11]
  wire [7:0] _T_4624 = $signed(sew_8_b_10) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4627 = $signed(sew_8_b_10) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4630 = $signed(_T_3875) - $signed(sew_8_b_10); // @[Valu.scala 152:33]
  wire [7:0] _T_4632 = $signed(sew_8_b_10) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4634 = $signed(sew_8_b_10) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4636 = $signed(sew_8_b_10) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4640 = _T_3907 <= _T_1622 ? $signed(_T_3875) : $signed(sew_8_b_10); // @[Valu.scala 156:31]
  wire [7:0] _T_4642 = $signed(_T_3875) <= $signed(sew_8_b_10) ? $signed(_T_3875) : $signed(sew_8_b_10); // @[Valu.scala 157:30]
  wire [7:0] _T_4646 = _T_3907 >= _T_1622 ? $signed(_T_3875) : $signed(sew_8_b_10); // @[Valu.scala 158:31]
  wire [7:0] _T_4648 = $signed(_T_3875) >= $signed(sew_8_b_10) ? $signed(_T_3875) : $signed(sew_8_b_10); // @[Valu.scala 159:30]
  wire [7:0] _T_4650 = 9'h4 == io_aluc ? $signed(_T_4624) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4652 = 9'h14 == io_aluc ? $signed(_T_4627) : $signed(_T_4650); // @[Mux.scala 80:57]
  wire [7:0] _T_4654 = 9'h1c == io_aluc ? $signed(_T_4630) : $signed(_T_4652); // @[Mux.scala 80:57]
  wire [7:0] _T_4656 = 9'h4c == io_aluc ? $signed(_T_4632) : $signed(_T_4654); // @[Mux.scala 80:57]
  wire [7:0] _T_4658 = 9'h54 == io_aluc ? $signed(_T_4634) : $signed(_T_4656); // @[Mux.scala 80:57]
  wire [7:0] _T_4660 = 9'h5c == io_aluc ? $signed(_T_4636) : $signed(_T_4658); // @[Mux.scala 80:57]
  wire [7:0] _T_4662 = 9'h24 == io_aluc ? $signed(_T_4640) : $signed(_T_4660); // @[Mux.scala 80:57]
  wire [7:0] _T_4664 = 9'h2c == io_aluc ? $signed(_T_4642) : $signed(_T_4662); // @[Mux.scala 80:57]
  wire [7:0] _T_4666 = 9'h34 == io_aluc ? $signed(_T_4646) : $signed(_T_4664); // @[Mux.scala 80:57]
  wire [7:0] _T_4668 = 9'h3c == io_aluc ? $signed(_T_4648) : $signed(_T_4666); // @[Mux.scala 80:57]
  wire [7:0] _T_4669 = _T_1609 ? $signed(-8'sh1) : $signed(_T_4668); // @[Valu.scala 146:36]
  wire [7:0] _T_4670 = _T_1603 ? $signed(sew_8_vd_10) : $signed(_T_4669); // @[Valu.scala 145:32]
  wire  _T_4673 = _T_234 & 32'ha > io_vl; // @[Valu.scala 163:28]
  wire [7:0] _T_4676 = _T_234 & 32'ha > io_vl ? $signed(sew_8_vd_10) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4677 = _T_1597 ? $signed(_T_4670) : $signed(_T_4676); // @[Valu.scala 144:11]
  wire [7:0] _T_4697 = $signed(sew_8_b_11) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4700 = $signed(sew_8_b_11) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4703 = $signed(_T_3875) - $signed(sew_8_b_11); // @[Valu.scala 152:33]
  wire [7:0] _T_4705 = $signed(sew_8_b_11) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4707 = $signed(sew_8_b_11) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4709 = $signed(sew_8_b_11) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4713 = _T_3907 <= _T_1680 ? $signed(_T_3875) : $signed(sew_8_b_11); // @[Valu.scala 156:31]
  wire [7:0] _T_4715 = $signed(_T_3875) <= $signed(sew_8_b_11) ? $signed(_T_3875) : $signed(sew_8_b_11); // @[Valu.scala 157:30]
  wire [7:0] _T_4719 = _T_3907 >= _T_1680 ? $signed(_T_3875) : $signed(sew_8_b_11); // @[Valu.scala 158:31]
  wire [7:0] _T_4721 = $signed(_T_3875) >= $signed(sew_8_b_11) ? $signed(_T_3875) : $signed(sew_8_b_11); // @[Valu.scala 159:30]
  wire [7:0] _T_4723 = 9'h4 == io_aluc ? $signed(_T_4697) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4725 = 9'h14 == io_aluc ? $signed(_T_4700) : $signed(_T_4723); // @[Mux.scala 80:57]
  wire [7:0] _T_4727 = 9'h1c == io_aluc ? $signed(_T_4703) : $signed(_T_4725); // @[Mux.scala 80:57]
  wire [7:0] _T_4729 = 9'h4c == io_aluc ? $signed(_T_4705) : $signed(_T_4727); // @[Mux.scala 80:57]
  wire [7:0] _T_4731 = 9'h54 == io_aluc ? $signed(_T_4707) : $signed(_T_4729); // @[Mux.scala 80:57]
  wire [7:0] _T_4733 = 9'h5c == io_aluc ? $signed(_T_4709) : $signed(_T_4731); // @[Mux.scala 80:57]
  wire [7:0] _T_4735 = 9'h24 == io_aluc ? $signed(_T_4713) : $signed(_T_4733); // @[Mux.scala 80:57]
  wire [7:0] _T_4737 = 9'h2c == io_aluc ? $signed(_T_4715) : $signed(_T_4735); // @[Mux.scala 80:57]
  wire [7:0] _T_4739 = 9'h34 == io_aluc ? $signed(_T_4719) : $signed(_T_4737); // @[Mux.scala 80:57]
  wire [7:0] _T_4741 = 9'h3c == io_aluc ? $signed(_T_4721) : $signed(_T_4739); // @[Mux.scala 80:57]
  wire [7:0] _T_4742 = _T_1667 ? $signed(-8'sh1) : $signed(_T_4741); // @[Valu.scala 146:36]
  wire [7:0] _T_4743 = _T_1661 ? $signed(sew_8_vd_11) : $signed(_T_4742); // @[Valu.scala 145:32]
  wire  _T_4746 = _T_234 & 32'hb > io_vl; // @[Valu.scala 163:28]
  wire [7:0] _T_4749 = _T_234 & 32'hb > io_vl ? $signed(sew_8_vd_11) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4750 = _T_1655 ? $signed(_T_4743) : $signed(_T_4749); // @[Valu.scala 144:11]
  wire [7:0] _T_4770 = $signed(sew_8_b_12) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4773 = $signed(sew_8_b_12) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4776 = $signed(_T_3875) - $signed(sew_8_b_12); // @[Valu.scala 152:33]
  wire [7:0] _T_4778 = $signed(sew_8_b_12) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4780 = $signed(sew_8_b_12) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4782 = $signed(sew_8_b_12) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4786 = _T_3907 <= _T_1738 ? $signed(_T_3875) : $signed(sew_8_b_12); // @[Valu.scala 156:31]
  wire [7:0] _T_4788 = $signed(_T_3875) <= $signed(sew_8_b_12) ? $signed(_T_3875) : $signed(sew_8_b_12); // @[Valu.scala 157:30]
  wire [7:0] _T_4792 = _T_3907 >= _T_1738 ? $signed(_T_3875) : $signed(sew_8_b_12); // @[Valu.scala 158:31]
  wire [7:0] _T_4794 = $signed(_T_3875) >= $signed(sew_8_b_12) ? $signed(_T_3875) : $signed(sew_8_b_12); // @[Valu.scala 159:30]
  wire [7:0] _T_4796 = 9'h4 == io_aluc ? $signed(_T_4770) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4798 = 9'h14 == io_aluc ? $signed(_T_4773) : $signed(_T_4796); // @[Mux.scala 80:57]
  wire [7:0] _T_4800 = 9'h1c == io_aluc ? $signed(_T_4776) : $signed(_T_4798); // @[Mux.scala 80:57]
  wire [7:0] _T_4802 = 9'h4c == io_aluc ? $signed(_T_4778) : $signed(_T_4800); // @[Mux.scala 80:57]
  wire [7:0] _T_4804 = 9'h54 == io_aluc ? $signed(_T_4780) : $signed(_T_4802); // @[Mux.scala 80:57]
  wire [7:0] _T_4806 = 9'h5c == io_aluc ? $signed(_T_4782) : $signed(_T_4804); // @[Mux.scala 80:57]
  wire [7:0] _T_4808 = 9'h24 == io_aluc ? $signed(_T_4786) : $signed(_T_4806); // @[Mux.scala 80:57]
  wire [7:0] _T_4810 = 9'h2c == io_aluc ? $signed(_T_4788) : $signed(_T_4808); // @[Mux.scala 80:57]
  wire [7:0] _T_4812 = 9'h34 == io_aluc ? $signed(_T_4792) : $signed(_T_4810); // @[Mux.scala 80:57]
  wire [7:0] _T_4814 = 9'h3c == io_aluc ? $signed(_T_4794) : $signed(_T_4812); // @[Mux.scala 80:57]
  wire [7:0] _T_4815 = _T_1725 ? $signed(-8'sh1) : $signed(_T_4814); // @[Valu.scala 146:36]
  wire [7:0] _T_4816 = _T_1719 ? $signed(sew_8_vd_12) : $signed(_T_4815); // @[Valu.scala 145:32]
  wire  _T_4819 = _T_234 & 32'hc > io_vl; // @[Valu.scala 163:28]
  wire [7:0] _T_4822 = _T_234 & 32'hc > io_vl ? $signed(sew_8_vd_12) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4823 = _T_1713 ? $signed(_T_4816) : $signed(_T_4822); // @[Valu.scala 144:11]
  wire [7:0] _T_4843 = $signed(sew_8_b_13) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4846 = $signed(sew_8_b_13) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4849 = $signed(_T_3875) - $signed(sew_8_b_13); // @[Valu.scala 152:33]
  wire [7:0] _T_4851 = $signed(sew_8_b_13) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4853 = $signed(sew_8_b_13) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4855 = $signed(sew_8_b_13) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4859 = _T_3907 <= _T_1796 ? $signed(_T_3875) : $signed(sew_8_b_13); // @[Valu.scala 156:31]
  wire [7:0] _T_4861 = $signed(_T_3875) <= $signed(sew_8_b_13) ? $signed(_T_3875) : $signed(sew_8_b_13); // @[Valu.scala 157:30]
  wire [7:0] _T_4865 = _T_3907 >= _T_1796 ? $signed(_T_3875) : $signed(sew_8_b_13); // @[Valu.scala 158:31]
  wire [7:0] _T_4867 = $signed(_T_3875) >= $signed(sew_8_b_13) ? $signed(_T_3875) : $signed(sew_8_b_13); // @[Valu.scala 159:30]
  wire [7:0] _T_4869 = 9'h4 == io_aluc ? $signed(_T_4843) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4871 = 9'h14 == io_aluc ? $signed(_T_4846) : $signed(_T_4869); // @[Mux.scala 80:57]
  wire [7:0] _T_4873 = 9'h1c == io_aluc ? $signed(_T_4849) : $signed(_T_4871); // @[Mux.scala 80:57]
  wire [7:0] _T_4875 = 9'h4c == io_aluc ? $signed(_T_4851) : $signed(_T_4873); // @[Mux.scala 80:57]
  wire [7:0] _T_4877 = 9'h54 == io_aluc ? $signed(_T_4853) : $signed(_T_4875); // @[Mux.scala 80:57]
  wire [7:0] _T_4879 = 9'h5c == io_aluc ? $signed(_T_4855) : $signed(_T_4877); // @[Mux.scala 80:57]
  wire [7:0] _T_4881 = 9'h24 == io_aluc ? $signed(_T_4859) : $signed(_T_4879); // @[Mux.scala 80:57]
  wire [7:0] _T_4883 = 9'h2c == io_aluc ? $signed(_T_4861) : $signed(_T_4881); // @[Mux.scala 80:57]
  wire [7:0] _T_4885 = 9'h34 == io_aluc ? $signed(_T_4865) : $signed(_T_4883); // @[Mux.scala 80:57]
  wire [7:0] _T_4887 = 9'h3c == io_aluc ? $signed(_T_4867) : $signed(_T_4885); // @[Mux.scala 80:57]
  wire [7:0] _T_4888 = _T_1783 ? $signed(-8'sh1) : $signed(_T_4887); // @[Valu.scala 146:36]
  wire [7:0] _T_4889 = _T_1777 ? $signed(sew_8_vd_13) : $signed(_T_4888); // @[Valu.scala 145:32]
  wire  _T_4892 = _T_234 & 32'hd > io_vl; // @[Valu.scala 163:28]
  wire [7:0] _T_4895 = _T_234 & 32'hd > io_vl ? $signed(sew_8_vd_13) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4896 = _T_1771 ? $signed(_T_4889) : $signed(_T_4895); // @[Valu.scala 144:11]
  wire [7:0] _T_4916 = $signed(sew_8_b_14) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4919 = $signed(sew_8_b_14) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4922 = $signed(_T_3875) - $signed(sew_8_b_14); // @[Valu.scala 152:33]
  wire [7:0] _T_4924 = $signed(sew_8_b_14) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4926 = $signed(sew_8_b_14) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_4928 = $signed(sew_8_b_14) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_4932 = _T_3907 <= _T_1854 ? $signed(_T_3875) : $signed(sew_8_b_14); // @[Valu.scala 156:31]
  wire [7:0] _T_4934 = $signed(_T_3875) <= $signed(sew_8_b_14) ? $signed(_T_3875) : $signed(sew_8_b_14); // @[Valu.scala 157:30]
  wire [7:0] _T_4938 = _T_3907 >= _T_1854 ? $signed(_T_3875) : $signed(sew_8_b_14); // @[Valu.scala 158:31]
  wire [7:0] _T_4940 = $signed(_T_3875) >= $signed(sew_8_b_14) ? $signed(_T_3875) : $signed(sew_8_b_14); // @[Valu.scala 159:30]
  wire [7:0] _T_4942 = 9'h4 == io_aluc ? $signed(_T_4916) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_4944 = 9'h14 == io_aluc ? $signed(_T_4919) : $signed(_T_4942); // @[Mux.scala 80:57]
  wire [7:0] _T_4946 = 9'h1c == io_aluc ? $signed(_T_4922) : $signed(_T_4944); // @[Mux.scala 80:57]
  wire [7:0] _T_4948 = 9'h4c == io_aluc ? $signed(_T_4924) : $signed(_T_4946); // @[Mux.scala 80:57]
  wire [7:0] _T_4950 = 9'h54 == io_aluc ? $signed(_T_4926) : $signed(_T_4948); // @[Mux.scala 80:57]
  wire [7:0] _T_4952 = 9'h5c == io_aluc ? $signed(_T_4928) : $signed(_T_4950); // @[Mux.scala 80:57]
  wire [7:0] _T_4954 = 9'h24 == io_aluc ? $signed(_T_4932) : $signed(_T_4952); // @[Mux.scala 80:57]
  wire [7:0] _T_4956 = 9'h2c == io_aluc ? $signed(_T_4934) : $signed(_T_4954); // @[Mux.scala 80:57]
  wire [7:0] _T_4958 = 9'h34 == io_aluc ? $signed(_T_4938) : $signed(_T_4956); // @[Mux.scala 80:57]
  wire [7:0] _T_4960 = 9'h3c == io_aluc ? $signed(_T_4940) : $signed(_T_4958); // @[Mux.scala 80:57]
  wire [7:0] _T_4961 = _T_1841 ? $signed(-8'sh1) : $signed(_T_4960); // @[Valu.scala 146:36]
  wire [7:0] _T_4962 = _T_1835 ? $signed(sew_8_vd_14) : $signed(_T_4961); // @[Valu.scala 145:32]
  wire  _T_4965 = _T_234 & 32'he > io_vl; // @[Valu.scala 163:28]
  wire [7:0] _T_4968 = _T_234 & 32'he > io_vl ? $signed(sew_8_vd_14) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_4969 = _T_1829 ? $signed(_T_4962) : $signed(_T_4968); // @[Valu.scala 144:11]
  wire [7:0] _T_4989 = $signed(sew_8_b_15) + $signed(_T_3875); // @[Valu.scala 150:37]
  wire [7:0] _T_4992 = $signed(sew_8_b_15) - $signed(_T_3875); // @[Valu.scala 151:37]
  wire [7:0] _T_4995 = $signed(_T_3875) - $signed(sew_8_b_15); // @[Valu.scala 152:33]
  wire [7:0] _T_4997 = $signed(sew_8_b_15) & $signed(_T_3875); // @[Valu.scala 153:36]
  wire [7:0] _T_4999 = $signed(sew_8_b_15) | $signed(_T_3875); // @[Valu.scala 154:35]
  wire [7:0] _T_5001 = $signed(sew_8_b_15) ^ $signed(_T_3875); // @[Valu.scala 155:36]
  wire [7:0] _T_5005 = _T_3907 <= _T_1912 ? $signed(_T_3875) : $signed(sew_8_b_15); // @[Valu.scala 156:31]
  wire [7:0] _T_5007 = $signed(_T_3875) <= $signed(sew_8_b_15) ? $signed(_T_3875) : $signed(sew_8_b_15); // @[Valu.scala 157:30]
  wire [7:0] _T_5011 = _T_3907 >= _T_1912 ? $signed(_T_3875) : $signed(sew_8_b_15); // @[Valu.scala 158:31]
  wire [7:0] _T_5013 = $signed(_T_3875) >= $signed(sew_8_b_15) ? $signed(_T_3875) : $signed(sew_8_b_15); // @[Valu.scala 159:30]
  wire [7:0] _T_5015 = 9'h4 == io_aluc ? $signed(_T_4989) : $signed(8'sh0); // @[Mux.scala 80:57]
  wire [7:0] _T_5017 = 9'h14 == io_aluc ? $signed(_T_4992) : $signed(_T_5015); // @[Mux.scala 80:57]
  wire [7:0] _T_5019 = 9'h1c == io_aluc ? $signed(_T_4995) : $signed(_T_5017); // @[Mux.scala 80:57]
  wire [7:0] _T_5021 = 9'h4c == io_aluc ? $signed(_T_4997) : $signed(_T_5019); // @[Mux.scala 80:57]
  wire [7:0] _T_5023 = 9'h54 == io_aluc ? $signed(_T_4999) : $signed(_T_5021); // @[Mux.scala 80:57]
  wire [7:0] _T_5025 = 9'h5c == io_aluc ? $signed(_T_5001) : $signed(_T_5023); // @[Mux.scala 80:57]
  wire [7:0] _T_5027 = 9'h24 == io_aluc ? $signed(_T_5005) : $signed(_T_5025); // @[Mux.scala 80:57]
  wire [7:0] _T_5029 = 9'h2c == io_aluc ? $signed(_T_5007) : $signed(_T_5027); // @[Mux.scala 80:57]
  wire [7:0] _T_5031 = 9'h34 == io_aluc ? $signed(_T_5011) : $signed(_T_5029); // @[Mux.scala 80:57]
  wire [7:0] _T_5033 = 9'h3c == io_aluc ? $signed(_T_5013) : $signed(_T_5031); // @[Mux.scala 80:57]
  wire [7:0] _T_5034 = _T_1899 ? $signed(-8'sh1) : $signed(_T_5033); // @[Valu.scala 146:36]
  wire [7:0] _T_5035 = _T_1893 ? $signed(sew_8_vd_15) : $signed(_T_5034); // @[Valu.scala 145:32]
  wire  _T_5038 = _T_234 & 32'hf > io_vl; // @[Valu.scala 163:28]
  wire [7:0] _T_5041 = _T_234 & 32'hf > io_vl ? $signed(sew_8_vd_15) : $signed(-8'sh1); // @[Valu.scala 163:12]
  wire [7:0] _T_5042 = _T_1887 ? $signed(_T_5035) : $signed(_T_5041); // @[Valu.scala 144:11]
  wire [7:0] lo_lo_lo_lo_2 = _T_184 ? $signed(sew_8_vd_0) : $signed(_T_3947); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_lo_hi_2 = _T_242 ? $signed(sew_8_vd_1) : $signed(_T_4020); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_hi_lo_2 = _T_422 ? $signed(sew_8_vd_2) : $signed(_T_4093); // @[Cat.scala 30:58]
  wire [7:0] lo_lo_hi_hi_2 = _T_480 ? $signed(sew_8_vd_3) : $signed(_T_4166); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_lo_lo_2 = _T_776 ? $signed(sew_8_vd_4) : $signed(_T_4239); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_lo_hi_2 = _T_834 ? $signed(sew_8_vd_5) : $signed(_T_4312); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_hi_lo_2 = _T_892 ? $signed(sew_8_vd_6) : $signed(_T_4385); // @[Cat.scala 30:58]
  wire [7:0] lo_hi_hi_hi_2 = _T_950 ? $signed(sew_8_vd_7) : $signed(_T_4458); // @[Cat.scala 30:58]
  wire [63:0] lo_12 = {lo_hi_hi_hi_2,lo_hi_hi_lo_2,lo_hi_lo_hi_2,lo_hi_lo_lo_2,lo_lo_hi_hi_2,lo_lo_hi_lo_2,lo_lo_lo_hi_2
    ,lo_lo_lo_lo_2}; // @[Cat.scala 30:58]
  wire [7:0] hi_lo_lo_lo_2 = _T_1478 ? $signed(sew_8_vd_8) : $signed(_T_4531); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_lo_hi_2 = _T_1536 ? $signed(sew_8_vd_9) : $signed(_T_4604); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_hi_lo_2 = _T_1594 ? $signed(sew_8_vd_10) : $signed(_T_4677); // @[Cat.scala 30:58]
  wire [7:0] hi_lo_hi_hi_2 = _T_1652 ? $signed(sew_8_vd_11) : $signed(_T_4750); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_lo_lo_2 = _T_1710 ? $signed(sew_8_vd_12) : $signed(_T_4823); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_lo_hi_2 = _T_1768 ? $signed(sew_8_vd_13) : $signed(_T_4896); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_hi_lo_2 = _T_1826 ? $signed(sew_8_vd_14) : $signed(_T_4969); // @[Cat.scala 30:58]
  wire [7:0] hi_hi_hi_hi_2 = _T_1884 ? $signed(sew_8_vd_15) : $signed(_T_5042); // @[Cat.scala 30:58]
  wire [127:0] _T_5045 = {hi_hi_hi_hi_2,hi_hi_hi_lo_2,hi_hi_lo_hi_2,hi_hi_lo_lo_2,hi_lo_hi_hi_2,hi_lo_hi_lo_2,
    hi_lo_lo_hi_2,hi_lo_lo_lo_2,lo_12}; // @[Valu.scala 166:24]
  wire [15:0] _T_5051 = io_in_A[15:0]; // @[Valu.scala 233:45]
  wire [15:0] _T_5070 = $signed(sew_16_b_0) + $signed(_T_5051); // @[Valu.scala 150:37]
  wire [15:0] _T_5073 = $signed(sew_16_b_0) - $signed(_T_5051); // @[Valu.scala 151:37]
  wire [15:0] _T_5076 = $signed(_T_5051) - $signed(sew_16_b_0); // @[Valu.scala 152:33]
  wire [15:0] _T_5078 = $signed(sew_16_b_0) & $signed(_T_5051); // @[Valu.scala 153:36]
  wire [15:0] _T_5080 = $signed(sew_16_b_0) | $signed(_T_5051); // @[Valu.scala 154:35]
  wire [15:0] _T_5082 = $signed(sew_16_b_0) ^ $signed(_T_5051); // @[Valu.scala 155:36]
  wire [15:0] _T_5083 = io_in_A[15:0]; // @[Valu.scala 156:36]
  wire [15:0] _T_5086 = _T_5083 <= _T_572 ? $signed(_T_5051) : $signed(sew_16_b_0); // @[Valu.scala 156:31]
  wire [15:0] _T_5088 = $signed(_T_5051) <= $signed(sew_16_b_0) ? $signed(_T_5051) : $signed(sew_16_b_0); // @[Valu.scala 157:30]
  wire [15:0] _T_5092 = _T_5083 >= _T_572 ? $signed(_T_5051) : $signed(sew_16_b_0); // @[Valu.scala 158:31]
  wire [15:0] _T_5094 = $signed(_T_5051) >= $signed(sew_16_b_0) ? $signed(_T_5051) : $signed(sew_16_b_0); // @[Valu.scala 159:30]
  wire [15:0] _T_5096 = 9'h4 == io_aluc ? $signed(_T_5070) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5098 = 9'h14 == io_aluc ? $signed(_T_5073) : $signed(_T_5096); // @[Mux.scala 80:57]
  wire [15:0] _T_5100 = 9'h1c == io_aluc ? $signed(_T_5076) : $signed(_T_5098); // @[Mux.scala 80:57]
  wire [15:0] _T_5102 = 9'h4c == io_aluc ? $signed(_T_5078) : $signed(_T_5100); // @[Mux.scala 80:57]
  wire [15:0] _T_5104 = 9'h54 == io_aluc ? $signed(_T_5080) : $signed(_T_5102); // @[Mux.scala 80:57]
  wire [15:0] _T_5106 = 9'h5c == io_aluc ? $signed(_T_5082) : $signed(_T_5104); // @[Mux.scala 80:57]
  wire [15:0] _T_5108 = 9'h24 == io_aluc ? $signed(_T_5086) : $signed(_T_5106); // @[Mux.scala 80:57]
  wire [15:0] _T_5110 = 9'h2c == io_aluc ? $signed(_T_5088) : $signed(_T_5108); // @[Mux.scala 80:57]
  wire [15:0] _T_5112 = 9'h34 == io_aluc ? $signed(_T_5092) : $signed(_T_5110); // @[Mux.scala 80:57]
  wire [15:0] _T_5114 = 9'h3c == io_aluc ? $signed(_T_5094) : $signed(_T_5112); // @[Mux.scala 80:57]
  wire [15:0] _T_5115 = _T_199 ? $signed(-16'sh1) : $signed(_T_5114); // @[Valu.scala 146:36]
  wire [15:0] _T_5116 = _T_193 ? $signed(sew_16_vd_0) : $signed(_T_5115); // @[Valu.scala 145:32]
  wire [15:0] _T_5123 = _T_187 ? $signed(_T_5116) : $signed(-16'sh1); // @[Valu.scala 144:11]
  wire [15:0] _T_5143 = $signed(sew_16_b_1) + $signed(_T_5051); // @[Valu.scala 150:37]
  wire [15:0] _T_5146 = $signed(sew_16_b_1) - $signed(_T_5051); // @[Valu.scala 151:37]
  wire [15:0] _T_5149 = $signed(_T_5051) - $signed(sew_16_b_1); // @[Valu.scala 152:33]
  wire [15:0] _T_5151 = $signed(sew_16_b_1) & $signed(_T_5051); // @[Valu.scala 153:36]
  wire [15:0] _T_5153 = $signed(sew_16_b_1) | $signed(_T_5051); // @[Valu.scala 154:35]
  wire [15:0] _T_5155 = $signed(sew_16_b_1) ^ $signed(_T_5051); // @[Valu.scala 155:36]
  wire [15:0] _T_5159 = _T_5083 <= _T_630 ? $signed(_T_5051) : $signed(sew_16_b_1); // @[Valu.scala 156:31]
  wire [15:0] _T_5161 = $signed(_T_5051) <= $signed(sew_16_b_1) ? $signed(_T_5051) : $signed(sew_16_b_1); // @[Valu.scala 157:30]
  wire [15:0] _T_5165 = _T_5083 >= _T_630 ? $signed(_T_5051) : $signed(sew_16_b_1); // @[Valu.scala 158:31]
  wire [15:0] _T_5167 = $signed(_T_5051) >= $signed(sew_16_b_1) ? $signed(_T_5051) : $signed(sew_16_b_1); // @[Valu.scala 159:30]
  wire [15:0] _T_5169 = 9'h4 == io_aluc ? $signed(_T_5143) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5171 = 9'h14 == io_aluc ? $signed(_T_5146) : $signed(_T_5169); // @[Mux.scala 80:57]
  wire [15:0] _T_5173 = 9'h1c == io_aluc ? $signed(_T_5149) : $signed(_T_5171); // @[Mux.scala 80:57]
  wire [15:0] _T_5175 = 9'h4c == io_aluc ? $signed(_T_5151) : $signed(_T_5173); // @[Mux.scala 80:57]
  wire [15:0] _T_5177 = 9'h54 == io_aluc ? $signed(_T_5153) : $signed(_T_5175); // @[Mux.scala 80:57]
  wire [15:0] _T_5179 = 9'h5c == io_aluc ? $signed(_T_5155) : $signed(_T_5177); // @[Mux.scala 80:57]
  wire [15:0] _T_5181 = 9'h24 == io_aluc ? $signed(_T_5159) : $signed(_T_5179); // @[Mux.scala 80:57]
  wire [15:0] _T_5183 = 9'h2c == io_aluc ? $signed(_T_5161) : $signed(_T_5181); // @[Mux.scala 80:57]
  wire [15:0] _T_5185 = 9'h34 == io_aluc ? $signed(_T_5165) : $signed(_T_5183); // @[Mux.scala 80:57]
  wire [15:0] _T_5187 = 9'h3c == io_aluc ? $signed(_T_5167) : $signed(_T_5185); // @[Mux.scala 80:57]
  wire [15:0] _T_5188 = _T_257 ? $signed(-16'sh1) : $signed(_T_5187); // @[Valu.scala 146:36]
  wire [15:0] _T_5189 = _T_251 ? $signed(sew_16_vd_1) : $signed(_T_5188); // @[Valu.scala 145:32]
  wire [15:0] _T_5195 = _T_234 & 32'h1 > io_vl ? $signed(sew_16_vd_1) : $signed(-16'sh1); // @[Valu.scala 163:12]
  wire [15:0] _T_5196 = _T_245 ? $signed(_T_5189) : $signed(_T_5195); // @[Valu.scala 144:11]
  wire [15:0] _T_5216 = $signed(sew_16_b_2) + $signed(_T_5051); // @[Valu.scala 150:37]
  wire [15:0] _T_5219 = $signed(sew_16_b_2) - $signed(_T_5051); // @[Valu.scala 151:37]
  wire [15:0] _T_5222 = $signed(_T_5051) - $signed(sew_16_b_2); // @[Valu.scala 152:33]
  wire [15:0] _T_5224 = $signed(sew_16_b_2) & $signed(_T_5051); // @[Valu.scala 153:36]
  wire [15:0] _T_5226 = $signed(sew_16_b_2) | $signed(_T_5051); // @[Valu.scala 154:35]
  wire [15:0] _T_5228 = $signed(sew_16_b_2) ^ $signed(_T_5051); // @[Valu.scala 155:36]
  wire [15:0] _T_5232 = _T_5083 <= _T_688 ? $signed(_T_5051) : $signed(sew_16_b_2); // @[Valu.scala 156:31]
  wire [15:0] _T_5234 = $signed(_T_5051) <= $signed(sew_16_b_2) ? $signed(_T_5051) : $signed(sew_16_b_2); // @[Valu.scala 157:30]
  wire [15:0] _T_5238 = _T_5083 >= _T_688 ? $signed(_T_5051) : $signed(sew_16_b_2); // @[Valu.scala 158:31]
  wire [15:0] _T_5240 = $signed(_T_5051) >= $signed(sew_16_b_2) ? $signed(_T_5051) : $signed(sew_16_b_2); // @[Valu.scala 159:30]
  wire [15:0] _T_5242 = 9'h4 == io_aluc ? $signed(_T_5216) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5244 = 9'h14 == io_aluc ? $signed(_T_5219) : $signed(_T_5242); // @[Mux.scala 80:57]
  wire [15:0] _T_5246 = 9'h1c == io_aluc ? $signed(_T_5222) : $signed(_T_5244); // @[Mux.scala 80:57]
  wire [15:0] _T_5248 = 9'h4c == io_aluc ? $signed(_T_5224) : $signed(_T_5246); // @[Mux.scala 80:57]
  wire [15:0] _T_5250 = 9'h54 == io_aluc ? $signed(_T_5226) : $signed(_T_5248); // @[Mux.scala 80:57]
  wire [15:0] _T_5252 = 9'h5c == io_aluc ? $signed(_T_5228) : $signed(_T_5250); // @[Mux.scala 80:57]
  wire [15:0] _T_5254 = 9'h24 == io_aluc ? $signed(_T_5232) : $signed(_T_5252); // @[Mux.scala 80:57]
  wire [15:0] _T_5256 = 9'h2c == io_aluc ? $signed(_T_5234) : $signed(_T_5254); // @[Mux.scala 80:57]
  wire [15:0] _T_5258 = 9'h34 == io_aluc ? $signed(_T_5238) : $signed(_T_5256); // @[Mux.scala 80:57]
  wire [15:0] _T_5260 = 9'h3c == io_aluc ? $signed(_T_5240) : $signed(_T_5258); // @[Mux.scala 80:57]
  wire [15:0] _T_5261 = _T_437 ? $signed(-16'sh1) : $signed(_T_5260); // @[Valu.scala 146:36]
  wire [15:0] _T_5262 = _T_431 ? $signed(sew_16_vd_2) : $signed(_T_5261); // @[Valu.scala 145:32]
  wire [15:0] _T_5268 = _T_234 & 32'h2 > io_vl ? $signed(sew_16_vd_2) : $signed(-16'sh1); // @[Valu.scala 163:12]
  wire [15:0] _T_5269 = _T_425 ? $signed(_T_5262) : $signed(_T_5268); // @[Valu.scala 144:11]
  wire [15:0] _T_5289 = $signed(sew_16_b_3) + $signed(_T_5051); // @[Valu.scala 150:37]
  wire [15:0] _T_5292 = $signed(sew_16_b_3) - $signed(_T_5051); // @[Valu.scala 151:37]
  wire [15:0] _T_5295 = $signed(_T_5051) - $signed(sew_16_b_3); // @[Valu.scala 152:33]
  wire [15:0] _T_5297 = $signed(sew_16_b_3) & $signed(_T_5051); // @[Valu.scala 153:36]
  wire [15:0] _T_5299 = $signed(sew_16_b_3) | $signed(_T_5051); // @[Valu.scala 154:35]
  wire [15:0] _T_5301 = $signed(sew_16_b_3) ^ $signed(_T_5051); // @[Valu.scala 155:36]
  wire [15:0] _T_5305 = _T_5083 <= _T_746 ? $signed(_T_5051) : $signed(sew_16_b_3); // @[Valu.scala 156:31]
  wire [15:0] _T_5307 = $signed(_T_5051) <= $signed(sew_16_b_3) ? $signed(_T_5051) : $signed(sew_16_b_3); // @[Valu.scala 157:30]
  wire [15:0] _T_5311 = _T_5083 >= _T_746 ? $signed(_T_5051) : $signed(sew_16_b_3); // @[Valu.scala 158:31]
  wire [15:0] _T_5313 = $signed(_T_5051) >= $signed(sew_16_b_3) ? $signed(_T_5051) : $signed(sew_16_b_3); // @[Valu.scala 159:30]
  wire [15:0] _T_5315 = 9'h4 == io_aluc ? $signed(_T_5289) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5317 = 9'h14 == io_aluc ? $signed(_T_5292) : $signed(_T_5315); // @[Mux.scala 80:57]
  wire [15:0] _T_5319 = 9'h1c == io_aluc ? $signed(_T_5295) : $signed(_T_5317); // @[Mux.scala 80:57]
  wire [15:0] _T_5321 = 9'h4c == io_aluc ? $signed(_T_5297) : $signed(_T_5319); // @[Mux.scala 80:57]
  wire [15:0] _T_5323 = 9'h54 == io_aluc ? $signed(_T_5299) : $signed(_T_5321); // @[Mux.scala 80:57]
  wire [15:0] _T_5325 = 9'h5c == io_aluc ? $signed(_T_5301) : $signed(_T_5323); // @[Mux.scala 80:57]
  wire [15:0] _T_5327 = 9'h24 == io_aluc ? $signed(_T_5305) : $signed(_T_5325); // @[Mux.scala 80:57]
  wire [15:0] _T_5329 = 9'h2c == io_aluc ? $signed(_T_5307) : $signed(_T_5327); // @[Mux.scala 80:57]
  wire [15:0] _T_5331 = 9'h34 == io_aluc ? $signed(_T_5311) : $signed(_T_5329); // @[Mux.scala 80:57]
  wire [15:0] _T_5333 = 9'h3c == io_aluc ? $signed(_T_5313) : $signed(_T_5331); // @[Mux.scala 80:57]
  wire [15:0] _T_5334 = _T_495 ? $signed(-16'sh1) : $signed(_T_5333); // @[Valu.scala 146:36]
  wire [15:0] _T_5335 = _T_489 ? $signed(sew_16_vd_3) : $signed(_T_5334); // @[Valu.scala 145:32]
  wire [15:0] _T_5341 = _T_234 & 32'h3 > io_vl ? $signed(sew_16_vd_3) : $signed(-16'sh1); // @[Valu.scala 163:12]
  wire [15:0] _T_5342 = _T_483 ? $signed(_T_5335) : $signed(_T_5341); // @[Valu.scala 144:11]
  wire [15:0] _T_5362 = $signed(sew_16_b_4) + $signed(_T_5051); // @[Valu.scala 150:37]
  wire [15:0] _T_5365 = $signed(sew_16_b_4) - $signed(_T_5051); // @[Valu.scala 151:37]
  wire [15:0] _T_5368 = $signed(_T_5051) - $signed(sew_16_b_4); // @[Valu.scala 152:33]
  wire [15:0] _T_5370 = $signed(sew_16_b_4) & $signed(_T_5051); // @[Valu.scala 153:36]
  wire [15:0] _T_5372 = $signed(sew_16_b_4) | $signed(_T_5051); // @[Valu.scala 154:35]
  wire [15:0] _T_5374 = $signed(sew_16_b_4) ^ $signed(_T_5051); // @[Valu.scala 155:36]
  wire [15:0] _T_5378 = _T_5083 <= _T_804 ? $signed(_T_5051) : $signed(sew_16_b_4); // @[Valu.scala 156:31]
  wire [15:0] _T_5380 = $signed(_T_5051) <= $signed(sew_16_b_4) ? $signed(_T_5051) : $signed(sew_16_b_4); // @[Valu.scala 157:30]
  wire [15:0] _T_5384 = _T_5083 >= _T_804 ? $signed(_T_5051) : $signed(sew_16_b_4); // @[Valu.scala 158:31]
  wire [15:0] _T_5386 = $signed(_T_5051) >= $signed(sew_16_b_4) ? $signed(_T_5051) : $signed(sew_16_b_4); // @[Valu.scala 159:30]
  wire [15:0] _T_5388 = 9'h4 == io_aluc ? $signed(_T_5362) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5390 = 9'h14 == io_aluc ? $signed(_T_5365) : $signed(_T_5388); // @[Mux.scala 80:57]
  wire [15:0] _T_5392 = 9'h1c == io_aluc ? $signed(_T_5368) : $signed(_T_5390); // @[Mux.scala 80:57]
  wire [15:0] _T_5394 = 9'h4c == io_aluc ? $signed(_T_5370) : $signed(_T_5392); // @[Mux.scala 80:57]
  wire [15:0] _T_5396 = 9'h54 == io_aluc ? $signed(_T_5372) : $signed(_T_5394); // @[Mux.scala 80:57]
  wire [15:0] _T_5398 = 9'h5c == io_aluc ? $signed(_T_5374) : $signed(_T_5396); // @[Mux.scala 80:57]
  wire [15:0] _T_5400 = 9'h24 == io_aluc ? $signed(_T_5378) : $signed(_T_5398); // @[Mux.scala 80:57]
  wire [15:0] _T_5402 = 9'h2c == io_aluc ? $signed(_T_5380) : $signed(_T_5400); // @[Mux.scala 80:57]
  wire [15:0] _T_5404 = 9'h34 == io_aluc ? $signed(_T_5384) : $signed(_T_5402); // @[Mux.scala 80:57]
  wire [15:0] _T_5406 = 9'h3c == io_aluc ? $signed(_T_5386) : $signed(_T_5404); // @[Mux.scala 80:57]
  wire [15:0] _T_5407 = _T_791 ? $signed(-16'sh1) : $signed(_T_5406); // @[Valu.scala 146:36]
  wire [15:0] _T_5408 = _T_785 ? $signed(sew_16_vd_4) : $signed(_T_5407); // @[Valu.scala 145:32]
  wire [15:0] _T_5414 = _T_234 & 32'h4 > io_vl ? $signed(sew_16_vd_4) : $signed(-16'sh1); // @[Valu.scala 163:12]
  wire [15:0] _T_5415 = _T_779 ? $signed(_T_5408) : $signed(_T_5414); // @[Valu.scala 144:11]
  wire [15:0] _T_5435 = $signed(sew_16_b_5) + $signed(_T_5051); // @[Valu.scala 150:37]
  wire [15:0] _T_5438 = $signed(sew_16_b_5) - $signed(_T_5051); // @[Valu.scala 151:37]
  wire [15:0] _T_5441 = $signed(_T_5051) - $signed(sew_16_b_5); // @[Valu.scala 152:33]
  wire [15:0] _T_5443 = $signed(sew_16_b_5) & $signed(_T_5051); // @[Valu.scala 153:36]
  wire [15:0] _T_5445 = $signed(sew_16_b_5) | $signed(_T_5051); // @[Valu.scala 154:35]
  wire [15:0] _T_5447 = $signed(sew_16_b_5) ^ $signed(_T_5051); // @[Valu.scala 155:36]
  wire [15:0] _T_5451 = _T_5083 <= _T_862 ? $signed(_T_5051) : $signed(sew_16_b_5); // @[Valu.scala 156:31]
  wire [15:0] _T_5453 = $signed(_T_5051) <= $signed(sew_16_b_5) ? $signed(_T_5051) : $signed(sew_16_b_5); // @[Valu.scala 157:30]
  wire [15:0] _T_5457 = _T_5083 >= _T_862 ? $signed(_T_5051) : $signed(sew_16_b_5); // @[Valu.scala 158:31]
  wire [15:0] _T_5459 = $signed(_T_5051) >= $signed(sew_16_b_5) ? $signed(_T_5051) : $signed(sew_16_b_5); // @[Valu.scala 159:30]
  wire [15:0] _T_5461 = 9'h4 == io_aluc ? $signed(_T_5435) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5463 = 9'h14 == io_aluc ? $signed(_T_5438) : $signed(_T_5461); // @[Mux.scala 80:57]
  wire [15:0] _T_5465 = 9'h1c == io_aluc ? $signed(_T_5441) : $signed(_T_5463); // @[Mux.scala 80:57]
  wire [15:0] _T_5467 = 9'h4c == io_aluc ? $signed(_T_5443) : $signed(_T_5465); // @[Mux.scala 80:57]
  wire [15:0] _T_5469 = 9'h54 == io_aluc ? $signed(_T_5445) : $signed(_T_5467); // @[Mux.scala 80:57]
  wire [15:0] _T_5471 = 9'h5c == io_aluc ? $signed(_T_5447) : $signed(_T_5469); // @[Mux.scala 80:57]
  wire [15:0] _T_5473 = 9'h24 == io_aluc ? $signed(_T_5451) : $signed(_T_5471); // @[Mux.scala 80:57]
  wire [15:0] _T_5475 = 9'h2c == io_aluc ? $signed(_T_5453) : $signed(_T_5473); // @[Mux.scala 80:57]
  wire [15:0] _T_5477 = 9'h34 == io_aluc ? $signed(_T_5457) : $signed(_T_5475); // @[Mux.scala 80:57]
  wire [15:0] _T_5479 = 9'h3c == io_aluc ? $signed(_T_5459) : $signed(_T_5477); // @[Mux.scala 80:57]
  wire [15:0] _T_5480 = _T_849 ? $signed(-16'sh1) : $signed(_T_5479); // @[Valu.scala 146:36]
  wire [15:0] _T_5481 = _T_843 ? $signed(sew_16_vd_5) : $signed(_T_5480); // @[Valu.scala 145:32]
  wire [15:0] _T_5487 = _T_234 & 32'h5 > io_vl ? $signed(sew_16_vd_5) : $signed(-16'sh1); // @[Valu.scala 163:12]
  wire [15:0] _T_5488 = _T_837 ? $signed(_T_5481) : $signed(_T_5487); // @[Valu.scala 144:11]
  wire [15:0] _T_5508 = $signed(sew_16_b_6) + $signed(_T_5051); // @[Valu.scala 150:37]
  wire [15:0] _T_5511 = $signed(sew_16_b_6) - $signed(_T_5051); // @[Valu.scala 151:37]
  wire [15:0] _T_5514 = $signed(_T_5051) - $signed(sew_16_b_6); // @[Valu.scala 152:33]
  wire [15:0] _T_5516 = $signed(sew_16_b_6) & $signed(_T_5051); // @[Valu.scala 153:36]
  wire [15:0] _T_5518 = $signed(sew_16_b_6) | $signed(_T_5051); // @[Valu.scala 154:35]
  wire [15:0] _T_5520 = $signed(sew_16_b_6) ^ $signed(_T_5051); // @[Valu.scala 155:36]
  wire [15:0] _T_5524 = _T_5083 <= _T_920 ? $signed(_T_5051) : $signed(sew_16_b_6); // @[Valu.scala 156:31]
  wire [15:0] _T_5526 = $signed(_T_5051) <= $signed(sew_16_b_6) ? $signed(_T_5051) : $signed(sew_16_b_6); // @[Valu.scala 157:30]
  wire [15:0] _T_5530 = _T_5083 >= _T_920 ? $signed(_T_5051) : $signed(sew_16_b_6); // @[Valu.scala 158:31]
  wire [15:0] _T_5532 = $signed(_T_5051) >= $signed(sew_16_b_6) ? $signed(_T_5051) : $signed(sew_16_b_6); // @[Valu.scala 159:30]
  wire [15:0] _T_5534 = 9'h4 == io_aluc ? $signed(_T_5508) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5536 = 9'h14 == io_aluc ? $signed(_T_5511) : $signed(_T_5534); // @[Mux.scala 80:57]
  wire [15:0] _T_5538 = 9'h1c == io_aluc ? $signed(_T_5514) : $signed(_T_5536); // @[Mux.scala 80:57]
  wire [15:0] _T_5540 = 9'h4c == io_aluc ? $signed(_T_5516) : $signed(_T_5538); // @[Mux.scala 80:57]
  wire [15:0] _T_5542 = 9'h54 == io_aluc ? $signed(_T_5518) : $signed(_T_5540); // @[Mux.scala 80:57]
  wire [15:0] _T_5544 = 9'h5c == io_aluc ? $signed(_T_5520) : $signed(_T_5542); // @[Mux.scala 80:57]
  wire [15:0] _T_5546 = 9'h24 == io_aluc ? $signed(_T_5524) : $signed(_T_5544); // @[Mux.scala 80:57]
  wire [15:0] _T_5548 = 9'h2c == io_aluc ? $signed(_T_5526) : $signed(_T_5546); // @[Mux.scala 80:57]
  wire [15:0] _T_5550 = 9'h34 == io_aluc ? $signed(_T_5530) : $signed(_T_5548); // @[Mux.scala 80:57]
  wire [15:0] _T_5552 = 9'h3c == io_aluc ? $signed(_T_5532) : $signed(_T_5550); // @[Mux.scala 80:57]
  wire [15:0] _T_5553 = _T_907 ? $signed(-16'sh1) : $signed(_T_5552); // @[Valu.scala 146:36]
  wire [15:0] _T_5554 = _T_901 ? $signed(sew_16_vd_6) : $signed(_T_5553); // @[Valu.scala 145:32]
  wire [15:0] _T_5560 = _T_234 & 32'h6 > io_vl ? $signed(sew_16_vd_6) : $signed(-16'sh1); // @[Valu.scala 163:12]
  wire [15:0] _T_5561 = _T_895 ? $signed(_T_5554) : $signed(_T_5560); // @[Valu.scala 144:11]
  wire [15:0] _T_5581 = $signed(sew_16_b_7) + $signed(_T_5051); // @[Valu.scala 150:37]
  wire [15:0] _T_5584 = $signed(sew_16_b_7) - $signed(_T_5051); // @[Valu.scala 151:37]
  wire [15:0] _T_5587 = $signed(_T_5051) - $signed(sew_16_b_7); // @[Valu.scala 152:33]
  wire [15:0] _T_5589 = $signed(sew_16_b_7) & $signed(_T_5051); // @[Valu.scala 153:36]
  wire [15:0] _T_5591 = $signed(sew_16_b_7) | $signed(_T_5051); // @[Valu.scala 154:35]
  wire [15:0] _T_5593 = $signed(sew_16_b_7) ^ $signed(_T_5051); // @[Valu.scala 155:36]
  wire [15:0] _T_5597 = _T_5083 <= _T_978 ? $signed(_T_5051) : $signed(sew_16_b_7); // @[Valu.scala 156:31]
  wire [15:0] _T_5599 = $signed(_T_5051) <= $signed(sew_16_b_7) ? $signed(_T_5051) : $signed(sew_16_b_7); // @[Valu.scala 157:30]
  wire [15:0] _T_5603 = _T_5083 >= _T_978 ? $signed(_T_5051) : $signed(sew_16_b_7); // @[Valu.scala 158:31]
  wire [15:0] _T_5605 = $signed(_T_5051) >= $signed(sew_16_b_7) ? $signed(_T_5051) : $signed(sew_16_b_7); // @[Valu.scala 159:30]
  wire [15:0] _T_5607 = 9'h4 == io_aluc ? $signed(_T_5581) : $signed(16'sh0); // @[Mux.scala 80:57]
  wire [15:0] _T_5609 = 9'h14 == io_aluc ? $signed(_T_5584) : $signed(_T_5607); // @[Mux.scala 80:57]
  wire [15:0] _T_5611 = 9'h1c == io_aluc ? $signed(_T_5587) : $signed(_T_5609); // @[Mux.scala 80:57]
  wire [15:0] _T_5613 = 9'h4c == io_aluc ? $signed(_T_5589) : $signed(_T_5611); // @[Mux.scala 80:57]
  wire [15:0] _T_5615 = 9'h54 == io_aluc ? $signed(_T_5591) : $signed(_T_5613); // @[Mux.scala 80:57]
  wire [15:0] _T_5617 = 9'h5c == io_aluc ? $signed(_T_5593) : $signed(_T_5615); // @[Mux.scala 80:57]
  wire [15:0] _T_5619 = 9'h24 == io_aluc ? $signed(_T_5597) : $signed(_T_5617); // @[Mux.scala 80:57]
  wire [15:0] _T_5621 = 9'h2c == io_aluc ? $signed(_T_5599) : $signed(_T_5619); // @[Mux.scala 80:57]
  wire [15:0] _T_5623 = 9'h34 == io_aluc ? $signed(_T_5603) : $signed(_T_5621); // @[Mux.scala 80:57]
  wire [15:0] _T_5625 = 9'h3c == io_aluc ? $signed(_T_5605) : $signed(_T_5623); // @[Mux.scala 80:57]
  wire [15:0] _T_5626 = _T_965 ? $signed(-16'sh1) : $signed(_T_5625); // @[Valu.scala 146:36]
  wire [15:0] _T_5627 = _T_959 ? $signed(sew_16_vd_7) : $signed(_T_5626); // @[Valu.scala 145:32]
  wire [15:0] _T_5633 = _T_234 & 32'h7 > io_vl ? $signed(sew_16_vd_7) : $signed(-16'sh1); // @[Valu.scala 163:12]
  wire [15:0] _T_5634 = _T_953 ? $signed(_T_5627) : $signed(_T_5633); // @[Valu.scala 144:11]
  wire [15:0] lo_lo_lo_5 = _T_184 ? $signed(sew_16_vd_0) : $signed(_T_5123); // @[Cat.scala 30:58]
  wire [15:0] lo_lo_hi_5 = _T_242 ? $signed(sew_16_vd_1) : $signed(_T_5196); // @[Cat.scala 30:58]
  wire [15:0] lo_hi_lo_5 = _T_422 ? $signed(sew_16_vd_2) : $signed(_T_5269); // @[Cat.scala 30:58]
  wire [15:0] lo_hi_hi_5 = _T_480 ? $signed(sew_16_vd_3) : $signed(_T_5342); // @[Cat.scala 30:58]
  wire [15:0] hi_lo_lo_5 = _T_776 ? $signed(sew_16_vd_4) : $signed(_T_5415); // @[Cat.scala 30:58]
  wire [15:0] hi_lo_hi_5 = _T_834 ? $signed(sew_16_vd_5) : $signed(_T_5488); // @[Cat.scala 30:58]
  wire [15:0] hi_hi_lo_5 = _T_892 ? $signed(sew_16_vd_6) : $signed(_T_5561); // @[Cat.scala 30:58]
  wire [15:0] hi_hi_hi_5 = _T_950 ? $signed(sew_16_vd_7) : $signed(_T_5634); // @[Cat.scala 30:58]
  wire [127:0] _T_5637 = {hi_hi_hi_5,hi_hi_lo_5,hi_lo_hi_5,hi_lo_lo_5,lo_hi_hi_5,lo_hi_lo_5,lo_lo_hi_5,lo_lo_lo_5}; // @[Valu.scala 166:24]
  wire  _T_5639 = io_vd_addr == 5'h0; // @[Valu.scala 238:29]
  wire [127:0] _T_5641 = {96'h0,io_in_A}; // @[Valu.scala 239:57]
  wire [63:0] _T_5646 = io_vd[63:0]; // @[Valu.scala 171:33]
  wire [63:0] _T_5664 = _T_199 ? 64'hffffffffffffffff : _T_3453; // @[Valu.scala 174:36]
  wire [63:0] _T_5665 = _T_193 ? _T_5646 : _T_5664; // @[Valu.scala 173:32]
  wire [63:0] _T_5673 = _T_187 ? _T_5665 : 64'hffffffffffffffff; // @[Valu.scala 172:11]
  wire [63:0] lo_16 = _T_184 ? _T_5646 : _T_5673; // @[Valu.scala 171:11]
  wire [63:0] _T_5675 = io_vd[127:64]; // @[Valu.scala 171:33]
  wire [63:0] _T_5693 = _T_257 ? 64'hffffffffffffffff : _T_3453; // @[Valu.scala 174:36]
  wire [63:0] _T_5694 = _T_251 ? _T_5675 : _T_5693; // @[Valu.scala 173:32]
  wire [63:0] _T_5701 = _T_3562 ? _T_5675 : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_5702 = _T_245 ? _T_5694 : _T_5701; // @[Valu.scala 172:11]
  wire [63:0] hi_16 = _T_242 ? _T_5675 : _T_5702; // @[Valu.scala 171:11]
  wire [127:0] _T_5704 = {hi_16,lo_16}; // @[Valu.scala 179:24]
  wire [31:0] _T_5709 = io_vd[31:0]; // @[Valu.scala 171:33]
  wire [63:0] _T_5727 = _T_199 ? 64'hffffffffffffffff : {{32'd0}, _T_3607}; // @[Valu.scala 174:36]
  wire [63:0] _T_5728 = _T_193 ? {{32'd0}, _T_5709} : _T_5727; // @[Valu.scala 173:32]
  wire [63:0] _T_5736 = _T_187 ? _T_5728 : 64'hffffffffffffffff; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_9 = _T_184 ? {{32'd0}, _T_5709} : _T_5736; // @[Valu.scala 171:11]
  wire [31:0] _T_5738 = io_vd[63:32]; // @[Valu.scala 171:33]
  wire [63:0] _T_5756 = _T_257 ? 64'hffffffffffffffff : {{32'd0}, _T_3607}; // @[Valu.scala 174:36]
  wire [63:0] _T_5757 = _T_251 ? {{32'd0}, _T_5738} : _T_5756; // @[Valu.scala 173:32]
  wire [63:0] _T_5764 = _T_3562 ? {{32'd0}, _T_5738} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_5765 = _T_245 ? _T_5757 : _T_5764; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_9 = _T_242 ? {{32'd0}, _T_5738} : _T_5765; // @[Valu.scala 171:11]
  wire [31:0] _T_5767 = io_vd[95:64]; // @[Valu.scala 171:33]
  wire [63:0] _T_5785 = _T_437 ? 64'hffffffffffffffff : {{32'd0}, _T_3607}; // @[Valu.scala 174:36]
  wire [63:0] _T_5786 = _T_431 ? {{32'd0}, _T_5767} : _T_5785; // @[Valu.scala 173:32]
  wire [63:0] _T_5793 = _T_3789 ? {{32'd0}, _T_5767} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_5794 = _T_425 ? _T_5786 : _T_5793; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_9 = _T_422 ? {{32'd0}, _T_5767} : _T_5794; // @[Valu.scala 171:11]
  wire [31:0] _T_5796 = io_vd[127:96]; // @[Valu.scala 171:33]
  wire [63:0] _T_5814 = _T_495 ? 64'hffffffffffffffff : {{32'd0}, _T_3607}; // @[Valu.scala 174:36]
  wire [63:0] _T_5815 = _T_489 ? {{32'd0}, _T_5796} : _T_5814; // @[Valu.scala 173:32]
  wire [63:0] _T_5822 = _T_3862 ? {{32'd0}, _T_5796} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_5823 = _T_483 ? _T_5815 : _T_5822; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_9 = _T_480 ? {{32'd0}, _T_5796} : _T_5823; // @[Valu.scala 171:11]
  wire [255:0] _T_5825 = {hi_hi_9,hi_lo_9,lo_hi_9,lo_lo_9}; // @[Valu.scala 179:24]
  wire [15:0] _T_5830 = io_vd[15:0]; // @[Valu.scala 171:33]
  wire [63:0] _T_5848 = _T_199 ? 64'hffffffffffffffff : {{48'd0}, _T_5083}; // @[Valu.scala 174:36]
  wire [63:0] _T_5849 = _T_193 ? {{48'd0}, _T_5830} : _T_5848; // @[Valu.scala 173:32]
  wire [63:0] _T_5857 = _T_187 ? _T_5849 : 64'hffffffffffffffff; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_lo_6 = _T_184 ? {{48'd0}, _T_5830} : _T_5857; // @[Valu.scala 171:11]
  wire [15:0] _T_5859 = io_vd[31:16]; // @[Valu.scala 171:33]
  wire [63:0] _T_5877 = _T_257 ? 64'hffffffffffffffff : {{48'd0}, _T_5083}; // @[Valu.scala 174:36]
  wire [63:0] _T_5878 = _T_251 ? {{48'd0}, _T_5859} : _T_5877; // @[Valu.scala 173:32]
  wire [63:0] _T_5885 = _T_3562 ? {{48'd0}, _T_5859} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_5886 = _T_245 ? _T_5878 : _T_5885; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_hi_6 = _T_242 ? {{48'd0}, _T_5859} : _T_5886; // @[Valu.scala 171:11]
  wire [15:0] _T_5888 = io_vd[47:32]; // @[Valu.scala 171:33]
  wire [63:0] _T_5906 = _T_437 ? 64'hffffffffffffffff : {{48'd0}, _T_5083}; // @[Valu.scala 174:36]
  wire [63:0] _T_5907 = _T_431 ? {{48'd0}, _T_5888} : _T_5906; // @[Valu.scala 173:32]
  wire [63:0] _T_5914 = _T_3789 ? {{48'd0}, _T_5888} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_5915 = _T_425 ? _T_5907 : _T_5914; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_lo_6 = _T_422 ? {{48'd0}, _T_5888} : _T_5915; // @[Valu.scala 171:11]
  wire [15:0] _T_5917 = io_vd[63:48]; // @[Valu.scala 171:33]
  wire [63:0] _T_5935 = _T_495 ? 64'hffffffffffffffff : {{48'd0}, _T_5083}; // @[Valu.scala 174:36]
  wire [63:0] _T_5936 = _T_489 ? {{48'd0}, _T_5917} : _T_5935; // @[Valu.scala 173:32]
  wire [63:0] _T_5943 = _T_3862 ? {{48'd0}, _T_5917} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_5944 = _T_483 ? _T_5936 : _T_5943; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_hi_6 = _T_480 ? {{48'd0}, _T_5917} : _T_5944; // @[Valu.scala 171:11]
  wire [15:0] _T_5946 = io_vd[79:64]; // @[Valu.scala 171:33]
  wire [63:0] _T_5964 = _T_791 ? 64'hffffffffffffffff : {{48'd0}, _T_5083}; // @[Valu.scala 174:36]
  wire [63:0] _T_5965 = _T_785 ? {{48'd0}, _T_5946} : _T_5964; // @[Valu.scala 173:32]
  wire [63:0] _T_5972 = _T_4235 ? {{48'd0}, _T_5946} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_5973 = _T_779 ? _T_5965 : _T_5972; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_lo_6 = _T_776 ? {{48'd0}, _T_5946} : _T_5973; // @[Valu.scala 171:11]
  wire [15:0] _T_5975 = io_vd[95:80]; // @[Valu.scala 171:33]
  wire [63:0] _T_5993 = _T_849 ? 64'hffffffffffffffff : {{48'd0}, _T_5083}; // @[Valu.scala 174:36]
  wire [63:0] _T_5994 = _T_843 ? {{48'd0}, _T_5975} : _T_5993; // @[Valu.scala 173:32]
  wire [63:0] _T_6001 = _T_4308 ? {{48'd0}, _T_5975} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6002 = _T_837 ? _T_5994 : _T_6001; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_hi_6 = _T_834 ? {{48'd0}, _T_5975} : _T_6002; // @[Valu.scala 171:11]
  wire [15:0] _T_6004 = io_vd[111:96]; // @[Valu.scala 171:33]
  wire [63:0] _T_6022 = _T_907 ? 64'hffffffffffffffff : {{48'd0}, _T_5083}; // @[Valu.scala 174:36]
  wire [63:0] _T_6023 = _T_901 ? {{48'd0}, _T_6004} : _T_6022; // @[Valu.scala 173:32]
  wire [63:0] _T_6030 = _T_4381 ? {{48'd0}, _T_6004} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6031 = _T_895 ? _T_6023 : _T_6030; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_lo_6 = _T_892 ? {{48'd0}, _T_6004} : _T_6031; // @[Valu.scala 171:11]
  wire [15:0] _T_6033 = io_vd[127:112]; // @[Valu.scala 171:33]
  wire [63:0] _T_6051 = _T_965 ? 64'hffffffffffffffff : {{48'd0}, _T_5083}; // @[Valu.scala 174:36]
  wire [63:0] _T_6052 = _T_959 ? {{48'd0}, _T_6033} : _T_6051; // @[Valu.scala 173:32]
  wire [63:0] _T_6059 = _T_4454 ? {{48'd0}, _T_6033} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6060 = _T_953 ? _T_6052 : _T_6059; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_hi_6 = _T_950 ? {{48'd0}, _T_6033} : _T_6060; // @[Valu.scala 171:11]
  wire [511:0] _T_6062 = {hi_hi_hi_6,hi_hi_lo_6,hi_lo_hi_6,hi_lo_lo_6,lo_hi_hi_6,lo_hi_lo_6,lo_lo_hi_6,lo_lo_lo_6}; // @[Valu.scala 179:24]
  wire [7:0] _T_6067 = io_vd[7:0]; // @[Valu.scala 171:33]
  wire [63:0] _T_6085 = _T_199 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6086 = _T_193 ? {{56'd0}, _T_6067} : _T_6085; // @[Valu.scala 173:32]
  wire [63:0] _T_6094 = _T_187 ? _T_6086 : 64'hffffffffffffffff; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_lo_lo_3 = _T_184 ? {{56'd0}, _T_6067} : _T_6094; // @[Valu.scala 171:11]
  wire [7:0] _T_6096 = io_vd[15:8]; // @[Valu.scala 171:33]
  wire [63:0] _T_6114 = _T_257 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6115 = _T_251 ? {{56'd0}, _T_6096} : _T_6114; // @[Valu.scala 173:32]
  wire [63:0] _T_6122 = _T_3562 ? {{56'd0}, _T_6096} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6123 = _T_245 ? _T_6115 : _T_6122; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_lo_hi_3 = _T_242 ? {{56'd0}, _T_6096} : _T_6123; // @[Valu.scala 171:11]
  wire [7:0] _T_6125 = io_vd[23:16]; // @[Valu.scala 171:33]
  wire [63:0] _T_6143 = _T_437 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6144 = _T_431 ? {{56'd0}, _T_6125} : _T_6143; // @[Valu.scala 173:32]
  wire [63:0] _T_6151 = _T_3789 ? {{56'd0}, _T_6125} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6152 = _T_425 ? _T_6144 : _T_6151; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_hi_lo_3 = _T_422 ? {{56'd0}, _T_6125} : _T_6152; // @[Valu.scala 171:11]
  wire [7:0] _T_6154 = io_vd[31:24]; // @[Valu.scala 171:33]
  wire [63:0] _T_6172 = _T_495 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6173 = _T_489 ? {{56'd0}, _T_6154} : _T_6172; // @[Valu.scala 173:32]
  wire [63:0] _T_6180 = _T_3862 ? {{56'd0}, _T_6154} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6181 = _T_483 ? _T_6173 : _T_6180; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_hi_hi_3 = _T_480 ? {{56'd0}, _T_6154} : _T_6181; // @[Valu.scala 171:11]
  wire [7:0] _T_6183 = io_vd[39:32]; // @[Valu.scala 171:33]
  wire [63:0] _T_6201 = _T_791 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6202 = _T_785 ? {{56'd0}, _T_6183} : _T_6201; // @[Valu.scala 173:32]
  wire [63:0] _T_6209 = _T_4235 ? {{56'd0}, _T_6183} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6210 = _T_779 ? _T_6202 : _T_6209; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_lo_lo_3 = _T_776 ? {{56'd0}, _T_6183} : _T_6210; // @[Valu.scala 171:11]
  wire [7:0] _T_6212 = io_vd[47:40]; // @[Valu.scala 171:33]
  wire [63:0] _T_6230 = _T_849 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6231 = _T_843 ? {{56'd0}, _T_6212} : _T_6230; // @[Valu.scala 173:32]
  wire [63:0] _T_6238 = _T_4308 ? {{56'd0}, _T_6212} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6239 = _T_837 ? _T_6231 : _T_6238; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_lo_hi_3 = _T_834 ? {{56'd0}, _T_6212} : _T_6239; // @[Valu.scala 171:11]
  wire [7:0] _T_6241 = io_vd[55:48]; // @[Valu.scala 171:33]
  wire [63:0] _T_6259 = _T_907 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6260 = _T_901 ? {{56'd0}, _T_6241} : _T_6259; // @[Valu.scala 173:32]
  wire [63:0] _T_6267 = _T_4381 ? {{56'd0}, _T_6241} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6268 = _T_895 ? _T_6260 : _T_6267; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_hi_lo_3 = _T_892 ? {{56'd0}, _T_6241} : _T_6268; // @[Valu.scala 171:11]
  wire [7:0] _T_6270 = io_vd[63:56]; // @[Valu.scala 171:33]
  wire [63:0] _T_6288 = _T_965 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6289 = _T_959 ? {{56'd0}, _T_6270} : _T_6288; // @[Valu.scala 173:32]
  wire [63:0] _T_6296 = _T_4454 ? {{56'd0}, _T_6270} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6297 = _T_953 ? _T_6289 : _T_6296; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_hi_hi_3 = _T_950 ? {{56'd0}, _T_6270} : _T_6297; // @[Valu.scala 171:11]
  wire [7:0] _T_6299 = io_vd[71:64]; // @[Valu.scala 171:33]
  wire [63:0] _T_6317 = _T_1493 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6318 = _T_1487 ? {{56'd0}, _T_6299} : _T_6317; // @[Valu.scala 173:32]
  wire [63:0] _T_6325 = _T_4527 ? {{56'd0}, _T_6299} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6326 = _T_1481 ? _T_6318 : _T_6325; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_lo_lo_3 = _T_1478 ? {{56'd0}, _T_6299} : _T_6326; // @[Valu.scala 171:11]
  wire [7:0] _T_6328 = io_vd[79:72]; // @[Valu.scala 171:33]
  wire [63:0] _T_6346 = _T_1551 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6347 = _T_1545 ? {{56'd0}, _T_6328} : _T_6346; // @[Valu.scala 173:32]
  wire [63:0] _T_6354 = _T_4600 ? {{56'd0}, _T_6328} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6355 = _T_1539 ? _T_6347 : _T_6354; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_lo_hi_3 = _T_1536 ? {{56'd0}, _T_6328} : _T_6355; // @[Valu.scala 171:11]
  wire [7:0] _T_6357 = io_vd[87:80]; // @[Valu.scala 171:33]
  wire [63:0] _T_6375 = _T_1609 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6376 = _T_1603 ? {{56'd0}, _T_6357} : _T_6375; // @[Valu.scala 173:32]
  wire [63:0] _T_6383 = _T_4673 ? {{56'd0}, _T_6357} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6384 = _T_1597 ? _T_6376 : _T_6383; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_hi_lo_3 = _T_1594 ? {{56'd0}, _T_6357} : _T_6384; // @[Valu.scala 171:11]
  wire [7:0] _T_6386 = io_vd[95:88]; // @[Valu.scala 171:33]
  wire [63:0] _T_6404 = _T_1667 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6405 = _T_1661 ? {{56'd0}, _T_6386} : _T_6404; // @[Valu.scala 173:32]
  wire [63:0] _T_6412 = _T_4746 ? {{56'd0}, _T_6386} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6413 = _T_1655 ? _T_6405 : _T_6412; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_hi_hi_3 = _T_1652 ? {{56'd0}, _T_6386} : _T_6413; // @[Valu.scala 171:11]
  wire [7:0] _T_6415 = io_vd[103:96]; // @[Valu.scala 171:33]
  wire [63:0] _T_6433 = _T_1725 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6434 = _T_1719 ? {{56'd0}, _T_6415} : _T_6433; // @[Valu.scala 173:32]
  wire [63:0] _T_6441 = _T_4819 ? {{56'd0}, _T_6415} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6442 = _T_1713 ? _T_6434 : _T_6441; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_lo_lo_3 = _T_1710 ? {{56'd0}, _T_6415} : _T_6442; // @[Valu.scala 171:11]
  wire [7:0] _T_6444 = io_vd[111:104]; // @[Valu.scala 171:33]
  wire [63:0] _T_6462 = _T_1783 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6463 = _T_1777 ? {{56'd0}, _T_6444} : _T_6462; // @[Valu.scala 173:32]
  wire [63:0] _T_6470 = _T_4892 ? {{56'd0}, _T_6444} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6471 = _T_1771 ? _T_6463 : _T_6470; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_lo_hi_3 = _T_1768 ? {{56'd0}, _T_6444} : _T_6471; // @[Valu.scala 171:11]
  wire [7:0] _T_6473 = io_vd[119:112]; // @[Valu.scala 171:33]
  wire [63:0] _T_6491 = _T_1841 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6492 = _T_1835 ? {{56'd0}, _T_6473} : _T_6491; // @[Valu.scala 173:32]
  wire [63:0] _T_6499 = _T_4965 ? {{56'd0}, _T_6473} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6500 = _T_1829 ? _T_6492 : _T_6499; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_hi_lo_3 = _T_1826 ? {{56'd0}, _T_6473} : _T_6500; // @[Valu.scala 171:11]
  wire [7:0] _T_6502 = io_vd[127:120]; // @[Valu.scala 171:33]
  wire [63:0] _T_6520 = _T_1899 ? 64'hffffffffffffffff : {{56'd0}, _T_3907}; // @[Valu.scala 174:36]
  wire [63:0] _T_6521 = _T_1893 ? {{56'd0}, _T_6502} : _T_6520; // @[Valu.scala 173:32]
  wire [63:0] _T_6528 = _T_5038 ? {{56'd0}, _T_6502} : 64'hffffffffffffffff; // @[Valu.scala 176:12]
  wire [63:0] _T_6529 = _T_1887 ? _T_6521 : _T_6528; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_hi_hi_3 = _T_1884 ? {{56'd0}, _T_6502} : _T_6529; // @[Valu.scala 171:11]
  wire [511:0] lo_19 = {lo_hi_hi_hi_3,lo_hi_hi_lo_3,lo_hi_lo_hi_3,lo_hi_lo_lo_3,lo_lo_hi_hi_3,lo_lo_hi_lo_3,
    lo_lo_lo_hi_3,lo_lo_lo_lo_3}; // @[Cat.scala 30:58]
  wire [1023:0] _T_6531 = {hi_hi_hi_hi_3,hi_hi_hi_lo_3,hi_hi_lo_hi_3,hi_hi_lo_lo_3,hi_lo_hi_hi_3,hi_lo_hi_lo_3,
    hi_lo_lo_hi_3,hi_lo_lo_lo_3,lo_19}; // @[Valu.scala 179:24]
  wire [1023:0] _GEN_0 = _T_1010 ? $signed(_T_6531) : $signed(1024'sh0); // @[Valu.scala 250:49 Valu.scala 252:33 Valu.scala 196:13]
  wire [1023:0] _GEN_1 = _T_540 ? $signed({{512{_T_6062[511]}},_T_6062}) : $signed(_GEN_0); // @[Valu.scala 247:49 Valu.scala 249:33]
  wire [1023:0] _GEN_2 = _T_302 ? $signed({{768{_T_5825[255]}},_T_5825}) : $signed(_GEN_1); // @[Valu.scala 244:49 Valu.scala 246:33]
  wire [1023:0] _GEN_3 = _T_180 ? $signed({{896{_T_5704[127]}},_T_5704}) : $signed(_GEN_2); // @[Valu.scala 241:43 Valu.scala 243:33]
  wire [1023:0] _GEN_4 = io_vd_addr == 5'h0 ? $signed({{896{_T_5641[127]}},_T_5641}) : $signed(_GEN_3); // @[Valu.scala 238:37 Valu.scala 239:29]
  wire [127:0] _T_6535 = {96'h0,io_in_B}; // @[Valu.scala 260:57]
  wire [63:0] _T_6557 = {32'h0,io_in_B}; // @[Valu.scala 174:167]
  wire [63:0] _T_6558 = _T_199 ? 64'hffffffffffffffff : _T_6557; // @[Valu.scala 174:36]
  wire [63:0] _T_6559 = _T_193 ? _T_5646 : _T_6558; // @[Valu.scala 173:32]
  wire [63:0] _T_6567 = _T_187 ? _T_6559 : 64'hffffffffffffffff; // @[Valu.scala 172:11]
  wire [63:0] lo_22 = _T_184 ? _T_5646 : _T_6567; // @[Valu.scala 171:11]
  wire [63:0] _T_6587 = _T_257 ? 64'hffffffffffffffff : _T_6557; // @[Valu.scala 174:36]
  wire [63:0] _T_6588 = _T_251 ? _T_5675 : _T_6587; // @[Valu.scala 173:32]
  wire [63:0] _T_6596 = _T_245 ? _T_6588 : _T_5701; // @[Valu.scala 172:11]
  wire [63:0] hi_22 = _T_242 ? _T_5675 : _T_6596; // @[Valu.scala 171:11]
  wire [127:0] _T_6598 = {hi_22,lo_22}; // @[Valu.scala 179:24]
  wire [31:0] _T_6620 = io_in_B; // @[Valu.scala 174:167]
  wire [63:0] _T_6621 = _T_199 ? 64'hffffffffffffffff : {{32'd0}, _T_6620}; // @[Valu.scala 174:36]
  wire [63:0] _T_6622 = _T_193 ? {{32'd0}, _T_5709} : _T_6621; // @[Valu.scala 173:32]
  wire [63:0] _T_6630 = _T_187 ? _T_6622 : 64'hffffffffffffffff; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_12 = _T_184 ? {{32'd0}, _T_5709} : _T_6630; // @[Valu.scala 171:11]
  wire [63:0] _T_6650 = _T_257 ? 64'hffffffffffffffff : {{32'd0}, _T_6620}; // @[Valu.scala 174:36]
  wire [63:0] _T_6651 = _T_251 ? {{32'd0}, _T_5738} : _T_6650; // @[Valu.scala 173:32]
  wire [63:0] _T_6659 = _T_245 ? _T_6651 : _T_5764; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_12 = _T_242 ? {{32'd0}, _T_5738} : _T_6659; // @[Valu.scala 171:11]
  wire [63:0] _T_6679 = _T_437 ? 64'hffffffffffffffff : {{32'd0}, _T_6620}; // @[Valu.scala 174:36]
  wire [63:0] _T_6680 = _T_431 ? {{32'd0}, _T_5767} : _T_6679; // @[Valu.scala 173:32]
  wire [63:0] _T_6688 = _T_425 ? _T_6680 : _T_5793; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_12 = _T_422 ? {{32'd0}, _T_5767} : _T_6688; // @[Valu.scala 171:11]
  wire [63:0] _T_6708 = _T_495 ? 64'hffffffffffffffff : {{32'd0}, _T_6620}; // @[Valu.scala 174:36]
  wire [63:0] _T_6709 = _T_489 ? {{32'd0}, _T_5796} : _T_6708; // @[Valu.scala 173:32]
  wire [63:0] _T_6717 = _T_483 ? _T_6709 : _T_5822; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_12 = _T_480 ? {{32'd0}, _T_5796} : _T_6717; // @[Valu.scala 171:11]
  wire [255:0] _T_6719 = {hi_hi_12,hi_lo_12,lo_hi_12,lo_lo_12}; // @[Valu.scala 179:24]
  wire [7:0] _T_6741 = io_in_B[7:0]; // @[Valu.scala 174:167]
  wire [63:0] _T_6742 = _T_199 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_6743 = _T_193 ? {{56'd0}, _T_6067} : _T_6742; // @[Valu.scala 173:32]
  wire [63:0] _T_6751 = _T_187 ? _T_6743 : 64'hffffffffffffffff; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_lo_lo_4 = _T_184 ? {{56'd0}, _T_6067} : _T_6751; // @[Valu.scala 171:11]
  wire [63:0] _T_6771 = _T_257 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_6772 = _T_251 ? {{56'd0}, _T_6096} : _T_6771; // @[Valu.scala 173:32]
  wire [63:0] _T_6780 = _T_245 ? _T_6772 : _T_6122; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_lo_hi_4 = _T_242 ? {{56'd0}, _T_6096} : _T_6780; // @[Valu.scala 171:11]
  wire [63:0] _T_6800 = _T_437 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_6801 = _T_431 ? {{56'd0}, _T_6125} : _T_6800; // @[Valu.scala 173:32]
  wire [63:0] _T_6809 = _T_425 ? _T_6801 : _T_6151; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_hi_lo_4 = _T_422 ? {{56'd0}, _T_6125} : _T_6809; // @[Valu.scala 171:11]
  wire [63:0] _T_6829 = _T_495 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_6830 = _T_489 ? {{56'd0}, _T_6154} : _T_6829; // @[Valu.scala 173:32]
  wire [63:0] _T_6838 = _T_483 ? _T_6830 : _T_6180; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_hi_hi_4 = _T_480 ? {{56'd0}, _T_6154} : _T_6838; // @[Valu.scala 171:11]
  wire [63:0] _T_6858 = _T_791 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_6859 = _T_785 ? {{56'd0}, _T_6183} : _T_6858; // @[Valu.scala 173:32]
  wire [63:0] _T_6867 = _T_779 ? _T_6859 : _T_6209; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_lo_lo_4 = _T_776 ? {{56'd0}, _T_6183} : _T_6867; // @[Valu.scala 171:11]
  wire [63:0] _T_6887 = _T_849 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_6888 = _T_843 ? {{56'd0}, _T_6212} : _T_6887; // @[Valu.scala 173:32]
  wire [63:0] _T_6896 = _T_837 ? _T_6888 : _T_6238; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_lo_hi_4 = _T_834 ? {{56'd0}, _T_6212} : _T_6896; // @[Valu.scala 171:11]
  wire [63:0] _T_6916 = _T_907 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_6917 = _T_901 ? {{56'd0}, _T_6241} : _T_6916; // @[Valu.scala 173:32]
  wire [63:0] _T_6925 = _T_895 ? _T_6917 : _T_6267; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_hi_lo_4 = _T_892 ? {{56'd0}, _T_6241} : _T_6925; // @[Valu.scala 171:11]
  wire [63:0] _T_6945 = _T_965 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_6946 = _T_959 ? {{56'd0}, _T_6270} : _T_6945; // @[Valu.scala 173:32]
  wire [63:0] _T_6954 = _T_953 ? _T_6946 : _T_6296; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_hi_hi_4 = _T_950 ? {{56'd0}, _T_6270} : _T_6954; // @[Valu.scala 171:11]
  wire [63:0] _T_6974 = _T_1493 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_6975 = _T_1487 ? {{56'd0}, _T_6299} : _T_6974; // @[Valu.scala 173:32]
  wire [63:0] _T_6983 = _T_1481 ? _T_6975 : _T_6325; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_lo_lo_4 = _T_1478 ? {{56'd0}, _T_6299} : _T_6983; // @[Valu.scala 171:11]
  wire [63:0] _T_7003 = _T_1551 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_7004 = _T_1545 ? {{56'd0}, _T_6328} : _T_7003; // @[Valu.scala 173:32]
  wire [63:0] _T_7012 = _T_1539 ? _T_7004 : _T_6354; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_lo_hi_4 = _T_1536 ? {{56'd0}, _T_6328} : _T_7012; // @[Valu.scala 171:11]
  wire [63:0] _T_7032 = _T_1609 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_7033 = _T_1603 ? {{56'd0}, _T_6357} : _T_7032; // @[Valu.scala 173:32]
  wire [63:0] _T_7041 = _T_1597 ? _T_7033 : _T_6383; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_hi_lo_4 = _T_1594 ? {{56'd0}, _T_6357} : _T_7041; // @[Valu.scala 171:11]
  wire [63:0] _T_7061 = _T_1667 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_7062 = _T_1661 ? {{56'd0}, _T_6386} : _T_7061; // @[Valu.scala 173:32]
  wire [63:0] _T_7070 = _T_1655 ? _T_7062 : _T_6412; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_hi_hi_4 = _T_1652 ? {{56'd0}, _T_6386} : _T_7070; // @[Valu.scala 171:11]
  wire [63:0] _T_7090 = _T_1725 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_7091 = _T_1719 ? {{56'd0}, _T_6415} : _T_7090; // @[Valu.scala 173:32]
  wire [63:0] _T_7099 = _T_1713 ? _T_7091 : _T_6441; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_lo_lo_4 = _T_1710 ? {{56'd0}, _T_6415} : _T_7099; // @[Valu.scala 171:11]
  wire [63:0] _T_7119 = _T_1783 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_7120 = _T_1777 ? {{56'd0}, _T_6444} : _T_7119; // @[Valu.scala 173:32]
  wire [63:0] _T_7128 = _T_1771 ? _T_7120 : _T_6470; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_lo_hi_4 = _T_1768 ? {{56'd0}, _T_6444} : _T_7128; // @[Valu.scala 171:11]
  wire [63:0] _T_7148 = _T_1841 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_7149 = _T_1835 ? {{56'd0}, _T_6473} : _T_7148; // @[Valu.scala 173:32]
  wire [63:0] _T_7157 = _T_1829 ? _T_7149 : _T_6499; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_hi_lo_4 = _T_1826 ? {{56'd0}, _T_6473} : _T_7157; // @[Valu.scala 171:11]
  wire [63:0] _T_7177 = _T_1899 ? 64'hffffffffffffffff : {{56'd0}, _T_6741}; // @[Valu.scala 174:36]
  wire [63:0] _T_7178 = _T_1893 ? {{56'd0}, _T_6502} : _T_7177; // @[Valu.scala 173:32]
  wire [63:0] _T_7186 = _T_1887 ? _T_7178 : _T_6528; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_hi_hi_4 = _T_1884 ? {{56'd0}, _T_6502} : _T_7186; // @[Valu.scala 171:11]
  wire [511:0] lo_24 = {lo_hi_hi_hi_4,lo_hi_hi_lo_4,lo_hi_lo_hi_4,lo_hi_lo_lo_4,lo_lo_hi_hi_4,lo_lo_hi_lo_4,
    lo_lo_lo_hi_4,lo_lo_lo_lo_4}; // @[Cat.scala 30:58]
  wire [1023:0] _T_7188 = {hi_hi_hi_hi_4,hi_hi_hi_lo_4,hi_hi_lo_hi_4,hi_hi_lo_lo_4,hi_lo_hi_hi_4,hi_lo_hi_lo_4,
    hi_lo_lo_hi_4,hi_lo_lo_lo_4,lo_24}; // @[Valu.scala 179:24]
  wire [15:0] _T_7210 = io_in_B[15:0]; // @[Valu.scala 174:167]
  wire [63:0] _T_7211 = _T_199 ? 64'hffffffffffffffff : {{48'd0}, _T_7210}; // @[Valu.scala 174:36]
  wire [63:0] _T_7212 = _T_193 ? {{48'd0}, _T_5830} : _T_7211; // @[Valu.scala 173:32]
  wire [63:0] _T_7220 = _T_187 ? _T_7212 : 64'hffffffffffffffff; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_lo_9 = _T_184 ? {{48'd0}, _T_5830} : _T_7220; // @[Valu.scala 171:11]
  wire [63:0] _T_7240 = _T_257 ? 64'hffffffffffffffff : {{48'd0}, _T_7210}; // @[Valu.scala 174:36]
  wire [63:0] _T_7241 = _T_251 ? {{48'd0}, _T_5859} : _T_7240; // @[Valu.scala 173:32]
  wire [63:0] _T_7249 = _T_245 ? _T_7241 : _T_5885; // @[Valu.scala 172:11]
  wire [63:0] lo_lo_hi_9 = _T_242 ? {{48'd0}, _T_5859} : _T_7249; // @[Valu.scala 171:11]
  wire [63:0] _T_7269 = _T_437 ? 64'hffffffffffffffff : {{48'd0}, _T_7210}; // @[Valu.scala 174:36]
  wire [63:0] _T_7270 = _T_431 ? {{48'd0}, _T_5888} : _T_7269; // @[Valu.scala 173:32]
  wire [63:0] _T_7278 = _T_425 ? _T_7270 : _T_5914; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_lo_9 = _T_422 ? {{48'd0}, _T_5888} : _T_7278; // @[Valu.scala 171:11]
  wire [63:0] _T_7298 = _T_495 ? 64'hffffffffffffffff : {{48'd0}, _T_7210}; // @[Valu.scala 174:36]
  wire [63:0] _T_7299 = _T_489 ? {{48'd0}, _T_5917} : _T_7298; // @[Valu.scala 173:32]
  wire [63:0] _T_7307 = _T_483 ? _T_7299 : _T_5943; // @[Valu.scala 172:11]
  wire [63:0] lo_hi_hi_9 = _T_480 ? {{48'd0}, _T_5917} : _T_7307; // @[Valu.scala 171:11]
  wire [63:0] _T_7327 = _T_791 ? 64'hffffffffffffffff : {{48'd0}, _T_7210}; // @[Valu.scala 174:36]
  wire [63:0] _T_7328 = _T_785 ? {{48'd0}, _T_5946} : _T_7327; // @[Valu.scala 173:32]
  wire [63:0] _T_7336 = _T_779 ? _T_7328 : _T_5972; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_lo_9 = _T_776 ? {{48'd0}, _T_5946} : _T_7336; // @[Valu.scala 171:11]
  wire [63:0] _T_7356 = _T_849 ? 64'hffffffffffffffff : {{48'd0}, _T_7210}; // @[Valu.scala 174:36]
  wire [63:0] _T_7357 = _T_843 ? {{48'd0}, _T_5975} : _T_7356; // @[Valu.scala 173:32]
  wire [63:0] _T_7365 = _T_837 ? _T_7357 : _T_6001; // @[Valu.scala 172:11]
  wire [63:0] hi_lo_hi_9 = _T_834 ? {{48'd0}, _T_5975} : _T_7365; // @[Valu.scala 171:11]
  wire [63:0] _T_7385 = _T_907 ? 64'hffffffffffffffff : {{48'd0}, _T_7210}; // @[Valu.scala 174:36]
  wire [63:0] _T_7386 = _T_901 ? {{48'd0}, _T_6004} : _T_7385; // @[Valu.scala 173:32]
  wire [63:0] _T_7394 = _T_895 ? _T_7386 : _T_6030; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_lo_9 = _T_892 ? {{48'd0}, _T_6004} : _T_7394; // @[Valu.scala 171:11]
  wire [63:0] _T_7414 = _T_965 ? 64'hffffffffffffffff : {{48'd0}, _T_7210}; // @[Valu.scala 174:36]
  wire [63:0] _T_7415 = _T_959 ? {{48'd0}, _T_6033} : _T_7414; // @[Valu.scala 173:32]
  wire [63:0] _T_7423 = _T_953 ? _T_7415 : _T_6059; // @[Valu.scala 172:11]
  wire [63:0] hi_hi_hi_9 = _T_950 ? {{48'd0}, _T_6033} : _T_7423; // @[Valu.scala 171:11]
  wire [511:0] _T_7425 = {hi_hi_hi_9,hi_hi_lo_9,hi_lo_hi_9,hi_lo_lo_9,lo_hi_hi_9,lo_hi_lo_9,lo_lo_hi_9,lo_lo_lo_9}; // @[Valu.scala 179:24]
  wire [511:0] _GEN_5 = _T_540 ? $signed(_T_7425) : $signed(512'sh0); // @[Valu.scala 272:53 Valu.scala 274:33 Valu.scala 196:13]
  wire [1023:0] _GEN_6 = _T_1010 ? $signed(_T_7188) : $signed({{512{_GEN_5[511]}},_GEN_5}); // @[Valu.scala 269:49 Valu.scala 271:33]
  wire [1023:0] _GEN_7 = _T_302 ? $signed({{768{_T_6719[255]}},_T_6719}) : $signed(_GEN_6); // @[Valu.scala 266:49 Valu.scala 268:33]
  wire [1023:0] _GEN_8 = _T_180 ? $signed({{896{_T_6598[127]}},_T_6598}) : $signed(_GEN_7); // @[Valu.scala 262:43 Valu.scala 264:33]
  wire [1023:0] _GEN_9 = _T_5639 ? $signed({{896{_T_6535[127]}},_T_6535}) : $signed(_GEN_8); // @[Valu.scala 259:37 Valu.scala 260:29]
  wire [63:0] _T_7448 = _T_199 ? 64'hffffffffffffffff : _T_213; // @[Valu.scala 186:36]
  wire [63:0] _T_7449 = _T_193 ? _T_5646 : _T_7448; // @[Valu.scala 185:32]
  wire [63:0] _T_7457 = _T_187 ? _T_7449 : 64'hffffffffffffffff; // @[Valu.scala 184:11]
  wire [63:0] lo_26 = _T_184 ? _T_5646 : _T_7457; // @[Valu.scala 183:11]
  wire [63:0] _T_7477 = _T_257 ? 64'hffffffffffffffff : _T_271; // @[Valu.scala 186:36]
  wire [63:0] _T_7478 = _T_251 ? _T_5675 : _T_7477; // @[Valu.scala 185:32]
  wire [63:0] _T_7486 = _T_245 ? _T_7478 : _T_5701; // @[Valu.scala 184:11]
  wire [63:0] hi_26 = _T_242 ? _T_5675 : _T_7486; // @[Valu.scala 183:11]
  wire [127:0] _T_7488 = {hi_26,lo_26}; // @[Valu.scala 191:24]
  wire [63:0] _T_7509 = _T_199 ? 64'hffffffffffffffff : {{32'd0}, _T_335}; // @[Valu.scala 186:36]
  wire [63:0] _T_7510 = _T_193 ? {{32'd0}, _T_5709} : _T_7509; // @[Valu.scala 185:32]
  wire [63:0] _T_7518 = _T_187 ? _T_7510 : 64'hffffffffffffffff; // @[Valu.scala 184:11]
  wire [63:0] lo_lo_15 = _T_184 ? {{32'd0}, _T_5709} : _T_7518; // @[Valu.scala 183:11]
  wire [63:0] _T_7538 = _T_257 ? 64'hffffffffffffffff : {{32'd0}, _T_393}; // @[Valu.scala 186:36]
  wire [63:0] _T_7539 = _T_251 ? {{32'd0}, _T_5738} : _T_7538; // @[Valu.scala 185:32]
  wire [63:0] _T_7547 = _T_245 ? _T_7539 : _T_5764; // @[Valu.scala 184:11]
  wire [63:0] lo_hi_15 = _T_242 ? {{32'd0}, _T_5738} : _T_7547; // @[Valu.scala 183:11]
  wire [63:0] _T_7567 = _T_437 ? 64'hffffffffffffffff : {{32'd0}, _T_451}; // @[Valu.scala 186:36]
  wire [63:0] _T_7568 = _T_431 ? {{32'd0}, _T_5767} : _T_7567; // @[Valu.scala 185:32]
  wire [63:0] _T_7576 = _T_425 ? _T_7568 : _T_5793; // @[Valu.scala 184:11]
  wire [63:0] hi_lo_15 = _T_422 ? {{32'd0}, _T_5767} : _T_7576; // @[Valu.scala 183:11]
  wire [63:0] _T_7596 = _T_495 ? 64'hffffffffffffffff : {{32'd0}, _T_509}; // @[Valu.scala 186:36]
  wire [63:0] _T_7597 = _T_489 ? {{32'd0}, _T_5796} : _T_7596; // @[Valu.scala 185:32]
  wire [63:0] _T_7605 = _T_483 ? _T_7597 : _T_5822; // @[Valu.scala 184:11]
  wire [63:0] hi_hi_15 = _T_480 ? {{32'd0}, _T_5796} : _T_7605; // @[Valu.scala 183:11]
  wire [255:0] _T_7607 = {hi_hi_15,hi_lo_15,lo_hi_15,lo_lo_15}; // @[Valu.scala 191:24]
  wire [63:0] _T_7628 = _T_199 ? 64'hffffffffffffffff : {{56'd0}, _T_1043}; // @[Valu.scala 186:36]
  wire [63:0] _T_7629 = _T_193 ? {{56'd0}, _T_6067} : _T_7628; // @[Valu.scala 185:32]
  wire [63:0] _T_7637 = _T_187 ? _T_7629 : 64'hffffffffffffffff; // @[Valu.scala 184:11]
  wire [63:0] lo_lo_lo_lo_5 = _T_184 ? {{56'd0}, _T_6067} : _T_7637; // @[Valu.scala 183:11]
  wire [63:0] _T_7657 = _T_257 ? 64'hffffffffffffffff : {{56'd0}, _T_1101}; // @[Valu.scala 186:36]
  wire [63:0] _T_7658 = _T_251 ? {{56'd0}, _T_6096} : _T_7657; // @[Valu.scala 185:32]
  wire [63:0] _T_7666 = _T_245 ? _T_7658 : _T_6122; // @[Valu.scala 184:11]
  wire [63:0] lo_lo_lo_hi_5 = _T_242 ? {{56'd0}, _T_6096} : _T_7666; // @[Valu.scala 183:11]
  wire [63:0] _T_7686 = _T_437 ? 64'hffffffffffffffff : {{56'd0}, _T_1159}; // @[Valu.scala 186:36]
  wire [63:0] _T_7687 = _T_431 ? {{56'd0}, _T_6125} : _T_7686; // @[Valu.scala 185:32]
  wire [63:0] _T_7695 = _T_425 ? _T_7687 : _T_6151; // @[Valu.scala 184:11]
  wire [63:0] lo_lo_hi_lo_5 = _T_422 ? {{56'd0}, _T_6125} : _T_7695; // @[Valu.scala 183:11]
  wire [63:0] _T_7715 = _T_495 ? 64'hffffffffffffffff : {{56'd0}, _T_1217}; // @[Valu.scala 186:36]
  wire [63:0] _T_7716 = _T_489 ? {{56'd0}, _T_6154} : _T_7715; // @[Valu.scala 185:32]
  wire [63:0] _T_7724 = _T_483 ? _T_7716 : _T_6180; // @[Valu.scala 184:11]
  wire [63:0] lo_lo_hi_hi_5 = _T_480 ? {{56'd0}, _T_6154} : _T_7724; // @[Valu.scala 183:11]
  wire [63:0] _T_7744 = _T_791 ? 64'hffffffffffffffff : {{56'd0}, _T_1275}; // @[Valu.scala 186:36]
  wire [63:0] _T_7745 = _T_785 ? {{56'd0}, _T_6183} : _T_7744; // @[Valu.scala 185:32]
  wire [63:0] _T_7753 = _T_779 ? _T_7745 : _T_6209; // @[Valu.scala 184:11]
  wire [63:0] lo_hi_lo_lo_5 = _T_776 ? {{56'd0}, _T_6183} : _T_7753; // @[Valu.scala 183:11]
  wire [63:0] _T_7773 = _T_849 ? 64'hffffffffffffffff : {{56'd0}, _T_1333}; // @[Valu.scala 186:36]
  wire [63:0] _T_7774 = _T_843 ? {{56'd0}, _T_6212} : _T_7773; // @[Valu.scala 185:32]
  wire [63:0] _T_7782 = _T_837 ? _T_7774 : _T_6238; // @[Valu.scala 184:11]
  wire [63:0] lo_hi_lo_hi_5 = _T_834 ? {{56'd0}, _T_6212} : _T_7782; // @[Valu.scala 183:11]
  wire [63:0] _T_7802 = _T_907 ? 64'hffffffffffffffff : {{56'd0}, _T_1391}; // @[Valu.scala 186:36]
  wire [63:0] _T_7803 = _T_901 ? {{56'd0}, _T_6241} : _T_7802; // @[Valu.scala 185:32]
  wire [63:0] _T_7811 = _T_895 ? _T_7803 : _T_6267; // @[Valu.scala 184:11]
  wire [63:0] lo_hi_hi_lo_5 = _T_892 ? {{56'd0}, _T_6241} : _T_7811; // @[Valu.scala 183:11]
  wire [63:0] _T_7831 = _T_965 ? 64'hffffffffffffffff : {{56'd0}, _T_1449}; // @[Valu.scala 186:36]
  wire [63:0] _T_7832 = _T_959 ? {{56'd0}, _T_6270} : _T_7831; // @[Valu.scala 185:32]
  wire [63:0] _T_7840 = _T_953 ? _T_7832 : _T_6296; // @[Valu.scala 184:11]
  wire [63:0] lo_hi_hi_hi_5 = _T_950 ? {{56'd0}, _T_6270} : _T_7840; // @[Valu.scala 183:11]
  wire [63:0] _T_7860 = _T_1493 ? 64'hffffffffffffffff : {{56'd0}, _T_1507}; // @[Valu.scala 186:36]
  wire [63:0] _T_7861 = _T_1487 ? {{56'd0}, _T_6299} : _T_7860; // @[Valu.scala 185:32]
  wire [63:0] _T_7869 = _T_1481 ? _T_7861 : _T_6325; // @[Valu.scala 184:11]
  wire [63:0] hi_lo_lo_lo_5 = _T_1478 ? {{56'd0}, _T_6299} : _T_7869; // @[Valu.scala 183:11]
  wire [63:0] _T_7889 = _T_1551 ? 64'hffffffffffffffff : {{56'd0}, _T_1565}; // @[Valu.scala 186:36]
  wire [63:0] _T_7890 = _T_1545 ? {{56'd0}, _T_6328} : _T_7889; // @[Valu.scala 185:32]
  wire [63:0] _T_7898 = _T_1539 ? _T_7890 : _T_6354; // @[Valu.scala 184:11]
  wire [63:0] hi_lo_lo_hi_5 = _T_1536 ? {{56'd0}, _T_6328} : _T_7898; // @[Valu.scala 183:11]
  wire [63:0] _T_7918 = _T_1609 ? 64'hffffffffffffffff : {{56'd0}, _T_1623}; // @[Valu.scala 186:36]
  wire [63:0] _T_7919 = _T_1603 ? {{56'd0}, _T_6357} : _T_7918; // @[Valu.scala 185:32]
  wire [63:0] _T_7927 = _T_1597 ? _T_7919 : _T_6383; // @[Valu.scala 184:11]
  wire [63:0] hi_lo_hi_lo_5 = _T_1594 ? {{56'd0}, _T_6357} : _T_7927; // @[Valu.scala 183:11]
  wire [63:0] _T_7947 = _T_1667 ? 64'hffffffffffffffff : {{56'd0}, _T_1681}; // @[Valu.scala 186:36]
  wire [63:0] _T_7948 = _T_1661 ? {{56'd0}, _T_6386} : _T_7947; // @[Valu.scala 185:32]
  wire [63:0] _T_7956 = _T_1655 ? _T_7948 : _T_6412; // @[Valu.scala 184:11]
  wire [63:0] hi_lo_hi_hi_5 = _T_1652 ? {{56'd0}, _T_6386} : _T_7956; // @[Valu.scala 183:11]
  wire [63:0] _T_7976 = _T_1725 ? 64'hffffffffffffffff : {{56'd0}, _T_1739}; // @[Valu.scala 186:36]
  wire [63:0] _T_7977 = _T_1719 ? {{56'd0}, _T_6415} : _T_7976; // @[Valu.scala 185:32]
  wire [63:0] _T_7985 = _T_1713 ? _T_7977 : _T_6441; // @[Valu.scala 184:11]
  wire [63:0] hi_hi_lo_lo_5 = _T_1710 ? {{56'd0}, _T_6415} : _T_7985; // @[Valu.scala 183:11]
  wire [63:0] _T_8005 = _T_1783 ? 64'hffffffffffffffff : {{56'd0}, _T_1797}; // @[Valu.scala 186:36]
  wire [63:0] _T_8006 = _T_1777 ? {{56'd0}, _T_6444} : _T_8005; // @[Valu.scala 185:32]
  wire [63:0] _T_8014 = _T_1771 ? _T_8006 : _T_6470; // @[Valu.scala 184:11]
  wire [63:0] hi_hi_lo_hi_5 = _T_1768 ? {{56'd0}, _T_6444} : _T_8014; // @[Valu.scala 183:11]
  wire [63:0] _T_8034 = _T_1841 ? 64'hffffffffffffffff : {{56'd0}, _T_1855}; // @[Valu.scala 186:36]
  wire [63:0] _T_8035 = _T_1835 ? {{56'd0}, _T_6473} : _T_8034; // @[Valu.scala 185:32]
  wire [63:0] _T_8043 = _T_1829 ? _T_8035 : _T_6499; // @[Valu.scala 184:11]
  wire [63:0] hi_hi_hi_lo_5 = _T_1826 ? {{56'd0}, _T_6473} : _T_8043; // @[Valu.scala 183:11]
  wire [63:0] _T_8063 = _T_1899 ? 64'hffffffffffffffff : {{56'd0}, _T_1913}; // @[Valu.scala 186:36]
  wire [63:0] _T_8064 = _T_1893 ? {{56'd0}, _T_6502} : _T_8063; // @[Valu.scala 185:32]
  wire [63:0] _T_8072 = _T_1887 ? _T_8064 : _T_6528; // @[Valu.scala 184:11]
  wire [63:0] hi_hi_hi_hi_5 = _T_1884 ? {{56'd0}, _T_6502} : _T_8072; // @[Valu.scala 183:11]
  wire [511:0] lo_28 = {lo_hi_hi_hi_5,lo_hi_hi_lo_5,lo_hi_lo_hi_5,lo_hi_lo_lo_5,lo_lo_hi_hi_5,lo_lo_hi_lo_5,
    lo_lo_lo_hi_5,lo_lo_lo_lo_5}; // @[Cat.scala 30:58]
  wire [1023:0] _T_8074 = {hi_hi_hi_hi_5,hi_hi_hi_lo_5,hi_hi_lo_hi_5,hi_hi_lo_lo_5,hi_lo_hi_hi_5,hi_lo_hi_lo_5,
    hi_lo_lo_hi_5,hi_lo_lo_lo_5,lo_28}; // @[Valu.scala 191:24]
  wire [63:0] _T_8095 = _T_199 ? 64'hffffffffffffffff : {{48'd0}, _T_573}; // @[Valu.scala 186:36]
  wire [63:0] _T_8096 = _T_193 ? {{48'd0}, _T_5830} : _T_8095; // @[Valu.scala 185:32]
  wire [63:0] _T_8104 = _T_187 ? _T_8096 : 64'hffffffffffffffff; // @[Valu.scala 184:11]
  wire [63:0] lo_lo_lo_11 = _T_184 ? {{48'd0}, _T_5830} : _T_8104; // @[Valu.scala 183:11]
  wire [63:0] _T_8124 = _T_257 ? 64'hffffffffffffffff : {{48'd0}, _T_631}; // @[Valu.scala 186:36]
  wire [63:0] _T_8125 = _T_251 ? {{48'd0}, _T_5859} : _T_8124; // @[Valu.scala 185:32]
  wire [63:0] _T_8133 = _T_245 ? _T_8125 : _T_5885; // @[Valu.scala 184:11]
  wire [63:0] lo_lo_hi_11 = _T_242 ? {{48'd0}, _T_5859} : _T_8133; // @[Valu.scala 183:11]
  wire [63:0] _T_8153 = _T_437 ? 64'hffffffffffffffff : {{48'd0}, _T_689}; // @[Valu.scala 186:36]
  wire [63:0] _T_8154 = _T_431 ? {{48'd0}, _T_5888} : _T_8153; // @[Valu.scala 185:32]
  wire [63:0] _T_8162 = _T_425 ? _T_8154 : _T_5914; // @[Valu.scala 184:11]
  wire [63:0] lo_hi_lo_11 = _T_422 ? {{48'd0}, _T_5888} : _T_8162; // @[Valu.scala 183:11]
  wire [63:0] _T_8182 = _T_495 ? 64'hffffffffffffffff : {{48'd0}, _T_747}; // @[Valu.scala 186:36]
  wire [63:0] _T_8183 = _T_489 ? {{48'd0}, _T_5917} : _T_8182; // @[Valu.scala 185:32]
  wire [63:0] _T_8191 = _T_483 ? _T_8183 : _T_5943; // @[Valu.scala 184:11]
  wire [63:0] lo_hi_hi_11 = _T_480 ? {{48'd0}, _T_5917} : _T_8191; // @[Valu.scala 183:11]
  wire [63:0] _T_8211 = _T_791 ? 64'hffffffffffffffff : {{48'd0}, _T_805}; // @[Valu.scala 186:36]
  wire [63:0] _T_8212 = _T_785 ? {{48'd0}, _T_5946} : _T_8211; // @[Valu.scala 185:32]
  wire [63:0] _T_8220 = _T_779 ? _T_8212 : _T_5972; // @[Valu.scala 184:11]
  wire [63:0] hi_lo_lo_11 = _T_776 ? {{48'd0}, _T_5946} : _T_8220; // @[Valu.scala 183:11]
  wire [63:0] _T_8240 = _T_849 ? 64'hffffffffffffffff : {{48'd0}, _T_863}; // @[Valu.scala 186:36]
  wire [63:0] _T_8241 = _T_843 ? {{48'd0}, _T_5975} : _T_8240; // @[Valu.scala 185:32]
  wire [63:0] _T_8249 = _T_837 ? _T_8241 : _T_6001; // @[Valu.scala 184:11]
  wire [63:0] hi_lo_hi_11 = _T_834 ? {{48'd0}, _T_5975} : _T_8249; // @[Valu.scala 183:11]
  wire [63:0] _T_8269 = _T_907 ? 64'hffffffffffffffff : {{48'd0}, _T_921}; // @[Valu.scala 186:36]
  wire [63:0] _T_8270 = _T_901 ? {{48'd0}, _T_6004} : _T_8269; // @[Valu.scala 185:32]
  wire [63:0] _T_8278 = _T_895 ? _T_8270 : _T_6030; // @[Valu.scala 184:11]
  wire [63:0] hi_hi_lo_11 = _T_892 ? {{48'd0}, _T_6004} : _T_8278; // @[Valu.scala 183:11]
  wire [63:0] _T_8298 = _T_965 ? 64'hffffffffffffffff : {{48'd0}, _T_979}; // @[Valu.scala 186:36]
  wire [63:0] _T_8299 = _T_959 ? {{48'd0}, _T_6033} : _T_8298; // @[Valu.scala 185:32]
  wire [63:0] _T_8307 = _T_953 ? _T_8299 : _T_6059; // @[Valu.scala 184:11]
  wire [63:0] hi_hi_hi_11 = _T_950 ? {{48'd0}, _T_6033} : _T_8307; // @[Valu.scala 183:11]
  wire [511:0] _T_8309 = {hi_hi_hi_11,hi_hi_lo_11,hi_lo_hi_11,hi_lo_lo_11,lo_hi_hi_11,lo_hi_lo_11,lo_lo_hi_11,
    lo_lo_lo_11}; // @[Valu.scala 191:24]
  wire [511:0] _GEN_10 = _T_540 ? $signed(_T_8309) : $signed(512'sh0); // @[Valu.scala 293:47 Valu.scala 294:23 Valu.scala 196:13]
  wire [1023:0] _GEN_11 = _T_1010 ? $signed(_T_8074) : $signed({{512{_GEN_10[511]}},_GEN_10}); // @[Valu.scala 291:41 Valu.scala 292:41]
  wire [1023:0] _GEN_12 = _T_302 ? $signed({{768{_T_7607[255]}},_T_7607}) : $signed(_GEN_11); // @[Valu.scala 288:41 Valu.scala 289:22]
  wire [1023:0] _GEN_13 = _T_180 ? $signed({{896{_T_7488[127]}},_T_7488}) : $signed(_GEN_12); // @[Valu.scala 285:39 Valu.scala 286:21]
  wire [1023:0] _GEN_14 = _T_5639 ? $signed({{896{io_vs1[127]}},io_vs1}) : $signed(_GEN_13); // @[Valu.scala 282:37 Valu.scala 283:29]
  wire [1023:0] _GEN_15 = io_aluc == 9'hb8 ? $signed(_GEN_14) : $signed(1024'sh0); // @[Valu.scala 281:38 Valu.scala 196:13]
  wire [1023:0] _GEN_16 = io_aluc == 9'hbb ? $signed(_GEN_9) : $signed(_GEN_15); // @[Valu.scala 258:38]
  wire [1023:0] _GEN_17 = io_aluc == 9'hbc ? $signed(_GEN_4) : $signed(_GEN_16); // @[Valu.scala 237:37]
  wire [1023:0] _GEN_18 = _T_540 & _T_3418 ? $signed({{896{_T_5637[127]}},_T_5637}) : $signed(_GEN_17); // @[Valu.scala 232:70 Valu.scala 234:25]
  wire [1023:0] _GEN_19 = _T_1010 & _T_3418 ? $signed({{896{_T_5045[127]}},_T_5045}) : $signed(_GEN_18); // @[Valu.scala 229:69 Valu.scala 231:25]
  wire [1023:0] _GEN_20 = _T_302 & _T_3418 ? $signed({{896{_T_3869[127]}},_T_3869}) : $signed(_GEN_19); // @[Valu.scala 226:69 Valu.scala 228:25]
  wire [1023:0] _GEN_21 = _T_180 & io_aluc[2:0] == 3'h4 ? $signed({{896{_T_3569[127]}},_T_3569}) : $signed(_GEN_20); // @[Valu.scala 223:68 Valu.scala 225:25]
  wire [1023:0] _GEN_22 = _T_540 & _T_1946 ? $signed({{896{_T_3415[127]}},_T_3415}) : $signed(_GEN_21); // @[Valu.scala 218:70 Valu.scala 220:25]
  wire [1023:0] _GEN_23 = _T_1010 & _T_1946 ? $signed({{896{_T_3023[127]}},_T_3023}) : $signed(_GEN_22); // @[Valu.scala 215:69 Valu.scala 217:25]
  wire [1023:0] _GEN_24 = _T_302 & _T_1946 ? $signed({{896{_T_2247[127]}},_T_2247}) : $signed(_GEN_23); // @[Valu.scala 212:69 Valu.scala 214:25]
  wire [1023:0] _GEN_25 = _T_180 & io_aluc[2:0] == 3'h3 ? $signed({{896{_T_2047[127]}},_T_2047}) : $signed(_GEN_24); // @[Valu.scala 209:69 Valu.scala 211:21]
  wire [1023:0] _GEN_26 = io_sew == 3'h0 & _T_182 ? $signed({{896{_T_1943[127]}},_T_1943}) : $signed(_GEN_25); // @[Valu.scala 205:74 Valu.scala 206:25]
  wire [1023:0] _GEN_27 = io_sew == 3'h1 & _T_182 ? $signed({{896{_T_1009[127]}},_T_1009}) : $signed(_GEN_26); // @[Valu.scala 203:70 Valu.scala 204:25]
  wire [1023:0] _GEN_28 = io_sew == 3'h2 & _T_182 ? $signed({{896{_T_539[127]}},_T_539}) : $signed(_GEN_27); // @[Valu.scala 201:71 Valu.scala 202:25]
  wire [1023:0] _GEN_29 = io_sew == 3'h3 & io_aluc[2:0] == 3'h0 ? $signed({{896{_T_301[127]}},_T_301}) : $signed(_GEN_28
    ); // @[Valu.scala 199:65 Valu.scala 200:25]
  assign io_v_output = _GEN_29[127:0];
  assign io_vs3 = io_vd; // @[Valu.scala 299:12]
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
  input  [127:0] io_vs3_data,
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
  input  [127:0] io_id_reg_vs3data,
  input  [4:0]   io_fu_ex_reg_vd,
  input  [4:0]   io_fu_mem_reg_vd,
  input  [4:0]   io_fu_reg_vs1,
  input  [4:0]   io_fu_reg_vs2,
  input  [4:0]   io_fu_reg_vs3,
  input          io_fu_ex_reg_write,
  input          io_fu_mem_reg_write,
  input          io_v_MemWrite,
  output [127:0] io_vec_alu_res,
  output [31:0]  io_vec_vl,
  output [4:0]   io_vec_rd_out,
  output [31:0]  io_vec_avl_o,
  output [31:0]  io_vec_valmax_o,
  output [127:0] io_vs3_data_o,
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
  wire [31:0] alu_io_input1; // @[Execute.scala 71:19]
  wire [31:0] alu_io_input2; // @[Execute.scala 71:19]
  wire [3:0] alu_io_aluCtl; // @[Execute.scala 71:19]
  wire [31:0] alu_io_result; // @[Execute.scala 71:19]
  wire [1:0] aluCtl_io_aluOp; // @[Execute.scala 72:22]
  wire  aluCtl_io_f7; // @[Execute.scala 72:22]
  wire [2:0] aluCtl_io_f3; // @[Execute.scala 72:22]
  wire  aluCtl_io_aluSrc; // @[Execute.scala 72:22]
  wire [3:0] aluCtl_io_out; // @[Execute.scala 72:22]
  wire [4:0] ForwardingUnit_io_ex_reg_rd; // @[Execute.scala 73:18]
  wire [4:0] ForwardingUnit_io_mem_reg_rd; // @[Execute.scala 73:18]
  wire [4:0] ForwardingUnit_io_reg_rs1; // @[Execute.scala 73:18]
  wire [4:0] ForwardingUnit_io_reg_rs2; // @[Execute.scala 73:18]
  wire  ForwardingUnit_io_ex_regWrite; // @[Execute.scala 73:18]
  wire  ForwardingUnit_io_mem_regWrite; // @[Execute.scala 73:18]
  wire [4:0] ForwardingUnit_io_ex_reg_vd; // @[Execute.scala 73:18]
  wire [4:0] ForwardingUnit_io_mem_reg_vd; // @[Execute.scala 73:18]
  wire [4:0] ForwardingUnit_io_reg_vs1; // @[Execute.scala 73:18]
  wire [4:0] ForwardingUnit_io_reg_vs2; // @[Execute.scala 73:18]
  wire [4:0] ForwardingUnit_io_reg_vs3; // @[Execute.scala 73:18]
  wire  ForwardingUnit_io_ex_reg_write; // @[Execute.scala 73:18]
  wire  ForwardingUnit_io_mem_reg_write; // @[Execute.scala 73:18]
  wire [1:0] ForwardingUnit_io_forwardA; // @[Execute.scala 73:18]
  wire [1:0] ForwardingUnit_io_forwardB; // @[Execute.scala 73:18]
  wire [1:0] ForwardingUnit_io_forwardC; // @[Execute.scala 73:18]
  wire [2:0] Vec_aluCtl_io_func3; // @[Execute.scala 123:26]
  wire [2:0] Vec_aluCtl_io_aluOp; // @[Execute.scala 123:26]
  wire [5:0] Vec_aluCtl_io_func6; // @[Execute.scala 123:26]
  wire [8:0] Vec_aluCtl_io_aluc; // @[Execute.scala 123:26]
  wire [31:0] vec_alu_io_in_A; // @[Execute.scala 134:23]
  wire [31:0] vec_alu_io_in_B; // @[Execute.scala 134:23]
  wire [127:0] vec_alu_io_vs1; // @[Execute.scala 134:23]
  wire [127:0] vec_alu_io_vs2; // @[Execute.scala 134:23]
  wire [127:0] vec_alu_io_vs0; // @[Execute.scala 134:23]
  wire [127:0] vec_alu_io_vd; // @[Execute.scala 134:23]
  wire [31:0] vec_alu_io_vl; // @[Execute.scala 134:23]
  wire [31:0] vec_alu_io_vstart; // @[Execute.scala 134:23]
  wire  vec_alu_io_vma; // @[Execute.scala 134:23]
  wire  vec_alu_io_vta; // @[Execute.scala 134:23]
  wire  vec_alu_io_vm; // @[Execute.scala 134:23]
  wire [4:0] vec_alu_io_vd_addr; // @[Execute.scala 134:23]
  wire [8:0] vec_alu_io_aluc; // @[Execute.scala 134:23]
  wire [2:0] vec_alu_io_sew; // @[Execute.scala 134:23]
  wire  vec_alu_io_v_ins; // @[Execute.scala 134:23]
  wire [127:0] vec_alu_io_v_output; // @[Execute.scala 134:23]
  wire [127:0] vec_alu_io_vs3; // @[Execute.scala 134:23]
  wire [31:0] vec_config_io_zimm; // @[Execute.scala 200:26]
  wire [4:0] vec_config_io_rs1; // @[Execute.scala 200:26]
  wire [4:0] vec_config_io_rd; // @[Execute.scala 200:26]
  wire [31:0] vec_config_io_rs1_readdata; // @[Execute.scala 200:26]
  wire [31:0] vec_config_io_current_vl; // @[Execute.scala 200:26]
  wire [31:0] vec_config_io_lmul; // @[Execute.scala 200:26]
  wire [31:0] vec_config_io_vl; // @[Execute.scala 200:26]
  wire [4:0] vec_config_io_rd_out; // @[Execute.scala 200:26]
  wire [31:0] vec_config_io_avl_o; // @[Execute.scala 200:26]
  wire [31:0] vec_config_io_valmax_o; // @[Execute.scala 200:26]
  wire  MDU_clock; // @[Execute.scala 232:22]
  wire  MDU_reset; // @[Execute.scala 232:22]
  wire [31:0] MDU_io_src_a; // @[Execute.scala 232:22]
  wire [31:0] MDU_io_src_b; // @[Execute.scala 232:22]
  wire [4:0] MDU_io_op; // @[Execute.scala 232:22]
  wire  MDU_io_valid; // @[Execute.scala 232:22]
  wire  MDU_io_ready; // @[Execute.scala 232:22]
  wire  MDU_io_output_valid; // @[Execute.scala 232:22]
  wire [31:0] MDU_io_output_bits; // @[Execute.scala 232:22]
  wire  _T_4 = ForwardingUnit_io_forwardA == 2'h0; // @[Execute.scala 95:20]
  wire  _T_5 = ForwardingUnit_io_forwardA == 2'h1; // @[Execute.scala 96:20]
  wire  _T_6 = ForwardingUnit_io_forwardA == 2'h2; // @[Execute.scala 97:20]
  wire [31:0] _T_7 = _T_6 ? io_wb_result : 32'h0; // @[Mux.scala 98:16]
  wire [31:0] _T_8 = _T_5 ? io_mem_result : _T_7; // @[Mux.scala 98:16]
  wire [31:0] inputMux1 = _T_4 ? io_readData1 : _T_8; // @[Mux.scala 98:16]
  wire  _T_9 = ForwardingUnit_io_forwardB == 2'h0; // @[Execute.scala 103:20]
  wire  _T_10 = ForwardingUnit_io_forwardB == 2'h1; // @[Execute.scala 104:20]
  wire  _T_11 = ForwardingUnit_io_forwardB == 2'h2; // @[Execute.scala 105:20]
  wire [31:0] _T_12 = _T_11 ? io_wb_result : 32'h0; // @[Mux.scala 98:16]
  wire [31:0] _T_13 = _T_10 ? io_mem_result : _T_12; // @[Mux.scala 98:16]
  wire [31:0] inputMux2 = _T_9 ? io_readData2 : _T_13; // @[Mux.scala 98:16]
  wire  _T_14 = io_ctl_aluSrc1 == 2'h1; // @[Execute.scala 112:23]
  wire  _T_15 = io_ctl_aluSrc1 == 2'h2; // @[Execute.scala 113:23]
  wire [31:0] _T_16 = _T_15 ? 32'h0 : inputMux1; // @[Mux.scala 98:16]
  wire [31:0] aluIn1 = _T_14 ? io_pcAddress : _T_16; // @[Mux.scala 98:16]
  wire [31:0] aluIn2 = io_ctl_aluSrc ? inputMux2 : io_immediate; // @[Execute.scala 116:19]
  wire [31:0] _GEN_0 = _T_6 ? $signed(io_wb_result) : $signed(io_readData1); // @[Execute.scala 140:34 Execute.scala 141:21 Execute.scala 143:21]
  wire [31:0] _GEN_1 = _T_5 ? $signed(io_mem_result) : $signed(_GEN_0); // @[Execute.scala 138:28 Execute.scala 139:21]
  wire [127:0] _GEN_2 = _T_6 ? $signed(io_vec_wb_res) : $signed(io_vs1_data); // @[Execute.scala 148:34 Execute.scala 149:20 Execute.scala 151:20]
  wire [127:0] _GEN_5 = ForwardingUnit_io_forwardC == 2'h2 ? $signed(io_vec_wb_res) : $signed(io_id_reg_vs3data); // @[Execute.scala 157:34 Execute.scala 159:19 Execute.scala 162:19]
  wire [31:0] _GEN_8 = _T_11 ? $signed(io_wb_result) : $signed(io_readData2); // @[Execute.scala 172:36 Execute.scala 173:23 Execute.scala 175:23]
  wire [31:0] _GEN_9 = _T_10 ? $signed(io_mem_result) : $signed(_GEN_8); // @[Execute.scala 170:30 Execute.scala 171:23]
  wire [31:0] _GEN_10 = io_v_ctl_exsel == 4'h4 & io_v_ctl_opBsel ? $signed(io_v_addi_imm) : $signed(_GEN_9); // @[Execute.scala 167:70 Execute.scala 168:21]
  wire [127:0] _GEN_12 = _T_11 ? $signed(io_vec_wb_res) : $signed(io_vs2_data); // @[Execute.scala 181:34 Execute.scala 182:20 Execute.scala 184:20]
  wire [10:0] _GEN_16 = io_v_ctl_vset ? io_id_ex_ins[30:20] : 11'h0; // @[Execute.scala 202:31 Execute.scala 203:24 Execute.scala 215:24]
  reg [31:0] REG; // @[Execute.scala 239:28]
  reg [31:0] REG_1; // @[Execute.scala 240:28]
  reg [2:0] REG_2; // @[Execute.scala 241:28]
  reg  REG_3; // @[Execute.scala 242:28]
  reg [5:0] REG_4; // @[Execute.scala 243:28]
  reg [5:0] REG_5; // @[Execute.scala 244:28]
  wire  _T_51 = io_func7 == 7'h1; // @[Execute.scala 246:19]
  wire  _T_59 = io_func7 == 7'h1 & (io_func3 == 3'h0 | io_func3 == 3'h1 | io_func3 == 3'h2 | io_func3 == 3'h3); // @[Execute.scala 246:27]
  wire  _T_70 = _T_51 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7); // @[Execute.scala 252:38]
  wire  _GEN_22 = _T_51 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7) | _T_59; // @[Execute.scala 252:120 Execute.scala 253:20]
  wire  _GEN_23 = _T_51 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7) | REG_3; // @[Execute.scala 252:120 Execute.scala 254:14 Execute.scala 242:28]
  wire [6:0] _GEN_27 = _T_51 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7) ?
    io_func7 : {{1'd0}, REG_4}; // @[Execute.scala 252:120 Execute.scala 258:14 Execute.scala 243:28]
  wire [5:0] _T_73 = REG_5 + 6'h1; // @[Execute.scala 271:28]
  wire  _GEN_29 = REG_5 < 6'h20 | _T_70; // @[Execute.scala 265:28 Execute.scala 266:18]
  wire  _GEN_34 = REG_5 < 6'h20 & _GEN_22; // @[Execute.scala 265:28 Execute.scala 273:22]
  wire  _GEN_35 = REG_5 < 6'h20 & _GEN_23; // @[Execute.scala 265:28 Execute.scala 274:22]
  wire [2:0] _GEN_39 = REG_3 ? REG_2 : io_func3; // @[Execute.scala 263:17 Execute.scala 235:18]
  wire [31:0] _T_77 = MDU_io_output_valid ? MDU_io_output_bits : 32'h0; // @[Execute.scala 283:26]
  wire [31:0] _GEN_43 = _T_51 & MDU_io_ready ? _T_77 : alu_io_result; // @[Execute.scala 285:49 Execute.scala 286:20 Execute.scala 288:29]
  ALU alu ( // @[Execute.scala 71:19]
    .io_input1(alu_io_input1),
    .io_input2(alu_io_input2),
    .io_aluCtl(alu_io_aluCtl),
    .io_result(alu_io_result)
  );
  AluControl aluCtl ( // @[Execute.scala 72:22]
    .io_aluOp(aluCtl_io_aluOp),
    .io_f7(aluCtl_io_f7),
    .io_f3(aluCtl_io_f3),
    .io_aluSrc(aluCtl_io_aluSrc),
    .io_out(aluCtl_io_out)
  );
  ForwardingUnit ForwardingUnit ( // @[Execute.scala 73:18]
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
    .io_reg_vs3(ForwardingUnit_io_reg_vs3),
    .io_ex_reg_write(ForwardingUnit_io_ex_reg_write),
    .io_mem_reg_write(ForwardingUnit_io_mem_reg_write),
    .io_forwardA(ForwardingUnit_io_forwardA),
    .io_forwardB(ForwardingUnit_io_forwardB),
    .io_forwardC(ForwardingUnit_io_forwardC)
  );
  Alu_Control Vec_aluCtl ( // @[Execute.scala 123:26]
    .io_func3(Vec_aluCtl_io_func3),
    .io_aluOp(Vec_aluCtl_io_aluOp),
    .io_func6(Vec_aluCtl_io_func6),
    .io_aluc(Vec_aluCtl_io_aluc)
  );
  ALU_ vec_alu ( // @[Execute.scala 134:23]
    .io_in_A(vec_alu_io_in_A),
    .io_in_B(vec_alu_io_in_B),
    .io_vs1(vec_alu_io_vs1),
    .io_vs2(vec_alu_io_vs2),
    .io_vs0(vec_alu_io_vs0),
    .io_vd(vec_alu_io_vd),
    .io_vl(vec_alu_io_vl),
    .io_vstart(vec_alu_io_vstart),
    .io_vma(vec_alu_io_vma),
    .io_vta(vec_alu_io_vta),
    .io_vm(vec_alu_io_vm),
    .io_vd_addr(vec_alu_io_vd_addr),
    .io_aluc(vec_alu_io_aluc),
    .io_sew(vec_alu_io_sew),
    .io_v_ins(vec_alu_io_v_ins),
    .io_v_output(vec_alu_io_v_output),
    .io_vs3(vec_alu_io_vs3)
  );
  configure vec_config ( // @[Execute.scala 200:26]
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
  MDU MDU ( // @[Execute.scala 232:22]
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
  assign io_vec_alu_res = vec_alu_io_v_output; // @[Execute.scala 197:18]
  assign io_vec_vl = vec_config_io_vl; // @[Execute.scala 222:13]
  assign io_vec_rd_out = vec_config_io_rd_out; // @[Execute.scala 224:17]
  assign io_vec_avl_o = vec_config_io_avl_o; // @[Execute.scala 225:16]
  assign io_vec_valmax_o = vec_config_io_valmax_o; // @[Execute.scala 226:19]
  assign io_vs3_data_o = ForwardingUnit_io_forwardC == 2'h1 ? $signed(io_vec_mem_res) : $signed(_GEN_5); // @[Execute.scala 154:28 Execute.scala 156:19]
  assign io_writeData = _T_9 ? io_readData2 : _T_13; // @[Mux.scala 98:16]
  assign io_ALUresult = REG_3 & REG_4 == 6'h1 & MDU_io_ready ? _T_77 : _GEN_43; // @[Execute.scala 282:51 Execute.scala 283:20]
  assign io_stall = REG_3 ? _GEN_29 : _T_70; // @[Execute.scala 263:17]
  assign alu_io_input1 = _T_14 ? io_pcAddress : _T_16; // @[Mux.scala 98:16]
  assign alu_io_input2 = io_ctl_aluSrc ? inputMux2 : io_immediate; // @[Execute.scala 116:19]
  assign alu_io_aluCtl = aluCtl_io_out; // @[Execute.scala 131:17]
  assign aluCtl_io_aluOp = io_ctl_aluOp; // @[Execute.scala 120:19]
  assign aluCtl_io_f7 = io_func7[5]; // @[Execute.scala 119:27]
  assign aluCtl_io_f3 = io_func3; // @[Execute.scala 118:16]
  assign aluCtl_io_aluSrc = io_ctl_aluSrc; // @[Execute.scala 121:20]
  assign ForwardingUnit_io_ex_reg_rd = io_ex_mem_ins[11:7]; // @[Execute.scala 79:32]
  assign ForwardingUnit_io_mem_reg_rd = io_mem_wb_ins[11:7]; // @[Execute.scala 80:33]
  assign ForwardingUnit_io_reg_rs1 = io_id_ex_ins[19:15]; // @[Execute.scala 81:29]
  assign ForwardingUnit_io_reg_rs2 = io_id_ex_ins[24:20]; // @[Execute.scala 82:29]
  assign ForwardingUnit_io_ex_regWrite = io_ex_mem_regWrite; // @[Execute.scala 77:18]
  assign ForwardingUnit_io_mem_regWrite = io_mem_wb_regWrite; // @[Execute.scala 78:19]
  assign ForwardingUnit_io_ex_reg_vd = io_fu_ex_reg_vd; // @[Execute.scala 84:16]
  assign ForwardingUnit_io_mem_reg_vd = io_fu_mem_reg_vd; // @[Execute.scala 85:17]
  assign ForwardingUnit_io_reg_vs1 = io_fu_reg_vs1; // @[Execute.scala 86:14]
  assign ForwardingUnit_io_reg_vs2 = io_fu_reg_vs2; // @[Execute.scala 87:14]
  assign ForwardingUnit_io_reg_vs3 = io_fu_reg_vs3; // @[Execute.scala 88:14]
  assign ForwardingUnit_io_ex_reg_write = io_fu_ex_reg_write; // @[Execute.scala 89:19]
  assign ForwardingUnit_io_mem_reg_write = io_fu_mem_reg_write; // @[Execute.scala 90:20]
  assign Vec_aluCtl_io_func3 = io_func3; // @[Execute.scala 125:23]
  assign Vec_aluCtl_io_aluOp = io_v_ctl_aluop; // @[Execute.scala 127:23]
  assign Vec_aluCtl_io_func6 = io_func6; // @[Execute.scala 126:23]
  assign vec_alu_io_in_A = _T_5 ? $signed(io_mem_result) : $signed(_GEN_0); // @[Execute.scala 138:28 Execute.scala 139:21]
  assign vec_alu_io_in_B = io_v_ctl_exsel == 4'h3 & io_v_ctl_opBsel ? $signed(io_zimm) : $signed(_GEN_10); // @[Execute.scala 165:64 Execute.scala 166:21]
  assign vec_alu_io_vs1 = _T_5 ? $signed(io_vec_mem_res) : $signed(_GEN_2); // @[Execute.scala 146:28 Execute.scala 147:20]
  assign vec_alu_io_vs2 = _T_10 ? $signed(io_vec_mem_res) : $signed(_GEN_12); // @[Execute.scala 179:28 Execute.scala 180:20]
  assign vec_alu_io_vs0 = io_vs0; // @[Execute.scala 195:18]
  assign vec_alu_io_vd = io_vs3_data; // @[Execute.scala 194:17]
  assign vec_alu_io_vl = io_vl; // @[Execute.scala 190:26]
  assign vec_alu_io_vstart = io_vstart; // @[Execute.scala 196:34]
  assign vec_alu_io_vma = io_vma; // @[Execute.scala 192:18]
  assign vec_alu_io_vta = io_vta; // @[Execute.scala 191:18]
  assign vec_alu_io_vm = io_vm; // @[Execute.scala 193:17]
  assign vec_alu_io_vd_addr = io_vd_addr; // @[Execute.scala 187:22]
  assign vec_alu_io_aluc = Vec_aluCtl_io_aluc; // @[Execute.scala 186:19]
  assign vec_alu_io_sew = io_v_sew; // @[Execute.scala 188:18]
  assign vec_alu_io_v_ins = io_v_ctl_v_ins; // @[Execute.scala 189:20]
  assign vec_config_io_zimm = {{21'd0}, _GEN_16}; // @[Execute.scala 202:31 Execute.scala 203:24 Execute.scala 215:24]
  assign vec_config_io_rs1 = io_v_ctl_vset ? io_id_ex_ins[19:15] : 5'h0; // @[Execute.scala 202:31 Execute.scala 204:23 Execute.scala 216:23]
  assign vec_config_io_rd = io_v_ctl_vset ? io_id_ex_ins[11:7] : 5'h0; // @[Execute.scala 202:31 Execute.scala 205:22 Execute.scala 217:22]
  assign vec_config_io_rs1_readdata = io_v_ctl_vset ? $signed(_GEN_1) : $signed(32'sh0); // @[Execute.scala 202:31 Execute.scala 218:32]
  assign vec_config_io_current_vl = io_vl; // @[Execute.scala 202:31 Execute.scala 213:30 Execute.scala 219:30]
  assign MDU_clock = clock;
  assign MDU_reset = reset;
  assign MDU_io_src_a = REG_3 ? REG : aluIn1; // @[Execute.scala 263:17 Execute.scala 233:18]
  assign MDU_io_src_b = REG_3 ? REG_1 : aluIn2; // @[Execute.scala 263:17 Execute.scala 234:18]
  assign MDU_io_op = {{2'd0}, _GEN_39}; // @[Execute.scala 263:17 Execute.scala 235:18]
  assign MDU_io_valid = REG_3 ? _GEN_34 : _GEN_22; // @[Execute.scala 263:17]
  always @(posedge clock) begin
    if (reset) begin // @[Execute.scala 239:28]
      REG <= 32'h0; // @[Execute.scala 239:28]
    end else if (_T_51 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7)) begin // @[Execute.scala 252:120]
      if (_T_14) begin // @[Mux.scala 98:16]
        REG <= io_pcAddress;
      end else if (_T_15) begin // @[Mux.scala 98:16]
        REG <= 32'h0;
      end else begin
        REG <= inputMux1;
      end
    end
    if (reset) begin // @[Execute.scala 240:28]
      REG_1 <= 32'h0; // @[Execute.scala 240:28]
    end else if (_T_51 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7)) begin // @[Execute.scala 252:120]
      if (io_ctl_aluSrc) begin // @[Execute.scala 116:19]
        if (_T_9) begin // @[Mux.scala 98:16]
          REG_1 <= io_readData2;
        end else begin
          REG_1 <= _T_13;
        end
      end else begin
        REG_1 <= io_immediate;
      end
    end
    if (reset) begin // @[Execute.scala 241:28]
      REG_2 <= 3'h0; // @[Execute.scala 241:28]
    end else if (_T_51 & ~REG_3 & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7)) begin // @[Execute.scala 252:120]
      REG_2 <= io_func3; // @[Execute.scala 257:14]
    end
    if (reset) begin // @[Execute.scala 242:28]
      REG_3 <= 1'h0; // @[Execute.scala 242:28]
    end else if (REG_3) begin // @[Execute.scala 263:17]
      REG_3 <= _GEN_35;
    end else begin
      REG_3 <= _GEN_23;
    end
    if (reset) begin // @[Execute.scala 243:28]
      REG_4 <= 6'h0; // @[Execute.scala 243:28]
    end else begin
      REG_4 <= _GEN_27[5:0];
    end
    if (reset) begin // @[Execute.scala 244:28]
      REG_5 <= 6'h0; // @[Execute.scala 244:28]
    end else if (REG_3) begin // @[Execute.scala 263:17]
      if (REG_5 < 6'h20) begin // @[Execute.scala 265:28]
        REG_5 <= _T_73; // @[Execute.scala 271:17]
      end else begin
        REG_5 <= 6'h0; // @[Execute.scala 278:17]
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
  input  [31:0] io_v_addr,
  input         io_v_ins,
  input  [31:0] io_writeData,
  input  [31:0] io_v_writeData,
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
  reg [1:0] offset; // @[MemoryFetch.scala 39:23]
  reg [2:0] funct3; // @[MemoryFetch.scala 40:23]
  wire [1:0] offsetSW = io_aluResultIn[1:0]; // @[MemoryFetch.scala 41:32]
  wire  _T_9 = offsetSW == 2'h0; // @[MemoryFetch.scala 58:19]
  wire  _T_10 = offsetSW == 2'h1; // @[MemoryFetch.scala 60:25]
  wire [7:0] _GEN_4 = offsetSW == 2'h2 ? io_writeData[15:8] : io_writeData[15:8]; // @[MemoryFetch.scala 66:33 MemoryFetch.scala 67:16 MemoryFetch.scala 73:16]
  wire [7:0] _GEN_5 = offsetSW == 2'h2 ? io_writeData[23:16] : io_writeData[23:16]; // @[MemoryFetch.scala 66:33 MemoryFetch.scala 68:16 MemoryFetch.scala 74:16]
  wire [7:0] _GEN_6 = offsetSW == 2'h2 ? io_writeData[7:0] : io_writeData[31:24]; // @[MemoryFetch.scala 66:33 MemoryFetch.scala 69:16 MemoryFetch.scala 75:16]
  wire [7:0] _GEN_7 = offsetSW == 2'h2 ? io_writeData[31:24] : io_writeData[7:0]; // @[MemoryFetch.scala 66:33 MemoryFetch.scala 70:16 MemoryFetch.scala 76:16]
  wire [3:0] _GEN_8 = offsetSW == 2'h2 ? 4'h4 : 4'h8; // @[MemoryFetch.scala 66:33 MemoryFetch.scala 71:38 MemoryFetch.scala 77:38]
  wire [7:0] _GEN_9 = offsetSW == 2'h1 ? io_writeData[15:8] : _GEN_4; // @[MemoryFetch.scala 60:33 MemoryFetch.scala 61:16]
  wire [7:0] _GEN_10 = offsetSW == 2'h1 ? io_writeData[7:0] : _GEN_5; // @[MemoryFetch.scala 60:33 MemoryFetch.scala 62:16]
  wire [7:0] _GEN_11 = offsetSW == 2'h1 ? io_writeData[23:16] : _GEN_6; // @[MemoryFetch.scala 60:33 MemoryFetch.scala 63:16]
  wire [7:0] _GEN_12 = offsetSW == 2'h1 ? io_writeData[31:24] : _GEN_7; // @[MemoryFetch.scala 60:33 MemoryFetch.scala 64:16]
  wire [3:0] _GEN_13 = offsetSW == 2'h1 ? 4'h2 : _GEN_8; // @[MemoryFetch.scala 60:33 MemoryFetch.scala 65:38]
  wire [3:0] _GEN_14 = offsetSW == 2'h0 ? 4'h1 : _GEN_13; // @[MemoryFetch.scala 58:27 MemoryFetch.scala 59:38]
  wire [7:0] _GEN_15 = offsetSW == 2'h0 ? io_writeData[7:0] : _GEN_9; // @[MemoryFetch.scala 58:27 MemoryFetch.scala 51:12]
  wire [7:0] _GEN_16 = offsetSW == 2'h0 ? io_writeData[15:8] : _GEN_10; // @[MemoryFetch.scala 58:27 MemoryFetch.scala 52:12]
  wire [7:0] _GEN_17 = offsetSW == 2'h0 ? io_writeData[23:16] : _GEN_11; // @[MemoryFetch.scala 58:27 MemoryFetch.scala 53:12]
  wire [7:0] _GEN_18 = offsetSW == 2'h0 ? io_writeData[31:24] : _GEN_12; // @[MemoryFetch.scala 58:27 MemoryFetch.scala 54:12]
  wire [3:0] _GEN_19 = _T_10 ? 4'h6 : 4'hc; // @[MemoryFetch.scala 86:33 MemoryFetch.scala 88:38 MemoryFetch.scala 95:38]
  wire [7:0] _GEN_20 = _T_10 ? io_writeData[23:16] : io_writeData[23:16]; // @[MemoryFetch.scala 86:33 MemoryFetch.scala 89:16 MemoryFetch.scala 98:16]
  wire [7:0] _GEN_21 = _T_10 ? io_writeData[7:0] : io_writeData[31:24]; // @[MemoryFetch.scala 86:33 MemoryFetch.scala 90:16 MemoryFetch.scala 99:16]
  wire [7:0] _GEN_22 = _T_10 ? io_writeData[15:8] : io_writeData[7:0]; // @[MemoryFetch.scala 86:33 MemoryFetch.scala 91:16 MemoryFetch.scala 96:16]
  wire [7:0] _GEN_23 = _T_10 ? io_writeData[31:24] : io_writeData[15:8]; // @[MemoryFetch.scala 86:33 MemoryFetch.scala 92:16 MemoryFetch.scala 97:16]
  wire [3:0] _GEN_24 = _T_9 ? 4'h3 : _GEN_19; // @[MemoryFetch.scala 83:27 MemoryFetch.scala 85:38]
  wire [7:0] _GEN_25 = _T_9 ? io_writeData[7:0] : _GEN_20; // @[MemoryFetch.scala 83:27 MemoryFetch.scala 51:12]
  wire [7:0] _GEN_26 = _T_9 ? io_writeData[15:8] : _GEN_21; // @[MemoryFetch.scala 83:27 MemoryFetch.scala 52:12]
  wire [7:0] _GEN_27 = _T_9 ? io_writeData[23:16] : _GEN_22; // @[MemoryFetch.scala 83:27 MemoryFetch.scala 53:12]
  wire [7:0] _GEN_28 = _T_9 ? io_writeData[31:24] : _GEN_23; // @[MemoryFetch.scala 83:27 MemoryFetch.scala 54:12]
  wire [3:0] _GEN_29 = io_writeEnable & io_f3 == 3'h1 ? _GEN_24 : 4'hf; // @[MemoryFetch.scala 81:52 MemoryFetch.scala 104:36]
  wire [7:0] _GEN_30 = io_writeEnable & io_f3 == 3'h1 ? _GEN_25 : io_writeData[7:0]; // @[MemoryFetch.scala 81:52 MemoryFetch.scala 51:12]
  wire [7:0] _GEN_31 = io_writeEnable & io_f3 == 3'h1 ? _GEN_26 : io_writeData[15:8]; // @[MemoryFetch.scala 81:52 MemoryFetch.scala 52:12]
  wire [7:0] _GEN_32 = io_writeEnable & io_f3 == 3'h1 ? _GEN_27 : io_writeData[23:16]; // @[MemoryFetch.scala 81:52 MemoryFetch.scala 53:12]
  wire [7:0] _GEN_33 = io_writeEnable & io_f3 == 3'h1 ? _GEN_28 : io_writeData[31:24]; // @[MemoryFetch.scala 81:52 MemoryFetch.scala 54:12]
  wire [7:0] wdata_0 = io_writeEnable & io_f3 == 3'h0 ? _GEN_15 : _GEN_30; // @[MemoryFetch.scala 57:45]
  wire [7:0] wdata_1 = io_writeEnable & io_f3 == 3'h0 ? _GEN_16 : _GEN_31; // @[MemoryFetch.scala 57:45]
  wire [7:0] wdata_2 = io_writeEnable & io_f3 == 3'h0 ? _GEN_17 : _GEN_32; // @[MemoryFetch.scala 57:45]
  wire [7:0] wdata_3 = io_writeEnable & io_f3 == 3'h0 ? _GEN_18 : _GEN_33; // @[MemoryFetch.scala 57:45]
  wire [15:0] lo = {wdata_1,wdata_0}; // @[MemoryFetch.scala 107:46]
  wire [15:0] hi = {wdata_3,wdata_2}; // @[MemoryFetch.scala 107:46]
  wire [31:0] _T_37 = io_aluResultIn & 32'h1fff; // @[MemoryFetch.scala 108:50]
  wire [31:0] rdata = io_dccmRsp_valid ? io_dccmRsp_bits_dataResponse : 32'h0; // @[MemoryFetch.scala 114:15]
  wire  _T_47 = offset == 2'h0; // @[MemoryFetch.scala 124:21]
  wire [23:0] hi_1 = rdata[7] ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12]
  wire [7:0] lo_1 = rdata[7:0]; // @[MemoryFetch.scala 126:53]
  wire [31:0] _T_50 = {hi_1,lo_1}; // @[Cat.scala 30:58]
  wire  _T_51 = offset == 2'h1; // @[MemoryFetch.scala 127:28]
  wire [23:0] hi_2 = rdata[15] ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12]
  wire [7:0] lo_2 = rdata[15:8]; // @[MemoryFetch.scala 129:55]
  wire [31:0] _T_54 = {hi_2,lo_2}; // @[Cat.scala 30:58]
  wire  _T_55 = offset == 2'h2; // @[MemoryFetch.scala 130:28]
  wire [23:0] hi_3 = rdata[23] ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12]
  wire [7:0] lo_3 = rdata[23:16]; // @[MemoryFetch.scala 132:55]
  wire [31:0] _T_58 = {hi_3,lo_3}; // @[Cat.scala 30:58]
  wire [23:0] hi_4 = rdata[31] ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12]
  wire [7:0] lo_4 = rdata[31:24]; // @[MemoryFetch.scala 135:55]
  wire [31:0] _T_62 = {hi_4,lo_4}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_40 = offset == 2'h2 ? _T_58 : _T_62; // @[MemoryFetch.scala 130:41 MemoryFetch.scala 132:23]
  wire [31:0] _GEN_41 = offset == 2'h1 ? _T_54 : _GEN_40; // @[MemoryFetch.scala 127:41 MemoryFetch.scala 129:23]
  wire [31:0] _GEN_42 = offset == 2'h0 ? _T_50 : _GEN_41; // @[MemoryFetch.scala 124:34 MemoryFetch.scala 126:23]
  wire [31:0] _T_65 = {24'h0,lo_1}; // @[Cat.scala 30:58]
  wire [31:0] _T_67 = {24'h0,lo_2}; // @[Cat.scala 30:58]
  wire [31:0] _T_69 = {24'h0,lo_3}; // @[Cat.scala 30:58]
  wire [31:0] _T_71 = {24'h0,lo_4}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_44 = _T_55 ? _T_69 : _T_71; // @[MemoryFetch.scala 149:40 MemoryFetch.scala 151:23]
  wire [31:0] _GEN_45 = _T_51 ? _T_67 : _GEN_44; // @[MemoryFetch.scala 146:40 MemoryFetch.scala 148:23]
  wire [31:0] _GEN_46 = _T_47 ? _T_65 : _GEN_45; // @[MemoryFetch.scala 143:34 MemoryFetch.scala 145:23]
  wire [15:0] lo_9 = rdata[15:0]; // @[MemoryFetch.scala 164:49]
  wire [31:0] _T_74 = {16'h0,lo_9}; // @[Cat.scala 30:58]
  wire [15:0] lo_10 = rdata[23:8]; // @[MemoryFetch.scala 167:49]
  wire [31:0] _T_76 = {16'h0,lo_10}; // @[Cat.scala 30:58]
  wire [15:0] lo_11 = rdata[31:16]; // @[MemoryFetch.scala 170:49]
  wire [31:0] _T_78 = {16'h0,lo_11}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_48 = _T_51 ? _T_76 : _T_78; // @[MemoryFetch.scala 165:41 MemoryFetch.scala 167:23]
  wire [31:0] _GEN_49 = _T_47 ? _T_74 : _GEN_48; // @[MemoryFetch.scala 162:34 MemoryFetch.scala 164:23]
  wire [15:0] hi_12 = rdata[15] ? 16'hffff : 16'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_83 = {hi_12,lo_9}; // @[Cat.scala 30:58]
  wire [15:0] hi_13 = rdata[23] ? 16'hffff : 16'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_87 = {hi_13,lo_10}; // @[Cat.scala 30:58]
  wire [15:0] hi_14 = rdata[31] ? 16'hffff : 16'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_91 = {hi_14,lo_11}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_51 = _T_51 ? _T_87 : _T_91; // @[MemoryFetch.scala 181:41 MemoryFetch.scala 183:23]
  wire [31:0] _GEN_52 = _T_47 ? _T_83 : _GEN_51; // @[MemoryFetch.scala 178:34 MemoryFetch.scala 180:23]
  wire [31:0] _GEN_54 = funct3 == 3'h5 ? _GEN_49 : _GEN_52; // @[MemoryFetch.scala 160:38]
  wire [31:0] _GEN_55 = funct3 == 3'h4 ? _GEN_46 : _GEN_54; // @[MemoryFetch.scala 141:38]
  wire [31:0] _GEN_56 = funct3 == 3'h0 ? _GEN_42 : _GEN_55; // @[MemoryFetch.scala 122:38]
  wire  _T_94 = io_writeEnable & io_aluResultIn[31:28] == 4'h8; // @[MemoryFetch.scala 201:23]
  wire [31:0] addr = io_v_ins ? io_v_addr : io_aluResultIn; // @[MemoryFetch.scala 29:25 MemoryFetch.scala 30:10 MemoryFetch.scala 33:10]
  wire [31:0] data = io_v_ins ? io_v_writeData : io_writeData; // @[MemoryFetch.scala 29:25 MemoryFetch.scala 31:10 MemoryFetch.scala 34:10]
  assign io_readData = funct3 == 3'h2 ? rdata : _GEN_56; // @[MemoryFetch.scala 118:31 MemoryFetch.scala 120:19]
  assign io_dccmReq_valid = io_writeEnable | io_readEnable; // @[MemoryFetch.scala 110:42]
  assign io_dccmReq_bits_addrRequest = {{2'd0}, _T_37[31:2]}; // @[MemoryFetch.scala 108:67]
  assign io_dccmReq_bits_dataRequest = {hi,lo}; // @[MemoryFetch.scala 107:46]
  assign io_dccmReq_bits_activeByteLane = io_writeEnable & io_f3 == 3'h0 ? _GEN_14 : _GEN_29; // @[MemoryFetch.scala 57:45]
  assign io_dccmReq_bits_isWrite = io_writeEnable; // @[MemoryFetch.scala 109:27]
  always @(posedge clock) begin
    if (reset) begin // @[MemoryFetch.scala 39:23]
      offset <= 2'h0; // @[MemoryFetch.scala 39:23]
    end else if (~io_dccmRsp_valid) begin // @[MemoryFetch.scala 43:26]
      offset <= offsetSW; // @[MemoryFetch.scala 45:12]
    end
    if (reset) begin // @[MemoryFetch.scala 40:23]
      funct3 <= 3'h0; // @[MemoryFetch.scala 40:23]
    end else if (~io_dccmRsp_valid) begin // @[MemoryFetch.scala 43:26]
      funct3 <= io_f3; // @[MemoryFetch.scala 44:12]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_94 & ~reset) begin
          $fwrite(32'h80000002,"%x\n",io_writeData); // @[MemoryFetch.scala 202:11]
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
module VLSU(
  input         clock,
  input         reset,
  input  [31:0] io_instr,
  input  [31:0] io_vtype,
  output [1:0]  io_UnitStride,
  output [7:0]  io_evl,
  output [4:0]  io_vs3_Addr,
  output [3:0]  io_lsuType,
  output [9:0]  io_eew,
  output [3:0]  io_nf,
  output [5:0]  io_emmul,
  output [3:0]  io_emul
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [1:0] mop = io_instr[27:26]; // @[vlsu.scala 22:23]
  wire [4:0] lsumop = io_instr[24:20]; // @[vlsu.scala 24:26]
  wire [2:0] width = io_instr[14:12]; // @[vlsu.scala 26:25]
  wire [2:0] vlmul = io_vtype[2:0]; // @[vlsu.scala 30:25]
  wire [2:0] vsew = io_vtype[5:3]; // @[vlsu.scala 31:24]
  wire [3:0] _T_1 = 3'h0 == vsew ? 4'h8 : 4'h0; // @[Mux.scala 80:57]
  wire [4:0] _T_3 = 3'h1 == vsew ? 5'h10 : {{1'd0}, _T_1}; // @[Mux.scala 80:57]
  wire [5:0] _T_5 = 3'h2 == vsew ? 6'h20 : {{1'd0}, _T_3}; // @[Mux.scala 80:57]
  wire [6:0] sew = 3'h3 == vsew ? 7'h40 : {{1'd0}, _T_5}; // @[Mux.scala 80:57]
  wire [1:0] _T_10 = 3'h1 == vlmul ? 2'h2 : {{1'd0}, 3'h0 == vlmul}; // @[Mux.scala 80:57]
  wire [2:0] _T_12 = 3'h2 == vlmul ? 3'h4 : {{1'd0}, _T_10}; // @[Mux.scala 80:57]
  wire [3:0] lmul = 3'h3 == vlmul ? 4'h8 : {{1'd0}, _T_12}; // @[Mux.scala 80:57]
  wire [3:0] _T_15 = 3'h0 == width ? 4'h8 : 4'h0; // @[Mux.scala 80:57]
  wire [4:0] _T_17 = 3'h5 == width ? 5'h10 : {{1'd0}, _T_15}; // @[Mux.scala 80:57]
  wire [5:0] _T_19 = 3'h6 == width ? 6'h20 : {{1'd0}, _T_17}; // @[Mux.scala 80:57]
  wire [6:0] eew = 3'h7 == width ? 7'h40 : {{1'd0}, _T_19}; // @[Mux.scala 80:57]
  reg [3:0] emul; // @[vlsu.scala 68:17]
  wire  _T_21 = eew == sew; // @[vlsu.scala 71:8]
  wire  _T_22 = lmul == 4'h1; // @[vlsu.scala 71:25]
  wire  _T_24 = eew == 7'h8; // @[vlsu.scala 72:10]
  wire  _T_25 = sew == 7'h10; // @[vlsu.scala 72:25]
  wire  _T_27 = eew == 7'h10; // @[vlsu.scala 72:43]
  wire  _T_28 = sew == 7'h20; // @[vlsu.scala 72:59]
  wire  _T_31 = eew == 7'h20; // @[vlsu.scala 72:77]
  wire  _T_32 = sew == 7'h40; // @[vlsu.scala 72:93]
  wire  _T_34 = eew == 7'h8 & sew == 7'h10 | eew == 7'h10 & sew == 7'h20 | eew == 7'h20 & sew == 7'h40; // @[vlsu.scala 72:69]
  wire  _T_35 = lmul == 4'h2; // @[vlsu.scala 72:112]
  wire  _T_36 = (eew == 7'h8 & sew == 7'h10 | eew == 7'h10 & sew == 7'h20 | eew == 7'h20 & sew == 7'h40) & lmul == 4'h2; // @[vlsu.scala 72:104]
  wire  _T_37 = eew == sew & lmul == 4'h1 | _T_36; // @[vlsu.scala 71:34]
  wire  _T_44 = _T_24 & _T_28 | _T_27 & _T_32; // @[vlsu.scala 73:35]
  wire  _T_45 = lmul == 4'h4; // @[vlsu.scala 73:78]
  wire  _T_46 = (_T_24 & _T_28 | _T_27 & _T_32) & lmul == 4'h4; // @[vlsu.scala 73:70]
  wire  _T_47 = _T_37 | _T_46; // @[vlsu.scala 72:121]
  wire  _T_51 = lmul == 4'h8; // @[vlsu.scala 74:42]
  wire  _T_52 = _T_24 & _T_32 & lmul == 4'h8; // @[vlsu.scala 74:34]
  wire  _T_53 = _T_47 | _T_52; // @[vlsu.scala 73:87]
  wire  _T_55 = sew == 7'h8; // @[vlsu.scala 78:26]
  wire  _T_56 = _T_27 & sew == 7'h8; // @[vlsu.scala 78:19]
  wire  _T_59 = _T_31 & _T_25; // @[vlsu.scala 78:52]
  wire  _T_61 = eew == 7'h40; // @[vlsu.scala 78:77]
  wire  _T_63 = eew == 7'h40 & _T_28; // @[vlsu.scala 78:86]
  wire  _T_64 = _T_27 & sew == 7'h8 | _T_31 & _T_25 | eew == 7'h40 & _T_28; // @[vlsu.scala 78:69]
  wire  _T_69 = _T_21 & _T_35; // @[vlsu.scala 79:16]
  wire  _T_70 = (_T_27 & sew == 7'h8 | _T_31 & _T_25 | eew == 7'h40 & _T_28) & _T_22 | _T_69; // @[vlsu.scala 78:121]
  wire  _T_83 = _T_34 & _T_45; // @[vlsu.scala 80:104]
  wire  _T_84 = _T_70 | _T_83; // @[vlsu.scala 79:33]
  wire  _T_93 = _T_44 & _T_51; // @[vlsu.scala 81:70]
  wire  _T_94 = _T_84 | _T_93; // @[vlsu.scala 80:121]
  wire  _T_101 = _T_31 & _T_55 | _T_61 & _T_25; // @[vlsu.scala 85:35]
  wire  _T_116 = _T_64 & _T_35; // @[vlsu.scala 86:104]
  wire  _T_117 = (_T_31 & _T_55 | _T_61 & _T_25) & _T_22 | _T_116; // @[vlsu.scala 85:87]
  wire  _T_120 = _T_21 & _T_45; // @[vlsu.scala 87:16]
  wire  _T_121 = _T_117 | _T_120; // @[vlsu.scala 86:121]
  wire  _T_134 = _T_34 & _T_51; // @[vlsu.scala 88:104]
  wire  _T_135 = _T_121 | _T_134; // @[vlsu.scala 87:33]
  wire  _T_149 = _T_101 & _T_35; // @[vlsu.scala 93:70]
  wire  _T_150 = _T_61 & _T_55 & _T_22 | _T_149; // @[vlsu.scala 92:53]
  wire  _T_163 = (_T_56 | _T_63 | _T_59) & _T_45; // @[vlsu.scala 94:104]
  wire  _T_164 = _T_150 | _T_163; // @[vlsu.scala 93:87]
  wire  _T_167 = _T_21 & _T_51; // @[vlsu.scala 95:16]
  wire  _T_168 = _T_164 | _T_167; // @[vlsu.scala 94:121]
  wire [3:0] _GEN_0 = _T_168 ? 4'h8 : emul; // @[vlsu.scala 96:3 vlsu.scala 97:9 vlsu.scala 68:17]
  wire [1:0] _T_185 = 5'h8 == lsumop ? 2'h2 : {{1'd0}, 5'h0 == lsumop}; // @[Mux.scala 80:57]
  wire [1:0] _T_189 = 2'h1 == mop ? 2'h2 : 2'h1; // @[Mux.scala 80:57]
  wire [1:0] _T_191 = 2'h2 == mop ? 2'h3 : _T_189; // @[Mux.scala 80:57]
  wire [2:0] lsuType = 2'h3 == mop ? 3'h4 : {{1'd0}, _T_191}; // @[Mux.scala 80:57]
  wire [3:0] _T_193 = emul; // @[vlsu.scala 160:21]
  assign io_UnitStride = 5'hb == lsumop ? 2'h3 : _T_185; // @[Mux.scala 80:57]
  assign io_evl = 8'h10; // @[Mux.scala 80:57]
  assign io_vs3_Addr = 5'h0; // @[vlsu.scala 147:13]
  assign io_lsuType = {{1'd0}, lsuType}; // @[Mux.scala 80:57]
  assign io_eew = {{3'd0}, eew}; // @[Mux.scala 80:57]
  assign io_nf = 4'h0; // @[vlsu.scala 162:11]
  assign io_emmul = {{2{_T_193[3]}},_T_193}; // @[vlsu.scala 160:21]
  assign io_emul = emul; // @[vlsu.scala 161:13]
  always @(posedge clock) begin
    if (reset) begin // @[vlsu.scala 68:17]
      emul <= 4'h0; // @[vlsu.scala 68:17]
    end else if (_T_53) begin // @[vlsu.scala 75:3]
      emul <= 4'h1; // @[vlsu.scala 76:9]
    end else if (_T_94) begin // @[vlsu.scala 82:3]
      emul <= 4'h2; // @[vlsu.scala 83:9]
    end else if (_T_135) begin // @[vlsu.scala 89:3]
      emul <= 4'h4; // @[vlsu.scala 90:8]
    end else begin
      emul <= _GEN_0;
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
  emul = _RAND_0[3:0];
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
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [127:0] _RAND_26;
  reg [127:0] _RAND_27;
  reg [127:0] _RAND_28;
  reg [127:0] _RAND_29;
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
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [127:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [31:0] _RAND_65;
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
  reg [127:0] _RAND_77;
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
  reg [31:0] _RAND_94;
  reg [31:0] _RAND_95;
  reg [31:0] _RAND_96;
  reg [31:0] _RAND_97;
  reg [31:0] _RAND_98;
  reg [31:0] _RAND_99;
  reg [31:0] _RAND_100;
  reg [31:0] _RAND_101;
  reg [31:0] _RAND_102;
  reg [31:0] _RAND_103;
  reg [31:0] _RAND_104;
  reg [31:0] _RAND_105;
  reg [31:0] _RAND_106;
  reg [31:0] _RAND_107;
  reg [31:0] _RAND_108;
  reg [31:0] _RAND_109;
`endif // RANDOMIZE_REG_INIT
  wire  InstructionFetch_reset; // @[Core.scala 186:18]
  wire [31:0] InstructionFetch_io_address; // @[Core.scala 186:18]
  wire [31:0] InstructionFetch_io_instruction; // @[Core.scala 186:18]
  wire  InstructionFetch_io_stall; // @[Core.scala 186:18]
  wire  InstructionFetch_io_coreInstrReq_ready; // @[Core.scala 186:18]
  wire  InstructionFetch_io_coreInstrReq_valid; // @[Core.scala 186:18]
  wire [31:0] InstructionFetch_io_coreInstrReq_bits_addrRequest; // @[Core.scala 186:18]
  wire [31:0] InstructionFetch_io_coreInstrReq_bits_dataRequest; // @[Core.scala 186:18]
  wire [3:0] InstructionFetch_io_coreInstrReq_bits_activeByteLane; // @[Core.scala 186:18]
  wire  InstructionFetch_io_coreInstrReq_bits_isWrite; // @[Core.scala 186:18]
  wire  InstructionFetch_io_coreInstrResp_ready; // @[Core.scala 186:18]
  wire  InstructionFetch_io_coreInstrResp_valid; // @[Core.scala 186:18]
  wire [31:0] InstructionFetch_io_coreInstrResp_bits_dataResponse; // @[Core.scala 186:18]
  wire  IDecode_clock; // @[Core.scala 188:23]
  wire  IDecode_reset; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_id_instruction; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_writeData; // @[Core.scala 188:23]
  wire [4:0] IDecode_io_writeReg; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_pcAddress; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_writeEnable; // @[Core.scala 188:23]
  wire  IDecode_io_id_ex_mem_read; // @[Core.scala 188:23]
  wire  IDecode_io_ex_mem_mem_read; // @[Core.scala 188:23]
  wire  IDecode_io_dmem_resp_valid; // @[Core.scala 188:23]
  wire [4:0] IDecode_io_id_ex_rd; // @[Core.scala 188:23]
  wire [4:0] IDecode_io_ex_mem_rd; // @[Core.scala 188:23]
  wire  IDecode_io_id_ex_branch; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_ex_mem_ins; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_mem_wb_ins; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_ex_ins; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_ex_result; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_ex_mem_result; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_mem_wb_result; // @[Core.scala 188:23]
  wire  IDecode_io_id_ex_regWr; // @[Core.scala 188:23]
  wire  IDecode_io_ex_mem_regWr; // @[Core.scala 188:23]
  wire  IDecode_io_csr_Ex; // @[Core.scala 188:23]
  wire  IDecode_io_csr_Mem; // @[Core.scala 188:23]
  wire  IDecode_io_csr_Wb; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_csr_Ex_data; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_csr_Mem_data; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_csr_Wb_data; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_dmem_data; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_immediate; // @[Core.scala 188:23]
  wire [4:0] IDecode_io_writeRegAddress; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_readData1; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_readData2; // @[Core.scala 188:23]
  wire [6:0] IDecode_io_func7; // @[Core.scala 188:23]
  wire [2:0] IDecode_io_func3; // @[Core.scala 188:23]
  wire [5:0] IDecode_io_func6; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_aluSrc; // @[Core.scala 188:23]
  wire [1:0] IDecode_io_ctl_memToReg; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_regWrite; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_memRead; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_memWrite; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_branch; // @[Core.scala 188:23]
  wire [1:0] IDecode_io_ctl_aluOp; // @[Core.scala 188:23]
  wire [1:0] IDecode_io_ctl_jump; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_v_RegWrite; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_v_opBsel; // @[Core.scala 188:23]
  wire [3:0] IDecode_io_ctl_v_Ex_sel; // @[Core.scala 188:23]
  wire [4:0] IDecode_io_ctl_v_aluop; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_v_vset; // @[Core.scala 188:23]
  wire [3:0] IDecode_io_ctl_v_load; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_v_ins; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_v_memRead; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_v_memWrite; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_v_reg_read; // @[Core.scala 188:23]
  wire [127:0] IDecode_io_write_data; // @[Core.scala 188:23]
  wire [4:0] IDecode_io_wb_addr; // @[Core.scala 188:23]
  wire  IDecode_io_wb_RegWrite; // @[Core.scala 188:23]
  wire [3:0] IDecode_io_id_lmul_count; // @[Core.scala 188:23]
  wire [3:0] IDecode_io_id_lmul_vs1in_vs2in; // @[Core.scala 188:23]
  wire [127:0] IDecode_io_vs0_data; // @[Core.scala 188:23]
  wire [127:0] IDecode_io_vs1_data; // @[Core.scala 188:23]
  wire [127:0] IDecode_io_vs2_data; // @[Core.scala 188:23]
  wire  IDecode_io_reg_write; // @[Core.scala 188:23]
  wire [4:0] IDecode_io_vs1_addr; // @[Core.scala 188:23]
  wire [4:0] IDecode_io_vs2_addr; // @[Core.scala 188:23]
  wire [4:0] IDecode_io_vd_addr; // @[Core.scala 188:23]
  wire [127:0] IDecode_io_vs3_data; // @[Core.scala 188:23]
  wire [127:0] IDecode_io_id_wbvs3_data; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_v_z_imm; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_v_addi_imm; // @[Core.scala 188:23]
  wire [10:0] IDecode_io_vtypei; // @[Core.scala 188:23]
  wire [10:0] IDecode_io_vtypei_out; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_vl; // @[Core.scala 188:23]
  wire  IDecode_io_ctl_vset; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_vl_out; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_vstart_out; // @[Core.scala 188:23]
  wire [1:0] IDecode_io_ctl_aluSrc1; // @[Core.scala 188:23]
  wire  IDecode_io_hdu_pcWrite; // @[Core.scala 188:23]
  wire  IDecode_io_hdu_if_reg_write; // @[Core.scala 188:23]
  wire  IDecode_io_pcSrc; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_pcPlusOffset; // @[Core.scala 188:23]
  wire  IDecode_io_ifid_flush; // @[Core.scala 188:23]
  wire  IDecode_io_stall; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_csr_i_misa; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_csr_i_mhartid; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_csr_o_data; // @[Core.scala 188:23]
  wire  IDecode_io_is_csr; // @[Core.scala 188:23]
  wire [31:0] IDecode_io_fscr_o_data; // @[Core.scala 188:23]
  wire [4:0] IDecode_io_rs_addr_0; // @[Core.scala 188:23]
  wire [4:0] IDecode_io_rs_addr_1; // @[Core.scala 188:23]
  wire  Execute_clock; // @[Core.scala 191:18]
  wire  Execute_reset; // @[Core.scala 191:18]
  wire [31:0] Execute_io_immediate; // @[Core.scala 191:18]
  wire [31:0] Execute_io_readData1; // @[Core.scala 191:18]
  wire [31:0] Execute_io_readData2; // @[Core.scala 191:18]
  wire [31:0] Execute_io_pcAddress; // @[Core.scala 191:18]
  wire [6:0] Execute_io_func7; // @[Core.scala 191:18]
  wire [2:0] Execute_io_func3; // @[Core.scala 191:18]
  wire [31:0] Execute_io_mem_result; // @[Core.scala 191:18]
  wire [31:0] Execute_io_wb_result; // @[Core.scala 191:18]
  wire  Execute_io_ex_mem_regWrite; // @[Core.scala 191:18]
  wire  Execute_io_mem_wb_regWrite; // @[Core.scala 191:18]
  wire [31:0] Execute_io_id_ex_ins; // @[Core.scala 191:18]
  wire [31:0] Execute_io_ex_mem_ins; // @[Core.scala 191:18]
  wire [31:0] Execute_io_mem_wb_ins; // @[Core.scala 191:18]
  wire  Execute_io_ctl_aluSrc; // @[Core.scala 191:18]
  wire [1:0] Execute_io_ctl_aluOp; // @[Core.scala 191:18]
  wire [1:0] Execute_io_ctl_aluSrc1; // @[Core.scala 191:18]
  wire [5:0] Execute_io_func6; // @[Core.scala 191:18]
  wire [2:0] Execute_io_v_ctl_aluop; // @[Core.scala 191:18]
  wire [3:0] Execute_io_v_ctl_exsel; // @[Core.scala 191:18]
  wire  Execute_io_v_ctl_regwrite; // @[Core.scala 191:18]
  wire  Execute_io_v_ctl_opBsel; // @[Core.scala 191:18]
  wire  Execute_io_v_ctl_v_load; // @[Core.scala 191:18]
  wire  Execute_io_v_ctl_v_ins; // @[Core.scala 191:18]
  wire  Execute_io_v_ctl_vset; // @[Core.scala 191:18]
  wire [127:0] Execute_io_vs1_data; // @[Core.scala 191:18]
  wire [127:0] Execute_io_vs2_data; // @[Core.scala 191:18]
  wire [31:0] Execute_io_vl; // @[Core.scala 191:18]
  wire [31:0] Execute_io_vstart; // @[Core.scala 191:18]
  wire [127:0] Execute_io_vs3_data; // @[Core.scala 191:18]
  wire  Execute_io_vma; // @[Core.scala 191:18]
  wire  Execute_io_vta; // @[Core.scala 191:18]
  wire  Execute_io_vm; // @[Core.scala 191:18]
  wire [127:0] Execute_io_vs0; // @[Core.scala 191:18]
  wire [4:0] Execute_io_vd_addr; // @[Core.scala 191:18]
  wire [2:0] Execute_io_v_sew; // @[Core.scala 191:18]
  wire [31:0] Execute_io_zimm; // @[Core.scala 191:18]
  wire [31:0] Execute_io_v_addi_imm; // @[Core.scala 191:18]
  wire [127:0] Execute_io_vec_mem_res; // @[Core.scala 191:18]
  wire [127:0] Execute_io_vec_wb_res; // @[Core.scala 191:18]
  wire [127:0] Execute_io_id_reg_vs3data; // @[Core.scala 191:18]
  wire [4:0] Execute_io_fu_ex_reg_vd; // @[Core.scala 191:18]
  wire [4:0] Execute_io_fu_mem_reg_vd; // @[Core.scala 191:18]
  wire [4:0] Execute_io_fu_reg_vs1; // @[Core.scala 191:18]
  wire [4:0] Execute_io_fu_reg_vs2; // @[Core.scala 191:18]
  wire [4:0] Execute_io_fu_reg_vs3; // @[Core.scala 191:18]
  wire  Execute_io_fu_ex_reg_write; // @[Core.scala 191:18]
  wire  Execute_io_fu_mem_reg_write; // @[Core.scala 191:18]
  wire  Execute_io_v_MemWrite; // @[Core.scala 191:18]
  wire [127:0] Execute_io_vec_alu_res; // @[Core.scala 191:18]
  wire [31:0] Execute_io_vec_vl; // @[Core.scala 191:18]
  wire [4:0] Execute_io_vec_rd_out; // @[Core.scala 191:18]
  wire [31:0] Execute_io_vec_avl_o; // @[Core.scala 191:18]
  wire [31:0] Execute_io_vec_valmax_o; // @[Core.scala 191:18]
  wire [127:0] Execute_io_vs3_data_o; // @[Core.scala 191:18]
  wire [31:0] Execute_io_writeData; // @[Core.scala 191:18]
  wire [31:0] Execute_io_ALUresult; // @[Core.scala 191:18]
  wire  Execute_io_stall; // @[Core.scala 191:18]
  wire  MEM_clock; // @[Core.scala 193:19]
  wire  MEM_reset; // @[Core.scala 193:19]
  wire [31:0] MEM_io_aluResultIn; // @[Core.scala 193:19]
  wire [31:0] MEM_io_v_addr; // @[Core.scala 193:19]
  wire  MEM_io_v_ins; // @[Core.scala 193:19]
  wire [31:0] MEM_io_writeData; // @[Core.scala 193:19]
  wire [31:0] MEM_io_v_writeData; // @[Core.scala 193:19]
  wire  MEM_io_writeEnable; // @[Core.scala 193:19]
  wire  MEM_io_readEnable; // @[Core.scala 193:19]
  wire [31:0] MEM_io_readData; // @[Core.scala 193:19]
  wire [2:0] MEM_io_f3; // @[Core.scala 193:19]
  wire  MEM_io_dccmReq_valid; // @[Core.scala 193:19]
  wire [31:0] MEM_io_dccmReq_bits_addrRequest; // @[Core.scala 193:19]
  wire [31:0] MEM_io_dccmReq_bits_dataRequest; // @[Core.scala 193:19]
  wire [3:0] MEM_io_dccmReq_bits_activeByteLane; // @[Core.scala 193:19]
  wire  MEM_io_dccmReq_bits_isWrite; // @[Core.scala 193:19]
  wire  MEM_io_dccmRsp_valid; // @[Core.scala 193:19]
  wire [31:0] MEM_io_dccmRsp_bits_dataResponse; // @[Core.scala 193:19]
  wire  pc_clock; // @[Core.scala 201:18]
  wire  pc_reset; // @[Core.scala 201:18]
  wire [31:0] pc_io_in; // @[Core.scala 201:18]
  wire  pc_io_halt; // @[Core.scala 201:18]
  wire [31:0] pc_io_out; // @[Core.scala 201:18]
  wire [31:0] pc_io_pc4; // @[Core.scala 201:18]
  wire [31:0] pc_io_pc2; // @[Core.scala 201:18]
  wire  vlsu_clock; // @[Core.scala 227:19]
  wire  vlsu_reset; // @[Core.scala 227:19]
  wire [31:0] vlsu_io_instr; // @[Core.scala 227:19]
  wire [31:0] vlsu_io_vtype; // @[Core.scala 227:19]
  wire [1:0] vlsu_io_UnitStride; // @[Core.scala 227:19]
  wire [7:0] vlsu_io_evl; // @[Core.scala 227:19]
  wire [4:0] vlsu_io_vs3_Addr; // @[Core.scala 227:19]
  wire [3:0] vlsu_io_lsuType; // @[Core.scala 227:19]
  wire [9:0] vlsu_io_eew; // @[Core.scala 227:19]
  wire [3:0] vlsu_io_nf; // @[Core.scala 227:19]
  wire [5:0] vlsu_io_emmul; // @[Core.scala 227:19]
  wire [3:0] vlsu_io_emul; // @[Core.scala 227:19]
  wire  Realigner_clock; // @[Core.scala 496:20]
  wire  Realigner_reset; // @[Core.scala 496:20]
  wire [31:0] Realigner_io_ral_address_i; // @[Core.scala 496:20]
  wire [31:0] Realigner_io_ral_instruction_i; // @[Core.scala 496:20]
  wire  Realigner_io_ral_jmp; // @[Core.scala 496:20]
  wire [31:0] Realigner_io_ral_address_o; // @[Core.scala 496:20]
  wire [31:0] Realigner_io_ral_instruction_o; // @[Core.scala 496:20]
  wire  Realigner_io_ral_halt_o; // @[Core.scala 496:20]
  wire [31:0] CompressedDecoder_io_instruction_i; // @[Core.scala 510:20]
  wire  CompressedDecoder_io_is_comp; // @[Core.scala 510:20]
  wire [31:0] CompressedDecoder_io_instruction_o; // @[Core.scala 510:20]
  reg [31:0] if_reg_pc; // @[Core.scala 38:26]
  reg [31:0] if_reg_ins; // @[Core.scala 39:27]
  reg [3:0] if_reg_lmul_v; // @[Core.scala 42:30]
  reg [9:0] if_reg_eew; // @[Core.scala 45:27]
  reg [3:0] if_reg_lsuType; // @[Core.scala 46:31]
  reg [31:0] id_reg_pc; // @[Core.scala 50:26]
  reg [31:0] id_reg_rd1; // @[Core.scala 51:27]
  reg [31:0] id_reg_rd2; // @[Core.scala 52:27]
  reg [31:0] id_reg_imm; // @[Core.scala 53:27]
  reg [4:0] id_reg_wra; // @[Core.scala 54:27]
  reg [6:0] id_reg_f7; // @[Core.scala 55:26]
  reg [2:0] id_reg_f3; // @[Core.scala 57:26]
  reg [31:0] id_reg_ins; // @[Core.scala 58:27]
  reg  id_reg_ctl_aluSrc; // @[Core.scala 59:34]
  reg [1:0] id_reg_ctl_aluSrc1; // @[Core.scala 60:35]
  reg [1:0] id_reg_ctl_memToReg; // @[Core.scala 61:36]
  reg  id_reg_ctl_regWrite; // @[Core.scala 62:36]
  reg  id_reg_ctl_memRead; // @[Core.scala 63:35]
  reg  id_reg_ctl_memWrite; // @[Core.scala 64:36]
  reg [1:0] id_reg_ctl_aluOp; // @[Core.scala 66:33]
  reg  id_reg_is_csr; // @[Core.scala 68:30]
  reg [31:0] id_reg_csr_data; // @[Core.scala 69:32]
  reg [10:0] id_reg_z_imm; // @[Core.scala 74:29]
  reg [31:0] id_reg_vstart_out; // @[Core.scala 76:34]
  reg [31:0] id_reg_vtype; // @[Core.scala 77:29]
  reg [31:0] id_reg_v_addi_imm; // @[Core.scala 78:34]
  reg [127:0] id_reg_v0_data; // @[Core.scala 79:31]
  reg [127:0] id_reg_v1_data; // @[Core.scala 80:31]
  reg [127:0] id_reg_v2_data; // @[Core.scala 81:31]
  reg [127:0] id_reg_vs3_data; // @[Core.scala 82:32]
  reg [4:0] id_reg_vs1_addr; // @[Core.scala 83:32]
  reg [4:0] id_reg_vs2_addr; // @[Core.scala 84:32]
  reg [4:0] id_reg_vd_addr; // @[Core.scala 85:31]
  reg [3:0] id_reg_lmul_v; // @[Core.scala 86:30]
  reg [9:0] id_reg_eew; // @[Core.scala 90:27]
  reg [3:0] id_reg_lsuType; // @[Core.scala 91:31]
  reg  id_reg_ctl_RegWrite; // @[Core.scala 95:36]
  reg  id_reg_ctl_opBsel; // @[Core.scala 98:34]
  reg [3:0] id_reg_ctl_Ex_sel; // @[Core.scala 99:34]
  reg [4:0] id_reg_ctl_aluop; // @[Core.scala 101:33]
  reg  id_reg_ctl_vset; // @[Core.scala 102:32]
  reg  id_reg_ctl_v_load; // @[Core.scala 103:34]
  reg  id_reg_ctl_v_ins; // @[Core.scala 104:33]
  reg  id_reg_ctl_v_memRead; // @[Core.scala 105:37]
  reg  id_reg_ctl_v_MemWrite; // @[Core.scala 106:38]
  reg [31:0] ex_reg_result; // @[Core.scala 115:30]
  reg [31:0] ex_reg_wd; // @[Core.scala 116:26]
  reg [4:0] ex_reg_wra; // @[Core.scala 117:27]
  reg [31:0] ex_reg_ins; // @[Core.scala 118:27]
  reg [1:0] ex_reg_ctl_memToReg; // @[Core.scala 119:36]
  reg  ex_reg_ctl_regWrite; // @[Core.scala 120:36]
  reg  ex_reg_ctl_memRead; // @[Core.scala 121:35]
  reg  ex_reg_ctl_memWrite; // @[Core.scala 122:36]
  reg [31:0] ex_reg_pc; // @[Core.scala 124:26]
  reg  ex_reg_is_csr; // @[Core.scala 125:30]
  reg [31:0] ex_reg_csr_data; // @[Core.scala 126:32]
  reg [127:0] ex_reg_vec_alu_res; // @[Core.scala 129:35]
  reg [31:0] ex_reg_vl; // @[Core.scala 131:26]
  reg [4:0] ex_reg_vd_addr; // @[Core.scala 138:31]
  reg [3:0] ex_reg_lmul_v; // @[Core.scala 139:30]
  reg  ex_reg_vset; // @[Core.scala 141:28]
  reg  ex_reg_ctl_v_memRead; // @[Core.scala 142:37]
  reg  ex_reg_ctl_v_MemWrite; // @[Core.scala 143:38]
  reg  ex_reg_reg_write; // @[Core.scala 144:33]
  reg [10:0] ex_reg_vtype; // @[Core.scala 145:29]
  reg [9:0] ex_reg_eew; // @[Core.scala 148:27]
  reg [3:0] ex_reg_lsuType; // @[Core.scala 149:31]
  reg [31:0] ex_reg_read_data1; // @[Core.scala 150:34]
  reg  ex_reg_v_ins; // @[Core.scala 152:29]
  reg [31:0] mem_reg_ins; // @[Core.scala 156:28]
  reg [31:0] mem_reg_result; // @[Core.scala 157:31]
  reg [4:0] mem_reg_wra; // @[Core.scala 159:28]
  reg [1:0] mem_reg_ctl_memToReg; // @[Core.scala 160:37]
  reg  mem_reg_ctl_regWrite; // @[Core.scala 161:37]
  reg [31:0] mem_reg_pc; // @[Core.scala 162:27]
  reg  mem_reg_is_csr; // @[Core.scala 163:31]
  reg [31:0] mem_reg_csr_data; // @[Core.scala 164:33]
  reg [127:0] mem_reg_vec_alu_out; // @[Core.scala 167:36]
  reg [31:0] mem_reg_vec_vl; // @[Core.scala 168:31]
  reg [10:0] mem_reg_vtype; // @[Core.scala 169:30]
  reg [4:0] mem_reg_vec_vd_addr; // @[Core.scala 173:36]
  reg [3:0] mem_reg_lmul_v; // @[Core.scala 175:31]
  reg  mem_reg_vset; // @[Core.scala 176:29]
  reg  mem_reg_vec_reg_write; // @[Core.scala 177:38]
  reg [2:0] lmul; // @[Core.scala 216:19]
  reg [31:0] vtype; // @[Core.scala 217:20]
  wire [31:0] instruction = CompressedDecoder_io_instruction_o; // @[Core.scala 206:25 Core.scala 513:18]
  wire  _T_1 = instruction[6:0] == 7'h57; // @[Core.scala 218:22]
  wire  _T_3 = instruction[14:12] == 3'h7; // @[Core.scala 218:59]
  wire  _T_14 = vlsu_io_emul == 4'h1; // @[Core.scala 236:44]
  wire  _T_19 = vlsu_io_emul == 4'h2; // @[Core.scala 240:49]
  wire  _T_24 = vlsu_io_emul == 4'h4; // @[Core.scala 244:49]
  wire  _T_29 = vlsu_io_emul == 4'h8; // @[Core.scala 248:49]
  wire [31:0] _GEN_2 = lmul == 3'h3 | vlsu_io_emul == 4'h8 | vlsu_io_nf == 4'h8 ? 32'h7 : 32'h0; // @[Core.scala 248:79 Core.scala 249:21]
  wire [31:0] _GEN_3 = lmul == 3'h2 | vlsu_io_emul == 4'h4 | vlsu_io_nf == 4'h4 ? 32'h3 : _GEN_2; // @[Core.scala 244:79 Core.scala 245:21]
  wire [31:0] _GEN_4 = lmul == 3'h1 | vlsu_io_emul == 4'h2 | vlsu_io_nf == 4'h2 ? 32'h1 : _GEN_3; // @[Core.scala 240:80 Core.scala 241:21]
  wire  _T_35 = instruction[6:0] == 7'h27; // @[Core.scala 253:49]
  wire [31:0] _GEN_6 = _T_29 & _T_35 ? 32'h20 : 32'h0; // @[Core.scala 259:70 Core.scala 260:14]
  wire [31:0] _GEN_7 = _T_24 & _T_35 ? 32'h10 : _GEN_6; // @[Core.scala 257:70 Core.scala 258:14]
  wire [31:0] _GEN_8 = _T_19 & _T_35 ? 32'h8 : _GEN_7; // @[Core.scala 255:70 Core.scala 256:14]
  wire [31:0] vlcount1 = _T_14 & instruction[6:0] == 7'h27 ? 32'h4 : _GEN_8; // @[Core.scala 253:65 Core.scala 254:14]
  reg [31:0] lmul_reg; // @[Core.scala 264:25]
  wire [31:0] vlmul_count = lmul == 3'h0 | vlsu_io_emul == 4'h1 | vlsu_io_nf == 4'h1 ? 32'h0 : _GEN_4; // @[Core.scala 236:75 Core.scala 237:21]
  wire [31:0] _T_60 = lmul_reg + 32'h1; // @[Core.scala 267:30]
  reg [31:0] delays; // @[Core.scala 281:25]
  wire  _T_64 = delays != vlcount1 & _T_35; // @[Core.scala 282:31]
  wire [31:0] _T_66 = delays + 32'h1; // @[Core.scala 284:23]
  wire [31:0] _T_68 = mem_reg_vset ? $signed(mem_reg_vec_vl) : $signed(IDecode_io_vl_out); // @[Core.scala 351:43]
  wire  _T_73 = mem_reg_vset ? mem_reg_vtype[7] : IDecode_io_vtypei_out[7]; // @[Core.scala 354:50]
  wire  _T_78 = mem_reg_vset ? mem_reg_vtype[6] : IDecode_io_vtypei_out[6]; // @[Core.scala 355:50]
  wire [2:0] _T_85 = mem_reg_vset ? mem_reg_vtype[5:3] : IDecode_io_vtypei_out[5:3]; // @[Core.scala 359:55]
  reg [31:0] addrcount; // @[Core.scala 399:24]
  reg [31:0] vlcount; // @[Core.scala 410:22]
  wire [31:0] _WIRE_1_0 = Execute_io_vs3_data_o[31:0]; // @[Core.scala 416:82]
  wire [31:0] _T_103 = ex_reg_read_data1 + addrcount; // @[Core.scala 430:40]
  wire [31:0] _T_105 = addrcount + 32'h4; // @[Core.scala 431:28]
  wire [31:0] _WIRE_1_1 = Execute_io_vs3_data_o[63:32]; // @[Core.scala 416:82]
  wire [31:0] _WIRE_1_2 = Execute_io_vs3_data_o[95:64]; // @[Core.scala 416:82]
  wire [31:0] _WIRE_1_3 = Execute_io_vs3_data_o[127:96]; // @[Core.scala 416:82]
  wire [31:0] _T_116 = Execute_io_vs3_data_o[127:96]; // @[Core.scala 428:50]
  wire [31:0] _GEN_16 = ex_reg_lsuType == 4'h1 ? _T_116 : 32'h0; // @[Core.scala 424:33 Core.scala 428:24 Core.scala 409:20]
  wire [31:0] _GEN_17 = ex_reg_lsuType == 4'h1 ? _T_103 : 32'h0; // @[Core.scala 424:33 Core.scala 430:19 Core.scala 408:15]
  wire  _T_121 = ex_reg_eew == 10'h8; // @[Core.scala 444:19]
  wire [31:0] _T_123 = vlcount + 32'h4; // @[Core.scala 444:39]
  wire  _T_124 = ex_reg_eew == 10'h10; // @[Core.scala 445:19]
  wire [31:0] _T_126 = vlcount + 32'h2; // @[Core.scala 445:40]
  wire  _T_127 = ex_reg_eew == 10'h20; // @[Core.scala 446:19]
  wire [31:0] _T_129 = vlcount + 32'h1; // @[Core.scala 446:40]
  wire  _T_130 = ex_reg_eew == 10'h40; // @[Core.scala 447:19]
  wire [32:0] _T_131 = {{1'd0}, vlcount}; // @[Core.scala 447:40]
  wire [31:0] _T_133 = _T_130 ? _T_131[31:0] : 32'h0; // @[Mux.scala 98:16]
  wire [31:0] _T_134 = _T_127 ? _T_129 : _T_133; // @[Mux.scala 98:16]
  wire [6:0] _GEN_23 = instruction[6:0] == 7'h33 ? instruction[31:25] : 7'h0; // @[Core.scala 527:42 Core.scala 528:11 Core.scala 530:11]
  wire [5:0] func7 = _GEN_23[5:0]; // @[Core.scala 526:19]
  wire  IF_stall = func7 == 6'h1 & (instruction[14:12] == 3'h4 | instruction[14:12] == 3'h5 | instruction[14:12] == 3'h6
     | _T_3); // @[Core.scala 533:32]
  wire  ral_halt_o = Realigner_io_ral_halt_o;
  wire [31:0] next_pc_selector = {{31'd0}, _T_64};
  wire  _T_160 = next_pc_selector == 32'h1; // @[Core.scala 540:33]
  wire  is_comp = CompressedDecoder_io_is_comp;
  wire [31:0] _T_162 = is_comp ? $signed(pc_io_pc2) : $signed(pc_io_pc4); // @[Core.scala 540:115]
  wire [31:0] _T_163 = IDecode_io_pcSrc ? $signed(IDecode_io_pcPlusOffset) : $signed(_T_162); // @[Core.scala 540:75]
  wire [31:0] _T_164 = IDecode_io_hdu_pcWrite ? $signed(_T_163) : $signed(pc_io_out); // @[Core.scala 540:55]
  wire [31:0] _T_185 = mem_reg_pc + 32'h4; // @[Core.scala 691:28]
  wire [31:0] _GEN_29 = mem_reg_ctl_memToReg == 2'h2 ? _T_185 : mem_reg_result; // @[Core.scala 690:44 Core.scala 691:15 Core.scala 695:15]
  reg [31:0] REG__0; // @[Core.scala 715:23]
  reg [31:0] REG__1; // @[Core.scala 715:23]
  reg [31:0] REG__2; // @[Core.scala 715:23]
  reg [31:0] REG__3; // @[Core.scala 715:23]
  reg [4:0] REG_1_0; // @[Core.scala 716:53]
  reg [4:0] REG_1_1; // @[Core.scala 716:53]
  reg [4:0] REG_1_2; // @[Core.scala 716:53]
  reg [4:0] REG_2_0; // @[Core.scala 716:53]
  reg [4:0] REG_2_1; // @[Core.scala 716:53]
  reg [4:0] REG_2_2; // @[Core.scala 716:53]
  reg [31:0] REG_3_0; // @[Core.scala 717:53]
  reg [31:0] REG_3_1; // @[Core.scala 717:53]
  reg [31:0] REG_4_0; // @[Core.scala 717:53]
  reg [31:0] REG_4_1; // @[Core.scala 717:53]
  reg [31:0] REG_5; // @[Core.scala 718:31]
  reg [31:0] REG_6; // @[Core.scala 719:32]
  reg  REG_7_0; // @[Core.scala 720:25]
  reg  REG_7_1; // @[Core.scala 720:25]
  reg  REG_7_2; // @[Core.scala 720:25]
  reg  REG_7_3; // @[Core.scala 720:25]
  wire [31:0] data = 32'sh0;
  wire [31:0] _WIRE = 32'h0;
  InstructionFetch InstructionFetch ( // @[Core.scala 186:18]
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
  InstructionDecode IDecode ( // @[Core.scala 188:23]
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
    .io_ctl_v_memRead(IDecode_io_ctl_v_memRead),
    .io_ctl_v_memWrite(IDecode_io_ctl_v_memWrite),
    .io_ctl_v_reg_read(IDecode_io_ctl_v_reg_read),
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
    .io_vs3_data(IDecode_io_vs3_data),
    .io_id_wbvs3_data(IDecode_io_id_wbvs3_data),
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
  Execute Execute ( // @[Core.scala 191:18]
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
    .io_vs3_data(Execute_io_vs3_data),
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
    .io_id_reg_vs3data(Execute_io_id_reg_vs3data),
    .io_fu_ex_reg_vd(Execute_io_fu_ex_reg_vd),
    .io_fu_mem_reg_vd(Execute_io_fu_mem_reg_vd),
    .io_fu_reg_vs1(Execute_io_fu_reg_vs1),
    .io_fu_reg_vs2(Execute_io_fu_reg_vs2),
    .io_fu_reg_vs3(Execute_io_fu_reg_vs3),
    .io_fu_ex_reg_write(Execute_io_fu_ex_reg_write),
    .io_fu_mem_reg_write(Execute_io_fu_mem_reg_write),
    .io_v_MemWrite(Execute_io_v_MemWrite),
    .io_vec_alu_res(Execute_io_vec_alu_res),
    .io_vec_vl(Execute_io_vec_vl),
    .io_vec_rd_out(Execute_io_vec_rd_out),
    .io_vec_avl_o(Execute_io_vec_avl_o),
    .io_vec_valmax_o(Execute_io_vec_valmax_o),
    .io_vs3_data_o(Execute_io_vs3_data_o),
    .io_writeData(Execute_io_writeData),
    .io_ALUresult(Execute_io_ALUresult),
    .io_stall(Execute_io_stall)
  );
  MemoryFetch MEM ( // @[Core.scala 193:19]
    .clock(MEM_clock),
    .reset(MEM_reset),
    .io_aluResultIn(MEM_io_aluResultIn),
    .io_v_addr(MEM_io_v_addr),
    .io_v_ins(MEM_io_v_ins),
    .io_writeData(MEM_io_writeData),
    .io_v_writeData(MEM_io_v_writeData),
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
  PC pc ( // @[Core.scala 201:18]
    .clock(pc_clock),
    .reset(pc_reset),
    .io_in(pc_io_in),
    .io_halt(pc_io_halt),
    .io_out(pc_io_out),
    .io_pc4(pc_io_pc4),
    .io_pc2(pc_io_pc2)
  );
  VLSU vlsu ( // @[Core.scala 227:19]
    .clock(vlsu_clock),
    .reset(vlsu_reset),
    .io_instr(vlsu_io_instr),
    .io_vtype(vlsu_io_vtype),
    .io_UnitStride(vlsu_io_UnitStride),
    .io_evl(vlsu_io_evl),
    .io_vs3_Addr(vlsu_io_vs3_Addr),
    .io_lsuType(vlsu_io_lsuType),
    .io_eew(vlsu_io_eew),
    .io_nf(vlsu_io_nf),
    .io_emmul(vlsu_io_emmul),
    .io_emul(vlsu_io_emul)
  );
  Realigner Realigner ( // @[Core.scala 496:20]
    .clock(Realigner_clock),
    .reset(Realigner_reset),
    .io_ral_address_i(Realigner_io_ral_address_i),
    .io_ral_instruction_i(Realigner_io_ral_instruction_i),
    .io_ral_jmp(Realigner_io_ral_jmp),
    .io_ral_address_o(Realigner_io_ral_address_o),
    .io_ral_instruction_o(Realigner_io_ral_instruction_o),
    .io_ral_halt_o(Realigner_io_ral_halt_o)
  );
  CompressedDecoder CompressedDecoder ( // @[Core.scala 510:20]
    .io_instruction_i(CompressedDecoder_io_instruction_i),
    .io_is_comp(CompressedDecoder_io_is_comp),
    .io_instruction_o(CompressedDecoder_io_instruction_o)
  );
  assign io_pin = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_29; // @[Core.scala 687:38 Core.scala 688:13]
  assign io_Vpin = IDecode_io_vs3_data; // @[Core.scala 709:26]
  assign io_dmemReq_valid = MEM_io_dccmReq_valid; // @[Core.scala 646:14]
  assign io_dmemReq_bits_addrRequest = MEM_io_dccmReq_bits_addrRequest; // @[Core.scala 646:14]
  assign io_dmemReq_bits_dataRequest = MEM_io_dccmReq_bits_dataRequest; // @[Core.scala 646:14]
  assign io_dmemReq_bits_activeByteLane = MEM_io_dccmReq_bits_activeByteLane; // @[Core.scala 646:14]
  assign io_dmemReq_bits_isWrite = MEM_io_dccmReq_bits_isWrite; // @[Core.scala 646:14]
  assign io_imemReq_valid = InstructionFetch_io_coreInstrReq_valid; // @[Core.scala 203:14]
  assign io_imemReq_bits_addrRequest = InstructionFetch_io_coreInstrReq_bits_addrRequest; // @[Core.scala 203:14]
  assign io_imemReq_bits_dataRequest = InstructionFetch_io_coreInstrReq_bits_dataRequest; // @[Core.scala 203:14]
  assign io_imemReq_bits_activeByteLane = InstructionFetch_io_coreInstrReq_bits_activeByteLane; // @[Core.scala 203:14]
  assign io_imemReq_bits_isWrite = InstructionFetch_io_coreInstrReq_bits_isWrite; // @[Core.scala 203:14]
  assign io_rvfiUInt_0 = mem_reg_pc; // @[Core.scala 761:19]
  assign io_rvfiUInt_1 = REG__3; // @[Core.scala 761:19]
  assign io_rvfiUInt_2 = mem_reg_ins; // @[Core.scala 761:19]
  assign io_rvfiUInt_3 = REG_5; // @[Core.scala 761:19]
  assign io_rvfiSInt_0 = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_29; // @[Core.scala 755:36]
  assign io_rvfiSInt_1 = REG_3_1; // @[Core.scala 730:30]
  assign io_rvfiSInt_2 = REG_4_1; // @[Core.scala 730:30]
  assign io_rvfiSInt_3 = MEM_io_readData; // @[Core.scala 756:44]
  assign io_rvfiSInt_4 = REG_6; // @[Core.scala 761:19]
  assign io_rvfiBool_0 = REG_7_3; // @[Core.scala 761:19]
  assign io_rvfiRegAddr_0 = mem_reg_wra; // @[Core.scala 687:38 Core.scala 689:13]
  assign io_rvfiRegAddr_1 = REG_1_2; // @[Core.scala 727:33]
  assign io_rvfiRegAddr_2 = REG_2_2; // @[Core.scala 727:33]
  assign io_fcsr_o_data = IDecode_io_fscr_o_data; // @[Core.scala 195:18]
  assign InstructionFetch_reset = reset;
  assign InstructionFetch_io_address = Realigner_io_ral_address_o; // @[Core.scala 502:26]
  assign InstructionFetch_io_stall = Execute_io_stall | IDecode_io_stall | IF_stall; // @[Core.scala 535:48]
  assign InstructionFetch_io_coreInstrReq_ready = 1'h1; // @[Core.scala 203:14]
  assign InstructionFetch_io_coreInstrResp_valid = io_imemRsp_valid; // @[Core.scala 204:20]
  assign InstructionFetch_io_coreInstrResp_bits_dataResponse = io_imemRsp_bits_dataResponse; // @[Core.scala 204:20]
  assign IDecode_clock = clock;
  assign IDecode_reset = reset;
  assign IDecode_io_id_instruction = if_reg_ins; // @[Core.scala 579:21]
  assign IDecode_io_writeData = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_29; // @[Core.scala 687:38 Core.scala 688:13]
  assign IDecode_io_writeReg = mem_reg_wra; // @[Core.scala 687:38 Core.scala 689:13]
  assign IDecode_io_pcAddress = if_reg_pc; // @[Core.scala 580:16]
  assign IDecode_io_ctl_writeEnable = mem_reg_ctl_regWrite; // @[Core.scala 704:22]
  assign IDecode_io_id_ex_mem_read = id_reg_ctl_memRead; // @[Core.scala 621:21]
  assign IDecode_io_ex_mem_mem_read = ex_reg_ctl_memRead; // @[Core.scala 622:22]
  assign IDecode_io_dmem_resp_valid = io_dmemRsp_valid; // @[Core.scala 581:22]
  assign IDecode_io_id_ex_rd = id_reg_ins[11:7]; // @[Core.scala 626:28]
  assign IDecode_io_ex_mem_rd = ex_reg_ins[11:7]; // @[Core.scala 628:29]
  assign IDecode_io_id_ex_branch = id_reg_ins[6:0] == 7'h63; // @[Core.scala 627:42]
  assign IDecode_io_ex_mem_ins = ex_reg_ins; // @[Core.scala 585:17]
  assign IDecode_io_mem_wb_ins = mem_reg_ins; // @[Core.scala 586:17]
  assign IDecode_io_ex_ins = id_reg_ins; // @[Core.scala 584:13]
  assign IDecode_io_ex_result = Execute_io_ALUresult; // @[Core.scala 629:16]
  assign IDecode_io_ex_mem_result = ex_reg_result; // @[Core.scala 587:20]
  assign IDecode_io_mem_wb_result = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_29; // @[Core.scala 687:38 Core.scala 688:13]
  assign IDecode_io_id_ex_regWr = id_reg_ctl_regWrite; // @[Core.scala 591:18]
  assign IDecode_io_ex_mem_regWr = ex_reg_ctl_regWrite; // @[Core.scala 592:19]
  assign IDecode_io_csr_Ex = id_reg_is_csr; // @[Core.scala 630:13]
  assign IDecode_io_csr_Mem = ex_reg_is_csr; // @[Core.scala 676:14]
  assign IDecode_io_csr_Wb = mem_reg_is_csr; // @[Core.scala 705:13]
  assign IDecode_io_csr_Ex_data = id_reg_csr_data; // @[Core.scala 631:18]
  assign IDecode_io_csr_Mem_data = ex_reg_csr_data; // @[Core.scala 677:19]
  assign IDecode_io_csr_Wb_data = mem_reg_csr_data; // @[Core.scala 706:18]
  assign IDecode_io_dmem_data = io_dmemRsp_bits_dataResponse; // @[Core.scala 707:16]
  assign IDecode_io_write_data = mem_reg_vec_alu_out; // @[Core.scala 485:17]
  assign IDecode_io_wb_addr = mem_reg_vec_vd_addr; // @[Core.scala 483:14]
  assign IDecode_io_wb_RegWrite = mem_reg_vec_reg_write; // @[Core.scala 482:18]
  assign IDecode_io_id_lmul_count = mem_reg_lmul_v; // @[Core.scala 484:20]
  assign IDecode_io_id_lmul_vs1in_vs2in = if_reg_lmul_v; // @[Core.scala 327:28]
  assign IDecode_io_vtypei = mem_reg_vtype; // @[Core.scala 488:13]
  assign IDecode_io_vl = mem_reg_vec_vl; // @[Core.scala 487:9]
  assign IDecode_io_ctl_vset = mem_reg_vset; // @[Core.scala 486:15]
  assign IDecode_io_csr_i_misa = 32'h0;
  assign IDecode_io_csr_i_mhartid = 32'h0;
  assign Execute_clock = clock;
  assign Execute_reset = reset;
  assign Execute_io_immediate = id_reg_imm; // @[Core.scala 602:16]
  assign Execute_io_readData1 = id_reg_rd1; // @[Core.scala 603:16]
  assign Execute_io_readData2 = id_reg_rd2; // @[Core.scala 604:16]
  assign Execute_io_pcAddress = id_reg_pc; // @[Core.scala 605:16]
  assign Execute_io_func7 = id_reg_f7; // @[Core.scala 607:12]
  assign Execute_io_func3 = id_reg_f3; // @[Core.scala 606:12]
  assign Execute_io_mem_result = ex_reg_result; // @[Core.scala 675:17]
  assign Execute_io_wb_result = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_29; // @[Core.scala 687:38 Core.scala 688:13]
  assign Execute_io_ex_mem_regWrite = ex_reg_ctl_regWrite; // @[Core.scala 668:22]
  assign Execute_io_mem_wb_regWrite = mem_reg_ctl_regWrite; // @[Core.scala 702:22]
  assign Execute_io_id_ex_ins = id_reg_ins; // @[Core.scala 623:16]
  assign Execute_io_ex_mem_ins = ex_reg_ins; // @[Core.scala 624:17]
  assign Execute_io_mem_wb_ins = mem_reg_ins; // @[Core.scala 625:17]
  assign Execute_io_ctl_aluSrc = id_reg_ctl_aluSrc; // @[Core.scala 608:17]
  assign Execute_io_ctl_aluOp = id_reg_ctl_aluOp; // @[Core.scala 609:16]
  assign Execute_io_ctl_aluSrc1 = id_reg_ctl_aluSrc1; // @[Core.scala 610:18]
  assign Execute_io_func6 = id_reg_ins[31:26]; // @[Core.scala 340:25]
  assign Execute_io_v_ctl_aluop = id_reg_ctl_aluop[2:0]; // @[Core.scala 341:18]
  assign Execute_io_v_ctl_exsel = id_reg_ctl_Ex_sel; // @[Core.scala 342:18]
  assign Execute_io_v_ctl_regwrite = id_reg_ctl_RegWrite; // @[Core.scala 343:21]
  assign Execute_io_v_ctl_opBsel = id_reg_ctl_opBsel; // @[Core.scala 344:19]
  assign Execute_io_v_ctl_v_load = id_reg_ctl_v_load; // @[Core.scala 345:19]
  assign Execute_io_v_ctl_v_ins = id_reg_ctl_v_ins; // @[Core.scala 346:18]
  assign Execute_io_v_ctl_vset = id_reg_ctl_vset; // @[Core.scala 347:17]
  assign Execute_io_vs1_data = id_reg_v1_data; // @[Core.scala 349:15]
  assign Execute_io_vs2_data = id_reg_v2_data; // @[Core.scala 350:15]
  assign Execute_io_vl = ex_reg_vset ? $signed(ex_reg_vl) : $signed(_T_68); // @[Core.scala 351:15]
  assign Execute_io_vstart = id_reg_vstart_out; // @[Core.scala 352:13]
  assign Execute_io_vs3_data = id_reg_vs3_data; // @[Core.scala 353:15]
  assign Execute_io_vma = ex_reg_vset ? ex_reg_vtype[7] : _T_73; // @[Core.scala 354:16]
  assign Execute_io_vta = ex_reg_vset ? ex_reg_vtype[6] : _T_78; // @[Core.scala 355:16]
  assign Execute_io_vm = id_reg_ins[25]; // @[Core.scala 356:22]
  assign Execute_io_vs0 = id_reg_v0_data; // @[Core.scala 357:10]
  assign Execute_io_vd_addr = id_reg_ins[11:7]; // @[Core.scala 358:27]
  assign Execute_io_v_sew = ex_reg_vset ? ex_reg_vtype[5:3] : _T_85; // @[Core.scala 359:18]
  assign Execute_io_zimm = id_reg_vtype; // @[Core.scala 360:11]
  assign Execute_io_v_addi_imm = id_reg_v_addi_imm; // @[Core.scala 361:17]
  assign Execute_io_vec_mem_res = ex_reg_vec_alu_res; // @[Core.scala 464:18]
  assign Execute_io_vec_wb_res = mem_reg_vec_alu_out; // @[Core.scala 481:17]
  assign Execute_io_id_reg_vs3data = IDecode_io_vs3_data; // @[Core.scala 371:21]
  assign Execute_io_fu_ex_reg_vd = ex_reg_vd_addr; // @[Core.scala 367:19]
  assign Execute_io_fu_mem_reg_vd = mem_reg_vec_vd_addr; // @[Core.scala 368:20]
  assign Execute_io_fu_reg_vs1 = id_reg_vs1_addr; // @[Core.scala 363:17]
  assign Execute_io_fu_reg_vs2 = id_reg_vs2_addr; // @[Core.scala 364:17]
  assign Execute_io_fu_reg_vs3 = id_reg_vd_addr; // @[Core.scala 365:17]
  assign Execute_io_fu_ex_reg_write = ex_reg_reg_write; // @[Core.scala 383:22]
  assign Execute_io_fu_mem_reg_write = mem_reg_vec_reg_write; // @[Core.scala 370:23]
  assign Execute_io_v_MemWrite = id_reg_ctl_v_MemWrite; // @[Core.scala 384:17]
  assign MEM_clock = clock;
  assign MEM_reset = reset;
  assign MEM_io_aluResultIn = ex_reg_result; // @[Core.scala 670:22]
  assign MEM_io_v_addr = vlcount != ex_reg_vl & ex_reg_ins[6:0] == 7'h27 ? _GEN_17 : 32'h0; // @[Core.scala 413:72 Core.scala 455:17]
  assign MEM_io_v_ins = ex_reg_v_ins; // @[Core.scala 669:15]
  assign MEM_io_writeData = ex_reg_wd; // @[Core.scala 671:20]
  assign MEM_io_v_writeData = vlcount != ex_reg_vl & ex_reg_ins[6:0] == 7'h27 ? _GEN_16 : 32'h0; // @[Core.scala 413:72 Core.scala 409:20]
  assign MEM_io_writeEnable = ex_reg_v_ins ? ex_reg_ctl_v_MemWrite : ex_reg_ctl_memWrite; // @[Core.scala 673:28]
  assign MEM_io_readEnable = ex_reg_v_ins ? ex_reg_ctl_v_memRead : ex_reg_ctl_memRead; // @[Core.scala 672:27]
  assign MEM_io_f3 = ex_reg_ins[14:12]; // @[Core.scala 674:26]
  assign MEM_io_dccmRsp_valid = io_dmemRsp_valid; // @[Core.scala 647:18]
  assign MEM_io_dccmRsp_bits_dataResponse = io_dmemRsp_bits_dataResponse; // @[Core.scala 647:18]
  assign pc_clock = clock;
  assign pc_reset = reset;
  assign pc_io_in = _T_160 ? $signed(pc_io_out) : $signed(_T_164); // @[Core.scala 662:17]
  assign pc_io_halt = Execute_io_stall | IDecode_io_stall | IF_stall | ~io_imemReq_valid | ral_halt_o; // @[Core.scala 538:79]
  assign vlsu_clock = clock;
  assign vlsu_reset = reset;
  assign vlsu_io_instr = CompressedDecoder_io_instruction_o; // @[Core.scala 206:25 Core.scala 513:18]
  assign vlsu_io_vtype = vtype; // @[Core.scala 230:15]
  assign Realigner_clock = clock;
  assign Realigner_reset = reset;
  assign Realigner_io_ral_address_i = pc_io_in; // @[Core.scala 498:44]
  assign Realigner_io_ral_instruction_i = InstructionFetch_io_instruction; // @[Core.scala 499:26]
  assign Realigner_io_ral_jmp = IDecode_io_pcSrc; // @[Core.scala 500:26]
  assign CompressedDecoder_io_instruction_i = Realigner_io_ral_instruction_o; // @[Core.scala 512:22]
  always @(posedge clock) begin
    if (reset) begin // @[Core.scala 38:26]
      if_reg_pc <= 32'h0; // @[Core.scala 38:26]
    end else if (IDecode_io_hdu_if_reg_write) begin // @[Core.scala 543:29]
      if_reg_pc <= pc_io_out; // @[Core.scala 544:15]
    end
    if (reset) begin // @[Core.scala 39:27]
      if_reg_ins <= 32'h0; // @[Core.scala 39:27]
    end else if (IDecode_io_ifid_flush) begin // @[Core.scala 547:23]
      if_reg_ins <= 32'h0; // @[Core.scala 548:16]
    end else if (IDecode_io_hdu_if_reg_write) begin // @[Core.scala 543:29]
      if_reg_ins <= instruction; // @[Core.scala 545:16]
    end
    if (reset) begin // @[Core.scala 42:30]
      if_reg_lmul_v <= 4'h0; // @[Core.scala 42:30]
    end else begin
      if_reg_lmul_v <= lmul_reg[3:0];
    end
    if (reset) begin // @[Core.scala 45:27]
      if_reg_eew <= 10'h0; // @[Core.scala 45:27]
    end else begin
      if_reg_eew <= vlsu_io_eew; // @[Core.scala 294:14]
    end
    if (reset) begin // @[Core.scala 46:31]
      if_reg_lsuType <= 4'h0; // @[Core.scala 46:31]
    end else begin
      if_reg_lsuType <= vlsu_io_lsuType; // @[Core.scala 295:18]
    end
    if (reset) begin // @[Core.scala 50:26]
      id_reg_pc <= 32'h0; // @[Core.scala 50:26]
    end else begin
      id_reg_pc <= if_reg_pc; // @[Core.scala 564:13]
    end
    if (reset) begin // @[Core.scala 51:27]
      id_reg_rd1 <= 32'h0; // @[Core.scala 51:27]
    end else begin
      id_reg_rd1 <= IDecode_io_readData1; // @[Core.scala 556:14]
    end
    if (reset) begin // @[Core.scala 52:27]
      id_reg_rd2 <= 32'h0; // @[Core.scala 52:27]
    end else begin
      id_reg_rd2 <= IDecode_io_readData2; // @[Core.scala 557:14]
    end
    if (reset) begin // @[Core.scala 53:27]
      id_reg_imm <= 32'h0; // @[Core.scala 53:27]
    end else begin
      id_reg_imm <= IDecode_io_immediate; // @[Core.scala 558:14]
    end
    if (reset) begin // @[Core.scala 54:27]
      id_reg_wra <= 5'h0; // @[Core.scala 54:27]
    end else if (!(Execute_io_stall)) begin // @[Core.scala 636:17]
      id_reg_wra <= IDecode_io_writeRegAddress; // @[Core.scala 559:14]
    end
    if (reset) begin // @[Core.scala 55:26]
      id_reg_f7 <= 7'h0; // @[Core.scala 55:26]
    end else begin
      id_reg_f7 <= IDecode_io_func7; // @[Core.scala 562:13]
    end
    if (reset) begin // @[Core.scala 57:26]
      id_reg_f3 <= 3'h0; // @[Core.scala 57:26]
    end else begin
      id_reg_f3 <= IDecode_io_func3; // @[Core.scala 560:13]
    end
    if (reset) begin // @[Core.scala 58:27]
      id_reg_ins <= 32'h0; // @[Core.scala 58:27]
    end else begin
      id_reg_ins <= if_reg_ins; // @[Core.scala 563:14]
    end
    if (reset) begin // @[Core.scala 59:34]
      id_reg_ctl_aluSrc <= 1'h0; // @[Core.scala 59:34]
    end else begin
      id_reg_ctl_aluSrc <= IDecode_io_ctl_aluSrc; // @[Core.scala 565:21]
    end
    if (reset) begin // @[Core.scala 60:35]
      id_reg_ctl_aluSrc1 <= 2'h0; // @[Core.scala 60:35]
    end else begin
      id_reg_ctl_aluSrc1 <= IDecode_io_ctl_aluSrc1; // @[Core.scala 573:22]
    end
    if (reset) begin // @[Core.scala 61:36]
      id_reg_ctl_memToReg <= 2'h0; // @[Core.scala 61:36]
    end else begin
      id_reg_ctl_memToReg <= IDecode_io_ctl_memToReg; // @[Core.scala 566:23]
    end
    if (reset) begin // @[Core.scala 62:36]
      id_reg_ctl_regWrite <= 1'h0; // @[Core.scala 62:36]
    end else if (!(Execute_io_stall)) begin // @[Core.scala 636:17]
      id_reg_ctl_regWrite <= IDecode_io_ctl_regWrite | IDecode_io_ctl_v_RegWrite; // @[Core.scala 567:23]
    end
    if (reset) begin // @[Core.scala 63:35]
      id_reg_ctl_memRead <= 1'h0; // @[Core.scala 63:35]
    end else begin
      id_reg_ctl_memRead <= IDecode_io_ctl_memRead; // @[Core.scala 568:22]
    end
    if (reset) begin // @[Core.scala 64:36]
      id_reg_ctl_memWrite <= 1'h0; // @[Core.scala 64:36]
    end else begin
      id_reg_ctl_memWrite <= IDecode_io_ctl_memWrite; // @[Core.scala 569:23]
    end
    if (reset) begin // @[Core.scala 66:33]
      id_reg_ctl_aluOp <= 2'h0; // @[Core.scala 66:33]
    end else begin
      id_reg_ctl_aluOp <= IDecode_io_ctl_aluOp; // @[Core.scala 571:20]
    end
    if (reset) begin // @[Core.scala 68:30]
      id_reg_is_csr <= 1'h0; // @[Core.scala 68:30]
    end else begin
      id_reg_is_csr <= IDecode_io_is_csr; // @[Core.scala 574:17]
    end
    if (reset) begin // @[Core.scala 69:32]
      id_reg_csr_data <= 32'h0; // @[Core.scala 69:32]
    end else begin
      id_reg_csr_data <= IDecode_io_csr_o_data; // @[Core.scala 575:19]
    end
    if (reset) begin // @[Core.scala 74:29]
      id_reg_z_imm <= 11'sh0; // @[Core.scala 74:29]
    end else begin
      id_reg_z_imm <= IDecode_io_v_z_imm[10:0]; // @[Core.scala 305:18]
    end
    if (reset) begin // @[Core.scala 76:34]
      id_reg_vstart_out <= 32'sh0; // @[Core.scala 76:34]
    end else begin
      id_reg_vstart_out <= IDecode_io_vstart_out; // @[Core.scala 306:23]
    end
    if (reset) begin // @[Core.scala 77:29]
      id_reg_vtype <= 32'sh0; // @[Core.scala 77:29]
    end else begin
      id_reg_vtype <= {{21{IDecode_io_vtypei_out[10]}},IDecode_io_vtypei_out}; // @[Core.scala 307:18]
    end
    if (reset) begin // @[Core.scala 78:34]
      id_reg_v_addi_imm <= 32'sh0; // @[Core.scala 78:34]
    end else begin
      id_reg_v_addi_imm <= IDecode_io_v_addi_imm; // @[Core.scala 308:23]
    end
    if (reset) begin // @[Core.scala 79:31]
      id_reg_v0_data <= 128'sh0; // @[Core.scala 79:31]
    end else begin
      id_reg_v0_data <= IDecode_io_vs0_data; // @[Core.scala 309:20]
    end
    if (reset) begin // @[Core.scala 80:31]
      id_reg_v1_data <= 128'sh0; // @[Core.scala 80:31]
    end else begin
      id_reg_v1_data <= IDecode_io_vs1_data; // @[Core.scala 310:20]
    end
    if (reset) begin // @[Core.scala 81:31]
      id_reg_v2_data <= 128'sh0; // @[Core.scala 81:31]
    end else begin
      id_reg_v2_data <= IDecode_io_vs2_data; // @[Core.scala 311:20]
    end
    if (reset) begin // @[Core.scala 82:32]
      id_reg_vs3_data <= 128'sh0; // @[Core.scala 82:32]
    end else begin
      id_reg_vs3_data <= IDecode_io_vs3_data; // @[Core.scala 312:21]
    end
    if (reset) begin // @[Core.scala 83:32]
      id_reg_vs1_addr <= 5'h0; // @[Core.scala 83:32]
    end else begin
      id_reg_vs1_addr <= IDecode_io_vs1_addr; // @[Core.scala 324:21]
    end
    if (reset) begin // @[Core.scala 84:32]
      id_reg_vs2_addr <= 5'h0; // @[Core.scala 84:32]
    end else begin
      id_reg_vs2_addr <= IDecode_io_vs2_addr; // @[Core.scala 325:21]
    end
    if (reset) begin // @[Core.scala 85:31]
      id_reg_vd_addr <= 5'h0; // @[Core.scala 85:31]
    end else begin
      id_reg_vd_addr <= IDecode_io_vd_addr; // @[Core.scala 323:20]
    end
    if (reset) begin // @[Core.scala 86:30]
      id_reg_lmul_v <= 4'h0; // @[Core.scala 86:30]
    end else begin
      id_reg_lmul_v <= if_reg_lmul_v; // @[Core.scala 326:20]
    end
    if (reset) begin // @[Core.scala 90:27]
      id_reg_eew <= 10'h0; // @[Core.scala 90:27]
    end else begin
      id_reg_eew <= if_reg_eew; // @[Core.scala 330:16]
    end
    if (reset) begin // @[Core.scala 91:31]
      id_reg_lsuType <= 4'h0; // @[Core.scala 91:31]
    end else begin
      id_reg_lsuType <= if_reg_lsuType; // @[Core.scala 331:20]
    end
    if (reset) begin // @[Core.scala 95:36]
      id_reg_ctl_RegWrite <= 1'h0; // @[Core.scala 95:36]
    end else begin
      id_reg_ctl_RegWrite <= IDecode_io_ctl_v_RegWrite; // @[Core.scala 313:25]
    end
    if (reset) begin // @[Core.scala 98:34]
      id_reg_ctl_opBsel <= 1'h0; // @[Core.scala 98:34]
    end else begin
      id_reg_ctl_opBsel <= IDecode_io_ctl_v_opBsel; // @[Core.scala 314:23]
    end
    if (reset) begin // @[Core.scala 99:34]
      id_reg_ctl_Ex_sel <= 4'h0; // @[Core.scala 99:34]
    end else begin
      id_reg_ctl_Ex_sel <= IDecode_io_ctl_v_Ex_sel; // @[Core.scala 315:23]
    end
    if (reset) begin // @[Core.scala 101:33]
      id_reg_ctl_aluop <= 5'h0; // @[Core.scala 101:33]
    end else begin
      id_reg_ctl_aluop <= IDecode_io_ctl_v_aluop; // @[Core.scala 316:22]
    end
    if (reset) begin // @[Core.scala 102:32]
      id_reg_ctl_vset <= 1'h0; // @[Core.scala 102:32]
    end else begin
      id_reg_ctl_vset <= IDecode_io_ctl_v_vset; // @[Core.scala 317:21]
    end
    if (reset) begin // @[Core.scala 103:34]
      id_reg_ctl_v_load <= 1'h0; // @[Core.scala 103:34]
    end else begin
      id_reg_ctl_v_load <= IDecode_io_ctl_v_load[0]; // @[Core.scala 318:23]
    end
    if (reset) begin // @[Core.scala 104:33]
      id_reg_ctl_v_ins <= 1'h0; // @[Core.scala 104:33]
    end else begin
      id_reg_ctl_v_ins <= IDecode_io_ctl_v_ins; // @[Core.scala 319:22]
    end
    if (reset) begin // @[Core.scala 105:37]
      id_reg_ctl_v_memRead <= 1'h0; // @[Core.scala 105:37]
    end else begin
      id_reg_ctl_v_memRead <= IDecode_io_ctl_v_memRead; // @[Core.scala 320:26]
    end
    if (reset) begin // @[Core.scala 106:38]
      id_reg_ctl_v_MemWrite <= 1'h0; // @[Core.scala 106:38]
    end else begin
      id_reg_ctl_v_MemWrite <= IDecode_io_ctl_v_memWrite; // @[Core.scala 321:27]
    end
    if (reset) begin // @[Core.scala 115:30]
      ex_reg_result <= 32'h0; // @[Core.scala 115:30]
    end else begin
      ex_reg_result <= Execute_io_ALUresult; // @[Core.scala 659:19]
    end
    if (reset) begin // @[Core.scala 116:26]
      ex_reg_wd <= 32'h0; // @[Core.scala 116:26]
    end else begin
      ex_reg_wd <= Execute_io_writeData; // @[Core.scala 658:15]
    end
    if (reset) begin // @[Core.scala 117:27]
      ex_reg_wra <= 5'h0; // @[Core.scala 117:27]
    end else begin
      ex_reg_wra <= id_reg_wra; // @[Core.scala 614:14]
    end
    if (reset) begin // @[Core.scala 118:27]
      ex_reg_ins <= 32'h0; // @[Core.scala 118:27]
    end else begin
      ex_reg_ins <= id_reg_ins; // @[Core.scala 615:14]
    end
    if (reset) begin // @[Core.scala 119:36]
      ex_reg_ctl_memToReg <= 2'h0; // @[Core.scala 119:36]
    end else begin
      ex_reg_ctl_memToReg <= id_reg_ctl_memToReg; // @[Core.scala 616:23]
    end
    if (reset) begin // @[Core.scala 120:36]
      ex_reg_ctl_regWrite <= 1'h0; // @[Core.scala 120:36]
    end else begin
      ex_reg_ctl_regWrite <= id_reg_ctl_regWrite; // @[Core.scala 617:23]
    end
    if (reset) begin // @[Core.scala 121:35]
      ex_reg_ctl_memRead <= 1'h0; // @[Core.scala 121:35]
    end else begin
      ex_reg_ctl_memRead <= id_reg_ctl_memRead; // @[Core.scala 656:24]
    end
    if (reset) begin // @[Core.scala 122:36]
      ex_reg_ctl_memWrite <= 1'h0; // @[Core.scala 122:36]
    end else begin
      ex_reg_ctl_memWrite <= id_reg_ctl_memWrite; // @[Core.scala 657:25]
    end
    if (reset) begin // @[Core.scala 124:26]
      ex_reg_pc <= 32'h0; // @[Core.scala 124:26]
    end else begin
      ex_reg_pc <= id_reg_pc; // @[Core.scala 613:13]
    end
    if (reset) begin // @[Core.scala 125:30]
      ex_reg_is_csr <= 1'h0; // @[Core.scala 125:30]
    end else begin
      ex_reg_is_csr <= id_reg_is_csr; // @[Core.scala 618:17]
    end
    if (reset) begin // @[Core.scala 126:32]
      ex_reg_csr_data <= 32'h0; // @[Core.scala 126:32]
    end else begin
      ex_reg_csr_data <= id_reg_csr_data; // @[Core.scala 619:19]
    end
    if (reset) begin // @[Core.scala 129:35]
      ex_reg_vec_alu_res <= 128'sh0; // @[Core.scala 129:35]
    end else begin
      ex_reg_vec_alu_res <= Execute_io_vec_alu_res; // @[Core.scala 374:22]
    end
    if (reset) begin // @[Core.scala 131:26]
      ex_reg_vl <= 32'sh0; // @[Core.scala 131:26]
    end else begin
      ex_reg_vl <= Execute_io_vec_vl; // @[Core.scala 375:13]
    end
    if (reset) begin // @[Core.scala 138:31]
      ex_reg_vd_addr <= 5'h0; // @[Core.scala 138:31]
    end else begin
      ex_reg_vd_addr <= id_reg_vd_addr; // @[Core.scala 385:18]
    end
    if (reset) begin // @[Core.scala 139:30]
      ex_reg_lmul_v <= 4'h0; // @[Core.scala 139:30]
    end else begin
      ex_reg_lmul_v <= id_reg_lmul_v; // @[Core.scala 386:17]
    end
    if (reset) begin // @[Core.scala 141:28]
      ex_reg_vset <= 1'h0; // @[Core.scala 141:28]
    end else begin
      ex_reg_vset <= id_reg_ctl_vset; // @[Core.scala 348:15]
    end
    if (reset) begin // @[Core.scala 142:37]
      ex_reg_ctl_v_memRead <= 1'h0; // @[Core.scala 142:37]
    end else begin
      ex_reg_ctl_v_memRead <= id_reg_ctl_v_memRead; // @[Core.scala 379:24]
    end
    if (reset) begin // @[Core.scala 143:38]
      ex_reg_ctl_v_MemWrite <= 1'h0; // @[Core.scala 143:38]
    end else begin
      ex_reg_ctl_v_MemWrite <= id_reg_ctl_v_MemWrite; // @[Core.scala 380:25]
    end
    if (reset) begin // @[Core.scala 144:33]
      ex_reg_reg_write <= 1'h0; // @[Core.scala 144:33]
    end else begin
      ex_reg_reg_write <= id_reg_ctl_RegWrite; // @[Core.scala 382:20]
    end
    if (reset) begin // @[Core.scala 145:29]
      ex_reg_vtype <= 11'sh0; // @[Core.scala 145:29]
    end else begin
      ex_reg_vtype <= id_reg_z_imm; // @[Core.scala 373:16]
    end
    if (reset) begin // @[Core.scala 148:27]
      ex_reg_eew <= 10'h0; // @[Core.scala 148:27]
    end else begin
      ex_reg_eew <= id_reg_eew; // @[Core.scala 390:14]
    end
    if (reset) begin // @[Core.scala 149:31]
      ex_reg_lsuType <= 4'h0; // @[Core.scala 149:31]
    end else begin
      ex_reg_lsuType <= id_reg_lsuType; // @[Core.scala 391:18]
    end
    if (reset) begin // @[Core.scala 150:34]
      ex_reg_read_data1 <= 32'h0; // @[Core.scala 150:34]
    end else begin
      ex_reg_read_data1 <= id_reg_rd1; // @[Core.scala 392:21]
    end
    if (reset) begin // @[Core.scala 152:29]
      ex_reg_v_ins <= 1'h0; // @[Core.scala 152:29]
    end else begin
      ex_reg_v_ins <= id_reg_ctl_v_ins; // @[Core.scala 394:16]
    end
    if (reset) begin // @[Core.scala 156:28]
      mem_reg_ins <= 32'h0; // @[Core.scala 156:28]
    end else begin
      mem_reg_ins <= ex_reg_ins; // @[Core.scala 653:17]
    end
    if (reset) begin // @[Core.scala 157:31]
      mem_reg_result <= 32'h0; // @[Core.scala 157:31]
    end else begin
      mem_reg_result <= ex_reg_result; // @[Core.scala 650:20]
    end
    if (reset) begin // @[Core.scala 159:28]
      mem_reg_wra <= 5'h0; // @[Core.scala 159:28]
    end else begin
      mem_reg_wra <= ex_reg_wra; // @[Core.scala 664:15]
    end
    if (reset) begin // @[Core.scala 160:37]
      mem_reg_ctl_memToReg <= 2'h0; // @[Core.scala 160:37]
    end else begin
      mem_reg_ctl_memToReg <= ex_reg_ctl_memToReg; // @[Core.scala 665:24]
    end
    if (reset) begin // @[Core.scala 161:37]
      mem_reg_ctl_regWrite <= 1'h0; // @[Core.scala 161:37]
    end else begin
      mem_reg_ctl_regWrite <= ex_reg_ctl_regWrite; // @[Core.scala 652:26]
    end
    if (reset) begin // @[Core.scala 162:27]
      mem_reg_pc <= 32'h0; // @[Core.scala 162:27]
    end else begin
      mem_reg_pc <= ex_reg_pc; // @[Core.scala 654:16]
    end
    if (reset) begin // @[Core.scala 163:31]
      mem_reg_is_csr <= 1'h0; // @[Core.scala 163:31]
    end else begin
      mem_reg_is_csr <= ex_reg_is_csr; // @[Core.scala 666:18]
    end
    if (reset) begin // @[Core.scala 164:33]
      mem_reg_csr_data <= 32'h0; // @[Core.scala 164:33]
    end else begin
      mem_reg_csr_data <= ex_reg_csr_data; // @[Core.scala 667:20]
    end
    if (reset) begin // @[Core.scala 167:36]
      mem_reg_vec_alu_out <= 128'sh0; // @[Core.scala 167:36]
    end else begin
      mem_reg_vec_alu_out <= ex_reg_vec_alu_res; // @[Core.scala 465:23]
    end
    if (reset) begin // @[Core.scala 168:31]
      mem_reg_vec_vl <= 32'sh0; // @[Core.scala 168:31]
    end else begin
      mem_reg_vec_vl <= ex_reg_vl; // @[Core.scala 467:18]
    end
    if (reset) begin // @[Core.scala 169:30]
      mem_reg_vtype <= 11'sh0; // @[Core.scala 169:30]
    end else begin
      mem_reg_vtype <= ex_reg_vtype; // @[Core.scala 468:17]
    end
    if (reset) begin // @[Core.scala 173:36]
      mem_reg_vec_vd_addr <= 5'h0; // @[Core.scala 173:36]
    end else begin
      mem_reg_vec_vd_addr <= ex_reg_vd_addr; // @[Core.scala 473:23]
    end
    if (reset) begin // @[Core.scala 175:31]
      mem_reg_lmul_v <= 4'h0; // @[Core.scala 175:31]
    end else begin
      mem_reg_lmul_v <= ex_reg_lmul_v; // @[Core.scala 474:18]
    end
    if (reset) begin // @[Core.scala 176:29]
      mem_reg_vset <= 1'h0; // @[Core.scala 176:29]
    end else begin
      mem_reg_vset <= ex_reg_vset; // @[Core.scala 466:16]
    end
    if (reset) begin // @[Core.scala 177:38]
      mem_reg_vec_reg_write <= 1'h0; // @[Core.scala 177:38]
    end else begin
      mem_reg_vec_reg_write <= ex_reg_reg_write; // @[Core.scala 472:25]
    end
    if (reset) begin // @[Core.scala 216:19]
      lmul <= 3'h0; // @[Core.scala 216:19]
    end else if (instruction[6:0] == 7'h57 & instruction[14:12] == 3'h7 & (~instruction[31] | instruction[31:30] == 2'h3
      )) begin // @[Core.scala 218:133]
      lmul <= instruction[22:20]; // @[Core.scala 220:8]
    end
    if (reset) begin // @[Core.scala 217:20]
      vtype <= 32'h0; // @[Core.scala 217:20]
    end else if (instruction[6:0] == 7'h57 & instruction[14:12] == 3'h7 & (~instruction[31] | instruction[31:30] == 2'h3
      )) begin // @[Core.scala 218:133]
      vtype <= {{21'd0}, instruction[30:20]}; // @[Core.scala 221:9]
    end
    if (reset) begin // @[Core.scala 264:25]
      lmul_reg <= 32'h0; // @[Core.scala 264:25]
    end else if (lmul_reg != vlmul_count & (_T_1 & instruction[14:12] != 3'h7 | _T_35)) begin // @[Core.scala 265:143]
      lmul_reg <= _T_60; // @[Core.scala 267:18]
    end else begin
      lmul_reg <= 32'h0; // @[Core.scala 271:18]
    end
    if (reset) begin // @[Core.scala 281:25]
      delays <= 32'h0; // @[Core.scala 281:25]
    end else if (delays != vlcount1 & _T_35) begin // @[Core.scala 282:66]
      delays <= _T_66; // @[Core.scala 284:14]
    end else begin
      delays <= 32'h0; // @[Core.scala 287:14]
    end
    if (reset) begin // @[Core.scala 399:24]
      addrcount <= 32'h0; // @[Core.scala 399:24]
    end else if (vlcount != ex_reg_vl & ex_reg_ins[6:0] == 7'h27) begin // @[Core.scala 413:72]
      if (ex_reg_lsuType == 4'h1) begin // @[Core.scala 424:33]
        addrcount <= _T_105; // @[Core.scala 431:15]
      end
    end
    if (reset) begin // @[Core.scala 410:22]
      vlcount <= 32'h0; // @[Core.scala 410:22]
    end else if (vlcount != ex_reg_vl & ex_reg_ins[6:0] == 7'h27) begin // @[Core.scala 413:72]
      if (_T_121) begin // @[Mux.scala 98:16]
        vlcount <= _T_123;
      end else if (_T_124) begin // @[Mux.scala 98:16]
        vlcount <= _T_126;
      end else begin
        vlcount <= _T_134;
      end
    end
    REG__0 <= next_pc_selector == 32'h1 ? $signed(pc_io_out) : $signed(_T_164); // @[Core.scala 739:25]
    REG__1 <= REG__0; // @[Core.scala 733:23]
    REG__2 <= REG__1; // @[Core.scala 733:23]
    REG__3 <= REG__2; // @[Core.scala 733:23]
    REG_1_0 <= IDecode_io_rs_addr_0; // @[Core.scala 726:25]
    REG_1_1 <= REG_1_0; // @[Core.scala 724:31]
    REG_1_2 <= REG_1_1; // @[Core.scala 724:31]
    REG_2_0 <= IDecode_io_rs_addr_1; // @[Core.scala 726:25]
    REG_2_1 <= REG_2_0; // @[Core.scala 724:31]
    REG_2_2 <= REG_2_1; // @[Core.scala 724:31]
    REG_3_0 <= id_reg_rd1; // @[Core.scala 741:38]
    REG_3_1 <= REG_3_0; // @[Core.scala 729:25]
    REG_4_0 <= id_reg_rd2; // @[Core.scala 742:38]
    REG_4_1 <= REG_4_0; // @[Core.scala 729:25]
    if (reset) begin // @[Core.scala 718:31]
      REG_5 <= 32'h0; // @[Core.scala 718:31]
    end else begin
      REG_5 <= ex_reg_result; // @[Core.scala 761:19]
    end
    if (reset) begin // @[Core.scala 719:32]
      REG_6 <= 32'sh0; // @[Core.scala 719:32]
    end else begin
      REG_6 <= ex_reg_wd; // @[Core.scala 761:19]
    end
    REG_7_0 <= IDecode_io_hdu_if_reg_write; // @[Core.scala 761:19]
    REG_7_1 <= REG_7_0; // @[Core.scala 734:25]
    REG_7_2 <= REG_7_1; // @[Core.scala 734:25]
    REG_7_3 <= REG_7_2; // @[Core.scala 734:25]
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
  if_reg_eew = _RAND_3[9:0];
  _RAND_4 = {1{`RANDOM}};
  if_reg_lsuType = _RAND_4[3:0];
  _RAND_5 = {1{`RANDOM}};
  id_reg_pc = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  id_reg_rd1 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  id_reg_rd2 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  id_reg_imm = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  id_reg_wra = _RAND_9[4:0];
  _RAND_10 = {1{`RANDOM}};
  id_reg_f7 = _RAND_10[6:0];
  _RAND_11 = {1{`RANDOM}};
  id_reg_f3 = _RAND_11[2:0];
  _RAND_12 = {1{`RANDOM}};
  id_reg_ins = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  id_reg_ctl_aluSrc = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  id_reg_ctl_aluSrc1 = _RAND_14[1:0];
  _RAND_15 = {1{`RANDOM}};
  id_reg_ctl_memToReg = _RAND_15[1:0];
  _RAND_16 = {1{`RANDOM}};
  id_reg_ctl_regWrite = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  id_reg_ctl_memRead = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  id_reg_ctl_memWrite = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  id_reg_ctl_aluOp = _RAND_19[1:0];
  _RAND_20 = {1{`RANDOM}};
  id_reg_is_csr = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  id_reg_csr_data = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  id_reg_z_imm = _RAND_22[10:0];
  _RAND_23 = {1{`RANDOM}};
  id_reg_vstart_out = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  id_reg_vtype = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  id_reg_v_addi_imm = _RAND_25[31:0];
  _RAND_26 = {4{`RANDOM}};
  id_reg_v0_data = _RAND_26[127:0];
  _RAND_27 = {4{`RANDOM}};
  id_reg_v1_data = _RAND_27[127:0];
  _RAND_28 = {4{`RANDOM}};
  id_reg_v2_data = _RAND_28[127:0];
  _RAND_29 = {4{`RANDOM}};
  id_reg_vs3_data = _RAND_29[127:0];
  _RAND_30 = {1{`RANDOM}};
  id_reg_vs1_addr = _RAND_30[4:0];
  _RAND_31 = {1{`RANDOM}};
  id_reg_vs2_addr = _RAND_31[4:0];
  _RAND_32 = {1{`RANDOM}};
  id_reg_vd_addr = _RAND_32[4:0];
  _RAND_33 = {1{`RANDOM}};
  id_reg_lmul_v = _RAND_33[3:0];
  _RAND_34 = {1{`RANDOM}};
  id_reg_eew = _RAND_34[9:0];
  _RAND_35 = {1{`RANDOM}};
  id_reg_lsuType = _RAND_35[3:0];
  _RAND_36 = {1{`RANDOM}};
  id_reg_ctl_RegWrite = _RAND_36[0:0];
  _RAND_37 = {1{`RANDOM}};
  id_reg_ctl_opBsel = _RAND_37[0:0];
  _RAND_38 = {1{`RANDOM}};
  id_reg_ctl_Ex_sel = _RAND_38[3:0];
  _RAND_39 = {1{`RANDOM}};
  id_reg_ctl_aluop = _RAND_39[4:0];
  _RAND_40 = {1{`RANDOM}};
  id_reg_ctl_vset = _RAND_40[0:0];
  _RAND_41 = {1{`RANDOM}};
  id_reg_ctl_v_load = _RAND_41[0:0];
  _RAND_42 = {1{`RANDOM}};
  id_reg_ctl_v_ins = _RAND_42[0:0];
  _RAND_43 = {1{`RANDOM}};
  id_reg_ctl_v_memRead = _RAND_43[0:0];
  _RAND_44 = {1{`RANDOM}};
  id_reg_ctl_v_MemWrite = _RAND_44[0:0];
  _RAND_45 = {1{`RANDOM}};
  ex_reg_result = _RAND_45[31:0];
  _RAND_46 = {1{`RANDOM}};
  ex_reg_wd = _RAND_46[31:0];
  _RAND_47 = {1{`RANDOM}};
  ex_reg_wra = _RAND_47[4:0];
  _RAND_48 = {1{`RANDOM}};
  ex_reg_ins = _RAND_48[31:0];
  _RAND_49 = {1{`RANDOM}};
  ex_reg_ctl_memToReg = _RAND_49[1:0];
  _RAND_50 = {1{`RANDOM}};
  ex_reg_ctl_regWrite = _RAND_50[0:0];
  _RAND_51 = {1{`RANDOM}};
  ex_reg_ctl_memRead = _RAND_51[0:0];
  _RAND_52 = {1{`RANDOM}};
  ex_reg_ctl_memWrite = _RAND_52[0:0];
  _RAND_53 = {1{`RANDOM}};
  ex_reg_pc = _RAND_53[31:0];
  _RAND_54 = {1{`RANDOM}};
  ex_reg_is_csr = _RAND_54[0:0];
  _RAND_55 = {1{`RANDOM}};
  ex_reg_csr_data = _RAND_55[31:0];
  _RAND_56 = {4{`RANDOM}};
  ex_reg_vec_alu_res = _RAND_56[127:0];
  _RAND_57 = {1{`RANDOM}};
  ex_reg_vl = _RAND_57[31:0];
  _RAND_58 = {1{`RANDOM}};
  ex_reg_vd_addr = _RAND_58[4:0];
  _RAND_59 = {1{`RANDOM}};
  ex_reg_lmul_v = _RAND_59[3:0];
  _RAND_60 = {1{`RANDOM}};
  ex_reg_vset = _RAND_60[0:0];
  _RAND_61 = {1{`RANDOM}};
  ex_reg_ctl_v_memRead = _RAND_61[0:0];
  _RAND_62 = {1{`RANDOM}};
  ex_reg_ctl_v_MemWrite = _RAND_62[0:0];
  _RAND_63 = {1{`RANDOM}};
  ex_reg_reg_write = _RAND_63[0:0];
  _RAND_64 = {1{`RANDOM}};
  ex_reg_vtype = _RAND_64[10:0];
  _RAND_65 = {1{`RANDOM}};
  ex_reg_eew = _RAND_65[9:0];
  _RAND_66 = {1{`RANDOM}};
  ex_reg_lsuType = _RAND_66[3:0];
  _RAND_67 = {1{`RANDOM}};
  ex_reg_read_data1 = _RAND_67[31:0];
  _RAND_68 = {1{`RANDOM}};
  ex_reg_v_ins = _RAND_68[0:0];
  _RAND_69 = {1{`RANDOM}};
  mem_reg_ins = _RAND_69[31:0];
  _RAND_70 = {1{`RANDOM}};
  mem_reg_result = _RAND_70[31:0];
  _RAND_71 = {1{`RANDOM}};
  mem_reg_wra = _RAND_71[4:0];
  _RAND_72 = {1{`RANDOM}};
  mem_reg_ctl_memToReg = _RAND_72[1:0];
  _RAND_73 = {1{`RANDOM}};
  mem_reg_ctl_regWrite = _RAND_73[0:0];
  _RAND_74 = {1{`RANDOM}};
  mem_reg_pc = _RAND_74[31:0];
  _RAND_75 = {1{`RANDOM}};
  mem_reg_is_csr = _RAND_75[0:0];
  _RAND_76 = {1{`RANDOM}};
  mem_reg_csr_data = _RAND_76[31:0];
  _RAND_77 = {4{`RANDOM}};
  mem_reg_vec_alu_out = _RAND_77[127:0];
  _RAND_78 = {1{`RANDOM}};
  mem_reg_vec_vl = _RAND_78[31:0];
  _RAND_79 = {1{`RANDOM}};
  mem_reg_vtype = _RAND_79[10:0];
  _RAND_80 = {1{`RANDOM}};
  mem_reg_vec_vd_addr = _RAND_80[4:0];
  _RAND_81 = {1{`RANDOM}};
  mem_reg_lmul_v = _RAND_81[3:0];
  _RAND_82 = {1{`RANDOM}};
  mem_reg_vset = _RAND_82[0:0];
  _RAND_83 = {1{`RANDOM}};
  mem_reg_vec_reg_write = _RAND_83[0:0];
  _RAND_84 = {1{`RANDOM}};
  lmul = _RAND_84[2:0];
  _RAND_85 = {1{`RANDOM}};
  vtype = _RAND_85[31:0];
  _RAND_86 = {1{`RANDOM}};
  lmul_reg = _RAND_86[31:0];
  _RAND_87 = {1{`RANDOM}};
  delays = _RAND_87[31:0];
  _RAND_88 = {1{`RANDOM}};
  addrcount = _RAND_88[31:0];
  _RAND_89 = {1{`RANDOM}};
  vlcount = _RAND_89[31:0];
  _RAND_90 = {1{`RANDOM}};
  REG__0 = _RAND_90[31:0];
  _RAND_91 = {1{`RANDOM}};
  REG__1 = _RAND_91[31:0];
  _RAND_92 = {1{`RANDOM}};
  REG__2 = _RAND_92[31:0];
  _RAND_93 = {1{`RANDOM}};
  REG__3 = _RAND_93[31:0];
  _RAND_94 = {1{`RANDOM}};
  REG_1_0 = _RAND_94[4:0];
  _RAND_95 = {1{`RANDOM}};
  REG_1_1 = _RAND_95[4:0];
  _RAND_96 = {1{`RANDOM}};
  REG_1_2 = _RAND_96[4:0];
  _RAND_97 = {1{`RANDOM}};
  REG_2_0 = _RAND_97[4:0];
  _RAND_98 = {1{`RANDOM}};
  REG_2_1 = _RAND_98[4:0];
  _RAND_99 = {1{`RANDOM}};
  REG_2_2 = _RAND_99[4:0];
  _RAND_100 = {1{`RANDOM}};
  REG_3_0 = _RAND_100[31:0];
  _RAND_101 = {1{`RANDOM}};
  REG_3_1 = _RAND_101[31:0];
  _RAND_102 = {1{`RANDOM}};
  REG_4_0 = _RAND_102[31:0];
  _RAND_103 = {1{`RANDOM}};
  REG_4_1 = _RAND_103[31:0];
  _RAND_104 = {1{`RANDOM}};
  REG_5 = _RAND_104[31:0];
  _RAND_105 = {1{`RANDOM}};
  REG_6 = _RAND_105[31:0];
  _RAND_106 = {1{`RANDOM}};
  REG_7_0 = _RAND_106[0:0];
  _RAND_107 = {1{`RANDOM}};
  REG_7_1 = _RAND_107[0:0];
  _RAND_108 = {1{`RANDOM}};
  REG_7_2 = _RAND_108[0:0];
  _RAND_109 = {1{`RANDOM}};
  REG_7_3 = _RAND_109[0:0];
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
  sram_top #(.IFILE_IN("/home/maira/vaquita/asm.txt")) sram ( // @[SRamTop.scala 21:22]
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
