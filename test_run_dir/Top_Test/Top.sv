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
  assign io_coreInstrReq_bits_addrRequest = {{2'd0}, io_address[31:2]}; // @[InstructionFetch.scala 26:36]
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
  wire [10:0] MSTATUS_WIRE_lo = {3'h0,MSTATUS_MPIE_REG,3'h0,MSTATUS_MIE_REG,3'h0}; // @[Cat.scala 33:92]
  wire [31:0] MSTATUS_WIRE = {10'h0,MSTATUS_TW_REG,3'h0,MSTATUS_MPRV_REG,4'h0,MSTATUS_MPP_REG,MSTATUS_WIRE_lo}; // @[Cat.scala 33:92]
  wire [31:0] FFLAGS_WIRE = {27'h0,FCSR_NV_REG,FCSR_DZ_REG,FCSR_OF_REG,FCSR_UF_REG,FCSR_NX_REG}; // @[Cat.scala 33:92]
  wire [31:0] FRM_WIRE = {29'h0,FCSR_FRM_REG}; // @[Cat.scala 33:92]
  wire [31:0] FCSR_WIRE = {24'h0,FCSR_FRM_REG,FCSR_NV_REG,FCSR_DZ_REG,FCSR_OF_REG,FCSR_UF_REG,FCSR_NX_REG}; // @[Cat.scala 33:92]
  wire [31:0] _r_data_T_1 = 12'h301 == io_CSR_i_addr ? MISA_REG : 32'h0; // @[Mux.scala 81:58]
  wire [31:0] _r_data_T_3 = 12'hf14 == io_CSR_i_addr ? MHARTID_REG : _r_data_T_1; // @[Mux.scala 81:58]
  wire  _r_data_T_4 = 12'h300 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_5 = 12'h300 == io_CSR_i_addr ? MSTATUS_WIRE : _r_data_T_3; // @[Mux.scala 81:58]
  wire  _r_data_T_6 = 12'h342 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_7 = 12'h342 == io_CSR_i_addr ? MCAUSE_REG : _r_data_T_5; // @[Mux.scala 81:58]
  wire  _r_data_T_8 = 12'h305 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_9 = 12'h305 == io_CSR_i_addr ? MTVEC_REG : _r_data_T_7; // @[Mux.scala 81:58]
  wire  _r_data_T_10 = 12'h341 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_11 = 12'h341 == io_CSR_i_addr ? MEPC_REG : _r_data_T_9; // @[Mux.scala 81:58]
  wire  _r_data_T_12 = 12'h304 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_13 = 12'h304 == io_CSR_i_addr ? MIE_REG : _r_data_T_11; // @[Mux.scala 81:58]
  wire  _r_data_T_14 = 12'h1 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_15 = 12'h1 == io_CSR_i_addr ? FFLAGS_WIRE : _r_data_T_13; // @[Mux.scala 81:58]
  wire  _r_data_T_16 = 12'h2 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_17 = 12'h2 == io_CSR_i_addr ? FRM_WIRE : _r_data_T_15; // @[Mux.scala 81:58]
  wire  _r_data_T_18 = 12'h3 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] r_data = 12'h3 == io_CSR_i_addr ? FCSR_WIRE : _r_data_T_17; // @[Mux.scala 81:58]
  wire [31:0] set_data = r_data | io_CSR_i_data; // @[CSRRegFile.scala 90:29]
  wire [31:0] _clear_data_T = ~io_CSR_i_data; // @[CSRRegFile.scala 91:31]
  wire [31:0] clear_data = r_data & _clear_data_T; // @[CSRRegFile.scala 91:29]
  wire [31:0] _w_data_T_1 = 2'h1 == io_CSR_i_opr ? io_CSR_i_data : 32'h0; // @[Mux.scala 81:58]
  wire [31:0] _w_data_T_3 = 2'h2 == io_CSR_i_opr ? set_data : _w_data_T_1; // @[Mux.scala 81:58]
  wire [31:0] w_data = 2'h3 == io_CSR_i_opr ? clear_data : _w_data_T_3; // @[Mux.scala 81:58]
  wire [2:0] _GEN_0 = _r_data_T_16 ? w_data[2:0] : FCSR_FRM_REG; // @[CSRRegFile.scala 102:30 138:34 38:38]
  wire  _GEN_1 = _r_data_T_14 ? w_data[0] : FCSR_NX_REG; // @[CSRRegFile.scala 102:30 131:34 33:38]
  wire  _GEN_2 = _r_data_T_14 ? w_data[1] : FCSR_UF_REG; // @[CSRRegFile.scala 102:30 132:34 34:38]
  wire  _GEN_3 = _r_data_T_14 ? w_data[2] : FCSR_OF_REG; // @[CSRRegFile.scala 102:30 133:34 35:38]
  wire  _GEN_4 = _r_data_T_14 ? w_data[3] : FCSR_DZ_REG; // @[CSRRegFile.scala 102:30 134:34 36:38]
  wire  _GEN_5 = _r_data_T_14 ? w_data[4] : FCSR_NV_REG; // @[CSRRegFile.scala 102:30 135:34 37:38]
  wire [2:0] _GEN_6 = _r_data_T_14 ? FCSR_FRM_REG : _GEN_0; // @[CSRRegFile.scala 102:30 38:38]
  wire  _GEN_7 = _r_data_T_18 ? w_data[0] : _GEN_1; // @[CSRRegFile.scala 102:30 123:34]
  wire  _GEN_8 = _r_data_T_18 ? w_data[1] : _GEN_2; // @[CSRRegFile.scala 102:30 124:34]
  wire  _GEN_9 = _r_data_T_18 ? w_data[2] : _GEN_3; // @[CSRRegFile.scala 102:30 125:34]
  wire  _GEN_10 = _r_data_T_18 ? w_data[3] : _GEN_4; // @[CSRRegFile.scala 102:30 126:34]
  wire  _GEN_11 = _r_data_T_18 ? w_data[4] : _GEN_5; // @[CSRRegFile.scala 102:30 127:34]
  wire [2:0] _GEN_12 = _r_data_T_18 ? w_data[7:5] : _GEN_6; // @[CSRRegFile.scala 102:30 128:34]
  wire [31:0] _GEN_13 = _r_data_T_12 ? w_data : MIE_REG; // @[CSRRegFile.scala 102:30 120:34 23:38]
  wire  _GEN_14 = _r_data_T_12 ? FCSR_NX_REG : _GEN_7; // @[CSRRegFile.scala 102:30 33:38]
  wire  _GEN_15 = _r_data_T_12 ? FCSR_UF_REG : _GEN_8; // @[CSRRegFile.scala 102:30 34:38]
  wire  _GEN_16 = _r_data_T_12 ? FCSR_OF_REG : _GEN_9; // @[CSRRegFile.scala 102:30 35:38]
  wire  _GEN_17 = _r_data_T_12 ? FCSR_DZ_REG : _GEN_10; // @[CSRRegFile.scala 102:30 36:38]
  wire  _GEN_18 = _r_data_T_12 ? FCSR_NV_REG : _GEN_11; // @[CSRRegFile.scala 102:30 37:38]
  wire [2:0] _GEN_19 = _r_data_T_12 ? FCSR_FRM_REG : _GEN_12; // @[CSRRegFile.scala 102:30 38:38]
  wire [31:0] _GEN_20 = _r_data_T_10 ? w_data : MEPC_REG; // @[CSRRegFile.scala 102:30 117:34 22:38]
  wire [31:0] _GEN_21 = _r_data_T_10 ? MIE_REG : _GEN_13; // @[CSRRegFile.scala 102:30 23:38]
  wire  _GEN_22 = _r_data_T_10 ? FCSR_NX_REG : _GEN_14; // @[CSRRegFile.scala 102:30 33:38]
  wire  _GEN_23 = _r_data_T_10 ? FCSR_UF_REG : _GEN_15; // @[CSRRegFile.scala 102:30 34:38]
  wire  _GEN_24 = _r_data_T_10 ? FCSR_OF_REG : _GEN_16; // @[CSRRegFile.scala 102:30 35:38]
  wire  _GEN_25 = _r_data_T_10 ? FCSR_DZ_REG : _GEN_17; // @[CSRRegFile.scala 102:30 36:38]
  wire  _GEN_26 = _r_data_T_10 ? FCSR_NV_REG : _GEN_18; // @[CSRRegFile.scala 102:30 37:38]
  wire [2:0] _GEN_27 = _r_data_T_10 ? FCSR_FRM_REG : _GEN_19; // @[CSRRegFile.scala 102:30 38:38]
  wire [31:0] _GEN_28 = _r_data_T_8 ? w_data : MTVEC_REG; // @[CSRRegFile.scala 102:30 114:34 21:38]
  wire [31:0] _GEN_29 = _r_data_T_8 ? MEPC_REG : _GEN_20; // @[CSRRegFile.scala 102:30 22:38]
  wire [31:0] _GEN_30 = _r_data_T_8 ? MIE_REG : _GEN_21; // @[CSRRegFile.scala 102:30 23:38]
  wire  _GEN_31 = _r_data_T_8 ? FCSR_NX_REG : _GEN_22; // @[CSRRegFile.scala 102:30 33:38]
  wire  _GEN_32 = _r_data_T_8 ? FCSR_UF_REG : _GEN_23; // @[CSRRegFile.scala 102:30 34:38]
  wire  _GEN_33 = _r_data_T_8 ? FCSR_OF_REG : _GEN_24; // @[CSRRegFile.scala 102:30 35:38]
  wire  _GEN_34 = _r_data_T_8 ? FCSR_DZ_REG : _GEN_25; // @[CSRRegFile.scala 102:30 36:38]
  wire  _GEN_35 = _r_data_T_8 ? FCSR_NV_REG : _GEN_26; // @[CSRRegFile.scala 102:30 37:38]
  wire [2:0] _GEN_36 = _r_data_T_8 ? FCSR_FRM_REG : _GEN_27; // @[CSRRegFile.scala 102:30 38:38]
  assign io_CSR_o_data = 12'h3 == io_CSR_i_addr ? FCSR_WIRE : _r_data_T_17; // @[Mux.scala 81:58]
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
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 102:30]
        if (_r_data_T_6) begin // @[CSRRegFile.scala 102:30]
          MCAUSE_REG <= w_data; // @[CSRRegFile.scala 111:34]
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 21:38]
      MTVEC_REG <= 32'h0; // @[CSRRegFile.scala 21:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 102:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 102:30]
          MTVEC_REG <= _GEN_28;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 22:38]
      MEPC_REG <= 32'h0; // @[CSRRegFile.scala 22:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 102:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 102:30]
          MEPC_REG <= _GEN_29;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 23:38]
      MIE_REG <= 32'h0; // @[CSRRegFile.scala 23:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 102:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 102:30]
          MIE_REG <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 26:38]
      MSTATUS_TW_REG <= 1'h0; // @[CSRRegFile.scala 26:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 102:30]
        MSTATUS_TW_REG <= w_data[21]; // @[CSRRegFile.scala 104:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 27:38]
      MSTATUS_MPRV_REG <= 1'h0; // @[CSRRegFile.scala 27:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 102:30]
        MSTATUS_MPRV_REG <= w_data[17]; // @[CSRRegFile.scala 105:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 28:38]
      MSTATUS_MPP_REG <= 2'h0; // @[CSRRegFile.scala 28:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 102:30]
        MSTATUS_MPP_REG <= w_data[12:11]; // @[CSRRegFile.scala 106:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 29:38]
      MSTATUS_MPIE_REG <= 1'h0; // @[CSRRegFile.scala 29:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 102:30]
        MSTATUS_MPIE_REG <= w_data[7]; // @[CSRRegFile.scala 107:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 30:38]
      MSTATUS_MIE_REG <= 1'h0; // @[CSRRegFile.scala 30:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 102:30]
        MSTATUS_MIE_REG <= w_data[3]; // @[CSRRegFile.scala 108:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 33:38]
      FCSR_NX_REG <= 1'h0; // @[CSRRegFile.scala 33:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 102:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 102:30]
          FCSR_NX_REG <= _GEN_31;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 34:38]
      FCSR_UF_REG <= 1'h0; // @[CSRRegFile.scala 34:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 102:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 102:30]
          FCSR_UF_REG <= _GEN_32;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 35:38]
      FCSR_OF_REG <= 1'h0; // @[CSRRegFile.scala 35:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 102:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 102:30]
          FCSR_OF_REG <= _GEN_33;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 36:38]
      FCSR_DZ_REG <= 1'h0; // @[CSRRegFile.scala 36:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 102:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 102:30]
          FCSR_DZ_REG <= _GEN_34;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 37:38]
      FCSR_NV_REG <= 1'h0; // @[CSRRegFile.scala 37:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 102:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 102:30]
          FCSR_NV_REG <= _GEN_35;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 38:38]
      FCSR_FRM_REG <= 3'h0; // @[CSRRegFile.scala 38:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 101:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 102:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 102:30]
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
  wire [2:0] io_fcsr_o_data_lo = {csrRegFile_io_FCSR_of,csrRegFile_io_FCSR_uf,csrRegFile_io_FCSR_nx}; // @[Cat.scala 33:92]
  wire [28:0] io_fcsr_o_data_hi = {24'h0,csrRegFile_io_FCSR_frm,csrRegFile_io_FCSR_nv,csrRegFile_io_FCSR_dz}; // @[Cat.scala 33:92]
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
  assign io_fcsr_o_data = {io_fcsr_o_data_hi,io_fcsr_o_data_lo}; // @[Cat.scala 33:92]
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
  wire  _hazard_DecEx_T = io_regWrExecute & io_csrInstDecode; // @[CSRController.scala 33:44]
  wire  _hazard_DecEx_T_3 = |io_rdSelExecute; // @[CSRController.scala 36:44]
  wire  _hazard_DecEx_T_4 = _hazard_DecEx_T & _hazard_DecEx_T_3; // @[CSRController.scala 35:46]
  wire  _hazard_DecEx_T_5 = ~io_csrWrExecute; // @[CSRController.scala 37:28]
  wire  _hazard_DecEx_T_6 = _hazard_DecEx_T_4 & _hazard_DecEx_T_5; // @[CSRController.scala 36:48]
  wire  _hazard_DecEx_T_7 = io_rdSelExecute == io_rs1SelDecode; // @[CSRController.scala 38:44]
  wire  hazard_DecEx = _hazard_DecEx_T_6 & _hazard_DecEx_T_7; // @[CSRController.scala 37:45]
  wire  _hazard_DecMem_T = io_regWrMemory & io_csrInstDecode; // @[CSRController.scala 42:44]
  wire  _hazard_DecMem_T_3 = |io_rdSelMemory; // @[CSRController.scala 45:43]
  wire  _hazard_DecMem_T_4 = _hazard_DecMem_T & _hazard_DecMem_T_3; // @[CSRController.scala 44:46]
  wire  _hazard_DecMem_T_5 = ~io_csrWrMemory; // @[CSRController.scala 46:28]
  wire  _hazard_DecMem_T_6 = _hazard_DecMem_T_4 & _hazard_DecMem_T_5; // @[CSRController.scala 45:47]
  wire  _hazard_DecMem_T_7 = io_rdSelMemory == io_rs1SelDecode; // @[CSRController.scala 47:43]
  wire  _hazard_DecMem_T_8 = _hazard_DecMem_T_6 & _hazard_DecMem_T_7; // @[CSRController.scala 46:44]
  wire  _hazard_DecMem_T_9 = ~hazard_DecEx; // @[CSRController.scala 48:28]
  wire  hazard_DecMem = _hazard_DecMem_T_8 & _hazard_DecMem_T_9; // @[CSRController.scala 47:63]
  wire  _hazard_DecWb_T = io_regWrWriteback & io_csrInstDecode; // @[CSRController.scala 52:46]
  wire  _hazard_DecWb_T_3 = |io_rdSelWriteback; // @[CSRController.scala 55:46]
  wire  _hazard_DecWb_T_4 = _hazard_DecWb_T & _hazard_DecWb_T_3; // @[CSRController.scala 54:46]
  wire  _hazard_DecWb_T_5 = ~io_csrWrWriteback; // @[CSRController.scala 56:28]
  wire  _hazard_DecWb_T_6 = _hazard_DecWb_T_4 & _hazard_DecWb_T_5; // @[CSRController.scala 55:50]
  wire  _hazard_DecWb_T_7 = io_rdSelWriteback == io_rs1SelDecode; // @[CSRController.scala 57:46]
  wire  _hazard_DecWb_T_8 = _hazard_DecWb_T_6 & _hazard_DecWb_T_7; // @[CSRController.scala 56:47]
  wire  _hazard_DecWb_T_10 = _hazard_DecWb_T_8 & _hazard_DecMem_T_9; // @[CSRController.scala 57:66]
  wire  hazard_DecWb = _hazard_DecWb_T_10 & hazard_DecMem; // @[CSRController.scala 58:42]
  wire  _csrHazard_DecEx_T_5 = _hazard_DecEx_T_4 & io_csrWrExecute; // @[CSRController.scala 66:48]
  wire  csrHazard_DecEx = _csrHazard_DecEx_T_5 & _hazard_DecEx_T_7; // @[CSRController.scala 67:44]
  wire  _csrHazard_DecMem_T_5 = _hazard_DecMem_T_4 & io_csrWrMemory; // @[CSRController.scala 75:47]
  wire  _csrHazard_DecMem_T_7 = _csrHazard_DecMem_T_5 & _hazard_DecMem_T_7; // @[CSRController.scala 76:43]
  wire  _csrHazard_DecMem_T_8 = ~csrHazard_DecEx; // @[CSRController.scala 78:28]
  wire  csrHazard_DecMem = _csrHazard_DecMem_T_7 & _csrHazard_DecMem_T_8; // @[CSRController.scala 77:63]
  wire  _csrHazard_DecWb_T_5 = _hazard_DecWb_T_4 & io_csrWrWriteback; // @[CSRController.scala 85:50]
  wire  _csrHazard_DecWb_T_7 = _csrHazard_DecWb_T_5 & _hazard_DecWb_T_7; // @[CSRController.scala 86:46]
  wire  _csrHazard_DecWb_T_9 = _csrHazard_DecWb_T_7 & _csrHazard_DecMem_T_8; // @[CSRController.scala 87:66]
  wire  csrHazard_DecWb = _csrHazard_DecWb_T_9 & csrHazard_DecMem; // @[CSRController.scala 88:45]
  wire [1:0] _io_forwardRS1_T_3 = hazard_DecMem ? 2'h2 : {{1'd0}, hazard_DecEx}; // @[Mux.scala 81:58]
  wire [1:0] _io_forwardRS1_T_5 = hazard_DecWb ? 2'h3 : _io_forwardRS1_T_3; // @[Mux.scala 81:58]
  wire [2:0] _io_forwardRS1_T_7 = csrHazard_DecEx ? 3'h4 : {{1'd0}, _io_forwardRS1_T_5}; // @[Mux.scala 81:58]
  wire [2:0] _io_forwardRS1_T_9 = csrHazard_DecMem ? 3'h5 : _io_forwardRS1_T_7; // @[Mux.scala 81:58]
  assign io_forwardRS1 = csrHazard_DecWb ? 3'h6 : _io_forwardRS1_T_9; // @[Mux.scala 81:58]
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
  wire  _GEN_0 = _T_14 ? 1'h0 : 1'h1; // @[HazardUnit.scala 26:14 40:3 41:16]
  assign io_if_reg_write = io_ex_mem_memRead & io_branch & (io_ex_mem_rd == io_id_rs1 | io_ex_mem_rd == io_id_rs2) ? 1'h0
     : _GEN_0; // @[HazardUnit.scala 47:101 48:16]
  assign io_pc_write = io_ex_mem_memRead & io_branch & (io_ex_mem_rd == io_id_rs1 | io_ex_mem_rd == io_id_rs2) ? 1'h0 :
    _GEN_0; // @[HazardUnit.scala 47:101 48:16]
  assign io_ctl_mux = io_ex_mem_memRead & io_branch & (io_ex_mem_rd == io_id_rs1 | io_ex_mem_rd == io_id_rs2) ? 1'h0 :
    _GEN_0; // @[HazardUnit.scala 47:101 48:16]
  assign io_ifid_flush = io_taken | io_jump != 2'h0; // @[HazardUnit.scala 55:17]
  assign io_take_branch = io_ex_mem_memRead & io_branch & (io_ex_mem_rd == io_id_rs1 | io_ex_mem_rd == io_id_rs2) ? 1'h0
     : _GEN_0; // @[HazardUnit.scala 47:101 48:16]
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
  wire [31:0] _signals_T = io_in & 32'h7f; // @[Lookup.scala 31:38]
  wire  _signals_T_1 = 32'h33 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_3 = 32'h13 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_5 = 32'h73 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_7 = 32'h3 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_9 = 32'h23 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_11 = 32'h63 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_13 = 32'h37 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_15 = 32'h17 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_17 = 32'h6f == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_19 = 32'h67 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_25 = _signals_T_9 ? 1'h0 : _signals_T_11; // @[Lookup.scala 34:39]
  wire  _signals_T_26 = _signals_T_7 ? 1'h0 : _signals_T_25; // @[Lookup.scala 34:39]
  wire  _signals_T_27 = _signals_T_5 ? 1'h0 : _signals_T_26; // @[Lookup.scala 34:39]
  wire  _signals_T_28 = _signals_T_3 ? 1'h0 : _signals_T_27; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_29 = _signals_T_19 ? 2'h2 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_30 = _signals_T_17 ? 2'h2 : _signals_T_29; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_31 = _signals_T_15 ? 2'h0 : _signals_T_30; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_32 = _signals_T_13 ? 2'h0 : _signals_T_31; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_33 = _signals_T_11 ? 2'h0 : _signals_T_32; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_34 = _signals_T_9 ? 2'h0 : _signals_T_33; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_35 = _signals_T_7 ? 2'h1 : _signals_T_34; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_36 = _signals_T_5 ? 2'h0 : _signals_T_35; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_37 = _signals_T_3 ? 2'h0 : _signals_T_36; // @[Lookup.scala 34:39]
  wire  _signals_T_42 = _signals_T_11 ? 1'h0 : _signals_T_13 | (_signals_T_15 | (_signals_T_17 | _signals_T_19)); // @[Lookup.scala 34:39]
  wire  _signals_T_43 = _signals_T_9 ? 1'h0 : _signals_T_42; // @[Lookup.scala 34:39]
  wire  _signals_T_54 = _signals_T_5 ? 1'h0 : _signals_T_7; // @[Lookup.scala 34:39]
  wire  _signals_T_55 = _signals_T_3 ? 1'h0 : _signals_T_54; // @[Lookup.scala 34:39]
  wire  _signals_T_62 = _signals_T_7 ? 1'h0 : _signals_T_9; // @[Lookup.scala 34:39]
  wire  _signals_T_63 = _signals_T_5 ? 1'h0 : _signals_T_62; // @[Lookup.scala 34:39]
  wire  _signals_T_64 = _signals_T_3 ? 1'h0 : _signals_T_63; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_75 = _signals_T_17 ? 2'h1 : _signals_T_29; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_76 = _signals_T_15 ? 2'h0 : _signals_T_75; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_77 = _signals_T_13 ? 2'h0 : _signals_T_76; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_78 = _signals_T_11 ? 2'h0 : _signals_T_77; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_79 = _signals_T_9 ? 2'h0 : _signals_T_78; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_80 = _signals_T_7 ? 2'h0 : _signals_T_79; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_81 = _signals_T_5 ? 2'h0 : _signals_T_80; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_82 = _signals_T_3 ? 2'h0 : _signals_T_81; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_90 = _signals_T_5 ? 2'h2 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_91 = _signals_T_3 ? 2'h2 : _signals_T_90; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_95 = _signals_T_13 ? 2'h2 : {{1'd0}, _signals_T_15}; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_96 = _signals_T_11 ? 2'h0 : _signals_T_95; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_97 = _signals_T_9 ? 2'h0 : _signals_T_96; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_98 = _signals_T_7 ? 2'h0 : _signals_T_97; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_99 = _signals_T_5 ? 2'h0 : _signals_T_98; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_100 = _signals_T_3 ? 2'h0 : _signals_T_99; // @[Lookup.scala 34:39]
  assign io_aluSrc = _signals_T_1 | _signals_T_28; // @[Lookup.scala 34:39]
  assign io_memToReg = _signals_T_1 ? 2'h0 : _signals_T_37; // @[Lookup.scala 34:39]
  assign io_regWrite = _signals_T_1 | (_signals_T_3 | (_signals_T_5 | (_signals_T_7 | _signals_T_43))); // @[Lookup.scala 34:39]
  assign io_memRead = _signals_T_1 ? 1'h0 : _signals_T_55; // @[Lookup.scala 34:39]
  assign io_memWrite = _signals_T_1 ? 1'h0 : _signals_T_64; // @[Lookup.scala 34:39]
  assign io_branch = _signals_T_1 ? 1'h0 : _signals_T_28; // @[Lookup.scala 34:39]
  assign io_aluOp = _signals_T_1 ? 2'h2 : _signals_T_91; // @[Lookup.scala 34:39]
  assign io_jump = _signals_T_1 ? 2'h0 : _signals_T_82; // @[Lookup.scala 34:39]
  assign io_aluSrc1 = _signals_T_1 ? 2'h0 : _signals_T_100; // @[Lookup.scala 34:39]
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
  wire  _T_1 = func3 == 3'h7; // @[Vcontrol.scala 44:25]
  wire  _T_11 = _T_1 & configtype == 2'h3; // @[Vcontrol.scala 55:42]
  wire  _T_14 = func3 == 3'h3; // @[Vcontrol.scala 70:31]
  wire [2:0] _GEN_1 = func3 == 3'h3 ? 3'h4 : 3'h0; // @[Vcontrol.scala 23:15 70:45 74:26]
  wire  _GEN_3 = func3 == 3'h4 | _T_14; // @[Vcontrol.scala 65:45 66:28]
  wire [2:0] _GEN_4 = func3 == 3'h4 ? 3'h4 : _GEN_1; // @[Vcontrol.scala 65:45 68:26]
  wire  _GEN_5 = func3 == 3'h4 ? 1'h0 : _T_14; // @[Vcontrol.scala 22:15 65:45]
  wire  _GEN_7 = func3 == 3'h0 | _GEN_3; // @[Vcontrol.scala 59:45 60:28]
  wire [2:0] _GEN_8 = func3 == 3'h0 ? 3'h4 : _GEN_4; // @[Vcontrol.scala 59:45 62:26]
  wire  _GEN_10 = func3 == 3'h0 ? 1'h0 : _GEN_5; // @[Vcontrol.scala 22:15 59:45]
  wire  _GEN_11 = _T_1 & configtype == 2'h3 | _GEN_7; // @[Vcontrol.scala 55:67 56:28]
  wire [2:0] _GEN_12 = _T_1 & configtype == 2'h3 ? 3'h3 : _GEN_8; // @[Vcontrol.scala 55:67 57:26]
  wire  _GEN_14 = _T_1 & configtype == 2'h3 ? 1'h0 : _GEN_7; // @[Vcontrol.scala 24:14 55:67]
  wire  _GEN_16 = _T_1 & configtype == 2'h3 ? 1'h0 : _GEN_10; // @[Vcontrol.scala 22:15 55:67]
  wire  _GEN_17 = _T_1 & configtype == 2'h2 | _GEN_11; // @[Vcontrol.scala 49:67 50:28]
  wire  _GEN_18 = _T_1 & configtype == 2'h2 | _GEN_14; // @[Vcontrol.scala 49:67 51:25]
  wire  _GEN_19 = _T_1 & configtype == 2'h2 | _GEN_16; // @[Vcontrol.scala 49:67 52:26]
  wire [2:0] _GEN_20 = _T_1 & configtype == 2'h2 ? 3'h3 : _GEN_12; // @[Vcontrol.scala 49:67 53:26]
  wire  _GEN_21 = _T_1 & configtype == 2'h2 | _T_11; // @[Vcontrol.scala 49:67 54:25]
  wire  _GEN_23 = _T_1 & configtype == 2'h2 ? 1'h0 : _GEN_14; // @[Vcontrol.scala 28:16 49:67]
  wire  _GEN_24 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) | _GEN_17; // @[Vcontrol.scala 44:90 45:28]
  wire  _GEN_25 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) | _GEN_19; // @[Vcontrol.scala 44:90 46:26]
  wire [2:0] _GEN_26 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) ? 3'h3 : _GEN_20; // @[Vcontrol.scala 44:90 47:26]
  wire  _GEN_27 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) | _GEN_21; // @[Vcontrol.scala 44:90 48:25]
  wire  _GEN_28 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) ? 1'h0 : _GEN_18; // @[Vcontrol.scala 24:14 44:90]
  wire  _GEN_30 = func3 == 3'h7 & (configtype == 2'h0 | configtype == 2'h1) ? 1'h0 : _GEN_23; // @[Vcontrol.scala 28:16 44:90]
  wire  _GEN_36 = 7'h27 == opcode ? 1'h0 : 7'h7 == opcode; // @[Vcontrol.scala 26:15 40:20]
  wire [2:0] _GEN_40 = 7'h57 == opcode ? _GEN_26 : 3'h0; // @[Vcontrol.scala 40:20]
  wire  _GEN_42 = 7'h57 == opcode & _GEN_28; // @[Vcontrol.scala 40:20]
  assign io_RegWrite = 7'h57 == opcode & _GEN_24; // @[Vcontrol.scala 40:20]
  assign io_opBsel = 7'h57 == opcode & _GEN_25; // @[Vcontrol.scala 40:20]
  assign io_Ex_sel = {{1'd0}, _GEN_40};
  assign io_aluop = {{4'd0}, _GEN_42};
  assign io_vset = 7'h57 == opcode & _GEN_27; // @[Vcontrol.scala 40:20]
  assign io_v_load = 7'h57 == opcode ? 1'h0 : _GEN_36; // @[Vcontrol.scala 26:15 40:20]
  assign io_v_store = 7'h57 == opcode ? 1'h0 : 7'h27 == opcode; // @[Vcontrol.scala 29:16 40:20]
  assign io_v_ins = 7'h57 == opcode | 7'h27 == opcode; // @[Vcontrol.scala 40:20]
  assign io_RegRead = 7'h57 == opcode ? _GEN_30 : 7'h27 == opcode; // @[Vcontrol.scala 40:20]
  assign io_V_MemToReg = 1'h0; // @[Vcontrol.scala 30:19]
  assign io_V_MemRead = 1'h0; // @[Vcontrol.scala 31:18]
  assign io_memWrite = 7'h57 == opcode ? 1'h0 : 7'h27 == opcode; // @[Vcontrol.scala 29:16 40:20]
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
  wire [31:0] _GEN_65 = 5'h1 == io_readAddress_0 ? reg_1 : reg_0; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_66 = 5'h2 == io_readAddress_0 ? reg_2 : _GEN_65; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_67 = 5'h3 == io_readAddress_0 ? reg_3 : _GEN_66; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_68 = 5'h4 == io_readAddress_0 ? reg_4 : _GEN_67; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_69 = 5'h5 == io_readAddress_0 ? reg_5 : _GEN_68; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_70 = 5'h6 == io_readAddress_0 ? reg_6 : _GEN_69; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_71 = 5'h7 == io_readAddress_0 ? reg_7 : _GEN_70; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_72 = 5'h8 == io_readAddress_0 ? reg_8 : _GEN_71; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_73 = 5'h9 == io_readAddress_0 ? reg_9 : _GEN_72; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_74 = 5'ha == io_readAddress_0 ? reg_10 : _GEN_73; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_75 = 5'hb == io_readAddress_0 ? reg_11 : _GEN_74; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_76 = 5'hc == io_readAddress_0 ? reg_12 : _GEN_75; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_77 = 5'hd == io_readAddress_0 ? reg_13 : _GEN_76; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_78 = 5'he == io_readAddress_0 ? reg_14 : _GEN_77; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_79 = 5'hf == io_readAddress_0 ? reg_15 : _GEN_78; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_80 = 5'h10 == io_readAddress_0 ? reg_16 : _GEN_79; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_81 = 5'h11 == io_readAddress_0 ? reg_17 : _GEN_80; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_82 = 5'h12 == io_readAddress_0 ? reg_18 : _GEN_81; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_83 = 5'h13 == io_readAddress_0 ? reg_19 : _GEN_82; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_84 = 5'h14 == io_readAddress_0 ? reg_20 : _GEN_83; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_85 = 5'h15 == io_readAddress_0 ? reg_21 : _GEN_84; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_86 = 5'h16 == io_readAddress_0 ? reg_22 : _GEN_85; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_87 = 5'h17 == io_readAddress_0 ? reg_23 : _GEN_86; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_88 = 5'h18 == io_readAddress_0 ? reg_24 : _GEN_87; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_89 = 5'h19 == io_readAddress_0 ? reg_25 : _GEN_88; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_90 = 5'h1a == io_readAddress_0 ? reg_26 : _GEN_89; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_91 = 5'h1b == io_readAddress_0 ? reg_27 : _GEN_90; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_92 = 5'h1c == io_readAddress_0 ? reg_28 : _GEN_91; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_93 = 5'h1d == io_readAddress_0 ? reg_29 : _GEN_92; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_94 = 5'h1e == io_readAddress_0 ? reg_30 : _GEN_93; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_95 = 5'h1f == io_readAddress_0 ? reg_31 : _GEN_94; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_98 = 5'h1 == io_readAddress_1 ? reg_1 : reg_0; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_99 = 5'h2 == io_readAddress_1 ? reg_2 : _GEN_98; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_100 = 5'h3 == io_readAddress_1 ? reg_3 : _GEN_99; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_101 = 5'h4 == io_readAddress_1 ? reg_4 : _GEN_100; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_102 = 5'h5 == io_readAddress_1 ? reg_5 : _GEN_101; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_103 = 5'h6 == io_readAddress_1 ? reg_6 : _GEN_102; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_104 = 5'h7 == io_readAddress_1 ? reg_7 : _GEN_103; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_105 = 5'h8 == io_readAddress_1 ? reg_8 : _GEN_104; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_106 = 5'h9 == io_readAddress_1 ? reg_9 : _GEN_105; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_107 = 5'ha == io_readAddress_1 ? reg_10 : _GEN_106; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_108 = 5'hb == io_readAddress_1 ? reg_11 : _GEN_107; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_109 = 5'hc == io_readAddress_1 ? reg_12 : _GEN_108; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_110 = 5'hd == io_readAddress_1 ? reg_13 : _GEN_109; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_111 = 5'he == io_readAddress_1 ? reg_14 : _GEN_110; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_112 = 5'hf == io_readAddress_1 ? reg_15 : _GEN_111; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_113 = 5'h10 == io_readAddress_1 ? reg_16 : _GEN_112; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_114 = 5'h11 == io_readAddress_1 ? reg_17 : _GEN_113; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_115 = 5'h12 == io_readAddress_1 ? reg_18 : _GEN_114; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_116 = 5'h13 == io_readAddress_1 ? reg_19 : _GEN_115; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_117 = 5'h14 == io_readAddress_1 ? reg_20 : _GEN_116; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_118 = 5'h15 == io_readAddress_1 ? reg_21 : _GEN_117; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_119 = 5'h16 == io_readAddress_1 ? reg_22 : _GEN_118; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_120 = 5'h17 == io_readAddress_1 ? reg_23 : _GEN_119; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_121 = 5'h18 == io_readAddress_1 ? reg_24 : _GEN_120; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_122 = 5'h19 == io_readAddress_1 ? reg_25 : _GEN_121; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_123 = 5'h1a == io_readAddress_1 ? reg_26 : _GEN_122; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_124 = 5'h1b == io_readAddress_1 ? reg_27 : _GEN_123; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_125 = 5'h1c == io_readAddress_1 ? reg_28 : _GEN_124; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_126 = 5'h1d == io_readAddress_1 ? reg_29 : _GEN_125; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_127 = 5'h1e == io_readAddress_1 ? reg_30 : _GEN_126; // @[Registers.scala 23:{22,22}]
  wire [31:0] _GEN_128 = 5'h1f == io_readAddress_1 ? reg_31 : _GEN_127; // @[Registers.scala 23:{22,22}]
  assign io_readData_0 = io_readAddress_0 == 5'h0 ? 32'h0 : _GEN_95; // @[Registers.scala 20:37 21:22 23:22]
  assign io_readData_1 = io_readAddress_1 == 5'h0 ? 32'h0 : _GEN_128; // @[Registers.scala 20:37 21:22 23:22]
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
  input  [31:0]  io_ins,
  input  [4:0]   io_vs1_addr,
  input  [4:0]   io_vs2_addr,
  input  [4:0]   io_vs3_addr,
  input  [4:0]   io_vd_addr,
  input  [3:0]   io_lmul_count,
  input  [3:0]   io_lmul_vs1in_vs2in,
  input  [4:0]   io_id_vc3,
  output [127:0] io_vs0_data,
  output [127:0] io_vs1_data,
  output [127:0] io_vs2_data,
  output [127:0] io_vs3_data,
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
  reg [31:0] _RAND_32;
`endif // RANDOMIZE_REG_INIT
  reg [127:0] register_0; // @[Vreg.scala 30:25]
  reg [127:0] register_1; // @[Vreg.scala 30:25]
  reg [127:0] register_2; // @[Vreg.scala 30:25]
  reg [127:0] register_3; // @[Vreg.scala 30:25]
  reg [127:0] register_4; // @[Vreg.scala 30:25]
  reg [127:0] register_5; // @[Vreg.scala 30:25]
  reg [127:0] register_6; // @[Vreg.scala 30:25]
  reg [127:0] register_7; // @[Vreg.scala 30:25]
  reg [127:0] register_8; // @[Vreg.scala 30:25]
  reg [127:0] register_9; // @[Vreg.scala 30:25]
  reg [127:0] register_10; // @[Vreg.scala 30:25]
  reg [127:0] register_11; // @[Vreg.scala 30:25]
  reg [127:0] register_12; // @[Vreg.scala 30:25]
  reg [127:0] register_13; // @[Vreg.scala 30:25]
  reg [127:0] register_14; // @[Vreg.scala 30:25]
  reg [127:0] register_15; // @[Vreg.scala 30:25]
  reg [127:0] register_16; // @[Vreg.scala 30:25]
  reg [127:0] register_17; // @[Vreg.scala 30:25]
  reg [127:0] register_18; // @[Vreg.scala 30:25]
  reg [127:0] register_19; // @[Vreg.scala 30:25]
  reg [127:0] register_20; // @[Vreg.scala 30:25]
  reg [127:0] register_21; // @[Vreg.scala 30:25]
  reg [127:0] register_22; // @[Vreg.scala 30:25]
  reg [127:0] register_23; // @[Vreg.scala 30:25]
  reg [127:0] register_24; // @[Vreg.scala 30:25]
  reg [127:0] register_25; // @[Vreg.scala 30:25]
  reg [127:0] register_26; // @[Vreg.scala 30:25]
  reg [127:0] register_27; // @[Vreg.scala 30:25]
  reg [127:0] register_28; // @[Vreg.scala 30:25]
  reg [127:0] register_29; // @[Vreg.scala 30:25]
  reg [127:0] register_30; // @[Vreg.scala 30:25]
  reg [127:0] register_31; // @[Vreg.scala 30:25]
  wire [4:0] _GEN_302 = {{1'd0}, io_lmul_vs1in_vs2in}; // @[Vreg.scala 31:27]
  wire [4:0] vs1_in = io_vs1_addr + _GEN_302; // @[Vreg.scala 31:27]
  wire [4:0] vs2_in = io_vs2_addr + _GEN_302; // @[Vreg.scala 32:27]
  wire [4:0] vs3_in = io_vs3_addr + _GEN_302; // @[Vreg.scala 33:28]
  wire [4:0] _GEN_305 = {{1'd0}, io_lmul_count}; // @[Vreg.scala 34:26]
  wire [4:0] vsd_in = io_vd_addr + _GEN_305; // @[Vreg.scala 34:26]
  wire [127:0] _GEN_1 = 5'h1 == vs1_in ? $signed(register_1) : $signed(register_0); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_2 = 5'h2 == vs1_in ? $signed(register_2) : $signed(_GEN_1); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_3 = 5'h3 == vs1_in ? $signed(register_3) : $signed(_GEN_2); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_4 = 5'h4 == vs1_in ? $signed(register_4) : $signed(_GEN_3); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_5 = 5'h5 == vs1_in ? $signed(register_5) : $signed(_GEN_4); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_6 = 5'h6 == vs1_in ? $signed(register_6) : $signed(_GEN_5); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_7 = 5'h7 == vs1_in ? $signed(register_7) : $signed(_GEN_6); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_8 = 5'h8 == vs1_in ? $signed(register_8) : $signed(_GEN_7); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_9 = 5'h9 == vs1_in ? $signed(register_9) : $signed(_GEN_8); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_10 = 5'ha == vs1_in ? $signed(register_10) : $signed(_GEN_9); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_11 = 5'hb == vs1_in ? $signed(register_11) : $signed(_GEN_10); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_12 = 5'hc == vs1_in ? $signed(register_12) : $signed(_GEN_11); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_13 = 5'hd == vs1_in ? $signed(register_13) : $signed(_GEN_12); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_14 = 5'he == vs1_in ? $signed(register_14) : $signed(_GEN_13); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_15 = 5'hf == vs1_in ? $signed(register_15) : $signed(_GEN_14); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_16 = 5'h10 == vs1_in ? $signed(register_16) : $signed(_GEN_15); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_17 = 5'h11 == vs1_in ? $signed(register_17) : $signed(_GEN_16); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_18 = 5'h12 == vs1_in ? $signed(register_18) : $signed(_GEN_17); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_19 = 5'h13 == vs1_in ? $signed(register_19) : $signed(_GEN_18); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_20 = 5'h14 == vs1_in ? $signed(register_20) : $signed(_GEN_19); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_21 = 5'h15 == vs1_in ? $signed(register_21) : $signed(_GEN_20); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_22 = 5'h16 == vs1_in ? $signed(register_22) : $signed(_GEN_21); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_23 = 5'h17 == vs1_in ? $signed(register_23) : $signed(_GEN_22); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_24 = 5'h18 == vs1_in ? $signed(register_24) : $signed(_GEN_23); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_25 = 5'h19 == vs1_in ? $signed(register_25) : $signed(_GEN_24); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_26 = 5'h1a == vs1_in ? $signed(register_26) : $signed(_GEN_25); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_27 = 5'h1b == vs1_in ? $signed(register_27) : $signed(_GEN_26); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_28 = 5'h1c == vs1_in ? $signed(register_28) : $signed(_GEN_27); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_29 = 5'h1d == vs1_in ? $signed(register_29) : $signed(_GEN_28); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_30 = 5'h1e == vs1_in ? $signed(register_30) : $signed(_GEN_29); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_31 = 5'h1f == vs1_in ? $signed(register_31) : $signed(_GEN_30); // @[Vreg.scala 40:{13,13}]
  wire [127:0] _GEN_33 = 5'h1 == vs2_in ? $signed(register_1) : $signed(register_0); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_34 = 5'h2 == vs2_in ? $signed(register_2) : $signed(_GEN_33); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_35 = 5'h3 == vs2_in ? $signed(register_3) : $signed(_GEN_34); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_36 = 5'h4 == vs2_in ? $signed(register_4) : $signed(_GEN_35); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_37 = 5'h5 == vs2_in ? $signed(register_5) : $signed(_GEN_36); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_38 = 5'h6 == vs2_in ? $signed(register_6) : $signed(_GEN_37); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_39 = 5'h7 == vs2_in ? $signed(register_7) : $signed(_GEN_38); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_40 = 5'h8 == vs2_in ? $signed(register_8) : $signed(_GEN_39); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_41 = 5'h9 == vs2_in ? $signed(register_9) : $signed(_GEN_40); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_42 = 5'ha == vs2_in ? $signed(register_10) : $signed(_GEN_41); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_43 = 5'hb == vs2_in ? $signed(register_11) : $signed(_GEN_42); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_44 = 5'hc == vs2_in ? $signed(register_12) : $signed(_GEN_43); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_45 = 5'hd == vs2_in ? $signed(register_13) : $signed(_GEN_44); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_46 = 5'he == vs2_in ? $signed(register_14) : $signed(_GEN_45); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_47 = 5'hf == vs2_in ? $signed(register_15) : $signed(_GEN_46); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_48 = 5'h10 == vs2_in ? $signed(register_16) : $signed(_GEN_47); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_49 = 5'h11 == vs2_in ? $signed(register_17) : $signed(_GEN_48); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_50 = 5'h12 == vs2_in ? $signed(register_18) : $signed(_GEN_49); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_51 = 5'h13 == vs2_in ? $signed(register_19) : $signed(_GEN_50); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_52 = 5'h14 == vs2_in ? $signed(register_20) : $signed(_GEN_51); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_53 = 5'h15 == vs2_in ? $signed(register_21) : $signed(_GEN_52); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_54 = 5'h16 == vs2_in ? $signed(register_22) : $signed(_GEN_53); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_55 = 5'h17 == vs2_in ? $signed(register_23) : $signed(_GEN_54); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_56 = 5'h18 == vs2_in ? $signed(register_24) : $signed(_GEN_55); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_57 = 5'h19 == vs2_in ? $signed(register_25) : $signed(_GEN_56); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_58 = 5'h1a == vs2_in ? $signed(register_26) : $signed(_GEN_57); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_59 = 5'h1b == vs2_in ? $signed(register_27) : $signed(_GEN_58); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_60 = 5'h1c == vs2_in ? $signed(register_28) : $signed(_GEN_59); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_61 = 5'h1d == vs2_in ? $signed(register_29) : $signed(_GEN_60); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_62 = 5'h1e == vs2_in ? $signed(register_30) : $signed(_GEN_61); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_63 = 5'h1f == vs2_in ? $signed(register_31) : $signed(_GEN_62); // @[Vreg.scala 41:{13,13}]
  wire [127:0] _GEN_65 = 5'h1 == vs3_in ? $signed(register_1) : $signed(register_0); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_66 = 5'h2 == vs3_in ? $signed(register_2) : $signed(_GEN_65); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_67 = 5'h3 == vs3_in ? $signed(register_3) : $signed(_GEN_66); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_68 = 5'h4 == vs3_in ? $signed(register_4) : $signed(_GEN_67); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_69 = 5'h5 == vs3_in ? $signed(register_5) : $signed(_GEN_68); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_70 = 5'h6 == vs3_in ? $signed(register_6) : $signed(_GEN_69); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_71 = 5'h7 == vs3_in ? $signed(register_7) : $signed(_GEN_70); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_72 = 5'h8 == vs3_in ? $signed(register_8) : $signed(_GEN_71); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_73 = 5'h9 == vs3_in ? $signed(register_9) : $signed(_GEN_72); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_74 = 5'ha == vs3_in ? $signed(register_10) : $signed(_GEN_73); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_75 = 5'hb == vs3_in ? $signed(register_11) : $signed(_GEN_74); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_76 = 5'hc == vs3_in ? $signed(register_12) : $signed(_GEN_75); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_77 = 5'hd == vs3_in ? $signed(register_13) : $signed(_GEN_76); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_78 = 5'he == vs3_in ? $signed(register_14) : $signed(_GEN_77); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_79 = 5'hf == vs3_in ? $signed(register_15) : $signed(_GEN_78); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_80 = 5'h10 == vs3_in ? $signed(register_16) : $signed(_GEN_79); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_81 = 5'h11 == vs3_in ? $signed(register_17) : $signed(_GEN_80); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_82 = 5'h12 == vs3_in ? $signed(register_18) : $signed(_GEN_81); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_83 = 5'h13 == vs3_in ? $signed(register_19) : $signed(_GEN_82); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_84 = 5'h14 == vs3_in ? $signed(register_20) : $signed(_GEN_83); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_85 = 5'h15 == vs3_in ? $signed(register_21) : $signed(_GEN_84); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_86 = 5'h16 == vs3_in ? $signed(register_22) : $signed(_GEN_85); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_87 = 5'h17 == vs3_in ? $signed(register_23) : $signed(_GEN_86); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_88 = 5'h18 == vs3_in ? $signed(register_24) : $signed(_GEN_87); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_89 = 5'h19 == vs3_in ? $signed(register_25) : $signed(_GEN_88); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_90 = 5'h1a == vs3_in ? $signed(register_26) : $signed(_GEN_89); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_91 = 5'h1b == vs3_in ? $signed(register_27) : $signed(_GEN_90); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_92 = 5'h1c == vs3_in ? $signed(register_28) : $signed(_GEN_91); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_93 = 5'h1d == vs3_in ? $signed(register_29) : $signed(_GEN_92); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_94 = 5'h1e == vs3_in ? $signed(register_30) : $signed(_GEN_93); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_95 = 5'h1f == vs3_in ? $signed(register_31) : $signed(_GEN_94); // @[Vreg.scala 43:{13,13}]
  wire [127:0] _GEN_96 = 5'h0 == vsd_in ? $signed(io_vd_data) : $signed(register_0); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_97 = 5'h1 == vsd_in ? $signed(io_vd_data) : $signed(register_1); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_98 = 5'h2 == vsd_in ? $signed(io_vd_data) : $signed(register_2); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_99 = 5'h3 == vsd_in ? $signed(io_vd_data) : $signed(register_3); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_100 = 5'h4 == vsd_in ? $signed(io_vd_data) : $signed(register_4); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_101 = 5'h5 == vsd_in ? $signed(io_vd_data) : $signed(register_5); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_102 = 5'h6 == vsd_in ? $signed(io_vd_data) : $signed(register_6); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_103 = 5'h7 == vsd_in ? $signed(io_vd_data) : $signed(register_7); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_104 = 5'h8 == vsd_in ? $signed(io_vd_data) : $signed(register_8); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_105 = 5'h9 == vsd_in ? $signed(io_vd_data) : $signed(register_9); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_106 = 5'ha == vsd_in ? $signed(io_vd_data) : $signed(register_10); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_107 = 5'hb == vsd_in ? $signed(io_vd_data) : $signed(register_11); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_108 = 5'hc == vsd_in ? $signed(io_vd_data) : $signed(register_12); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_109 = 5'hd == vsd_in ? $signed(io_vd_data) : $signed(register_13); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_110 = 5'he == vsd_in ? $signed(io_vd_data) : $signed(register_14); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_111 = 5'hf == vsd_in ? $signed(io_vd_data) : $signed(register_15); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_112 = 5'h10 == vsd_in ? $signed(io_vd_data) : $signed(register_16); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_113 = 5'h11 == vsd_in ? $signed(io_vd_data) : $signed(register_17); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_114 = 5'h12 == vsd_in ? $signed(io_vd_data) : $signed(register_18); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_115 = 5'h13 == vsd_in ? $signed(io_vd_data) : $signed(register_19); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_116 = 5'h14 == vsd_in ? $signed(io_vd_data) : $signed(register_20); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_117 = 5'h15 == vsd_in ? $signed(io_vd_data) : $signed(register_21); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_118 = 5'h16 == vsd_in ? $signed(io_vd_data) : $signed(register_22); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_119 = 5'h17 == vsd_in ? $signed(io_vd_data) : $signed(register_23); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_120 = 5'h18 == vsd_in ? $signed(io_vd_data) : $signed(register_24); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_121 = 5'h19 == vsd_in ? $signed(io_vd_data) : $signed(register_25); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_122 = 5'h1a == vsd_in ? $signed(io_vd_data) : $signed(register_26); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_123 = 5'h1b == vsd_in ? $signed(io_vd_data) : $signed(register_27); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_124 = 5'h1c == vsd_in ? $signed(io_vd_data) : $signed(register_28); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_125 = 5'h1d == vsd_in ? $signed(io_vd_data) : $signed(register_29); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_126 = 5'h1e == vsd_in ? $signed(io_vd_data) : $signed(register_30); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_127 = 5'h1f == vsd_in ? $signed(io_vd_data) : $signed(register_31); // @[Vreg.scala 46:{24,24} 30:25]
  wire [127:0] _GEN_192 = io_reg_write & io_reg_read ? $signed(_GEN_31) : $signed(128'sh0); // @[Vreg.scala 56:58 58:17 63:17]
  wire [127:0] _GEN_193 = io_reg_write & io_reg_read ? $signed(_GEN_63) : $signed(128'sh0); // @[Vreg.scala 56:58 59:17 64:17]
  wire [127:0] _GEN_194 = io_reg_write & io_reg_read ? $signed(register_0) : $signed(128'sh0); // @[Vreg.scala 56:58 60:17 65:17]
  wire [127:0] _GEN_195 = io_reg_write & io_reg_read ? $signed(_GEN_95) : $signed(128'sh0); // @[Vreg.scala 56:58 61:17 66:17]
  wire [127:0] _GEN_196 = ~io_reg_write & io_reg_read ? $signed(_GEN_31) : $signed(_GEN_192); // @[Vreg.scala 51:58 52:17]
  wire [127:0] _GEN_197 = ~io_reg_write & io_reg_read ? $signed(_GEN_63) : $signed(_GEN_193); // @[Vreg.scala 51:58 53:17]
  wire [127:0] _GEN_198 = ~io_reg_write & io_reg_read ? $signed(register_0) : $signed(_GEN_194); // @[Vreg.scala 51:58 54:17]
  wire [127:0] _GEN_199 = ~io_reg_write & io_reg_read ? $signed(_GEN_95) : $signed(_GEN_195); // @[Vreg.scala 51:58 55:17]
  wire [127:0] _GEN_267 = io_reg_write & ~io_reg_read ? $signed(128'sh0) : $signed(_GEN_199); // @[Vreg.scala 45:54 50:19]
  reg [4:0] vs3_in_1; // @[Vreg.scala 69:23]
  wire [4:0] _vs3_in_1_T_1 = io_vs3_addr + io_id_vc3; // @[Vreg.scala 71:28]
  wire [127:0] _GEN_269 = 5'h1 == vs3_in_1 ? $signed(register_1) : $signed(register_0); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_270 = 5'h2 == vs3_in_1 ? $signed(register_2) : $signed(_GEN_269); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_271 = 5'h3 == vs3_in_1 ? $signed(register_3) : $signed(_GEN_270); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_272 = 5'h4 == vs3_in_1 ? $signed(register_4) : $signed(_GEN_271); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_273 = 5'h5 == vs3_in_1 ? $signed(register_5) : $signed(_GEN_272); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_274 = 5'h6 == vs3_in_1 ? $signed(register_6) : $signed(_GEN_273); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_275 = 5'h7 == vs3_in_1 ? $signed(register_7) : $signed(_GEN_274); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_276 = 5'h8 == vs3_in_1 ? $signed(register_8) : $signed(_GEN_275); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_277 = 5'h9 == vs3_in_1 ? $signed(register_9) : $signed(_GEN_276); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_278 = 5'ha == vs3_in_1 ? $signed(register_10) : $signed(_GEN_277); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_279 = 5'hb == vs3_in_1 ? $signed(register_11) : $signed(_GEN_278); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_280 = 5'hc == vs3_in_1 ? $signed(register_12) : $signed(_GEN_279); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_281 = 5'hd == vs3_in_1 ? $signed(register_13) : $signed(_GEN_280); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_282 = 5'he == vs3_in_1 ? $signed(register_14) : $signed(_GEN_281); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_283 = 5'hf == vs3_in_1 ? $signed(register_15) : $signed(_GEN_282); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_284 = 5'h10 == vs3_in_1 ? $signed(register_16) : $signed(_GEN_283); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_285 = 5'h11 == vs3_in_1 ? $signed(register_17) : $signed(_GEN_284); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_286 = 5'h12 == vs3_in_1 ? $signed(register_18) : $signed(_GEN_285); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_287 = 5'h13 == vs3_in_1 ? $signed(register_19) : $signed(_GEN_286); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_288 = 5'h14 == vs3_in_1 ? $signed(register_20) : $signed(_GEN_287); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_289 = 5'h15 == vs3_in_1 ? $signed(register_21) : $signed(_GEN_288); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_290 = 5'h16 == vs3_in_1 ? $signed(register_22) : $signed(_GEN_289); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_291 = 5'h17 == vs3_in_1 ? $signed(register_23) : $signed(_GEN_290); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_292 = 5'h18 == vs3_in_1 ? $signed(register_24) : $signed(_GEN_291); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_293 = 5'h19 == vs3_in_1 ? $signed(register_25) : $signed(_GEN_292); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_294 = 5'h1a == vs3_in_1 ? $signed(register_26) : $signed(_GEN_293); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_295 = 5'h1b == vs3_in_1 ? $signed(register_27) : $signed(_GEN_294); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_296 = 5'h1c == vs3_in_1 ? $signed(register_28) : $signed(_GEN_295); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_297 = 5'h1d == vs3_in_1 ? $signed(register_29) : $signed(_GEN_296); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_298 = 5'h1e == vs3_in_1 ? $signed(register_30) : $signed(_GEN_297); // @[Vreg.scala 72:{15,15}]
  wire [127:0] _GEN_299 = 5'h1f == vs3_in_1 ? $signed(register_31) : $signed(_GEN_298); // @[Vreg.scala 72:{15,15}]
  assign io_vs0_data = io_reg_write & ~io_reg_read ? $signed(128'sh0) : $signed(_GEN_198); // @[Vreg.scala 45:54 49:19]
  assign io_vs1_data = io_reg_write & ~io_reg_read ? $signed(128'sh0) : $signed(_GEN_196); // @[Vreg.scala 45:54 47:19]
  assign io_vs2_data = io_reg_write & ~io_reg_read ? $signed(128'sh0) : $signed(_GEN_197); // @[Vreg.scala 45:54 48:19]
  assign io_vs3_data = io_ins[6:0] == 7'h27 ? $signed(_GEN_299) : $signed(_GEN_267); // @[Vreg.scala 70:34 72:15]
  always @(posedge clock) begin
    if (reset) begin // @[Vreg.scala 30:25]
      register_0 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_0 <= _GEN_96;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_0 <= _GEN_96;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_1 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_1 <= _GEN_97;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_1 <= _GEN_97;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_2 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_2 <= _GEN_98;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_2 <= _GEN_98;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_3 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_3 <= _GEN_99;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_3 <= _GEN_99;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_4 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_4 <= _GEN_100;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_4 <= _GEN_100;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_5 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_5 <= _GEN_101;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_5 <= _GEN_101;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_6 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_6 <= _GEN_102;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_6 <= _GEN_102;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_7 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_7 <= _GEN_103;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_7 <= _GEN_103;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_8 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_8 <= _GEN_104;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_8 <= _GEN_104;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_9 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_9 <= _GEN_105;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_9 <= _GEN_105;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_10 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_10 <= _GEN_106;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_10 <= _GEN_106;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_11 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_11 <= _GEN_107;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_11 <= _GEN_107;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_12 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_12 <= _GEN_108;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_12 <= _GEN_108;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_13 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_13 <= _GEN_109;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_13 <= _GEN_109;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_14 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_14 <= _GEN_110;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_14 <= _GEN_110;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_15 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_15 <= _GEN_111;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_15 <= _GEN_111;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_16 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_16 <= _GEN_112;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_16 <= _GEN_112;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_17 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_17 <= _GEN_113;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_17 <= _GEN_113;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_18 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_18 <= _GEN_114;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_18 <= _GEN_114;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_19 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_19 <= _GEN_115;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_19 <= _GEN_115;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_20 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_20 <= _GEN_116;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_20 <= _GEN_116;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_21 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_21 <= _GEN_117;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_21 <= _GEN_117;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_22 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_22 <= _GEN_118;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_22 <= _GEN_118;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_23 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_23 <= _GEN_119;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_23 <= _GEN_119;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_24 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_24 <= _GEN_120;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_24 <= _GEN_120;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_25 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_25 <= _GEN_121;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_25 <= _GEN_121;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_26 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_26 <= _GEN_122;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_26 <= _GEN_122;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_27 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_27 <= _GEN_123;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_27 <= _GEN_123;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_28 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_28 <= _GEN_124;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_28 <= _GEN_124;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_29 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_29 <= _GEN_125;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_29 <= _GEN_125;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_30 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_30 <= _GEN_126;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_30 <= _GEN_126;
      end
    end
    if (reset) begin // @[Vreg.scala 30:25]
      register_31 <= 128'sh0; // @[Vreg.scala 30:25]
    end else if (io_reg_write & ~io_reg_read) begin // @[Vreg.scala 45:54]
      register_31 <= _GEN_127;
    end else if (!(~io_reg_write & io_reg_read)) begin // @[Vreg.scala 51:58]
      if (io_reg_write & io_reg_read) begin // @[Vreg.scala 56:58]
        register_31 <= _GEN_127;
      end
    end
    if (reset) begin // @[Vreg.scala 69:23]
      vs3_in_1 <= 5'h0; // @[Vreg.scala 69:23]
    end else if (io_ins[6:0] == 7'h27) begin // @[Vreg.scala 70:34]
      vs3_in_1 <= _vs3_in_1_T_1; // @[Vreg.scala 71:13]
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
  _RAND_32 = {1{`RANDOM}};
  vs3_in_1 = _RAND_32[4:0];
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
  wire [11:0] imm_i = io_instruction[31:20]; // @[ImmediateGen.scala 17:31]
  wire [19:0] _ext_i_T_2 = imm_i[11] ? 20'hfffff : 20'h0; // @[Bitwise.scala 77:12]
  wire [31:0] ext_i = {_ext_i_T_2,imm_i}; // @[Cat.scala 33:92]
  wire [19:0] imm_u = io_instruction[31:12]; // @[ImmediateGen.scala 24:33]
  wire [31:0] ext_u = {imm_u,12'h0}; // @[Cat.scala 33:92]
  wire [11:0] imm_s = {io_instruction[31:25],io_instruction[11:7]}; // @[Cat.scala 33:92]
  wire [19:0] _ext_s_T_2 = imm_s[11] ? 20'hfffff : 20'h0; // @[Bitwise.scala 77:12]
  wire [31:0] ext_s = {_ext_s_T_2,io_instruction[31:25],io_instruction[11:7]}; // @[Cat.scala 33:92]
  wire [11:0] imm_sb = {io_instruction[31],io_instruction[7],io_instruction[30:25],io_instruction[11:8]}; // @[Cat.scala 33:92]
  wire [18:0] _ext_sb_T_2 = imm_sb[11] ? 19'h7ffff : 19'h0; // @[Bitwise.scala 77:12]
  wire [31:0] ext_sb = {_ext_sb_T_2,io_instruction[31],io_instruction[7],io_instruction[30:25],io_instruction[11:8],1'h0
    }; // @[Cat.scala 33:92]
  wire [19:0] imm_uj = {io_instruction[31],io_instruction[19:12],io_instruction[20],io_instruction[30:21]}; // @[Cat.scala 33:92]
  wire [10:0] _ext_uj_T_2 = imm_uj[19] ? 11'h7ff : 11'h0; // @[Bitwise.scala 77:12]
  wire [31:0] ext_uj = {_ext_uj_T_2,io_instruction[31],io_instruction[19:12],io_instruction[20],io_instruction[30:21],1'h0
    }; // @[Cat.scala 33:92]
  wire [31:0] _GEN_0 = opcode == 7'h63 ? ext_sb : ext_uj; // @[ImmediateGen.scala 35:32 43:14 55:12]
  wire [31:0] _GEN_1 = opcode == 7'h23 ? ext_s : _GEN_0; // @[ImmediateGen.scala 29:32 32:14]
  wire [31:0] _GEN_2 = opcode == 7'h17 | opcode == 7'h37 ? ext_u : _GEN_1; // @[ImmediateGen.scala 23:51 26:14]
  assign io_out = _T_10 ? ext_i : _GEN_2; // @[ImmediateGen.scala 16:5 19:12]
endmodule
module ImmdValGen1(
  input  [31:0] io_instruction,
  output [31:0] io_z_imm,
  output [31:0] io_addi_imm
);
  wire [20:0] _io_z_imm_T_2 = io_instruction[30] ? 21'h1fffff : 21'h0; // @[Bitwise.scala 77:12]
  assign io_z_imm = {_io_z_imm_T_2,io_instruction[30:20]}; // @[Vimmgen.scala 14:77]
  assign io_addi_imm = {27'h0,io_instruction[19:15]}; // @[Vimmgen.scala 15:66]
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
  wire [30:0] _vtypeReg_T_2 = {20'h0,io_vtypei}; // @[Vcsr.scala 22:47]
  assign io_vl_out = vlReg; // @[Vcsr.scala 26:11]
  assign io_vtype_out = vtypeReg; // @[Vcsr.scala 27:14]
  assign io_vstart_out = 32'sh0; // @[Vcsr.scala 28:15]
  always @(posedge clock) begin
    if (reset) begin // @[Vcsr.scala 17:23]
      vtypeReg <= 32'sh0; // @[Vcsr.scala 17:23]
    end else if (io_vset) begin // @[Vcsr.scala 21:24]
      vtypeReg <= {{1{_vtypeReg_T_2[30]}},_vtypeReg_T_2}; // @[Vcsr.scala 22:14]
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
  wire  _check_T_9 = io_rd1 >= io_rd2; // @[BranchUnit.scala 28:32]
  wire  _GEN_1 = 3'h6 == io_funct3 ? io_rd1 < io_rd2 : _check_T_9; // @[BranchUnit.scala 22:21 27:21]
  wire  _GEN_2 = 3'h5 == io_funct3 ? $signed(io_rd1) >= $signed(io_rd2) : _GEN_1; // @[BranchUnit.scala 22:21 26:21]
  wire  _GEN_3 = 3'h4 == io_funct3 ? $signed(io_rd1) < $signed(io_rd2) : _GEN_2; // @[BranchUnit.scala 22:21 25:21]
  wire  _GEN_4 = 3'h1 == io_funct3 ? io_rd1 != io_rd2 : _GEN_3; // @[BranchUnit.scala 22:21 24:21]
  wire  check = 3'h0 == io_funct3 ? io_rd1 == io_rd2 : _GEN_4; // @[BranchUnit.scala 22:21 23:21]
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
  input  [4:0]   io_id_vc3,
  output [127:0] io_vs0_data,
  output [127:0] io_vs1_data,
  output [127:0] io_vs2_data,
  output         io_reg_write,
  output [4:0]   io_vs1_addr,
  output [4:0]   io_vs2_addr,
  output [4:0]   io_vd_addr,
  output [127:0] io_vs3_data,
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
  wire  csr_clock; // @[InstructionDecode.scala 117:19]
  wire  csr_reset; // @[InstructionDecode.scala 117:19]
  wire [31:0] csr_io_i_misa_value; // @[InstructionDecode.scala 117:19]
  wire [31:0] csr_io_i_mhartid_value; // @[InstructionDecode.scala 117:19]
  wire [31:0] csr_io_i_data; // @[InstructionDecode.scala 117:19]
  wire [4:0] csr_io_i_imm; // @[InstructionDecode.scala 117:19]
  wire [31:0] csr_io_o_data; // @[InstructionDecode.scala 117:19]
  wire [2:0] csr_io_i_opr; // @[InstructionDecode.scala 117:19]
  wire [11:0] csr_io_i_addr; // @[InstructionDecode.scala 117:19]
  wire  csr_io_i_w_en; // @[InstructionDecode.scala 117:19]
  wire [31:0] csr_io_fcsr_o_data; // @[InstructionDecode.scala 117:19]
  wire  csrController_io_regWrExecute; // @[InstructionDecode.scala 129:29]
  wire [4:0] csrController_io_rdSelExecute; // @[InstructionDecode.scala 129:29]
  wire  csrController_io_csrWrExecute; // @[InstructionDecode.scala 129:29]
  wire  csrController_io_regWrMemory; // @[InstructionDecode.scala 129:29]
  wire [4:0] csrController_io_rdSelMemory; // @[InstructionDecode.scala 129:29]
  wire  csrController_io_csrWrMemory; // @[InstructionDecode.scala 129:29]
  wire  csrController_io_regWrWriteback; // @[InstructionDecode.scala 129:29]
  wire [4:0] csrController_io_rdSelWriteback; // @[InstructionDecode.scala 129:29]
  wire  csrController_io_csrWrWriteback; // @[InstructionDecode.scala 129:29]
  wire [4:0] csrController_io_rs1SelDecode; // @[InstructionDecode.scala 129:29]
  wire  csrController_io_csrInstDecode; // @[InstructionDecode.scala 129:29]
  wire [2:0] csrController_io_forwardRS1; // @[InstructionDecode.scala 129:29]
  wire  hdu_io_id_ex_memRead; // @[InstructionDecode.scala 144:19]
  wire  hdu_io_ex_mem_memRead; // @[InstructionDecode.scala 144:19]
  wire  hdu_io_id_ex_branch; // @[InstructionDecode.scala 144:19]
  wire [4:0] hdu_io_id_ex_rd; // @[InstructionDecode.scala 144:19]
  wire [4:0] hdu_io_ex_mem_rd; // @[InstructionDecode.scala 144:19]
  wire [4:0] hdu_io_id_rs1; // @[InstructionDecode.scala 144:19]
  wire [4:0] hdu_io_id_rs2; // @[InstructionDecode.scala 144:19]
  wire  hdu_io_taken; // @[InstructionDecode.scala 144:19]
  wire [1:0] hdu_io_jump; // @[InstructionDecode.scala 144:19]
  wire  hdu_io_branch; // @[InstructionDecode.scala 144:19]
  wire  hdu_io_if_reg_write; // @[InstructionDecode.scala 144:19]
  wire  hdu_io_pc_write; // @[InstructionDecode.scala 144:19]
  wire  hdu_io_ctl_mux; // @[InstructionDecode.scala 144:19]
  wire  hdu_io_ifid_flush; // @[InstructionDecode.scala 144:19]
  wire  hdu_io_take_branch; // @[InstructionDecode.scala 144:19]
  wire [31:0] control_io_in; // @[InstructionDecode.scala 159:23]
  wire  control_io_aluSrc; // @[InstructionDecode.scala 159:23]
  wire [1:0] control_io_memToReg; // @[InstructionDecode.scala 159:23]
  wire  control_io_regWrite; // @[InstructionDecode.scala 159:23]
  wire  control_io_memRead; // @[InstructionDecode.scala 159:23]
  wire  control_io_memWrite; // @[InstructionDecode.scala 159:23]
  wire  control_io_branch; // @[InstructionDecode.scala 159:23]
  wire [1:0] control_io_aluOp; // @[InstructionDecode.scala 159:23]
  wire [1:0] control_io_jump; // @[InstructionDecode.scala 159:23]
  wire [1:0] control_io_aluSrc1; // @[InstructionDecode.scala 159:23]
  wire [31:0] Vcontrol_io_Instruction; // @[InstructionDecode.scala 176:24]
  wire  Vcontrol_io_RegWrite; // @[InstructionDecode.scala 176:24]
  wire  Vcontrol_io_opBsel; // @[InstructionDecode.scala 176:24]
  wire [3:0] Vcontrol_io_Ex_sel; // @[InstructionDecode.scala 176:24]
  wire [4:0] Vcontrol_io_aluop; // @[InstructionDecode.scala 176:24]
  wire  Vcontrol_io_vset; // @[InstructionDecode.scala 176:24]
  wire  Vcontrol_io_v_load; // @[InstructionDecode.scala 176:24]
  wire  Vcontrol_io_v_store; // @[InstructionDecode.scala 176:24]
  wire  Vcontrol_io_v_ins; // @[InstructionDecode.scala 176:24]
  wire  Vcontrol_io_RegRead; // @[InstructionDecode.scala 176:24]
  wire  Vcontrol_io_V_MemToReg; // @[InstructionDecode.scala 176:24]
  wire  Vcontrol_io_V_MemRead; // @[InstructionDecode.scala 176:24]
  wire  Vcontrol_io_memWrite; // @[InstructionDecode.scala 176:24]
  wire  registers_clock; // @[InstructionDecode.scala 190:25]
  wire  registers_reset; // @[InstructionDecode.scala 190:25]
  wire [4:0] registers_io_readAddress_0; // @[InstructionDecode.scala 190:25]
  wire [4:0] registers_io_readAddress_1; // @[InstructionDecode.scala 190:25]
  wire  registers_io_writeEnable; // @[InstructionDecode.scala 190:25]
  wire [4:0] registers_io_writeAddress; // @[InstructionDecode.scala 190:25]
  wire [31:0] registers_io_writeData; // @[InstructionDecode.scala 190:25]
  wire [31:0] registers_io_readData_0; // @[InstructionDecode.scala 190:25]
  wire [31:0] registers_io_readData_1; // @[InstructionDecode.scala 190:25]
  wire  v_registers_clock; // @[InstructionDecode.scala 206:27]
  wire  v_registers_reset; // @[InstructionDecode.scala 206:27]
  wire [31:0] v_registers_io_ins; // @[InstructionDecode.scala 206:27]
  wire [4:0] v_registers_io_vs1_addr; // @[InstructionDecode.scala 206:27]
  wire [4:0] v_registers_io_vs2_addr; // @[InstructionDecode.scala 206:27]
  wire [4:0] v_registers_io_vs3_addr; // @[InstructionDecode.scala 206:27]
  wire [4:0] v_registers_io_vd_addr; // @[InstructionDecode.scala 206:27]
  wire [3:0] v_registers_io_lmul_count; // @[InstructionDecode.scala 206:27]
  wire [3:0] v_registers_io_lmul_vs1in_vs2in; // @[InstructionDecode.scala 206:27]
  wire [4:0] v_registers_io_id_vc3; // @[InstructionDecode.scala 206:27]
  wire [127:0] v_registers_io_vs0_data; // @[InstructionDecode.scala 206:27]
  wire [127:0] v_registers_io_vs1_data; // @[InstructionDecode.scala 206:27]
  wire [127:0] v_registers_io_vs2_data; // @[InstructionDecode.scala 206:27]
  wire [127:0] v_registers_io_vs3_data; // @[InstructionDecode.scala 206:27]
  wire [127:0] v_registers_io_vd_data; // @[InstructionDecode.scala 206:27]
  wire  v_registers_io_reg_write; // @[InstructionDecode.scala 206:27]
  wire  v_registers_io_reg_read; // @[InstructionDecode.scala 206:27]
  wire [31:0] immediate_io_instruction; // @[InstructionDecode.scala 256:25]
  wire [31:0] immediate_io_out; // @[InstructionDecode.scala 256:25]
  wire [31:0] v_immediate_io_instruction; // @[InstructionDecode.scala 260:27]
  wire [31:0] v_immediate_io_z_imm; // @[InstructionDecode.scala 260:27]
  wire [31:0] v_immediate_io_addi_imm; // @[InstructionDecode.scala 260:27]
  wire  vec_csr_clock; // @[InstructionDecode.scala 266:23]
  wire  vec_csr_reset; // @[InstructionDecode.scala 266:23]
  wire [10:0] vec_csr_io_vtypei; // @[InstructionDecode.scala 266:23]
  wire [31:0] vec_csr_io_vl; // @[InstructionDecode.scala 266:23]
  wire  vec_csr_io_vset; // @[InstructionDecode.scala 266:23]
  wire [31:0] vec_csr_io_vl_out; // @[InstructionDecode.scala 266:23]
  wire [31:0] vec_csr_io_vtype_out; // @[InstructionDecode.scala 266:23]
  wire [31:0] vec_csr_io_vstart_out; // @[InstructionDecode.scala 266:23]
  wire  bu_io_branch; // @[InstructionDecode.scala 299:18]
  wire [2:0] bu_io_funct3; // @[InstructionDecode.scala 299:18]
  wire [31:0] bu_io_rd1; // @[InstructionDecode.scala 299:18]
  wire [31:0] bu_io_rd2; // @[InstructionDecode.scala 299:18]
  wire  bu_io_take_branch; // @[InstructionDecode.scala 299:18]
  wire  bu_io_taken; // @[InstructionDecode.scala 299:18]
  wire [31:0] _registers_io_writeData_T_1 = io_csr_Wb ? io_csr_Wb_data : io_writeData; // @[InstructionDecode.scala 201:34]
  wire [31:0] _GEN_5 = io_id_instruction[19:15] == 5'h0 ? 32'h0 : io_writeData; // @[InstructionDecode.scala 237:30 238:20 240:20]
  wire [31:0] _GEN_7 = io_id_instruction[24:20] == 5'h0 ? 32'h0 : io_writeData; // @[InstructionDecode.scala 246:30 247:20 249:20]
  wire [10:0] _io_v_z_imm_T_1 = io_id_instruction[30:20]; // @[InstructionDecode.scala 272:43]
  wire  _T_10 = io_id_instruction[19:15] == io_ex_mem_ins[11:7]; // @[InstructionDecode.scala 281:20]
  wire  _T_12 = io_id_instruction[19:15] == io_mem_wb_ins[11:7]; // @[InstructionDecode.scala 283:26]
  wire [31:0] _GEN_9 = io_id_instruction[19:15] == io_mem_wb_ins[11:7] ? io_mem_wb_result : io_readData1; // @[InstructionDecode.scala 283:52 284:14 287:14]
  wire [31:0] _GEN_11 = io_id_instruction[24:20] == io_mem_wb_ins[11:7] ? io_mem_wb_result : io_readData2; // @[InstructionDecode.scala 291:52 292:14 295:14]
  wire  _T_18 = io_id_instruction[19:15] == io_ex_ins[11:7]; // @[InstructionDecode.scala 309:22]
  wire [31:0] _GEN_13 = _T_18 ? io_ex_result : io_readData1; // @[InstructionDecode.scala 315:47 316:14 318:16]
  wire [31:0] _GEN_14 = _T_12 ? io_mem_wb_result : _GEN_13; // @[InstructionDecode.scala 313:52 314:14]
  wire [31:0] _GEN_15 = _T_10 ? io_ex_mem_result : _GEN_14; // @[InstructionDecode.scala 311:54 312:14]
  wire [31:0] j_offset = io_id_instruction[19:15] == io_ex_ins[11:7] ? io_ex_result : _GEN_15; // @[InstructionDecode.scala 309:43 310:16]
  wire [31:0] _io_pcPlusOffset_T_1 = io_pcAddress + io_immediate; // @[InstructionDecode.scala 323:37]
  wire [31:0] _io_pcPlusOffset_T_3 = j_offset + io_immediate; // @[InstructionDecode.scala 325:35]
  wire [31:0] _io_pcPlusOffset_T_5 = io_pcAddress + immediate_io_out; // @[InstructionDecode.scala 328:39]
  wire [31:0] _GEN_17 = io_ctl_jump == 2'h2 ? _io_pcPlusOffset_T_3 : _io_pcPlusOffset_T_5; // @[InstructionDecode.scala 324:35 325:23 328:23]
  wire  _T_33 = io_func3 == 3'h5; // @[InstructionDecode.scala 343:107]
  wire [31:0] _T_36 = io_ex_mem_mem_read ? io_dmem_data : io_ex_mem_result; // @[InstructionDecode.scala 353:15]
  wire [31:0] _csr_io_i_data_T_1 = 3'h1 == csrController_io_forwardRS1 ? io_ex_result : registers_io_readData_1; // @[Mux.scala 81:58]
  wire [31:0] _csr_io_i_data_T_3 = 3'h2 == csrController_io_forwardRS1 ? _T_36 : _csr_io_i_data_T_1; // @[Mux.scala 81:58]
  wire [31:0] _csr_io_i_data_T_5 = 3'h3 == csrController_io_forwardRS1 ? io_writeData : _csr_io_i_data_T_3; // @[Mux.scala 81:58]
  wire [31:0] _csr_io_i_data_T_7 = 3'h4 == csrController_io_forwardRS1 ? io_csr_Ex_data : _csr_io_i_data_T_5; // @[Mux.scala 81:58]
  wire [31:0] _csr_io_i_data_T_9 = 3'h5 == csrController_io_forwardRS1 ? io_csr_Mem_data : _csr_io_i_data_T_7; // @[Mux.scala 81:58]
  CSR csr ( // @[InstructionDecode.scala 117:19]
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
  CSRController csrController ( // @[InstructionDecode.scala 129:29]
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
  HazardUnit hdu ( // @[InstructionDecode.scala 144:19]
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
  Control control ( // @[InstructionDecode.scala 159:23]
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
  controldec Vcontrol ( // @[InstructionDecode.scala 176:24]
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
  Registers registers ( // @[InstructionDecode.scala 190:25]
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
  vregfile v_registers ( // @[InstructionDecode.scala 206:27]
    .clock(v_registers_clock),
    .reset(v_registers_reset),
    .io_ins(v_registers_io_ins),
    .io_vs1_addr(v_registers_io_vs1_addr),
    .io_vs2_addr(v_registers_io_vs2_addr),
    .io_vs3_addr(v_registers_io_vs3_addr),
    .io_vd_addr(v_registers_io_vd_addr),
    .io_lmul_count(v_registers_io_lmul_count),
    .io_lmul_vs1in_vs2in(v_registers_io_lmul_vs1in_vs2in),
    .io_id_vc3(v_registers_io_id_vc3),
    .io_vs0_data(v_registers_io_vs0_data),
    .io_vs1_data(v_registers_io_vs1_data),
    .io_vs2_data(v_registers_io_vs2_data),
    .io_vs3_data(v_registers_io_vs3_data),
    .io_vd_data(v_registers_io_vd_data),
    .io_reg_write(v_registers_io_reg_write),
    .io_reg_read(v_registers_io_reg_read)
  );
  ImmediateGen immediate ( // @[InstructionDecode.scala 256:25]
    .io_instruction(immediate_io_instruction),
    .io_out(immediate_io_out)
  );
  ImmdValGen1 v_immediate ( // @[InstructionDecode.scala 260:27]
    .io_instruction(v_immediate_io_instruction),
    .io_z_imm(v_immediate_io_z_imm),
    .io_addi_imm(v_immediate_io_addi_imm)
  );
  v_csr vec_csr ( // @[InstructionDecode.scala 266:23]
    .clock(vec_csr_clock),
    .reset(vec_csr_reset),
    .io_vtypei(vec_csr_io_vtypei),
    .io_vl(vec_csr_io_vl),
    .io_vset(vec_csr_io_vset),
    .io_vl_out(vec_csr_io_vl_out),
    .io_vtype_out(vec_csr_io_vtype_out),
    .io_vstart_out(vec_csr_io_vstart_out)
  );
  BranchUnit bu ( // @[InstructionDecode.scala 299:18]
    .io_branch(bu_io_branch),
    .io_funct3(bu_io_funct3),
    .io_rd1(bu_io_rd1),
    .io_rd2(bu_io_rd2),
    .io_take_branch(bu_io_take_branch),
    .io_taken(bu_io_taken)
  );
  assign io_immediate = immediate_io_out; // @[InstructionDecode.scala 258:16]
  assign io_writeRegAddress = io_id_instruction[11:7]; // @[InstructionDecode.scala 340:42]
  assign io_readData1 = io_ctl_writeEnable & io_writeReg == io_id_instruction[19:15] ? _GEN_5 : registers_io_readData_0; // @[InstructionDecode.scala 236:60 243:18]
  assign io_readData2 = io_ctl_writeEnable & io_writeReg == io_id_instruction[24:20] ? _GEN_7 : registers_io_readData_1; // @[InstructionDecode.scala 245:60 252:18]
  assign io_func7 = io_id_instruction[6:0] == 7'h33 | io_id_instruction[6:0] == 7'h13 & io_func3 == 3'h5 ?
    io_id_instruction[31:25] : 7'h0; // @[InstructionDecode.scala 343:117 344:14 346:14]
  assign io_func3 = io_id_instruction[14:12]; // @[InstructionDecode.scala 341:32]
  assign io_func6 = io_id_instruction[31:26]; // @[InstructionDecode.scala 342:32]
  assign io_ctl_aluSrc = control_io_aluSrc; // @[InstructionDecode.scala 162:17]
  assign io_ctl_memToReg = control_io_memToReg; // @[InstructionDecode.scala 166:19]
  assign io_ctl_regWrite = hdu_io_ctl_mux & io_id_instruction != 32'h13 & control_io_regWrite; // @[InstructionDecode.scala 168:57 170:21 173:21]
  assign io_ctl_memRead = control_io_memRead; // @[InstructionDecode.scala 165:18]
  assign io_ctl_memWrite = hdu_io_ctl_mux & io_id_instruction != 32'h13 & control_io_memWrite; // @[InstructionDecode.scala 168:57 169:21 172:21]
  assign io_ctl_branch = control_io_branch; // @[InstructionDecode.scala 164:17]
  assign io_ctl_aluOp = control_io_aluOp; // @[InstructionDecode.scala 161:16]
  assign io_ctl_jump = control_io_jump; // @[InstructionDecode.scala 167:15]
  assign io_ctl_v_RegWrite = Vcontrol_io_RegWrite; // @[InstructionDecode.scala 179:21]
  assign io_ctl_v_opBsel = Vcontrol_io_opBsel; // @[InstructionDecode.scala 180:19]
  assign io_ctl_v_Ex_sel = Vcontrol_io_Ex_sel; // @[InstructionDecode.scala 181:19]
  assign io_ctl_v_aluop = Vcontrol_io_aluop; // @[InstructionDecode.scala 182:18]
  assign io_ctl_v_vset = Vcontrol_io_vset; // @[InstructionDecode.scala 183:17]
  assign io_ctl_v_load = {{3'd0}, Vcontrol_io_v_load}; // @[InstructionDecode.scala 184:17]
  assign io_ctl_v_ins = Vcontrol_io_v_ins; // @[InstructionDecode.scala 185:16]
  assign io_ctl_v_memRead = Vcontrol_io_V_MemRead; // @[InstructionDecode.scala 186:20]
  assign io_ctl_v_memWrite = Vcontrol_io_memWrite; // @[InstructionDecode.scala 187:21]
  assign io_ctl_v_reg_read = Vcontrol_io_RegRead; // @[InstructionDecode.scala 188:21]
  assign io_vs0_data = v_registers_io_vs0_data; // @[InstructionDecode.scala 217:15]
  assign io_vs1_data = v_registers_io_vs1_data; // @[InstructionDecode.scala 218:15]
  assign io_vs2_data = v_registers_io_vs2_data; // @[InstructionDecode.scala 219:15]
  assign io_reg_write = Vcontrol_io_RegWrite; // @[InstructionDecode.scala 222:16]
  assign io_vs1_addr = io_id_instruction[19:15]; // @[InstructionDecode.scala 223:35]
  assign io_vs2_addr = io_id_instruction[24:20]; // @[InstructionDecode.scala 224:35]
  assign io_vd_addr = io_id_instruction[11:7]; // @[InstructionDecode.scala 225:34]
  assign io_vs3_data = v_registers_io_vs3_data; // @[InstructionDecode.scala 221:15]
  assign io_v_z_imm = {{21{_io_v_z_imm_T_1[10]}},_io_v_z_imm_T_1}; // @[InstructionDecode.scala 272:14]
  assign io_v_addi_imm = v_immediate_io_addi_imm; // @[InstructionDecode.scala 263:17]
  assign io_vtypei_out = vec_csr_io_vtype_out[10:0]; // @[InstructionDecode.scala 274:17]
  assign io_vl_out = vec_csr_io_vl_out; // @[InstructionDecode.scala 273:13]
  assign io_vstart_out = vec_csr_io_vstart_out; // @[InstructionDecode.scala 275:17]
  assign io_ctl_aluSrc1 = control_io_aluSrc1; // @[InstructionDecode.scala 163:18]
  assign io_hdu_pcWrite = hdu_io_pc_write; // @[InstructionDecode.scala 155:18]
  assign io_hdu_if_reg_write = hdu_io_if_reg_write; // @[InstructionDecode.scala 156:23]
  assign io_pcSrc = bu_io_taken | io_ctl_jump != 2'h0; // @[InstructionDecode.scala 331:20]
  assign io_pcPlusOffset = io_ctl_jump == 2'h1 ? _io_pcPlusOffset_T_1 : _GEN_17; // @[InstructionDecode.scala 322:29 323:21]
  assign io_ifid_flush = hdu_io_ifid_flush; // @[InstructionDecode.scala 338:17]
  assign io_stall = io_func7 == 7'h1 & (io_func3 == 3'h4 | _T_33 | io_func3 == 3'h6 | io_func3 == 3'h7); // @[InstructionDecode.scala 349:32]
  assign io_csr_o_data = csr_io_o_data; // @[InstructionDecode.scala 126:31]
  assign io_is_csr = io_id_instruction[6:0] == 7'h73; // @[InstructionDecode.scala 125:58]
  assign io_fscr_o_data = csr_io_fcsr_o_data; // @[InstructionDecode.scala 127:31]
  assign io_rs_addr_0 = io_id_instruction[19:15]; // @[InstructionDecode.scala 192:38]
  assign io_rs_addr_1 = io_id_instruction[24:20]; // @[InstructionDecode.scala 193:38]
  assign csr_clock = clock;
  assign csr_reset = reset;
  assign csr_io_i_misa_value = io_csr_i_misa; // @[InstructionDecode.scala 118:31]
  assign csr_io_i_mhartid_value = io_csr_i_mhartid; // @[InstructionDecode.scala 119:31]
  assign csr_io_i_data = 3'h6 == csrController_io_forwardRS1 ? io_csr_Wb_data : _csr_io_i_data_T_9; // @[Mux.scala 81:58]
  assign csr_io_i_imm = io_id_instruction[19:15]; // @[InstructionDecode.scala 120:51]
  assign csr_io_i_opr = io_id_instruction[14:12]; // @[InstructionDecode.scala 121:51]
  assign csr_io_i_addr = io_id_instruction[31:20]; // @[InstructionDecode.scala 122:51]
  assign csr_io_i_w_en = io_is_csr & io_id_instruction[19:15] != 5'h0; // @[InstructionDecode.scala 123:44]
  assign csrController_io_regWrExecute = io_id_ex_regWr; // @[InstructionDecode.scala 130:36]
  assign csrController_io_rdSelExecute = io_id_ex_rd; // @[InstructionDecode.scala 131:36]
  assign csrController_io_csrWrExecute = io_csr_Ex; // @[InstructionDecode.scala 132:36]
  assign csrController_io_regWrMemory = io_ex_mem_regWr; // @[InstructionDecode.scala 133:36]
  assign csrController_io_rdSelMemory = io_ex_mem_rd; // @[InstructionDecode.scala 134:36]
  assign csrController_io_csrWrMemory = io_csr_Mem; // @[InstructionDecode.scala 135:36]
  assign csrController_io_regWrWriteback = io_ctl_writeEnable; // @[InstructionDecode.scala 136:36]
  assign csrController_io_rdSelWriteback = io_writeReg; // @[InstructionDecode.scala 137:36]
  assign csrController_io_csrWrWriteback = io_csr_Wb; // @[InstructionDecode.scala 138:36]
  assign csrController_io_rs1SelDecode = io_id_instruction[19:15]; // @[InstructionDecode.scala 139:56]
  assign csrController_io_csrInstDecode = io_id_instruction[6:0] == 7'h73; // @[InstructionDecode.scala 140:63]
  assign hdu_io_id_ex_memRead = io_id_ex_mem_read; // @[InstructionDecode.scala 146:24]
  assign hdu_io_ex_mem_memRead = io_ex_mem_mem_read; // @[InstructionDecode.scala 147:25]
  assign hdu_io_id_ex_branch = io_id_ex_branch; // @[InstructionDecode.scala 149:23]
  assign hdu_io_id_ex_rd = io_id_ex_rd; // @[InstructionDecode.scala 148:19]
  assign hdu_io_ex_mem_rd = io_ex_mem_rd; // @[InstructionDecode.scala 150:20]
  assign hdu_io_id_rs1 = io_id_instruction[19:15]; // @[InstructionDecode.scala 151:37]
  assign hdu_io_id_rs2 = io_id_instruction[24:20]; // @[InstructionDecode.scala 152:37]
  assign hdu_io_taken = bu_io_taken; // @[InstructionDecode.scala 305:16]
  assign hdu_io_jump = io_ctl_jump; // @[InstructionDecode.scala 153:15]
  assign hdu_io_branch = io_ctl_branch; // @[InstructionDecode.scala 154:17]
  assign control_io_in = io_id_instruction; // @[InstructionDecode.scala 160:17]
  assign Vcontrol_io_Instruction = io_id_instruction; // @[InstructionDecode.scala 178:27]
  assign registers_clock = clock;
  assign registers_reset = reset;
  assign registers_io_readAddress_0 = io_id_instruction[19:15]; // @[InstructionDecode.scala 192:38]
  assign registers_io_readAddress_1 = io_id_instruction[24:20]; // @[InstructionDecode.scala 193:38]
  assign registers_io_writeEnable = io_ctl_vset ? io_ctl_vset : io_ctl_writeEnable | io_csr_Wb; // @[InstructionDecode.scala 196:28 197:30 202:30]
  assign registers_io_writeAddress = io_ctl_vset ? io_wb_addr : io_writeReg; // @[InstructionDecode.scala 196:28 199:31 203:31]
  assign registers_io_writeData = io_ctl_vset ? io_vl : _registers_io_writeData_T_1; // @[InstructionDecode.scala 196:28 198:28 201:28]
  assign v_registers_clock = clock;
  assign v_registers_reset = reset;
  assign v_registers_io_ins = io_id_instruction; // @[InstructionDecode.scala 208:22]
  assign v_registers_io_vs1_addr = io_id_instruction[19:15]; // @[InstructionDecode.scala 210:47]
  assign v_registers_io_vs2_addr = io_id_instruction[24:20]; // @[InstructionDecode.scala 211:47]
  assign v_registers_io_vs3_addr = io_id_instruction[11:7]; // @[InstructionDecode.scala 212:47]
  assign v_registers_io_vd_addr = io_wb_addr; // @[InstructionDecode.scala 213:26]
  assign v_registers_io_lmul_count = io_id_lmul_count; // @[InstructionDecode.scala 226:29]
  assign v_registers_io_lmul_vs1in_vs2in = io_id_lmul_vs1in_vs2in; // @[InstructionDecode.scala 227:35]
  assign v_registers_io_id_vc3 = io_id_vc3; // @[InstructionDecode.scala 228:25]
  assign v_registers_io_vd_data = io_write_data; // @[InstructionDecode.scala 209:26]
  assign v_registers_io_reg_write = io_wb_RegWrite; // @[InstructionDecode.scala 214:28]
  assign v_registers_io_reg_read = Vcontrol_io_RegRead; // @[InstructionDecode.scala 215:27]
  assign immediate_io_instruction = io_id_instruction; // @[InstructionDecode.scala 257:28]
  assign v_immediate_io_instruction = io_id_instruction; // @[InstructionDecode.scala 262:30]
  assign vec_csr_clock = clock;
  assign vec_csr_reset = reset;
  assign vec_csr_io_vtypei = io_vtypei; // @[InstructionDecode.scala 269:21]
  assign vec_csr_io_vl = io_vl; // @[InstructionDecode.scala 268:17]
  assign vec_csr_io_vset = io_ctl_vset; // @[InstructionDecode.scala 270:19]
  assign bu_io_branch = io_ctl_branch; // @[InstructionDecode.scala 300:16]
  assign bu_io_funct3 = io_id_instruction[14:12]; // @[InstructionDecode.scala 301:36]
  assign bu_io_rd1 = io_id_instruction[19:15] == io_ex_mem_ins[11:7] ? io_ex_mem_result : _GEN_9; // @[InstructionDecode.scala 281:46 282:12]
  assign bu_io_rd2 = io_id_instruction[24:20] == io_ex_mem_ins[11:7] ? io_ex_mem_result : _GEN_11; // @[InstructionDecode.scala 289:46 290:12]
  assign bu_io_take_branch = hdu_io_take_branch; // @[InstructionDecode.scala 304:21]
endmodule
module ALU(
  input  [31:0] io_input1,
  input  [31:0] io_input2,
  input  [3:0]  io_aluCtl,
  output [31:0] io_result
);
  wire  _io_result_T = io_aluCtl == 4'h0; // @[ALU.scala 17:18]
  wire [31:0] _io_result_T_1 = io_input1 & io_input2; // @[ALU.scala 17:41]
  wire  _io_result_T_2 = io_aluCtl == 4'h1; // @[ALU.scala 18:18]
  wire [31:0] _io_result_T_3 = io_input1 | io_input2; // @[ALU.scala 18:41]
  wire  _io_result_T_4 = io_aluCtl == 4'h2; // @[ALU.scala 19:18]
  wire [31:0] _io_result_T_6 = io_input1 + io_input2; // @[ALU.scala 19:41]
  wire  _io_result_T_7 = io_aluCtl == 4'h3; // @[ALU.scala 20:18]
  wire [31:0] _io_result_T_9 = io_input1 - io_input2; // @[ALU.scala 20:41]
  wire  _io_result_T_10 = io_aluCtl == 4'h4; // @[ALU.scala 21:18]
  wire  _io_result_T_13 = $signed(io_input1) < $signed(io_input2); // @[ALU.scala 21:48]
  wire  _io_result_T_14 = io_aluCtl == 4'h5; // @[ALU.scala 22:18]
  wire  _io_result_T_15 = io_input1 < io_input2; // @[ALU.scala 22:41]
  wire  _io_result_T_16 = io_aluCtl == 4'h6; // @[ALU.scala 23:18]
  wire [62:0] _GEN_0 = {{31'd0}, io_input1}; // @[ALU.scala 23:41]
  wire [62:0] _io_result_T_18 = _GEN_0 << io_input2[4:0]; // @[ALU.scala 23:41]
  wire  _io_result_T_19 = io_aluCtl == 4'h7; // @[ALU.scala 24:18]
  wire [31:0] _io_result_T_21 = io_input1 >> io_input2[4:0]; // @[ALU.scala 24:41]
  wire  _io_result_T_22 = io_aluCtl == 4'h8; // @[ALU.scala 25:18]
  wire [31:0] _io_result_T_26 = $signed(io_input1) >>> io_input2[4:0]; // @[ALU.scala 25:68]
  wire  _io_result_T_27 = io_aluCtl == 4'h9; // @[ALU.scala 26:18]
  wire [31:0] _io_result_T_28 = io_input1 ^ io_input2; // @[ALU.scala 26:41]
  wire [31:0] _io_result_T_29 = _io_result_T_27 ? _io_result_T_28 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_result_T_30 = _io_result_T_22 ? _io_result_T_26 : _io_result_T_29; // @[Mux.scala 101:16]
  wire [31:0] _io_result_T_31 = _io_result_T_19 ? _io_result_T_21 : _io_result_T_30; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_32 = _io_result_T_16 ? _io_result_T_18 : {{31'd0}, _io_result_T_31}; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_33 = _io_result_T_14 ? {{62'd0}, _io_result_T_15} : _io_result_T_32; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_34 = _io_result_T_10 ? {{62'd0}, _io_result_T_13} : _io_result_T_33; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_35 = _io_result_T_7 ? {{31'd0}, _io_result_T_9} : _io_result_T_34; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_36 = _io_result_T_4 ? {{31'd0}, _io_result_T_6} : _io_result_T_35; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_37 = _io_result_T_2 ? {{31'd0}, _io_result_T_3} : _io_result_T_36; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_38 = _io_result_T ? {{31'd0}, _io_result_T_1} : _io_result_T_37; // @[Mux.scala 101:16]
  assign io_result = _io_result_T_38[31:0]; // @[ALU.scala 14:13]
endmodule
module AluControl(
  input  [1:0] io_aluOp,
  input        io_f7,
  input  [2:0] io_f3,
  input        io_aluSrc,
  output [3:0] io_out
);
  wire  _T_3 = ~io_f7; // @[AluControl.scala 38:34]
  wire [1:0] _GEN_0 = ~io_aluSrc | ~io_f7 ? 2'h2 : 2'h3; // @[AluControl.scala 38:43 39:18 42:20]
  wire [3:0] _GEN_1 = _T_3 ? 4'h7 : 4'h8; // @[AluControl.scala 55:29 56:18 58:18]
  wire [3:0] _GEN_2 = 3'h4 == io_f3 ? 4'h9 : 4'hf; // @[AluControl.scala 31:10 36:19 68:16]
  wire [3:0] _GEN_3 = 3'h6 == io_f3 ? 4'h1 : _GEN_2; // @[AluControl.scala 36:19 65:16]
  wire [3:0] _GEN_4 = 3'h7 == io_f3 ? 4'h0 : _GEN_3; // @[AluControl.scala 36:19 62:16]
  wire [3:0] _GEN_5 = 3'h5 == io_f3 ? _GEN_1 : _GEN_4; // @[AluControl.scala 36:19]
  wire [3:0] _GEN_6 = 3'h3 == io_f3 ? 4'h5 : _GEN_5; // @[AluControl.scala 36:19 52:16]
  wire [3:0] _GEN_7 = 3'h2 == io_f3 ? 4'h4 : _GEN_6; // @[AluControl.scala 36:19 49:16]
  wire [3:0] _GEN_8 = 3'h1 == io_f3 ? 4'h6 : _GEN_7; // @[AluControl.scala 36:19 46:16]
  wire [3:0] _GEN_9 = 3'h0 == io_f3 ? {{2'd0}, _GEN_0} : _GEN_8; // @[AluControl.scala 36:19]
  assign io_out = io_aluOp == 2'h0 ? 4'h2 : _GEN_9; // @[AluControl.scala 33:26 34:12]
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
  wire [1:0] _GEN_0 = io_reg_vs1 == io_mem_reg_vd & io_mem_reg_vd != 5'h0 & io_mem_reg_write ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 40:88 41:17 43:17]
  wire [1:0] _GEN_1 = io_reg_rs1 == io_mem_reg_rd & io_mem_reg_rd != 5'h0 & io_mem_regWrite ? 2'h2 : _GEN_0; // @[ForwardingUnit.scala 38:87 39:17]
  wire [1:0] _GEN_2 = io_reg_vs1 == io_ex_reg_vd & io_ex_reg_vd != 5'h0 & io_ex_reg_write ? 2'h1 : _GEN_1; // @[ForwardingUnit.scala 36:85 37:17]
  wire [1:0] _GEN_4 = io_reg_vs2 == io_mem_reg_vd & _T_13 & io_mem_reg_write ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 52:88 53:17 55:17]
  wire [1:0] _GEN_5 = io_reg_rs2 == io_mem_reg_rd & _T_9 & io_mem_regWrite ? 2'h2 : _GEN_4; // @[ForwardingUnit.scala 50:87 51:17]
  wire [1:0] _GEN_6 = io_reg_vs2 == io_ex_reg_vd & _T_5 & io_ex_reg_write ? 2'h1 : _GEN_5; // @[ForwardingUnit.scala 48:85 49:17]
  wire [1:0] _GEN_8 = io_reg_vs3 == io_mem_reg_vd & _T_13 & io_mem_reg_write ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 60:88 61:17 64:17]
  assign io_forwardA = io_reg_rs1 == io_ex_reg_rd & io_ex_reg_rd != 5'h0 & io_ex_regWrite ? 2'h1 : _GEN_2; // @[ForwardingUnit.scala 34:78 35:17]
  assign io_forwardB = io_reg_rs2 == io_ex_reg_rd & _T_1 & io_ex_regWrite ? 2'h1 : _GEN_6; // @[ForwardingUnit.scala 46:78 47:17]
  assign io_forwardC = io_reg_vs3 == io_ex_reg_vd & _T_5 & io_ex_reg_write ? 2'h1 : _GEN_8; // @[ForwardingUnit.scala 58:79 59:17]
endmodule
module Alu_Control(
  input  [2:0] io_func3,
  input  [2:0] io_aluOp,
  input  [5:0] io_func6,
  output [8:0] io_aluc
);
  wire [3:0] _io_aluc_T = {1'h0,io_func3}; // @[Cat.scala 33:92]
  wire [8:0] _io_aluc_T_1 = {io_func6,io_func3}; // @[Cat.scala 33:92]
  wire [8:0] _GEN_0 = io_aluOp == 3'h3 ? _io_aluc_T_1 : 9'h0; // @[Valucontrol.scala 21:35 22:17 24:17]
  wire [8:0] _GEN_1 = io_aluOp == 3'h2 ? _io_aluc_T_1 : _GEN_0; // @[Valucontrol.scala 19:35 20:17]
  wire [8:0] _GEN_2 = io_aluOp == 3'h1 ? _io_aluc_T_1 : _GEN_1; // @[Valucontrol.scala 17:35 18:17]
  assign io_aluc = io_aluOp == 3'h0 ? {{5'd0}, _io_aluc_T} : _GEN_2; // @[Valucontrol.scala 14:29 15:17]
endmodule
module VALU(
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
  output [127:0] io_vs0_o,
  output [127:0] io_vs3
);
  wire [7:0] sew_8_a_0 = io_vs1[7:0]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_1 = io_vs1[15:8]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_2 = io_vs1[23:16]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_3 = io_vs1[31:24]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_4 = io_vs1[39:32]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_5 = io_vs1[47:40]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_6 = io_vs1[55:48]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_7 = io_vs1[63:56]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_8 = io_vs1[71:64]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_9 = io_vs1[79:72]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_10 = io_vs1[87:80]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_11 = io_vs1[95:88]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_12 = io_vs1[103:96]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_13 = io_vs1[111:104]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_14 = io_vs1[119:112]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_a_15 = io_vs1[127:120]; // @[Valu.scala 71:64]
  wire [7:0] sew_8_b_0 = io_vs2[7:0]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_1 = io_vs2[15:8]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_2 = io_vs2[23:16]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_3 = io_vs2[31:24]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_4 = io_vs2[39:32]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_5 = io_vs2[47:40]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_6 = io_vs2[55:48]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_7 = io_vs2[63:56]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_8 = io_vs2[71:64]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_9 = io_vs2[79:72]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_10 = io_vs2[87:80]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_11 = io_vs2[95:88]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_12 = io_vs2[103:96]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_13 = io_vs2[111:104]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_14 = io_vs2[119:112]; // @[Valu.scala 72:64]
  wire [7:0] sew_8_b_15 = io_vs2[127:120]; // @[Valu.scala 72:64]
  wire [15:0] sew_16_a_0 = io_vs1[15:0]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_a_1 = io_vs1[31:16]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_a_2 = io_vs1[47:32]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_a_3 = io_vs1[63:48]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_a_4 = io_vs1[79:64]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_a_5 = io_vs1[95:80]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_a_6 = io_vs1[111:96]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_a_7 = io_vs1[127:112]; // @[Valu.scala 73:67]
  wire [15:0] sew_16_b_0 = io_vs2[15:0]; // @[Valu.scala 74:67]
  wire [15:0] sew_16_b_1 = io_vs2[31:16]; // @[Valu.scala 74:67]
  wire [15:0] sew_16_b_2 = io_vs2[47:32]; // @[Valu.scala 74:67]
  wire [15:0] sew_16_b_3 = io_vs2[63:48]; // @[Valu.scala 74:67]
  wire [15:0] sew_16_b_4 = io_vs2[79:64]; // @[Valu.scala 74:67]
  wire [15:0] sew_16_b_5 = io_vs2[95:80]; // @[Valu.scala 74:67]
  wire [15:0] sew_16_b_6 = io_vs2[111:96]; // @[Valu.scala 74:67]
  wire [15:0] sew_16_b_7 = io_vs2[127:112]; // @[Valu.scala 74:67]
  wire [31:0] sew_32_a_0 = io_vs1[31:0]; // @[Valu.scala 75:67]
  wire [31:0] sew_32_a_1 = io_vs1[63:32]; // @[Valu.scala 75:67]
  wire [31:0] sew_32_a_2 = io_vs1[95:64]; // @[Valu.scala 75:67]
  wire [31:0] sew_32_a_3 = io_vs1[127:96]; // @[Valu.scala 75:67]
  wire [31:0] sew_32_b_0 = io_vs2[31:0]; // @[Valu.scala 76:67]
  wire [31:0] sew_32_b_1 = io_vs2[63:32]; // @[Valu.scala 76:67]
  wire [31:0] sew_32_b_2 = io_vs2[95:64]; // @[Valu.scala 76:67]
  wire [31:0] sew_32_b_3 = io_vs2[127:96]; // @[Valu.scala 76:67]
  wire [63:0] sew_64_a_0 = io_vs1[63:0]; // @[Valu.scala 77:67]
  wire [63:0] sew_64_a_1 = io_vs1[127:64]; // @[Valu.scala 77:67]
  wire [63:0] sew_64_b_0 = io_vs2[63:0]; // @[Valu.scala 78:67]
  wire [63:0] sew_64_b_1 = io_vs2[127:64]; // @[Valu.scala 78:67]
  wire [7:0] sew_8_vd_0 = io_vd[7:0]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_1 = io_vd[15:8]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_2 = io_vd[23:16]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_3 = io_vd[31:24]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_4 = io_vd[39:32]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_5 = io_vd[47:40]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_6 = io_vd[55:48]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_7 = io_vd[63:56]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_8 = io_vd[71:64]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_9 = io_vd[79:72]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_10 = io_vd[87:80]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_11 = io_vd[95:88]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_12 = io_vd[103:96]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_13 = io_vd[111:104]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_14 = io_vd[119:112]; // @[Valu.scala 85:64]
  wire [7:0] sew_8_vd_15 = io_vd[127:120]; // @[Valu.scala 85:64]
  wire [15:0] sew_16_vd_0 = io_vd[15:0]; // @[Valu.scala 86:67]
  wire [15:0] sew_16_vd_1 = io_vd[31:16]; // @[Valu.scala 86:67]
  wire [15:0] sew_16_vd_2 = io_vd[47:32]; // @[Valu.scala 86:67]
  wire [15:0] sew_16_vd_3 = io_vd[63:48]; // @[Valu.scala 86:67]
  wire [15:0] sew_16_vd_4 = io_vd[79:64]; // @[Valu.scala 86:67]
  wire [15:0] sew_16_vd_5 = io_vd[95:80]; // @[Valu.scala 86:67]
  wire [15:0] sew_16_vd_6 = io_vd[111:96]; // @[Valu.scala 86:67]
  wire [15:0] sew_16_vd_7 = io_vd[127:112]; // @[Valu.scala 86:67]
  wire [31:0] sew_32_vd_0 = io_vd[31:0]; // @[Valu.scala 87:67]
  wire [31:0] sew_32_vd_1 = io_vd[63:32]; // @[Valu.scala 87:67]
  wire [31:0] sew_32_vd_2 = io_vd[95:64]; // @[Valu.scala 87:67]
  wire [31:0] sew_32_vd_3 = io_vd[127:96]; // @[Valu.scala 87:67]
  wire [63:0] sew_64_vd_0 = io_vd[63:0]; // @[Valu.scala 88:67]
  wire [63:0] sew_64_vd_1 = io_vd[127:64]; // @[Valu.scala 88:67]
  wire  _T = io_sew == 3'h3; // @[Valu.scala 200:22]
  wire  _T_2 = io_aluc[2:0] == 3'h0; // @[Valu.scala 200:52]
  wire  _io_v_output_out_T = 32'h0 < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_3 = 32'h0 >= io_vstart & 32'h0 < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_7 = ~io_vm & ~io_vs0[0]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_9 = ~io_vm & ~io_vs0[0] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_15 = _io_v_output_out_T_7 & io_vma; // @[Valu.scala 97:72]
  wire [63:0] _io_v_output_out_T_18 = $signed(sew_64_a_0) + $signed(sew_64_b_0); // @[Valu.scala 101:35]
  wire [63:0] _io_v_output_out_T_21 = $signed(sew_64_a_0) - $signed(sew_64_b_0); // @[Valu.scala 102:37]
  wire [63:0] _io_v_output_out_T_23 = $signed(sew_64_a_0) & $signed(sew_64_b_0); // @[Valu.scala 103:36]
  wire [63:0] _io_v_output_out_T_25 = $signed(sew_64_a_0) | $signed(sew_64_b_0); // @[Valu.scala 104:35]
  wire [63:0] _io_v_output_out_T_27 = $signed(sew_64_a_0) ^ $signed(sew_64_b_0); // @[Valu.scala 105:36]
  wire [63:0] _io_v_output_out_T_28 = io_vs2[63:0]; // @[Valu.scala 106:40]
  wire [63:0] _io_v_output_out_T_29 = io_vs1[63:0]; // @[Valu.scala 106:58]
  wire [63:0] _io_v_output_out_T_31 = _io_v_output_out_T_28 <= _io_v_output_out_T_29 ? $signed(sew_64_b_0) : $signed(
    sew_64_a_0); // @[Valu.scala 106:31]
  wire [63:0] _io_v_output_out_T_33 = $signed(sew_64_b_0) <= $signed(sew_64_a_0) ? $signed(sew_64_b_0) : $signed(
    sew_64_a_0); // @[Valu.scala 107:30]
  wire [63:0] _io_v_output_out_T_35 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_18) : $signed(64'sh0); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_37 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_21) : $signed(_io_v_output_out_T_35)
    ; // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_39 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_23) : $signed(_io_v_output_out_T_37)
    ; // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_41 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_25) : $signed(_io_v_output_out_T_39)
    ; // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_43 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_27) : $signed(_io_v_output_out_T_41)
    ; // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_45 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_31) : $signed(_io_v_output_out_T_43)
    ; // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_47 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_33) : $signed(_io_v_output_out_T_45)
    ; // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_48 = _io_v_output_out_T_7 & io_vma ? $signed(-64'sh1) : $signed(_io_v_output_out_T_47); // @[Valu.scala 97:36]
  wire [63:0] _io_v_output_out_T_49 = ~io_vm & ~io_vs0[0] & ~io_vma ? $signed(sew_64_vd_0) : $signed(
    _io_v_output_out_T_48); // @[Valu.scala 96:32]
  wire  _io_v_output_out_T_50 = ~io_vta; // @[Valu.scala 111:20]
  wire [63:0] _io_v_output_out_T_55 = ~io_vta & 32'h0 >= io_vl ? $signed(sew_64_vd_0) : $signed(-64'sh1); // @[Valu.scala 111:12]
  wire [63:0] _io_v_output_out_T_56 = 32'h0 >= io_vstart & 32'h0 < io_vl ? $signed(_io_v_output_out_T_49) : $signed(
    _io_v_output_out_T_55); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_57 = 32'h1 < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_60 = 32'h1 >= io_vstart & 32'h1 < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_64 = ~io_vm & ~io_vs0[1]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_66 = ~io_vm & ~io_vs0[1] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_72 = _io_v_output_out_T_64 & io_vma; // @[Valu.scala 97:72]
  wire [63:0] _io_v_output_out_T_75 = $signed(sew_64_a_1) + $signed(sew_64_b_1); // @[Valu.scala 101:35]
  wire [63:0] _io_v_output_out_T_78 = $signed(sew_64_a_1) - $signed(sew_64_b_1); // @[Valu.scala 102:37]
  wire [63:0] _io_v_output_out_T_80 = $signed(sew_64_a_1) & $signed(sew_64_b_1); // @[Valu.scala 103:36]
  wire [63:0] _io_v_output_out_T_82 = $signed(sew_64_a_1) | $signed(sew_64_b_1); // @[Valu.scala 104:35]
  wire [63:0] _io_v_output_out_T_84 = $signed(sew_64_a_1) ^ $signed(sew_64_b_1); // @[Valu.scala 105:36]
  wire [63:0] _io_v_output_out_T_85 = io_vs2[127:64]; // @[Valu.scala 106:40]
  wire [63:0] _io_v_output_out_T_86 = io_vs1[127:64]; // @[Valu.scala 106:58]
  wire [63:0] _io_v_output_out_T_88 = _io_v_output_out_T_85 <= _io_v_output_out_T_86 ? $signed(sew_64_b_1) : $signed(
    sew_64_a_1); // @[Valu.scala 106:31]
  wire [63:0] _io_v_output_out_T_90 = $signed(sew_64_b_1) <= $signed(sew_64_a_1) ? $signed(sew_64_b_1) : $signed(
    sew_64_a_1); // @[Valu.scala 107:30]
  wire [63:0] _io_v_output_out_T_92 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_75) : $signed(64'sh0); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_94 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_78) : $signed(_io_v_output_out_T_92)
    ; // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_96 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_80) : $signed(_io_v_output_out_T_94)
    ; // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_98 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_82) : $signed(_io_v_output_out_T_96)
    ; // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_100 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_84) : $signed(_io_v_output_out_T_98
    ); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_102 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_88) : $signed(
    _io_v_output_out_T_100); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_104 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_90) : $signed(
    _io_v_output_out_T_102); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_105 = _io_v_output_out_T_64 & io_vma ? $signed(-64'sh1) : $signed(
    _io_v_output_out_T_104); // @[Valu.scala 97:36]
  wire [63:0] _io_v_output_out_T_106 = ~io_vm & ~io_vs0[1] & ~io_vma ? $signed(sew_64_vd_1) : $signed(
    _io_v_output_out_T_105); // @[Valu.scala 96:32]
  wire [63:0] _io_v_output_out_T_112 = ~io_vta & 32'h1 >= io_vl ? $signed(sew_64_vd_1) : $signed(-64'sh1); // @[Valu.scala 111:12]
  wire [63:0] _io_v_output_out_T_113 = 32'h1 >= io_vstart & 32'h1 < io_vl ? $signed(_io_v_output_out_T_106) : $signed(
    _io_v_output_out_T_112); // @[Valu.scala 95:11]
  wire [63:0] io_v_output_lo = 32'h0 < io_vstart ? $signed(sew_64_vd_0) : $signed(_io_v_output_out_T_56); // @[Cat.scala 33:92]
  wire [63:0] io_v_output_hi = 32'h1 < io_vstart ? $signed(sew_64_vd_1) : $signed(_io_v_output_out_T_113); // @[Cat.scala 33:92]
  wire [127:0] _io_v_output_T_1 = {io_v_output_hi,io_v_output_lo}; // @[Valu.scala 114:24]
  wire  _T_4 = io_sew == 3'h2; // @[Valu.scala 202:28]
  wire [31:0] _io_v_output_out_T_132 = $signed(sew_32_a_0) + $signed(sew_32_b_0); // @[Valu.scala 101:35]
  wire [31:0] _io_v_output_out_T_135 = $signed(sew_32_a_0) - $signed(sew_32_b_0); // @[Valu.scala 102:37]
  wire [31:0] _io_v_output_out_T_137 = $signed(sew_32_a_0) & $signed(sew_32_b_0); // @[Valu.scala 103:36]
  wire [31:0] _io_v_output_out_T_139 = $signed(sew_32_a_0) | $signed(sew_32_b_0); // @[Valu.scala 104:35]
  wire [31:0] _io_v_output_out_T_141 = $signed(sew_32_a_0) ^ $signed(sew_32_b_0); // @[Valu.scala 105:36]
  wire [31:0] _io_v_output_out_T_142 = io_vs2[31:0]; // @[Valu.scala 106:40]
  wire [31:0] _io_v_output_out_T_143 = io_vs1[31:0]; // @[Valu.scala 106:58]
  wire [31:0] _io_v_output_out_T_145 = _io_v_output_out_T_142 <= _io_v_output_out_T_143 ? $signed(sew_32_b_0) : $signed(
    sew_32_a_0); // @[Valu.scala 106:31]
  wire [31:0] _io_v_output_out_T_147 = $signed(sew_32_b_0) <= $signed(sew_32_a_0) ? $signed(sew_32_b_0) : $signed(
    sew_32_a_0); // @[Valu.scala 107:30]
  wire [31:0] _io_v_output_out_T_149 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_132) : $signed(32'sh0); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_151 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_135) : $signed(
    _io_v_output_out_T_149); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_153 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_137) : $signed(
    _io_v_output_out_T_151); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_155 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_139) : $signed(
    _io_v_output_out_T_153); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_157 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_141) : $signed(
    _io_v_output_out_T_155); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_159 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_145) : $signed(
    _io_v_output_out_T_157); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_161 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_147) : $signed(
    _io_v_output_out_T_159); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_162 = _io_v_output_out_T_7 & io_vma ? $signed(-32'sh1) : $signed(_io_v_output_out_T_161
    ); // @[Valu.scala 97:36]
  wire [31:0] _io_v_output_out_T_163 = ~io_vm & ~io_vs0[0] & ~io_vma ? $signed(sew_32_vd_0) : $signed(
    _io_v_output_out_T_162); // @[Valu.scala 96:32]
  wire [31:0] _io_v_output_out_T_169 = ~io_vta & 32'h0 >= io_vl ? $signed(sew_32_vd_0) : $signed(-32'sh1); // @[Valu.scala 111:12]
  wire [31:0] _io_v_output_out_T_170 = 32'h0 >= io_vstart & 32'h0 < io_vl ? $signed(_io_v_output_out_T_163) : $signed(
    _io_v_output_out_T_169); // @[Valu.scala 95:11]
  wire [31:0] _io_v_output_out_T_189 = $signed(sew_32_a_1) + $signed(sew_32_b_1); // @[Valu.scala 101:35]
  wire [31:0] _io_v_output_out_T_192 = $signed(sew_32_a_1) - $signed(sew_32_b_1); // @[Valu.scala 102:37]
  wire [31:0] _io_v_output_out_T_194 = $signed(sew_32_a_1) & $signed(sew_32_b_1); // @[Valu.scala 103:36]
  wire [31:0] _io_v_output_out_T_196 = $signed(sew_32_a_1) | $signed(sew_32_b_1); // @[Valu.scala 104:35]
  wire [31:0] _io_v_output_out_T_198 = $signed(sew_32_a_1) ^ $signed(sew_32_b_1); // @[Valu.scala 105:36]
  wire [31:0] _io_v_output_out_T_199 = io_vs2[63:32]; // @[Valu.scala 106:40]
  wire [31:0] _io_v_output_out_T_200 = io_vs1[63:32]; // @[Valu.scala 106:58]
  wire [31:0] _io_v_output_out_T_202 = _io_v_output_out_T_199 <= _io_v_output_out_T_200 ? $signed(sew_32_b_1) : $signed(
    sew_32_a_1); // @[Valu.scala 106:31]
  wire [31:0] _io_v_output_out_T_204 = $signed(sew_32_b_1) <= $signed(sew_32_a_1) ? $signed(sew_32_b_1) : $signed(
    sew_32_a_1); // @[Valu.scala 107:30]
  wire [31:0] _io_v_output_out_T_206 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_189) : $signed(32'sh0); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_208 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_192) : $signed(
    _io_v_output_out_T_206); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_210 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_194) : $signed(
    _io_v_output_out_T_208); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_212 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_196) : $signed(
    _io_v_output_out_T_210); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_214 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_198) : $signed(
    _io_v_output_out_T_212); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_216 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_202) : $signed(
    _io_v_output_out_T_214); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_218 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_204) : $signed(
    _io_v_output_out_T_216); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_219 = _io_v_output_out_T_64 & io_vma ? $signed(-32'sh1) : $signed(
    _io_v_output_out_T_218); // @[Valu.scala 97:36]
  wire [31:0] _io_v_output_out_T_220 = ~io_vm & ~io_vs0[1] & ~io_vma ? $signed(sew_32_vd_1) : $signed(
    _io_v_output_out_T_219); // @[Valu.scala 96:32]
  wire [31:0] _io_v_output_out_T_226 = ~io_vta & 32'h1 >= io_vl ? $signed(sew_32_vd_1) : $signed(-32'sh1); // @[Valu.scala 111:12]
  wire [31:0] _io_v_output_out_T_227 = 32'h1 >= io_vstart & 32'h1 < io_vl ? $signed(_io_v_output_out_T_220) : $signed(
    _io_v_output_out_T_226); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_228 = 32'h2 < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_231 = 32'h2 >= io_vstart & 32'h2 < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_235 = ~io_vm & ~io_vs0[2]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_237 = ~io_vm & ~io_vs0[2] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_243 = _io_v_output_out_T_235 & io_vma; // @[Valu.scala 97:72]
  wire [31:0] _io_v_output_out_T_246 = $signed(sew_32_a_2) + $signed(sew_32_b_2); // @[Valu.scala 101:35]
  wire [31:0] _io_v_output_out_T_249 = $signed(sew_32_a_2) - $signed(sew_32_b_2); // @[Valu.scala 102:37]
  wire [31:0] _io_v_output_out_T_251 = $signed(sew_32_a_2) & $signed(sew_32_b_2); // @[Valu.scala 103:36]
  wire [31:0] _io_v_output_out_T_253 = $signed(sew_32_a_2) | $signed(sew_32_b_2); // @[Valu.scala 104:35]
  wire [31:0] _io_v_output_out_T_255 = $signed(sew_32_a_2) ^ $signed(sew_32_b_2); // @[Valu.scala 105:36]
  wire [31:0] _io_v_output_out_T_256 = io_vs2[95:64]; // @[Valu.scala 106:40]
  wire [31:0] _io_v_output_out_T_257 = io_vs1[95:64]; // @[Valu.scala 106:58]
  wire [31:0] _io_v_output_out_T_259 = _io_v_output_out_T_256 <= _io_v_output_out_T_257 ? $signed(sew_32_b_2) : $signed(
    sew_32_a_2); // @[Valu.scala 106:31]
  wire [31:0] _io_v_output_out_T_261 = $signed(sew_32_b_2) <= $signed(sew_32_a_2) ? $signed(sew_32_b_2) : $signed(
    sew_32_a_2); // @[Valu.scala 107:30]
  wire [31:0] _io_v_output_out_T_263 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_246) : $signed(32'sh0); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_265 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_249) : $signed(
    _io_v_output_out_T_263); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_267 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_251) : $signed(
    _io_v_output_out_T_265); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_269 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_253) : $signed(
    _io_v_output_out_T_267); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_271 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_255) : $signed(
    _io_v_output_out_T_269); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_273 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_259) : $signed(
    _io_v_output_out_T_271); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_275 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_261) : $signed(
    _io_v_output_out_T_273); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_276 = _io_v_output_out_T_235 & io_vma ? $signed(-32'sh1) : $signed(
    _io_v_output_out_T_275); // @[Valu.scala 97:36]
  wire [31:0] _io_v_output_out_T_277 = ~io_vm & ~io_vs0[2] & ~io_vma ? $signed(sew_32_vd_2) : $signed(
    _io_v_output_out_T_276); // @[Valu.scala 96:32]
  wire [31:0] _io_v_output_out_T_283 = ~io_vta & 32'h2 >= io_vl ? $signed(sew_32_vd_2) : $signed(-32'sh1); // @[Valu.scala 111:12]
  wire [31:0] _io_v_output_out_T_284 = 32'h2 >= io_vstart & 32'h2 < io_vl ? $signed(_io_v_output_out_T_277) : $signed(
    _io_v_output_out_T_283); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_285 = 32'h3 < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_288 = 32'h3 >= io_vstart & 32'h3 < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_292 = ~io_vm & ~io_vs0[3]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_294 = ~io_vm & ~io_vs0[3] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_300 = _io_v_output_out_T_292 & io_vma; // @[Valu.scala 97:72]
  wire [31:0] _io_v_output_out_T_303 = $signed(sew_32_a_3) + $signed(sew_32_b_3); // @[Valu.scala 101:35]
  wire [31:0] _io_v_output_out_T_306 = $signed(sew_32_a_3) - $signed(sew_32_b_3); // @[Valu.scala 102:37]
  wire [31:0] _io_v_output_out_T_308 = $signed(sew_32_a_3) & $signed(sew_32_b_3); // @[Valu.scala 103:36]
  wire [31:0] _io_v_output_out_T_310 = $signed(sew_32_a_3) | $signed(sew_32_b_3); // @[Valu.scala 104:35]
  wire [31:0] _io_v_output_out_T_312 = $signed(sew_32_a_3) ^ $signed(sew_32_b_3); // @[Valu.scala 105:36]
  wire [31:0] _io_v_output_out_T_313 = io_vs2[127:96]; // @[Valu.scala 106:40]
  wire [31:0] _io_v_output_out_T_314 = io_vs1[127:96]; // @[Valu.scala 106:58]
  wire [31:0] _io_v_output_out_T_316 = _io_v_output_out_T_313 <= _io_v_output_out_T_314 ? $signed(sew_32_b_3) : $signed(
    sew_32_a_3); // @[Valu.scala 106:31]
  wire [31:0] _io_v_output_out_T_318 = $signed(sew_32_b_3) <= $signed(sew_32_a_3) ? $signed(sew_32_b_3) : $signed(
    sew_32_a_3); // @[Valu.scala 107:30]
  wire [31:0] _io_v_output_out_T_320 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_303) : $signed(32'sh0); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_322 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_306) : $signed(
    _io_v_output_out_T_320); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_324 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_308) : $signed(
    _io_v_output_out_T_322); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_326 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_310) : $signed(
    _io_v_output_out_T_324); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_328 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_312) : $signed(
    _io_v_output_out_T_326); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_330 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_316) : $signed(
    _io_v_output_out_T_328); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_332 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_318) : $signed(
    _io_v_output_out_T_330); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_333 = _io_v_output_out_T_292 & io_vma ? $signed(-32'sh1) : $signed(
    _io_v_output_out_T_332); // @[Valu.scala 97:36]
  wire [31:0] _io_v_output_out_T_334 = ~io_vm & ~io_vs0[3] & ~io_vma ? $signed(sew_32_vd_3) : $signed(
    _io_v_output_out_T_333); // @[Valu.scala 96:32]
  wire [31:0] _io_v_output_out_T_340 = ~io_vta & 32'h3 >= io_vl ? $signed(sew_32_vd_3) : $signed(-32'sh1); // @[Valu.scala 111:12]
  wire [31:0] _io_v_output_out_T_341 = 32'h3 >= io_vstart & 32'h3 < io_vl ? $signed(_io_v_output_out_T_334) : $signed(
    _io_v_output_out_T_340); // @[Valu.scala 95:11]
  wire [31:0] io_v_output_lo_lo = 32'h0 < io_vstart ? $signed(sew_32_vd_0) : $signed(_io_v_output_out_T_170); // @[Cat.scala 33:92]
  wire [31:0] io_v_output_lo_hi = 32'h1 < io_vstart ? $signed(sew_32_vd_1) : $signed(_io_v_output_out_T_227); // @[Cat.scala 33:92]
  wire [31:0] io_v_output_hi_lo = 32'h2 < io_vstart ? $signed(sew_32_vd_2) : $signed(_io_v_output_out_T_284); // @[Cat.scala 33:92]
  wire [31:0] io_v_output_hi_hi = 32'h3 < io_vstart ? $signed(sew_32_vd_3) : $signed(_io_v_output_out_T_341); // @[Cat.scala 33:92]
  wire [127:0] _io_v_output_T_3 = {io_v_output_hi_hi,io_v_output_hi_lo,io_v_output_lo_hi,io_v_output_lo_lo}; // @[Valu.scala 114:24]
  wire  _T_8 = io_sew == 3'h1; // @[Valu.scala 204:27]
  wire [15:0] _io_v_output_out_T_360 = $signed(sew_16_a_0) + $signed(sew_16_b_0); // @[Valu.scala 101:35]
  wire [15:0] _io_v_output_out_T_363 = $signed(sew_16_a_0) - $signed(sew_16_b_0); // @[Valu.scala 102:37]
  wire [15:0] _io_v_output_out_T_365 = $signed(sew_16_a_0) & $signed(sew_16_b_0); // @[Valu.scala 103:36]
  wire [15:0] _io_v_output_out_T_367 = $signed(sew_16_a_0) | $signed(sew_16_b_0); // @[Valu.scala 104:35]
  wire [15:0] _io_v_output_out_T_369 = $signed(sew_16_a_0) ^ $signed(sew_16_b_0); // @[Valu.scala 105:36]
  wire [15:0] _io_v_output_out_T_370 = io_vs2[15:0]; // @[Valu.scala 106:40]
  wire [15:0] _io_v_output_out_T_371 = io_vs1[15:0]; // @[Valu.scala 106:58]
  wire [15:0] _io_v_output_out_T_373 = _io_v_output_out_T_370 <= _io_v_output_out_T_371 ? $signed(sew_16_b_0) : $signed(
    sew_16_a_0); // @[Valu.scala 106:31]
  wire [15:0] _io_v_output_out_T_375 = $signed(sew_16_b_0) <= $signed(sew_16_a_0) ? $signed(sew_16_b_0) : $signed(
    sew_16_a_0); // @[Valu.scala 107:30]
  wire [15:0] _io_v_output_out_T_377 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_360) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_379 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_363) : $signed(
    _io_v_output_out_T_377); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_381 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_365) : $signed(
    _io_v_output_out_T_379); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_383 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_367) : $signed(
    _io_v_output_out_T_381); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_385 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_369) : $signed(
    _io_v_output_out_T_383); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_387 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_373) : $signed(
    _io_v_output_out_T_385); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_389 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_375) : $signed(
    _io_v_output_out_T_387); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_390 = _io_v_output_out_T_7 & io_vma ? $signed(-16'sh1) : $signed(_io_v_output_out_T_389
    ); // @[Valu.scala 97:36]
  wire [15:0] _io_v_output_out_T_391 = ~io_vm & ~io_vs0[0] & ~io_vma ? $signed(sew_16_vd_0) : $signed(
    _io_v_output_out_T_390); // @[Valu.scala 96:32]
  wire [15:0] _io_v_output_out_T_397 = ~io_vta & 32'h0 >= io_vl ? $signed(sew_16_vd_0) : $signed(-16'sh1); // @[Valu.scala 111:12]
  wire [15:0] _io_v_output_out_T_398 = 32'h0 >= io_vstart & 32'h0 < io_vl ? $signed(_io_v_output_out_T_391) : $signed(
    _io_v_output_out_T_397); // @[Valu.scala 95:11]
  wire [15:0] _io_v_output_out_T_417 = $signed(sew_16_a_1) + $signed(sew_16_b_1); // @[Valu.scala 101:35]
  wire [15:0] _io_v_output_out_T_420 = $signed(sew_16_a_1) - $signed(sew_16_b_1); // @[Valu.scala 102:37]
  wire [15:0] _io_v_output_out_T_422 = $signed(sew_16_a_1) & $signed(sew_16_b_1); // @[Valu.scala 103:36]
  wire [15:0] _io_v_output_out_T_424 = $signed(sew_16_a_1) | $signed(sew_16_b_1); // @[Valu.scala 104:35]
  wire [15:0] _io_v_output_out_T_426 = $signed(sew_16_a_1) ^ $signed(sew_16_b_1); // @[Valu.scala 105:36]
  wire [15:0] _io_v_output_out_T_427 = io_vs2[31:16]; // @[Valu.scala 106:40]
  wire [15:0] _io_v_output_out_T_428 = io_vs1[31:16]; // @[Valu.scala 106:58]
  wire [15:0] _io_v_output_out_T_430 = _io_v_output_out_T_427 <= _io_v_output_out_T_428 ? $signed(sew_16_b_1) : $signed(
    sew_16_a_1); // @[Valu.scala 106:31]
  wire [15:0] _io_v_output_out_T_432 = $signed(sew_16_b_1) <= $signed(sew_16_a_1) ? $signed(sew_16_b_1) : $signed(
    sew_16_a_1); // @[Valu.scala 107:30]
  wire [15:0] _io_v_output_out_T_434 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_417) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_436 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_420) : $signed(
    _io_v_output_out_T_434); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_438 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_422) : $signed(
    _io_v_output_out_T_436); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_440 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_424) : $signed(
    _io_v_output_out_T_438); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_442 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_426) : $signed(
    _io_v_output_out_T_440); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_444 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_430) : $signed(
    _io_v_output_out_T_442); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_446 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_432) : $signed(
    _io_v_output_out_T_444); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_447 = _io_v_output_out_T_64 & io_vma ? $signed(-16'sh1) : $signed(
    _io_v_output_out_T_446); // @[Valu.scala 97:36]
  wire [15:0] _io_v_output_out_T_448 = ~io_vm & ~io_vs0[1] & ~io_vma ? $signed(sew_16_vd_1) : $signed(
    _io_v_output_out_T_447); // @[Valu.scala 96:32]
  wire [15:0] _io_v_output_out_T_454 = ~io_vta & 32'h1 >= io_vl ? $signed(sew_16_vd_1) : $signed(-16'sh1); // @[Valu.scala 111:12]
  wire [15:0] _io_v_output_out_T_455 = 32'h1 >= io_vstart & 32'h1 < io_vl ? $signed(_io_v_output_out_T_448) : $signed(
    _io_v_output_out_T_454); // @[Valu.scala 95:11]
  wire [15:0] _io_v_output_out_T_474 = $signed(sew_16_a_2) + $signed(sew_16_b_2); // @[Valu.scala 101:35]
  wire [15:0] _io_v_output_out_T_477 = $signed(sew_16_a_2) - $signed(sew_16_b_2); // @[Valu.scala 102:37]
  wire [15:0] _io_v_output_out_T_479 = $signed(sew_16_a_2) & $signed(sew_16_b_2); // @[Valu.scala 103:36]
  wire [15:0] _io_v_output_out_T_481 = $signed(sew_16_a_2) | $signed(sew_16_b_2); // @[Valu.scala 104:35]
  wire [15:0] _io_v_output_out_T_483 = $signed(sew_16_a_2) ^ $signed(sew_16_b_2); // @[Valu.scala 105:36]
  wire [15:0] _io_v_output_out_T_484 = io_vs2[47:32]; // @[Valu.scala 106:40]
  wire [15:0] _io_v_output_out_T_485 = io_vs1[47:32]; // @[Valu.scala 106:58]
  wire [15:0] _io_v_output_out_T_487 = _io_v_output_out_T_484 <= _io_v_output_out_T_485 ? $signed(sew_16_b_2) : $signed(
    sew_16_a_2); // @[Valu.scala 106:31]
  wire [15:0] _io_v_output_out_T_489 = $signed(sew_16_b_2) <= $signed(sew_16_a_2) ? $signed(sew_16_b_2) : $signed(
    sew_16_a_2); // @[Valu.scala 107:30]
  wire [15:0] _io_v_output_out_T_491 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_474) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_493 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_477) : $signed(
    _io_v_output_out_T_491); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_495 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_479) : $signed(
    _io_v_output_out_T_493); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_497 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_481) : $signed(
    _io_v_output_out_T_495); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_499 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_483) : $signed(
    _io_v_output_out_T_497); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_501 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_487) : $signed(
    _io_v_output_out_T_499); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_503 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_489) : $signed(
    _io_v_output_out_T_501); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_504 = _io_v_output_out_T_235 & io_vma ? $signed(-16'sh1) : $signed(
    _io_v_output_out_T_503); // @[Valu.scala 97:36]
  wire [15:0] _io_v_output_out_T_505 = ~io_vm & ~io_vs0[2] & ~io_vma ? $signed(sew_16_vd_2) : $signed(
    _io_v_output_out_T_504); // @[Valu.scala 96:32]
  wire [15:0] _io_v_output_out_T_511 = ~io_vta & 32'h2 >= io_vl ? $signed(sew_16_vd_2) : $signed(-16'sh1); // @[Valu.scala 111:12]
  wire [15:0] _io_v_output_out_T_512 = 32'h2 >= io_vstart & 32'h2 < io_vl ? $signed(_io_v_output_out_T_505) : $signed(
    _io_v_output_out_T_511); // @[Valu.scala 95:11]
  wire [15:0] _io_v_output_out_T_531 = $signed(sew_16_a_3) + $signed(sew_16_b_3); // @[Valu.scala 101:35]
  wire [15:0] _io_v_output_out_T_534 = $signed(sew_16_a_3) - $signed(sew_16_b_3); // @[Valu.scala 102:37]
  wire [15:0] _io_v_output_out_T_536 = $signed(sew_16_a_3) & $signed(sew_16_b_3); // @[Valu.scala 103:36]
  wire [15:0] _io_v_output_out_T_538 = $signed(sew_16_a_3) | $signed(sew_16_b_3); // @[Valu.scala 104:35]
  wire [15:0] _io_v_output_out_T_540 = $signed(sew_16_a_3) ^ $signed(sew_16_b_3); // @[Valu.scala 105:36]
  wire [15:0] _io_v_output_out_T_541 = io_vs2[63:48]; // @[Valu.scala 106:40]
  wire [15:0] _io_v_output_out_T_542 = io_vs1[63:48]; // @[Valu.scala 106:58]
  wire [15:0] _io_v_output_out_T_544 = _io_v_output_out_T_541 <= _io_v_output_out_T_542 ? $signed(sew_16_b_3) : $signed(
    sew_16_a_3); // @[Valu.scala 106:31]
  wire [15:0] _io_v_output_out_T_546 = $signed(sew_16_b_3) <= $signed(sew_16_a_3) ? $signed(sew_16_b_3) : $signed(
    sew_16_a_3); // @[Valu.scala 107:30]
  wire [15:0] _io_v_output_out_T_548 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_531) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_550 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_534) : $signed(
    _io_v_output_out_T_548); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_552 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_536) : $signed(
    _io_v_output_out_T_550); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_554 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_538) : $signed(
    _io_v_output_out_T_552); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_556 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_540) : $signed(
    _io_v_output_out_T_554); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_558 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_544) : $signed(
    _io_v_output_out_T_556); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_560 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_546) : $signed(
    _io_v_output_out_T_558); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_561 = _io_v_output_out_T_292 & io_vma ? $signed(-16'sh1) : $signed(
    _io_v_output_out_T_560); // @[Valu.scala 97:36]
  wire [15:0] _io_v_output_out_T_562 = ~io_vm & ~io_vs0[3] & ~io_vma ? $signed(sew_16_vd_3) : $signed(
    _io_v_output_out_T_561); // @[Valu.scala 96:32]
  wire [15:0] _io_v_output_out_T_568 = ~io_vta & 32'h3 >= io_vl ? $signed(sew_16_vd_3) : $signed(-16'sh1); // @[Valu.scala 111:12]
  wire [15:0] _io_v_output_out_T_569 = 32'h3 >= io_vstart & 32'h3 < io_vl ? $signed(_io_v_output_out_T_562) : $signed(
    _io_v_output_out_T_568); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_570 = 32'h4 < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_573 = 32'h4 >= io_vstart & 32'h4 < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_577 = ~io_vm & ~io_vs0[4]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_579 = ~io_vm & ~io_vs0[4] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_585 = _io_v_output_out_T_577 & io_vma; // @[Valu.scala 97:72]
  wire [15:0] _io_v_output_out_T_588 = $signed(sew_16_a_4) + $signed(sew_16_b_4); // @[Valu.scala 101:35]
  wire [15:0] _io_v_output_out_T_591 = $signed(sew_16_a_4) - $signed(sew_16_b_4); // @[Valu.scala 102:37]
  wire [15:0] _io_v_output_out_T_593 = $signed(sew_16_a_4) & $signed(sew_16_b_4); // @[Valu.scala 103:36]
  wire [15:0] _io_v_output_out_T_595 = $signed(sew_16_a_4) | $signed(sew_16_b_4); // @[Valu.scala 104:35]
  wire [15:0] _io_v_output_out_T_597 = $signed(sew_16_a_4) ^ $signed(sew_16_b_4); // @[Valu.scala 105:36]
  wire [15:0] _io_v_output_out_T_598 = io_vs2[79:64]; // @[Valu.scala 106:40]
  wire [15:0] _io_v_output_out_T_599 = io_vs1[79:64]; // @[Valu.scala 106:58]
  wire [15:0] _io_v_output_out_T_601 = _io_v_output_out_T_598 <= _io_v_output_out_T_599 ? $signed(sew_16_b_4) : $signed(
    sew_16_a_4); // @[Valu.scala 106:31]
  wire [15:0] _io_v_output_out_T_603 = $signed(sew_16_b_4) <= $signed(sew_16_a_4) ? $signed(sew_16_b_4) : $signed(
    sew_16_a_4); // @[Valu.scala 107:30]
  wire [15:0] _io_v_output_out_T_605 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_588) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_607 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_591) : $signed(
    _io_v_output_out_T_605); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_609 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_593) : $signed(
    _io_v_output_out_T_607); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_611 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_595) : $signed(
    _io_v_output_out_T_609); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_613 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_597) : $signed(
    _io_v_output_out_T_611); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_615 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_601) : $signed(
    _io_v_output_out_T_613); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_617 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_603) : $signed(
    _io_v_output_out_T_615); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_618 = _io_v_output_out_T_577 & io_vma ? $signed(-16'sh1) : $signed(
    _io_v_output_out_T_617); // @[Valu.scala 97:36]
  wire [15:0] _io_v_output_out_T_619 = ~io_vm & ~io_vs0[4] & ~io_vma ? $signed(sew_16_vd_4) : $signed(
    _io_v_output_out_T_618); // @[Valu.scala 96:32]
  wire [15:0] _io_v_output_out_T_625 = ~io_vta & 32'h4 >= io_vl ? $signed(sew_16_vd_4) : $signed(-16'sh1); // @[Valu.scala 111:12]
  wire [15:0] _io_v_output_out_T_626 = 32'h4 >= io_vstart & 32'h4 < io_vl ? $signed(_io_v_output_out_T_619) : $signed(
    _io_v_output_out_T_625); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_627 = 32'h5 < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_630 = 32'h5 >= io_vstart & 32'h5 < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_634 = ~io_vm & ~io_vs0[5]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_636 = ~io_vm & ~io_vs0[5] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_642 = _io_v_output_out_T_634 & io_vma; // @[Valu.scala 97:72]
  wire [15:0] _io_v_output_out_T_645 = $signed(sew_16_a_5) + $signed(sew_16_b_5); // @[Valu.scala 101:35]
  wire [15:0] _io_v_output_out_T_648 = $signed(sew_16_a_5) - $signed(sew_16_b_5); // @[Valu.scala 102:37]
  wire [15:0] _io_v_output_out_T_650 = $signed(sew_16_a_5) & $signed(sew_16_b_5); // @[Valu.scala 103:36]
  wire [15:0] _io_v_output_out_T_652 = $signed(sew_16_a_5) | $signed(sew_16_b_5); // @[Valu.scala 104:35]
  wire [15:0] _io_v_output_out_T_654 = $signed(sew_16_a_5) ^ $signed(sew_16_b_5); // @[Valu.scala 105:36]
  wire [15:0] _io_v_output_out_T_655 = io_vs2[95:80]; // @[Valu.scala 106:40]
  wire [15:0] _io_v_output_out_T_656 = io_vs1[95:80]; // @[Valu.scala 106:58]
  wire [15:0] _io_v_output_out_T_658 = _io_v_output_out_T_655 <= _io_v_output_out_T_656 ? $signed(sew_16_b_5) : $signed(
    sew_16_a_5); // @[Valu.scala 106:31]
  wire [15:0] _io_v_output_out_T_660 = $signed(sew_16_b_5) <= $signed(sew_16_a_5) ? $signed(sew_16_b_5) : $signed(
    sew_16_a_5); // @[Valu.scala 107:30]
  wire [15:0] _io_v_output_out_T_662 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_645) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_664 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_648) : $signed(
    _io_v_output_out_T_662); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_666 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_650) : $signed(
    _io_v_output_out_T_664); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_668 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_652) : $signed(
    _io_v_output_out_T_666); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_670 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_654) : $signed(
    _io_v_output_out_T_668); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_672 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_658) : $signed(
    _io_v_output_out_T_670); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_674 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_660) : $signed(
    _io_v_output_out_T_672); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_675 = _io_v_output_out_T_634 & io_vma ? $signed(-16'sh1) : $signed(
    _io_v_output_out_T_674); // @[Valu.scala 97:36]
  wire [15:0] _io_v_output_out_T_676 = ~io_vm & ~io_vs0[5] & ~io_vma ? $signed(sew_16_vd_5) : $signed(
    _io_v_output_out_T_675); // @[Valu.scala 96:32]
  wire [15:0] _io_v_output_out_T_682 = ~io_vta & 32'h5 >= io_vl ? $signed(sew_16_vd_5) : $signed(-16'sh1); // @[Valu.scala 111:12]
  wire [15:0] _io_v_output_out_T_683 = 32'h5 >= io_vstart & 32'h5 < io_vl ? $signed(_io_v_output_out_T_676) : $signed(
    _io_v_output_out_T_682); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_684 = 32'h6 < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_687 = 32'h6 >= io_vstart & 32'h6 < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_691 = ~io_vm & ~io_vs0[6]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_693 = ~io_vm & ~io_vs0[6] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_699 = _io_v_output_out_T_691 & io_vma; // @[Valu.scala 97:72]
  wire [15:0] _io_v_output_out_T_702 = $signed(sew_16_a_6) + $signed(sew_16_b_6); // @[Valu.scala 101:35]
  wire [15:0] _io_v_output_out_T_705 = $signed(sew_16_a_6) - $signed(sew_16_b_6); // @[Valu.scala 102:37]
  wire [15:0] _io_v_output_out_T_707 = $signed(sew_16_a_6) & $signed(sew_16_b_6); // @[Valu.scala 103:36]
  wire [15:0] _io_v_output_out_T_709 = $signed(sew_16_a_6) | $signed(sew_16_b_6); // @[Valu.scala 104:35]
  wire [15:0] _io_v_output_out_T_711 = $signed(sew_16_a_6) ^ $signed(sew_16_b_6); // @[Valu.scala 105:36]
  wire [15:0] _io_v_output_out_T_712 = io_vs2[111:96]; // @[Valu.scala 106:40]
  wire [15:0] _io_v_output_out_T_713 = io_vs1[111:96]; // @[Valu.scala 106:58]
  wire [15:0] _io_v_output_out_T_715 = _io_v_output_out_T_712 <= _io_v_output_out_T_713 ? $signed(sew_16_b_6) : $signed(
    sew_16_a_6); // @[Valu.scala 106:31]
  wire [15:0] _io_v_output_out_T_717 = $signed(sew_16_b_6) <= $signed(sew_16_a_6) ? $signed(sew_16_b_6) : $signed(
    sew_16_a_6); // @[Valu.scala 107:30]
  wire [15:0] _io_v_output_out_T_719 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_702) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_721 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_705) : $signed(
    _io_v_output_out_T_719); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_723 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_707) : $signed(
    _io_v_output_out_T_721); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_725 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_709) : $signed(
    _io_v_output_out_T_723); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_727 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_711) : $signed(
    _io_v_output_out_T_725); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_729 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_715) : $signed(
    _io_v_output_out_T_727); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_731 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_717) : $signed(
    _io_v_output_out_T_729); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_732 = _io_v_output_out_T_691 & io_vma ? $signed(-16'sh1) : $signed(
    _io_v_output_out_T_731); // @[Valu.scala 97:36]
  wire [15:0] _io_v_output_out_T_733 = ~io_vm & ~io_vs0[6] & ~io_vma ? $signed(sew_16_vd_6) : $signed(
    _io_v_output_out_T_732); // @[Valu.scala 96:32]
  wire [15:0] _io_v_output_out_T_739 = ~io_vta & 32'h6 >= io_vl ? $signed(sew_16_vd_6) : $signed(-16'sh1); // @[Valu.scala 111:12]
  wire [15:0] _io_v_output_out_T_740 = 32'h6 >= io_vstart & 32'h6 < io_vl ? $signed(_io_v_output_out_T_733) : $signed(
    _io_v_output_out_T_739); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_741 = 32'h7 < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_744 = 32'h7 >= io_vstart & 32'h7 < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_748 = ~io_vm & ~io_vs0[7]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_750 = ~io_vm & ~io_vs0[7] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_756 = _io_v_output_out_T_748 & io_vma; // @[Valu.scala 97:72]
  wire [15:0] _io_v_output_out_T_759 = $signed(sew_16_a_7) + $signed(sew_16_b_7); // @[Valu.scala 101:35]
  wire [15:0] _io_v_output_out_T_762 = $signed(sew_16_a_7) - $signed(sew_16_b_7); // @[Valu.scala 102:37]
  wire [15:0] _io_v_output_out_T_764 = $signed(sew_16_a_7) & $signed(sew_16_b_7); // @[Valu.scala 103:36]
  wire [15:0] _io_v_output_out_T_766 = $signed(sew_16_a_7) | $signed(sew_16_b_7); // @[Valu.scala 104:35]
  wire [15:0] _io_v_output_out_T_768 = $signed(sew_16_a_7) ^ $signed(sew_16_b_7); // @[Valu.scala 105:36]
  wire [15:0] _io_v_output_out_T_769 = io_vs2[127:112]; // @[Valu.scala 106:40]
  wire [15:0] _io_v_output_out_T_770 = io_vs1[127:112]; // @[Valu.scala 106:58]
  wire [15:0] _io_v_output_out_T_772 = _io_v_output_out_T_769 <= _io_v_output_out_T_770 ? $signed(sew_16_b_7) : $signed(
    sew_16_a_7); // @[Valu.scala 106:31]
  wire [15:0] _io_v_output_out_T_774 = $signed(sew_16_b_7) <= $signed(sew_16_a_7) ? $signed(sew_16_b_7) : $signed(
    sew_16_a_7); // @[Valu.scala 107:30]
  wire [15:0] _io_v_output_out_T_776 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_759) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_778 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_762) : $signed(
    _io_v_output_out_T_776); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_780 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_764) : $signed(
    _io_v_output_out_T_778); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_782 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_766) : $signed(
    _io_v_output_out_T_780); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_784 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_768) : $signed(
    _io_v_output_out_T_782); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_786 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_772) : $signed(
    _io_v_output_out_T_784); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_788 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_774) : $signed(
    _io_v_output_out_T_786); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_789 = _io_v_output_out_T_748 & io_vma ? $signed(-16'sh1) : $signed(
    _io_v_output_out_T_788); // @[Valu.scala 97:36]
  wire [15:0] _io_v_output_out_T_790 = ~io_vm & ~io_vs0[7] & ~io_vma ? $signed(sew_16_vd_7) : $signed(
    _io_v_output_out_T_789); // @[Valu.scala 96:32]
  wire [15:0] _io_v_output_out_T_796 = ~io_vta & 32'h7 >= io_vl ? $signed(sew_16_vd_7) : $signed(-16'sh1); // @[Valu.scala 111:12]
  wire [15:0] _io_v_output_out_T_797 = 32'h7 >= io_vstart & 32'h7 < io_vl ? $signed(_io_v_output_out_T_790) : $signed(
    _io_v_output_out_T_796); // @[Valu.scala 95:11]
  wire [15:0] io_v_output_lo_lo_lo = 32'h0 < io_vstart ? $signed(sew_16_vd_0) : $signed(_io_v_output_out_T_398); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_lo_lo_hi = 32'h1 < io_vstart ? $signed(sew_16_vd_1) : $signed(_io_v_output_out_T_455); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_lo_hi_lo = 32'h2 < io_vstart ? $signed(sew_16_vd_2) : $signed(_io_v_output_out_T_512); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_lo_hi_hi = 32'h3 < io_vstart ? $signed(sew_16_vd_3) : $signed(_io_v_output_out_T_569); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_hi_lo_lo = 32'h4 < io_vstart ? $signed(sew_16_vd_4) : $signed(_io_v_output_out_T_626); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_hi_lo_hi = 32'h5 < io_vstart ? $signed(sew_16_vd_5) : $signed(_io_v_output_out_T_683); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_hi_hi_lo = 32'h6 < io_vstart ? $signed(sew_16_vd_6) : $signed(_io_v_output_out_T_740); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_hi_hi_hi = 32'h7 < io_vstart ? $signed(sew_16_vd_7) : $signed(_io_v_output_out_T_797); // @[Cat.scala 33:92]
  wire [127:0] _io_v_output_T_5 = {io_v_output_hi_hi_hi,io_v_output_hi_hi_lo,io_v_output_hi_lo_hi,io_v_output_hi_lo_lo,
    io_v_output_lo_hi_hi,io_v_output_lo_hi_lo,io_v_output_lo_lo_hi,io_v_output_lo_lo_lo}; // @[Valu.scala 114:24]
  wire  _T_12 = io_sew == 3'h0; // @[Valu.scala 206:31]
  wire [7:0] _io_v_output_out_T_816 = $signed(sew_8_a_0) + $signed(sew_8_b_0); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_819 = $signed(sew_8_a_0) - $signed(sew_8_b_0); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_821 = $signed(sew_8_a_0) & $signed(sew_8_b_0); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_823 = $signed(sew_8_a_0) | $signed(sew_8_b_0); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_825 = $signed(sew_8_a_0) ^ $signed(sew_8_b_0); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_826 = io_vs2[7:0]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_827 = io_vs1[7:0]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_829 = _io_v_output_out_T_826 <= _io_v_output_out_T_827 ? $signed(sew_8_b_0) : $signed(
    sew_8_a_0); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_831 = $signed(sew_8_b_0) <= $signed(sew_8_a_0) ? $signed(sew_8_b_0) : $signed(sew_8_a_0)
    ; // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_833 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_816) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_835 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_819) : $signed(
    _io_v_output_out_T_833); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_837 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_821) : $signed(
    _io_v_output_out_T_835); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_839 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_823) : $signed(
    _io_v_output_out_T_837); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_841 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_825) : $signed(
    _io_v_output_out_T_839); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_843 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_829) : $signed(
    _io_v_output_out_T_841); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_845 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_831) : $signed(
    _io_v_output_out_T_843); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_846 = _io_v_output_out_T_7 & io_vma ? $signed(-8'sh1) : $signed(_io_v_output_out_T_845); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_847 = ~io_vm & ~io_vs0[0] & ~io_vma ? $signed(sew_8_vd_0) : $signed(
    _io_v_output_out_T_846); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_853 = ~io_vta & 32'h0 >= io_vl ? $signed(sew_8_vd_0) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_854 = 32'h0 >= io_vstart & 32'h0 < io_vl ? $signed(_io_v_output_out_T_847) : $signed(
    _io_v_output_out_T_853); // @[Valu.scala 95:11]
  wire [7:0] _io_v_output_out_T_873 = $signed(sew_8_a_1) + $signed(sew_8_b_1); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_876 = $signed(sew_8_a_1) - $signed(sew_8_b_1); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_878 = $signed(sew_8_a_1) & $signed(sew_8_b_1); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_880 = $signed(sew_8_a_1) | $signed(sew_8_b_1); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_882 = $signed(sew_8_a_1) ^ $signed(sew_8_b_1); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_883 = io_vs2[15:8]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_884 = io_vs1[15:8]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_886 = _io_v_output_out_T_883 <= _io_v_output_out_T_884 ? $signed(sew_8_b_1) : $signed(
    sew_8_a_1); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_888 = $signed(sew_8_b_1) <= $signed(sew_8_a_1) ? $signed(sew_8_b_1) : $signed(sew_8_a_1)
    ; // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_890 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_873) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_892 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_876) : $signed(
    _io_v_output_out_T_890); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_894 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_878) : $signed(
    _io_v_output_out_T_892); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_896 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_880) : $signed(
    _io_v_output_out_T_894); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_898 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_882) : $signed(
    _io_v_output_out_T_896); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_900 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_886) : $signed(
    _io_v_output_out_T_898); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_902 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_888) : $signed(
    _io_v_output_out_T_900); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_903 = _io_v_output_out_T_64 & io_vma ? $signed(-8'sh1) : $signed(_io_v_output_out_T_902)
    ; // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_904 = ~io_vm & ~io_vs0[1] & ~io_vma ? $signed(sew_8_vd_1) : $signed(
    _io_v_output_out_T_903); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_910 = ~io_vta & 32'h1 >= io_vl ? $signed(sew_8_vd_1) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_911 = 32'h1 >= io_vstart & 32'h1 < io_vl ? $signed(_io_v_output_out_T_904) : $signed(
    _io_v_output_out_T_910); // @[Valu.scala 95:11]
  wire [7:0] _io_v_output_out_T_930 = $signed(sew_8_a_2) + $signed(sew_8_b_2); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_933 = $signed(sew_8_a_2) - $signed(sew_8_b_2); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_935 = $signed(sew_8_a_2) & $signed(sew_8_b_2); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_937 = $signed(sew_8_a_2) | $signed(sew_8_b_2); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_939 = $signed(sew_8_a_2) ^ $signed(sew_8_b_2); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_940 = io_vs2[23:16]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_941 = io_vs1[23:16]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_943 = _io_v_output_out_T_940 <= _io_v_output_out_T_941 ? $signed(sew_8_b_2) : $signed(
    sew_8_a_2); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_945 = $signed(sew_8_b_2) <= $signed(sew_8_a_2) ? $signed(sew_8_b_2) : $signed(sew_8_a_2)
    ; // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_947 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_930) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_949 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_933) : $signed(
    _io_v_output_out_T_947); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_951 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_935) : $signed(
    _io_v_output_out_T_949); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_953 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_937) : $signed(
    _io_v_output_out_T_951); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_955 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_939) : $signed(
    _io_v_output_out_T_953); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_957 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_943) : $signed(
    _io_v_output_out_T_955); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_959 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_945) : $signed(
    _io_v_output_out_T_957); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_960 = _io_v_output_out_T_235 & io_vma ? $signed(-8'sh1) : $signed(_io_v_output_out_T_959
    ); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_961 = ~io_vm & ~io_vs0[2] & ~io_vma ? $signed(sew_8_vd_2) : $signed(
    _io_v_output_out_T_960); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_967 = ~io_vta & 32'h2 >= io_vl ? $signed(sew_8_vd_2) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_968 = 32'h2 >= io_vstart & 32'h2 < io_vl ? $signed(_io_v_output_out_T_961) : $signed(
    _io_v_output_out_T_967); // @[Valu.scala 95:11]
  wire [7:0] _io_v_output_out_T_987 = $signed(sew_8_a_3) + $signed(sew_8_b_3); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_990 = $signed(sew_8_a_3) - $signed(sew_8_b_3); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_992 = $signed(sew_8_a_3) & $signed(sew_8_b_3); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_994 = $signed(sew_8_a_3) | $signed(sew_8_b_3); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_996 = $signed(sew_8_a_3) ^ $signed(sew_8_b_3); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_997 = io_vs2[31:24]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_998 = io_vs1[31:24]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1000 = _io_v_output_out_T_997 <= _io_v_output_out_T_998 ? $signed(sew_8_b_3) : $signed(
    sew_8_a_3); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1002 = $signed(sew_8_b_3) <= $signed(sew_8_a_3) ? $signed(sew_8_b_3) : $signed(sew_8_a_3
    ); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1004 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_987) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1006 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_990) : $signed(
    _io_v_output_out_T_1004); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1008 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_992) : $signed(
    _io_v_output_out_T_1006); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1010 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_994) : $signed(
    _io_v_output_out_T_1008); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1012 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_996) : $signed(
    _io_v_output_out_T_1010); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1014 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1000) : $signed(
    _io_v_output_out_T_1012); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1016 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1002) : $signed(
    _io_v_output_out_T_1014); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1017 = _io_v_output_out_T_292 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1016); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1018 = ~io_vm & ~io_vs0[3] & ~io_vma ? $signed(sew_8_vd_3) : $signed(
    _io_v_output_out_T_1017); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1024 = ~io_vta & 32'h3 >= io_vl ? $signed(sew_8_vd_3) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1025 = 32'h3 >= io_vstart & 32'h3 < io_vl ? $signed(_io_v_output_out_T_1018) : $signed(
    _io_v_output_out_T_1024); // @[Valu.scala 95:11]
  wire [7:0] _io_v_output_out_T_1044 = $signed(sew_8_a_4) + $signed(sew_8_b_4); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_1047 = $signed(sew_8_a_4) - $signed(sew_8_b_4); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_1049 = $signed(sew_8_a_4) & $signed(sew_8_b_4); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_1051 = $signed(sew_8_a_4) | $signed(sew_8_b_4); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_1053 = $signed(sew_8_a_4) ^ $signed(sew_8_b_4); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_1054 = io_vs2[39:32]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_1055 = io_vs1[39:32]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1057 = _io_v_output_out_T_1054 <= _io_v_output_out_T_1055 ? $signed(sew_8_b_4) :
    $signed(sew_8_a_4); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1059 = $signed(sew_8_b_4) <= $signed(sew_8_a_4) ? $signed(sew_8_b_4) : $signed(sew_8_a_4
    ); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1061 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_1044) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1063 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_1047) : $signed(
    _io_v_output_out_T_1061); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1065 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_1049) : $signed(
    _io_v_output_out_T_1063); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1067 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_1051) : $signed(
    _io_v_output_out_T_1065); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1069 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_1053) : $signed(
    _io_v_output_out_T_1067); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1071 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1057) : $signed(
    _io_v_output_out_T_1069); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1073 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1059) : $signed(
    _io_v_output_out_T_1071); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1074 = _io_v_output_out_T_577 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1073); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1075 = ~io_vm & ~io_vs0[4] & ~io_vma ? $signed(sew_8_vd_4) : $signed(
    _io_v_output_out_T_1074); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1081 = ~io_vta & 32'h4 >= io_vl ? $signed(sew_8_vd_4) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1082 = 32'h4 >= io_vstart & 32'h4 < io_vl ? $signed(_io_v_output_out_T_1075) : $signed(
    _io_v_output_out_T_1081); // @[Valu.scala 95:11]
  wire [7:0] _io_v_output_out_T_1101 = $signed(sew_8_a_5) + $signed(sew_8_b_5); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_1104 = $signed(sew_8_a_5) - $signed(sew_8_b_5); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_1106 = $signed(sew_8_a_5) & $signed(sew_8_b_5); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_1108 = $signed(sew_8_a_5) | $signed(sew_8_b_5); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_1110 = $signed(sew_8_a_5) ^ $signed(sew_8_b_5); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_1111 = io_vs2[47:40]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_1112 = io_vs1[47:40]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1114 = _io_v_output_out_T_1111 <= _io_v_output_out_T_1112 ? $signed(sew_8_b_5) :
    $signed(sew_8_a_5); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1116 = $signed(sew_8_b_5) <= $signed(sew_8_a_5) ? $signed(sew_8_b_5) : $signed(sew_8_a_5
    ); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1118 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_1101) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1120 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_1104) : $signed(
    _io_v_output_out_T_1118); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1122 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_1106) : $signed(
    _io_v_output_out_T_1120); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1124 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_1108) : $signed(
    _io_v_output_out_T_1122); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1126 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_1110) : $signed(
    _io_v_output_out_T_1124); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1128 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1114) : $signed(
    _io_v_output_out_T_1126); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1130 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1116) : $signed(
    _io_v_output_out_T_1128); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1131 = _io_v_output_out_T_634 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1130); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1132 = ~io_vm & ~io_vs0[5] & ~io_vma ? $signed(sew_8_vd_5) : $signed(
    _io_v_output_out_T_1131); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1138 = ~io_vta & 32'h5 >= io_vl ? $signed(sew_8_vd_5) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1139 = 32'h5 >= io_vstart & 32'h5 < io_vl ? $signed(_io_v_output_out_T_1132) : $signed(
    _io_v_output_out_T_1138); // @[Valu.scala 95:11]
  wire [7:0] _io_v_output_out_T_1158 = $signed(sew_8_a_6) + $signed(sew_8_b_6); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_1161 = $signed(sew_8_a_6) - $signed(sew_8_b_6); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_1163 = $signed(sew_8_a_6) & $signed(sew_8_b_6); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_1165 = $signed(sew_8_a_6) | $signed(sew_8_b_6); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_1167 = $signed(sew_8_a_6) ^ $signed(sew_8_b_6); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_1168 = io_vs2[55:48]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_1169 = io_vs1[55:48]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1171 = _io_v_output_out_T_1168 <= _io_v_output_out_T_1169 ? $signed(sew_8_b_6) :
    $signed(sew_8_a_6); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1173 = $signed(sew_8_b_6) <= $signed(sew_8_a_6) ? $signed(sew_8_b_6) : $signed(sew_8_a_6
    ); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1175 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_1158) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1177 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_1161) : $signed(
    _io_v_output_out_T_1175); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1179 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_1163) : $signed(
    _io_v_output_out_T_1177); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1181 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_1165) : $signed(
    _io_v_output_out_T_1179); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1183 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_1167) : $signed(
    _io_v_output_out_T_1181); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1185 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1171) : $signed(
    _io_v_output_out_T_1183); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1187 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1173) : $signed(
    _io_v_output_out_T_1185); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1188 = _io_v_output_out_T_691 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1187); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1189 = ~io_vm & ~io_vs0[6] & ~io_vma ? $signed(sew_8_vd_6) : $signed(
    _io_v_output_out_T_1188); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1195 = ~io_vta & 32'h6 >= io_vl ? $signed(sew_8_vd_6) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1196 = 32'h6 >= io_vstart & 32'h6 < io_vl ? $signed(_io_v_output_out_T_1189) : $signed(
    _io_v_output_out_T_1195); // @[Valu.scala 95:11]
  wire [7:0] _io_v_output_out_T_1215 = $signed(sew_8_a_7) + $signed(sew_8_b_7); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_1218 = $signed(sew_8_a_7) - $signed(sew_8_b_7); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_1220 = $signed(sew_8_a_7) & $signed(sew_8_b_7); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_1222 = $signed(sew_8_a_7) | $signed(sew_8_b_7); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_1224 = $signed(sew_8_a_7) ^ $signed(sew_8_b_7); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_1225 = io_vs2[63:56]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_1226 = io_vs1[63:56]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1228 = _io_v_output_out_T_1225 <= _io_v_output_out_T_1226 ? $signed(sew_8_b_7) :
    $signed(sew_8_a_7); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1230 = $signed(sew_8_b_7) <= $signed(sew_8_a_7) ? $signed(sew_8_b_7) : $signed(sew_8_a_7
    ); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1232 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_1215) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1234 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_1218) : $signed(
    _io_v_output_out_T_1232); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1236 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_1220) : $signed(
    _io_v_output_out_T_1234); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1238 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_1222) : $signed(
    _io_v_output_out_T_1236); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1240 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_1224) : $signed(
    _io_v_output_out_T_1238); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1242 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1228) : $signed(
    _io_v_output_out_T_1240); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1244 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1230) : $signed(
    _io_v_output_out_T_1242); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1245 = _io_v_output_out_T_748 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1244); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1246 = ~io_vm & ~io_vs0[7] & ~io_vma ? $signed(sew_8_vd_7) : $signed(
    _io_v_output_out_T_1245); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1252 = ~io_vta & 32'h7 >= io_vl ? $signed(sew_8_vd_7) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1253 = 32'h7 >= io_vstart & 32'h7 < io_vl ? $signed(_io_v_output_out_T_1246) : $signed(
    _io_v_output_out_T_1252); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_1254 = 32'h8 < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_1257 = 32'h8 >= io_vstart & 32'h8 < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_1261 = ~io_vm & ~io_vs0[8]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_1263 = ~io_vm & ~io_vs0[8] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_1269 = _io_v_output_out_T_1261 & io_vma; // @[Valu.scala 97:72]
  wire [7:0] _io_v_output_out_T_1272 = $signed(sew_8_a_8) + $signed(sew_8_b_8); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_1275 = $signed(sew_8_a_8) - $signed(sew_8_b_8); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_1277 = $signed(sew_8_a_8) & $signed(sew_8_b_8); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_1279 = $signed(sew_8_a_8) | $signed(sew_8_b_8); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_1281 = $signed(sew_8_a_8) ^ $signed(sew_8_b_8); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_1282 = io_vs2[71:64]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_1283 = io_vs1[71:64]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1285 = _io_v_output_out_T_1282 <= _io_v_output_out_T_1283 ? $signed(sew_8_b_8) :
    $signed(sew_8_a_8); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1287 = $signed(sew_8_b_8) <= $signed(sew_8_a_8) ? $signed(sew_8_b_8) : $signed(sew_8_a_8
    ); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1289 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_1272) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1291 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_1275) : $signed(
    _io_v_output_out_T_1289); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1293 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_1277) : $signed(
    _io_v_output_out_T_1291); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1295 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_1279) : $signed(
    _io_v_output_out_T_1293); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1297 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_1281) : $signed(
    _io_v_output_out_T_1295); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1299 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1285) : $signed(
    _io_v_output_out_T_1297); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1301 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1287) : $signed(
    _io_v_output_out_T_1299); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1302 = _io_v_output_out_T_1261 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1301); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1303 = ~io_vm & ~io_vs0[8] & ~io_vma ? $signed(sew_8_vd_8) : $signed(
    _io_v_output_out_T_1302); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1309 = ~io_vta & 32'h8 >= io_vl ? $signed(sew_8_vd_8) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1310 = 32'h8 >= io_vstart & 32'h8 < io_vl ? $signed(_io_v_output_out_T_1303) : $signed(
    _io_v_output_out_T_1309); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_1311 = 32'h9 < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_1314 = 32'h9 >= io_vstart & 32'h9 < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_1318 = ~io_vm & ~io_vs0[9]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_1320 = ~io_vm & ~io_vs0[9] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_1326 = _io_v_output_out_T_1318 & io_vma; // @[Valu.scala 97:72]
  wire [7:0] _io_v_output_out_T_1329 = $signed(sew_8_a_9) + $signed(sew_8_b_9); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_1332 = $signed(sew_8_a_9) - $signed(sew_8_b_9); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_1334 = $signed(sew_8_a_9) & $signed(sew_8_b_9); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_1336 = $signed(sew_8_a_9) | $signed(sew_8_b_9); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_1338 = $signed(sew_8_a_9) ^ $signed(sew_8_b_9); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_1339 = io_vs2[79:72]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_1340 = io_vs1[79:72]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1342 = _io_v_output_out_T_1339 <= _io_v_output_out_T_1340 ? $signed(sew_8_b_9) :
    $signed(sew_8_a_9); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1344 = $signed(sew_8_b_9) <= $signed(sew_8_a_9) ? $signed(sew_8_b_9) : $signed(sew_8_a_9
    ); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1346 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_1329) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1348 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_1332) : $signed(
    _io_v_output_out_T_1346); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1350 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_1334) : $signed(
    _io_v_output_out_T_1348); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1352 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_1336) : $signed(
    _io_v_output_out_T_1350); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1354 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_1338) : $signed(
    _io_v_output_out_T_1352); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1356 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1342) : $signed(
    _io_v_output_out_T_1354); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1358 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1344) : $signed(
    _io_v_output_out_T_1356); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1359 = _io_v_output_out_T_1318 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1358); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1360 = ~io_vm & ~io_vs0[9] & ~io_vma ? $signed(sew_8_vd_9) : $signed(
    _io_v_output_out_T_1359); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1366 = ~io_vta & 32'h9 >= io_vl ? $signed(sew_8_vd_9) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1367 = 32'h9 >= io_vstart & 32'h9 < io_vl ? $signed(_io_v_output_out_T_1360) : $signed(
    _io_v_output_out_T_1366); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_1368 = 32'ha < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_1371 = 32'ha >= io_vstart & 32'ha < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_1375 = ~io_vm & ~io_vs0[10]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_1377 = ~io_vm & ~io_vs0[10] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_1383 = _io_v_output_out_T_1375 & io_vma; // @[Valu.scala 97:72]
  wire [7:0] _io_v_output_out_T_1386 = $signed(sew_8_a_10) + $signed(sew_8_b_10); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_1389 = $signed(sew_8_a_10) - $signed(sew_8_b_10); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_1391 = $signed(sew_8_a_10) & $signed(sew_8_b_10); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_1393 = $signed(sew_8_a_10) | $signed(sew_8_b_10); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_1395 = $signed(sew_8_a_10) ^ $signed(sew_8_b_10); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_1396 = io_vs2[87:80]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_1397 = io_vs1[87:80]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1399 = _io_v_output_out_T_1396 <= _io_v_output_out_T_1397 ? $signed(sew_8_b_10) :
    $signed(sew_8_a_10); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1401 = $signed(sew_8_b_10) <= $signed(sew_8_a_10) ? $signed(sew_8_b_10) : $signed(
    sew_8_a_10); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1403 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_1386) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1405 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_1389) : $signed(
    _io_v_output_out_T_1403); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1407 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_1391) : $signed(
    _io_v_output_out_T_1405); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1409 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_1393) : $signed(
    _io_v_output_out_T_1407); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1411 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_1395) : $signed(
    _io_v_output_out_T_1409); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1413 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1399) : $signed(
    _io_v_output_out_T_1411); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1415 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1401) : $signed(
    _io_v_output_out_T_1413); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1416 = _io_v_output_out_T_1375 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1415); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1417 = ~io_vm & ~io_vs0[10] & ~io_vma ? $signed(sew_8_vd_10) : $signed(
    _io_v_output_out_T_1416); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1423 = ~io_vta & 32'ha >= io_vl ? $signed(sew_8_vd_10) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1424 = 32'ha >= io_vstart & 32'ha < io_vl ? $signed(_io_v_output_out_T_1417) : $signed(
    _io_v_output_out_T_1423); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_1425 = 32'hb < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_1428 = 32'hb >= io_vstart & 32'hb < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_1432 = ~io_vm & ~io_vs0[11]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_1434 = ~io_vm & ~io_vs0[11] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_1440 = _io_v_output_out_T_1432 & io_vma; // @[Valu.scala 97:72]
  wire [7:0] _io_v_output_out_T_1443 = $signed(sew_8_a_11) + $signed(sew_8_b_11); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_1446 = $signed(sew_8_a_11) - $signed(sew_8_b_11); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_1448 = $signed(sew_8_a_11) & $signed(sew_8_b_11); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_1450 = $signed(sew_8_a_11) | $signed(sew_8_b_11); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_1452 = $signed(sew_8_a_11) ^ $signed(sew_8_b_11); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_1453 = io_vs2[95:88]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_1454 = io_vs1[95:88]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1456 = _io_v_output_out_T_1453 <= _io_v_output_out_T_1454 ? $signed(sew_8_b_11) :
    $signed(sew_8_a_11); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1458 = $signed(sew_8_b_11) <= $signed(sew_8_a_11) ? $signed(sew_8_b_11) : $signed(
    sew_8_a_11); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1460 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_1443) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1462 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_1446) : $signed(
    _io_v_output_out_T_1460); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1464 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_1448) : $signed(
    _io_v_output_out_T_1462); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1466 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_1450) : $signed(
    _io_v_output_out_T_1464); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1468 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_1452) : $signed(
    _io_v_output_out_T_1466); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1470 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1456) : $signed(
    _io_v_output_out_T_1468); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1472 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1458) : $signed(
    _io_v_output_out_T_1470); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1473 = _io_v_output_out_T_1432 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1472); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1474 = ~io_vm & ~io_vs0[11] & ~io_vma ? $signed(sew_8_vd_11) : $signed(
    _io_v_output_out_T_1473); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1480 = ~io_vta & 32'hb >= io_vl ? $signed(sew_8_vd_11) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1481 = 32'hb >= io_vstart & 32'hb < io_vl ? $signed(_io_v_output_out_T_1474) : $signed(
    _io_v_output_out_T_1480); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_1482 = 32'hc < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_1485 = 32'hc >= io_vstart & 32'hc < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_1489 = ~io_vm & ~io_vs0[12]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_1491 = ~io_vm & ~io_vs0[12] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_1497 = _io_v_output_out_T_1489 & io_vma; // @[Valu.scala 97:72]
  wire [7:0] _io_v_output_out_T_1500 = $signed(sew_8_a_12) + $signed(sew_8_b_12); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_1503 = $signed(sew_8_a_12) - $signed(sew_8_b_12); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_1505 = $signed(sew_8_a_12) & $signed(sew_8_b_12); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_1507 = $signed(sew_8_a_12) | $signed(sew_8_b_12); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_1509 = $signed(sew_8_a_12) ^ $signed(sew_8_b_12); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_1510 = io_vs2[103:96]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_1511 = io_vs1[103:96]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1513 = _io_v_output_out_T_1510 <= _io_v_output_out_T_1511 ? $signed(sew_8_b_12) :
    $signed(sew_8_a_12); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1515 = $signed(sew_8_b_12) <= $signed(sew_8_a_12) ? $signed(sew_8_b_12) : $signed(
    sew_8_a_12); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1517 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_1500) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1519 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_1503) : $signed(
    _io_v_output_out_T_1517); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1521 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_1505) : $signed(
    _io_v_output_out_T_1519); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1523 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_1507) : $signed(
    _io_v_output_out_T_1521); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1525 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_1509) : $signed(
    _io_v_output_out_T_1523); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1527 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1513) : $signed(
    _io_v_output_out_T_1525); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1529 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1515) : $signed(
    _io_v_output_out_T_1527); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1530 = _io_v_output_out_T_1489 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1529); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1531 = ~io_vm & ~io_vs0[12] & ~io_vma ? $signed(sew_8_vd_12) : $signed(
    _io_v_output_out_T_1530); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1537 = ~io_vta & 32'hc >= io_vl ? $signed(sew_8_vd_12) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1538 = 32'hc >= io_vstart & 32'hc < io_vl ? $signed(_io_v_output_out_T_1531) : $signed(
    _io_v_output_out_T_1537); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_1539 = 32'hd < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_1542 = 32'hd >= io_vstart & 32'hd < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_1546 = ~io_vm & ~io_vs0[13]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_1548 = ~io_vm & ~io_vs0[13] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_1554 = _io_v_output_out_T_1546 & io_vma; // @[Valu.scala 97:72]
  wire [7:0] _io_v_output_out_T_1557 = $signed(sew_8_a_13) + $signed(sew_8_b_13); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_1560 = $signed(sew_8_a_13) - $signed(sew_8_b_13); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_1562 = $signed(sew_8_a_13) & $signed(sew_8_b_13); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_1564 = $signed(sew_8_a_13) | $signed(sew_8_b_13); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_1566 = $signed(sew_8_a_13) ^ $signed(sew_8_b_13); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_1567 = io_vs2[111:104]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_1568 = io_vs1[111:104]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1570 = _io_v_output_out_T_1567 <= _io_v_output_out_T_1568 ? $signed(sew_8_b_13) :
    $signed(sew_8_a_13); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1572 = $signed(sew_8_b_13) <= $signed(sew_8_a_13) ? $signed(sew_8_b_13) : $signed(
    sew_8_a_13); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1574 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_1557) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1576 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_1560) : $signed(
    _io_v_output_out_T_1574); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1578 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_1562) : $signed(
    _io_v_output_out_T_1576); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1580 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_1564) : $signed(
    _io_v_output_out_T_1578); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1582 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_1566) : $signed(
    _io_v_output_out_T_1580); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1584 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1570) : $signed(
    _io_v_output_out_T_1582); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1586 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1572) : $signed(
    _io_v_output_out_T_1584); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1587 = _io_v_output_out_T_1546 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1586); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1588 = ~io_vm & ~io_vs0[13] & ~io_vma ? $signed(sew_8_vd_13) : $signed(
    _io_v_output_out_T_1587); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1594 = ~io_vta & 32'hd >= io_vl ? $signed(sew_8_vd_13) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1595 = 32'hd >= io_vstart & 32'hd < io_vl ? $signed(_io_v_output_out_T_1588) : $signed(
    _io_v_output_out_T_1594); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_1596 = 32'he < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_1599 = 32'he >= io_vstart & 32'he < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_1603 = ~io_vm & ~io_vs0[14]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_1605 = ~io_vm & ~io_vs0[14] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_1611 = _io_v_output_out_T_1603 & io_vma; // @[Valu.scala 97:72]
  wire [7:0] _io_v_output_out_T_1614 = $signed(sew_8_a_14) + $signed(sew_8_b_14); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_1617 = $signed(sew_8_a_14) - $signed(sew_8_b_14); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_1619 = $signed(sew_8_a_14) & $signed(sew_8_b_14); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_1621 = $signed(sew_8_a_14) | $signed(sew_8_b_14); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_1623 = $signed(sew_8_a_14) ^ $signed(sew_8_b_14); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_1624 = io_vs2[119:112]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_1625 = io_vs1[119:112]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1627 = _io_v_output_out_T_1624 <= _io_v_output_out_T_1625 ? $signed(sew_8_b_14) :
    $signed(sew_8_a_14); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1629 = $signed(sew_8_b_14) <= $signed(sew_8_a_14) ? $signed(sew_8_b_14) : $signed(
    sew_8_a_14); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1631 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_1614) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1633 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_1617) : $signed(
    _io_v_output_out_T_1631); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1635 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_1619) : $signed(
    _io_v_output_out_T_1633); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1637 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_1621) : $signed(
    _io_v_output_out_T_1635); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1639 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_1623) : $signed(
    _io_v_output_out_T_1637); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1641 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1627) : $signed(
    _io_v_output_out_T_1639); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1643 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1629) : $signed(
    _io_v_output_out_T_1641); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1644 = _io_v_output_out_T_1603 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1643); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1645 = ~io_vm & ~io_vs0[14] & ~io_vma ? $signed(sew_8_vd_14) : $signed(
    _io_v_output_out_T_1644); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1651 = ~io_vta & 32'he >= io_vl ? $signed(sew_8_vd_14) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1652 = 32'he >= io_vstart & 32'he < io_vl ? $signed(_io_v_output_out_T_1645) : $signed(
    _io_v_output_out_T_1651); // @[Valu.scala 95:11]
  wire  _io_v_output_out_T_1653 = 32'hf < io_vstart; // @[Valu.scala 94:16]
  wire  _io_v_output_out_T_1656 = 32'hf >= io_vstart & 32'hf < io_vl; // @[Valu.scala 95:29]
  wire  _io_v_output_out_T_1660 = ~io_vm & ~io_vs0[15]; // @[Valu.scala 96:47]
  wire  _io_v_output_out_T_1662 = ~io_vm & ~io_vs0[15] & ~io_vma; // @[Valu.scala 96:68]
  wire  _io_v_output_out_T_1668 = _io_v_output_out_T_1660 & io_vma; // @[Valu.scala 97:72]
  wire [7:0] _io_v_output_out_T_1671 = $signed(sew_8_a_15) + $signed(sew_8_b_15); // @[Valu.scala 101:35]
  wire [7:0] _io_v_output_out_T_1674 = $signed(sew_8_a_15) - $signed(sew_8_b_15); // @[Valu.scala 102:37]
  wire [7:0] _io_v_output_out_T_1676 = $signed(sew_8_a_15) & $signed(sew_8_b_15); // @[Valu.scala 103:36]
  wire [7:0] _io_v_output_out_T_1678 = $signed(sew_8_a_15) | $signed(sew_8_b_15); // @[Valu.scala 104:35]
  wire [7:0] _io_v_output_out_T_1680 = $signed(sew_8_a_15) ^ $signed(sew_8_b_15); // @[Valu.scala 105:36]
  wire [7:0] _io_v_output_out_T_1681 = io_vs2[127:120]; // @[Valu.scala 106:40]
  wire [7:0] _io_v_output_out_T_1682 = io_vs1[127:120]; // @[Valu.scala 106:58]
  wire [7:0] _io_v_output_out_T_1684 = _io_v_output_out_T_1681 <= _io_v_output_out_T_1682 ? $signed(sew_8_b_15) :
    $signed(sew_8_a_15); // @[Valu.scala 106:31]
  wire [7:0] _io_v_output_out_T_1686 = $signed(sew_8_b_15) <= $signed(sew_8_a_15) ? $signed(sew_8_b_15) : $signed(
    sew_8_a_15); // @[Valu.scala 107:30]
  wire [7:0] _io_v_output_out_T_1688 = 9'h0 == io_aluc ? $signed(_io_v_output_out_T_1671) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1690 = 9'hb8 == io_aluc ? $signed(_io_v_output_out_T_1674) : $signed(
    _io_v_output_out_T_1688); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1692 = 9'h48 == io_aluc ? $signed(_io_v_output_out_T_1676) : $signed(
    _io_v_output_out_T_1690); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1694 = 9'h50 == io_aluc ? $signed(_io_v_output_out_T_1678) : $signed(
    _io_v_output_out_T_1692); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1696 = 9'h58 == io_aluc ? $signed(_io_v_output_out_T_1680) : $signed(
    _io_v_output_out_T_1694); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1698 = 9'h20 == io_aluc ? $signed(_io_v_output_out_T_1684) : $signed(
    _io_v_output_out_T_1696); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1700 = 9'h28 == io_aluc ? $signed(_io_v_output_out_T_1686) : $signed(
    _io_v_output_out_T_1698); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_1701 = _io_v_output_out_T_1660 & io_vma ? $signed(-8'sh1) : $signed(
    _io_v_output_out_T_1700); // @[Valu.scala 97:36]
  wire [7:0] _io_v_output_out_T_1702 = ~io_vm & ~io_vs0[15] & ~io_vma ? $signed(sew_8_vd_15) : $signed(
    _io_v_output_out_T_1701); // @[Valu.scala 96:32]
  wire [7:0] _io_v_output_out_T_1708 = ~io_vta & 32'hf >= io_vl ? $signed(sew_8_vd_15) : $signed(-8'sh1); // @[Valu.scala 111:12]
  wire [7:0] _io_v_output_out_T_1709 = 32'hf >= io_vstart & 32'hf < io_vl ? $signed(_io_v_output_out_T_1702) : $signed(
    _io_v_output_out_T_1708); // @[Valu.scala 95:11]
  wire [7:0] io_v_output_lo_lo_lo_lo = 32'h0 < io_vstart ? $signed(sew_8_vd_0) : $signed(_io_v_output_out_T_854); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_lo_lo_hi = 32'h1 < io_vstart ? $signed(sew_8_vd_1) : $signed(_io_v_output_out_T_911); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_lo_hi_lo = 32'h2 < io_vstart ? $signed(sew_8_vd_2) : $signed(_io_v_output_out_T_968); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_lo_hi_hi = 32'h3 < io_vstart ? $signed(sew_8_vd_3) : $signed(_io_v_output_out_T_1025); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_hi_lo_lo = 32'h4 < io_vstart ? $signed(sew_8_vd_4) : $signed(_io_v_output_out_T_1082); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_hi_lo_hi = 32'h5 < io_vstart ? $signed(sew_8_vd_5) : $signed(_io_v_output_out_T_1139); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_hi_hi_lo = 32'h6 < io_vstart ? $signed(sew_8_vd_6) : $signed(_io_v_output_out_T_1196); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_hi_hi_hi = 32'h7 < io_vstart ? $signed(sew_8_vd_7) : $signed(_io_v_output_out_T_1253); // @[Cat.scala 33:92]
  wire [63:0] io_v_output_lo_3 = {io_v_output_lo_hi_hi_hi,io_v_output_lo_hi_hi_lo,io_v_output_lo_hi_lo_hi,
    io_v_output_lo_hi_lo_lo,io_v_output_lo_lo_hi_hi,io_v_output_lo_lo_hi_lo,io_v_output_lo_lo_lo_hi,
    io_v_output_lo_lo_lo_lo}; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_lo_lo_lo = 32'h8 < io_vstart ? $signed(sew_8_vd_8) : $signed(_io_v_output_out_T_1310); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_lo_lo_hi = 32'h9 < io_vstart ? $signed(sew_8_vd_9) : $signed(_io_v_output_out_T_1367); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_lo_hi_lo = 32'ha < io_vstart ? $signed(sew_8_vd_10) : $signed(_io_v_output_out_T_1424); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_lo_hi_hi = 32'hb < io_vstart ? $signed(sew_8_vd_11) : $signed(_io_v_output_out_T_1481); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_hi_lo_lo = 32'hc < io_vstart ? $signed(sew_8_vd_12) : $signed(_io_v_output_out_T_1538); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_hi_lo_hi = 32'hd < io_vstart ? $signed(sew_8_vd_13) : $signed(_io_v_output_out_T_1595); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_hi_hi_lo = 32'he < io_vstart ? $signed(sew_8_vd_14) : $signed(_io_v_output_out_T_1652); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_hi_hi_hi = 32'hf < io_vstart ? $signed(sew_8_vd_15) : $signed(_io_v_output_out_T_1709); // @[Cat.scala 33:92]
  wire [127:0] _io_v_output_T_7 = {io_v_output_hi_hi_hi_hi,io_v_output_hi_hi_hi_lo,io_v_output_hi_hi_lo_hi,
    io_v_output_hi_hi_lo_lo,io_v_output_hi_lo_hi_hi,io_v_output_hi_lo_hi_lo,io_v_output_hi_lo_lo_hi,
    io_v_output_hi_lo_lo_lo,io_v_output_lo_3}; // @[Valu.scala 114:24]
  wire  _T_18 = io_aluc[2:0] == 3'h3; // @[Valu.scala 210:56]
  wire [63:0] imm = {32'h0,io_in_B}; // @[Valu.scala 211:47]
  wire [63:0] _io_v_output_out_T_1728 = $signed(sew_64_b_0) + $signed(imm); // @[Valu.scala 127:37]
  wire [63:0] _io_v_output_out_T_1731 = $signed(imm) - $signed(sew_64_b_0); // @[Valu.scala 128:33]
  wire [63:0] _io_v_output_out_T_1733 = $signed(sew_64_b_0) & $signed(imm); // @[Valu.scala 129:36]
  wire [63:0] _io_v_output_out_T_1735 = $signed(sew_64_b_0) | $signed(imm); // @[Valu.scala 130:35]
  wire [63:0] _io_v_output_out_T_1737 = $signed(sew_64_b_0) ^ $signed(imm); // @[Valu.scala 131:36]
  wire [63:0] _io_v_output_out_T_1739 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_1728) : $signed(64'sh0); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_1741 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_1731) : $signed(
    _io_v_output_out_T_1739); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_1743 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_1733) : $signed(
    _io_v_output_out_T_1741); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_1745 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_1735) : $signed(
    _io_v_output_out_T_1743); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_1747 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_1737) : $signed(
    _io_v_output_out_T_1745); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_1748 = _io_v_output_out_T_15 ? $signed(-64'sh1) : $signed(_io_v_output_out_T_1747); // @[Valu.scala 123:36]
  wire [63:0] _io_v_output_out_T_1749 = _io_v_output_out_T_9 ? $signed(sew_64_vd_0) : $signed(_io_v_output_out_T_1748); // @[Valu.scala 122:32]
  wire [63:0] _io_v_output_out_T_1756 = _io_v_output_out_T_3 ? $signed(_io_v_output_out_T_1749) : $signed(
    _io_v_output_out_T_55); // @[Valu.scala 121:11]
  wire [63:0] _io_v_output_out_T_1775 = $signed(sew_64_b_1) + $signed(imm); // @[Valu.scala 127:37]
  wire [63:0] _io_v_output_out_T_1778 = $signed(imm) - $signed(sew_64_b_1); // @[Valu.scala 128:33]
  wire [63:0] _io_v_output_out_T_1780 = $signed(sew_64_b_1) & $signed(imm); // @[Valu.scala 129:36]
  wire [63:0] _io_v_output_out_T_1782 = $signed(sew_64_b_1) | $signed(imm); // @[Valu.scala 130:35]
  wire [63:0] _io_v_output_out_T_1784 = $signed(sew_64_b_1) ^ $signed(imm); // @[Valu.scala 131:36]
  wire [63:0] _io_v_output_out_T_1786 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_1775) : $signed(64'sh0); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_1788 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_1778) : $signed(
    _io_v_output_out_T_1786); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_1790 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_1780) : $signed(
    _io_v_output_out_T_1788); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_1792 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_1782) : $signed(
    _io_v_output_out_T_1790); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_1794 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_1784) : $signed(
    _io_v_output_out_T_1792); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_1795 = _io_v_output_out_T_72 ? $signed(-64'sh1) : $signed(_io_v_output_out_T_1794); // @[Valu.scala 123:36]
  wire [63:0] _io_v_output_out_T_1796 = _io_v_output_out_T_66 ? $signed(sew_64_vd_1) : $signed(_io_v_output_out_T_1795); // @[Valu.scala 122:32]
  wire [63:0] _io_v_output_out_T_1803 = _io_v_output_out_T_60 ? $signed(_io_v_output_out_T_1796) : $signed(
    _io_v_output_out_T_112); // @[Valu.scala 121:11]
  wire [63:0] io_v_output_lo_4 = _io_v_output_out_T ? $signed(sew_64_vd_0) : $signed(_io_v_output_out_T_1756); // @[Cat.scala 33:92]
  wire [63:0] io_v_output_hi_4 = _io_v_output_out_T_57 ? $signed(sew_64_vd_1) : $signed(_io_v_output_out_T_1803); // @[Cat.scala 33:92]
  wire [127:0] _io_v_output_T_9 = {io_v_output_hi_4,io_v_output_lo_4}; // @[Valu.scala 139:24]
  wire [31:0] _io_v_output_out_T_1822 = $signed(sew_32_b_0) + $signed(io_in_B); // @[Valu.scala 127:37]
  wire [31:0] _io_v_output_out_T_1825 = $signed(io_in_B) - $signed(sew_32_b_0); // @[Valu.scala 128:33]
  wire [31:0] _io_v_output_out_T_1827 = $signed(sew_32_b_0) & $signed(io_in_B); // @[Valu.scala 129:36]
  wire [31:0] _io_v_output_out_T_1829 = $signed(sew_32_b_0) | $signed(io_in_B); // @[Valu.scala 130:35]
  wire [31:0] _io_v_output_out_T_1831 = $signed(sew_32_b_0) ^ $signed(io_in_B); // @[Valu.scala 131:36]
  wire [31:0] _io_v_output_out_T_1833 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_1822) : $signed(32'sh0); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1835 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_1825) : $signed(
    _io_v_output_out_T_1833); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1837 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_1827) : $signed(
    _io_v_output_out_T_1835); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1839 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_1829) : $signed(
    _io_v_output_out_T_1837); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1841 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_1831) : $signed(
    _io_v_output_out_T_1839); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1842 = _io_v_output_out_T_15 ? $signed(-32'sh1) : $signed(_io_v_output_out_T_1841); // @[Valu.scala 123:36]
  wire [31:0] _io_v_output_out_T_1843 = _io_v_output_out_T_9 ? $signed(sew_32_vd_0) : $signed(_io_v_output_out_T_1842); // @[Valu.scala 122:32]
  wire [31:0] _io_v_output_out_T_1850 = _io_v_output_out_T_3 ? $signed(_io_v_output_out_T_1843) : $signed(
    _io_v_output_out_T_169); // @[Valu.scala 121:11]
  wire [31:0] _io_v_output_out_T_1869 = $signed(sew_32_b_1) + $signed(io_in_B); // @[Valu.scala 127:37]
  wire [31:0] _io_v_output_out_T_1872 = $signed(io_in_B) - $signed(sew_32_b_1); // @[Valu.scala 128:33]
  wire [31:0] _io_v_output_out_T_1874 = $signed(sew_32_b_1) & $signed(io_in_B); // @[Valu.scala 129:36]
  wire [31:0] _io_v_output_out_T_1876 = $signed(sew_32_b_1) | $signed(io_in_B); // @[Valu.scala 130:35]
  wire [31:0] _io_v_output_out_T_1878 = $signed(sew_32_b_1) ^ $signed(io_in_B); // @[Valu.scala 131:36]
  wire [31:0] _io_v_output_out_T_1880 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_1869) : $signed(32'sh0); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1882 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_1872) : $signed(
    _io_v_output_out_T_1880); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1884 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_1874) : $signed(
    _io_v_output_out_T_1882); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1886 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_1876) : $signed(
    _io_v_output_out_T_1884); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1888 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_1878) : $signed(
    _io_v_output_out_T_1886); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1889 = _io_v_output_out_T_72 ? $signed(-32'sh1) : $signed(_io_v_output_out_T_1888); // @[Valu.scala 123:36]
  wire [31:0] _io_v_output_out_T_1890 = _io_v_output_out_T_66 ? $signed(sew_32_vd_1) : $signed(_io_v_output_out_T_1889); // @[Valu.scala 122:32]
  wire [31:0] _io_v_output_out_T_1897 = _io_v_output_out_T_60 ? $signed(_io_v_output_out_T_1890) : $signed(
    _io_v_output_out_T_226); // @[Valu.scala 121:11]
  wire [31:0] _io_v_output_out_T_1916 = $signed(sew_32_b_2) + $signed(io_in_B); // @[Valu.scala 127:37]
  wire [31:0] _io_v_output_out_T_1919 = $signed(io_in_B) - $signed(sew_32_b_2); // @[Valu.scala 128:33]
  wire [31:0] _io_v_output_out_T_1921 = $signed(sew_32_b_2) & $signed(io_in_B); // @[Valu.scala 129:36]
  wire [31:0] _io_v_output_out_T_1923 = $signed(sew_32_b_2) | $signed(io_in_B); // @[Valu.scala 130:35]
  wire [31:0] _io_v_output_out_T_1925 = $signed(sew_32_b_2) ^ $signed(io_in_B); // @[Valu.scala 131:36]
  wire [31:0] _io_v_output_out_T_1927 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_1916) : $signed(32'sh0); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1929 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_1919) : $signed(
    _io_v_output_out_T_1927); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1931 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_1921) : $signed(
    _io_v_output_out_T_1929); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1933 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_1923) : $signed(
    _io_v_output_out_T_1931); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1935 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_1925) : $signed(
    _io_v_output_out_T_1933); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1936 = _io_v_output_out_T_243 ? $signed(-32'sh1) : $signed(_io_v_output_out_T_1935); // @[Valu.scala 123:36]
  wire [31:0] _io_v_output_out_T_1937 = _io_v_output_out_T_237 ? $signed(sew_32_vd_2) : $signed(_io_v_output_out_T_1936)
    ; // @[Valu.scala 122:32]
  wire [31:0] _io_v_output_out_T_1944 = _io_v_output_out_T_231 ? $signed(_io_v_output_out_T_1937) : $signed(
    _io_v_output_out_T_283); // @[Valu.scala 121:11]
  wire [31:0] _io_v_output_out_T_1963 = $signed(sew_32_b_3) + $signed(io_in_B); // @[Valu.scala 127:37]
  wire [31:0] _io_v_output_out_T_1966 = $signed(io_in_B) - $signed(sew_32_b_3); // @[Valu.scala 128:33]
  wire [31:0] _io_v_output_out_T_1968 = $signed(sew_32_b_3) & $signed(io_in_B); // @[Valu.scala 129:36]
  wire [31:0] _io_v_output_out_T_1970 = $signed(sew_32_b_3) | $signed(io_in_B); // @[Valu.scala 130:35]
  wire [31:0] _io_v_output_out_T_1972 = $signed(sew_32_b_3) ^ $signed(io_in_B); // @[Valu.scala 131:36]
  wire [31:0] _io_v_output_out_T_1974 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_1963) : $signed(32'sh0); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1976 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_1966) : $signed(
    _io_v_output_out_T_1974); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1978 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_1968) : $signed(
    _io_v_output_out_T_1976); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1980 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_1970) : $signed(
    _io_v_output_out_T_1978); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1982 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_1972) : $signed(
    _io_v_output_out_T_1980); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_1983 = _io_v_output_out_T_300 ? $signed(-32'sh1) : $signed(_io_v_output_out_T_1982); // @[Valu.scala 123:36]
  wire [31:0] _io_v_output_out_T_1984 = _io_v_output_out_T_294 ? $signed(sew_32_vd_3) : $signed(_io_v_output_out_T_1983)
    ; // @[Valu.scala 122:32]
  wire [31:0] _io_v_output_out_T_1991 = _io_v_output_out_T_288 ? $signed(_io_v_output_out_T_1984) : $signed(
    _io_v_output_out_T_340); // @[Valu.scala 121:11]
  wire [31:0] io_v_output_lo_lo_3 = _io_v_output_out_T ? $signed(sew_32_vd_0) : $signed(_io_v_output_out_T_1850); // @[Cat.scala 33:92]
  wire [31:0] io_v_output_lo_hi_3 = _io_v_output_out_T_57 ? $signed(sew_32_vd_1) : $signed(_io_v_output_out_T_1897); // @[Cat.scala 33:92]
  wire [31:0] io_v_output_hi_lo_3 = _io_v_output_out_T_228 ? $signed(sew_32_vd_2) : $signed(_io_v_output_out_T_1944); // @[Cat.scala 33:92]
  wire [31:0] io_v_output_hi_hi_3 = _io_v_output_out_T_285 ? $signed(sew_32_vd_3) : $signed(_io_v_output_out_T_1991); // @[Cat.scala 33:92]
  wire [127:0] _io_v_output_T_11 = {io_v_output_hi_hi_3,io_v_output_hi_lo_3,io_v_output_lo_hi_3,io_v_output_lo_lo_3}; // @[Valu.scala 139:24]
  wire [7:0] imm_2 = io_in_B[7:0]; // @[Valu.scala 217:36]
  wire [7:0] _io_v_output_out_T_2010 = $signed(sew_8_b_0) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2013 = $signed(imm_2) - $signed(sew_8_b_0); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2015 = $signed(sew_8_b_0) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2017 = $signed(sew_8_b_0) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2019 = $signed(sew_8_b_0) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2021 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2010) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2023 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2013) : $signed(
    _io_v_output_out_T_2021); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2025 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2015) : $signed(
    _io_v_output_out_T_2023); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2027 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2017) : $signed(
    _io_v_output_out_T_2025); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2029 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2019) : $signed(
    _io_v_output_out_T_2027); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2030 = _io_v_output_out_T_15 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2029); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2031 = _io_v_output_out_T_9 ? $signed(sew_8_vd_0) : $signed(_io_v_output_out_T_2030); // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2038 = _io_v_output_out_T_3 ? $signed(_io_v_output_out_T_2031) : $signed(
    _io_v_output_out_T_853); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2057 = $signed(sew_8_b_1) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2060 = $signed(imm_2) - $signed(sew_8_b_1); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2062 = $signed(sew_8_b_1) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2064 = $signed(sew_8_b_1) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2066 = $signed(sew_8_b_1) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2068 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2057) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2070 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2060) : $signed(
    _io_v_output_out_T_2068); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2072 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2062) : $signed(
    _io_v_output_out_T_2070); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2074 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2064) : $signed(
    _io_v_output_out_T_2072); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2076 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2066) : $signed(
    _io_v_output_out_T_2074); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2077 = _io_v_output_out_T_72 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2076); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2078 = _io_v_output_out_T_66 ? $signed(sew_8_vd_1) : $signed(_io_v_output_out_T_2077); // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2085 = _io_v_output_out_T_60 ? $signed(_io_v_output_out_T_2078) : $signed(
    _io_v_output_out_T_910); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2104 = $signed(sew_8_b_2) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2107 = $signed(imm_2) - $signed(sew_8_b_2); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2109 = $signed(sew_8_b_2) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2111 = $signed(sew_8_b_2) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2113 = $signed(sew_8_b_2) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2115 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2104) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2117 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2107) : $signed(
    _io_v_output_out_T_2115); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2119 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2109) : $signed(
    _io_v_output_out_T_2117); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2121 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2111) : $signed(
    _io_v_output_out_T_2119); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2123 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2113) : $signed(
    _io_v_output_out_T_2121); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2124 = _io_v_output_out_T_243 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2123); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2125 = _io_v_output_out_T_237 ? $signed(sew_8_vd_2) : $signed(_io_v_output_out_T_2124); // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2132 = _io_v_output_out_T_231 ? $signed(_io_v_output_out_T_2125) : $signed(
    _io_v_output_out_T_967); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2151 = $signed(sew_8_b_3) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2154 = $signed(imm_2) - $signed(sew_8_b_3); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2156 = $signed(sew_8_b_3) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2158 = $signed(sew_8_b_3) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2160 = $signed(sew_8_b_3) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2162 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2151) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2164 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2154) : $signed(
    _io_v_output_out_T_2162); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2166 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2156) : $signed(
    _io_v_output_out_T_2164); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2168 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2158) : $signed(
    _io_v_output_out_T_2166); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2170 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2160) : $signed(
    _io_v_output_out_T_2168); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2171 = _io_v_output_out_T_300 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2170); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2172 = _io_v_output_out_T_294 ? $signed(sew_8_vd_3) : $signed(_io_v_output_out_T_2171); // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2179 = _io_v_output_out_T_288 ? $signed(_io_v_output_out_T_2172) : $signed(
    _io_v_output_out_T_1024); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2198 = $signed(sew_8_b_4) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2201 = $signed(imm_2) - $signed(sew_8_b_4); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2203 = $signed(sew_8_b_4) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2205 = $signed(sew_8_b_4) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2207 = $signed(sew_8_b_4) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2209 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2198) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2211 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2201) : $signed(
    _io_v_output_out_T_2209); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2213 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2203) : $signed(
    _io_v_output_out_T_2211); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2215 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2205) : $signed(
    _io_v_output_out_T_2213); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2217 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2207) : $signed(
    _io_v_output_out_T_2215); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2218 = _io_v_output_out_T_585 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2217); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2219 = _io_v_output_out_T_579 ? $signed(sew_8_vd_4) : $signed(_io_v_output_out_T_2218); // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2226 = _io_v_output_out_T_573 ? $signed(_io_v_output_out_T_2219) : $signed(
    _io_v_output_out_T_1081); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2245 = $signed(sew_8_b_5) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2248 = $signed(imm_2) - $signed(sew_8_b_5); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2250 = $signed(sew_8_b_5) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2252 = $signed(sew_8_b_5) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2254 = $signed(sew_8_b_5) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2256 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2245) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2258 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2248) : $signed(
    _io_v_output_out_T_2256); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2260 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2250) : $signed(
    _io_v_output_out_T_2258); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2262 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2252) : $signed(
    _io_v_output_out_T_2260); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2264 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2254) : $signed(
    _io_v_output_out_T_2262); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2265 = _io_v_output_out_T_642 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2264); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2266 = _io_v_output_out_T_636 ? $signed(sew_8_vd_5) : $signed(_io_v_output_out_T_2265); // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2273 = _io_v_output_out_T_630 ? $signed(_io_v_output_out_T_2266) : $signed(
    _io_v_output_out_T_1138); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2292 = $signed(sew_8_b_6) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2295 = $signed(imm_2) - $signed(sew_8_b_6); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2297 = $signed(sew_8_b_6) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2299 = $signed(sew_8_b_6) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2301 = $signed(sew_8_b_6) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2303 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2292) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2305 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2295) : $signed(
    _io_v_output_out_T_2303); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2307 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2297) : $signed(
    _io_v_output_out_T_2305); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2309 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2299) : $signed(
    _io_v_output_out_T_2307); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2311 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2301) : $signed(
    _io_v_output_out_T_2309); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2312 = _io_v_output_out_T_699 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2311); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2313 = _io_v_output_out_T_693 ? $signed(sew_8_vd_6) : $signed(_io_v_output_out_T_2312); // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2320 = _io_v_output_out_T_687 ? $signed(_io_v_output_out_T_2313) : $signed(
    _io_v_output_out_T_1195); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2339 = $signed(sew_8_b_7) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2342 = $signed(imm_2) - $signed(sew_8_b_7); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2344 = $signed(sew_8_b_7) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2346 = $signed(sew_8_b_7) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2348 = $signed(sew_8_b_7) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2350 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2339) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2352 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2342) : $signed(
    _io_v_output_out_T_2350); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2354 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2344) : $signed(
    _io_v_output_out_T_2352); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2356 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2346) : $signed(
    _io_v_output_out_T_2354); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2358 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2348) : $signed(
    _io_v_output_out_T_2356); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2359 = _io_v_output_out_T_756 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2358); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2360 = _io_v_output_out_T_750 ? $signed(sew_8_vd_7) : $signed(_io_v_output_out_T_2359); // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2367 = _io_v_output_out_T_744 ? $signed(_io_v_output_out_T_2360) : $signed(
    _io_v_output_out_T_1252); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2386 = $signed(sew_8_b_8) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2389 = $signed(imm_2) - $signed(sew_8_b_8); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2391 = $signed(sew_8_b_8) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2393 = $signed(sew_8_b_8) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2395 = $signed(sew_8_b_8) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2397 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2386) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2399 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2389) : $signed(
    _io_v_output_out_T_2397); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2401 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2391) : $signed(
    _io_v_output_out_T_2399); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2403 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2393) : $signed(
    _io_v_output_out_T_2401); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2405 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2395) : $signed(
    _io_v_output_out_T_2403); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2406 = _io_v_output_out_T_1269 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2405); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2407 = _io_v_output_out_T_1263 ? $signed(sew_8_vd_8) : $signed(_io_v_output_out_T_2406); // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2414 = _io_v_output_out_T_1257 ? $signed(_io_v_output_out_T_2407) : $signed(
    _io_v_output_out_T_1309); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2433 = $signed(sew_8_b_9) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2436 = $signed(imm_2) - $signed(sew_8_b_9); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2438 = $signed(sew_8_b_9) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2440 = $signed(sew_8_b_9) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2442 = $signed(sew_8_b_9) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2444 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2433) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2446 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2436) : $signed(
    _io_v_output_out_T_2444); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2448 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2438) : $signed(
    _io_v_output_out_T_2446); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2450 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2440) : $signed(
    _io_v_output_out_T_2448); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2452 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2442) : $signed(
    _io_v_output_out_T_2450); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2453 = _io_v_output_out_T_1326 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2452); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2454 = _io_v_output_out_T_1320 ? $signed(sew_8_vd_9) : $signed(_io_v_output_out_T_2453); // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2461 = _io_v_output_out_T_1314 ? $signed(_io_v_output_out_T_2454) : $signed(
    _io_v_output_out_T_1366); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2480 = $signed(sew_8_b_10) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2483 = $signed(imm_2) - $signed(sew_8_b_10); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2485 = $signed(sew_8_b_10) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2487 = $signed(sew_8_b_10) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2489 = $signed(sew_8_b_10) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2491 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2480) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2493 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2483) : $signed(
    _io_v_output_out_T_2491); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2495 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2485) : $signed(
    _io_v_output_out_T_2493); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2497 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2487) : $signed(
    _io_v_output_out_T_2495); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2499 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2489) : $signed(
    _io_v_output_out_T_2497); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2500 = _io_v_output_out_T_1383 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2499); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2501 = _io_v_output_out_T_1377 ? $signed(sew_8_vd_10) : $signed(_io_v_output_out_T_2500)
    ; // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2508 = _io_v_output_out_T_1371 ? $signed(_io_v_output_out_T_2501) : $signed(
    _io_v_output_out_T_1423); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2527 = $signed(sew_8_b_11) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2530 = $signed(imm_2) - $signed(sew_8_b_11); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2532 = $signed(sew_8_b_11) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2534 = $signed(sew_8_b_11) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2536 = $signed(sew_8_b_11) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2538 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2527) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2540 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2530) : $signed(
    _io_v_output_out_T_2538); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2542 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2532) : $signed(
    _io_v_output_out_T_2540); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2544 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2534) : $signed(
    _io_v_output_out_T_2542); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2546 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2536) : $signed(
    _io_v_output_out_T_2544); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2547 = _io_v_output_out_T_1440 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2546); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2548 = _io_v_output_out_T_1434 ? $signed(sew_8_vd_11) : $signed(_io_v_output_out_T_2547)
    ; // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2555 = _io_v_output_out_T_1428 ? $signed(_io_v_output_out_T_2548) : $signed(
    _io_v_output_out_T_1480); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2574 = $signed(sew_8_b_12) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2577 = $signed(imm_2) - $signed(sew_8_b_12); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2579 = $signed(sew_8_b_12) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2581 = $signed(sew_8_b_12) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2583 = $signed(sew_8_b_12) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2585 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2574) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2587 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2577) : $signed(
    _io_v_output_out_T_2585); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2589 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2579) : $signed(
    _io_v_output_out_T_2587); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2591 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2581) : $signed(
    _io_v_output_out_T_2589); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2593 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2583) : $signed(
    _io_v_output_out_T_2591); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2594 = _io_v_output_out_T_1497 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2593); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2595 = _io_v_output_out_T_1491 ? $signed(sew_8_vd_12) : $signed(_io_v_output_out_T_2594)
    ; // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2602 = _io_v_output_out_T_1485 ? $signed(_io_v_output_out_T_2595) : $signed(
    _io_v_output_out_T_1537); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2621 = $signed(sew_8_b_13) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2624 = $signed(imm_2) - $signed(sew_8_b_13); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2626 = $signed(sew_8_b_13) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2628 = $signed(sew_8_b_13) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2630 = $signed(sew_8_b_13) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2632 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2621) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2634 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2624) : $signed(
    _io_v_output_out_T_2632); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2636 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2626) : $signed(
    _io_v_output_out_T_2634); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2638 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2628) : $signed(
    _io_v_output_out_T_2636); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2640 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2630) : $signed(
    _io_v_output_out_T_2638); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2641 = _io_v_output_out_T_1554 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2640); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2642 = _io_v_output_out_T_1548 ? $signed(sew_8_vd_13) : $signed(_io_v_output_out_T_2641)
    ; // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2649 = _io_v_output_out_T_1542 ? $signed(_io_v_output_out_T_2642) : $signed(
    _io_v_output_out_T_1594); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2668 = $signed(sew_8_b_14) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2671 = $signed(imm_2) - $signed(sew_8_b_14); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2673 = $signed(sew_8_b_14) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2675 = $signed(sew_8_b_14) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2677 = $signed(sew_8_b_14) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2679 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2668) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2681 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2671) : $signed(
    _io_v_output_out_T_2679); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2683 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2673) : $signed(
    _io_v_output_out_T_2681); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2685 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2675) : $signed(
    _io_v_output_out_T_2683); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2687 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2677) : $signed(
    _io_v_output_out_T_2685); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2688 = _io_v_output_out_T_1611 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2687); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2689 = _io_v_output_out_T_1605 ? $signed(sew_8_vd_14) : $signed(_io_v_output_out_T_2688)
    ; // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2696 = _io_v_output_out_T_1599 ? $signed(_io_v_output_out_T_2689) : $signed(
    _io_v_output_out_T_1651); // @[Valu.scala 121:11]
  wire [7:0] _io_v_output_out_T_2715 = $signed(sew_8_b_15) + $signed(imm_2); // @[Valu.scala 127:37]
  wire [7:0] _io_v_output_out_T_2718 = $signed(imm_2) - $signed(sew_8_b_15); // @[Valu.scala 128:33]
  wire [7:0] _io_v_output_out_T_2720 = $signed(sew_8_b_15) & $signed(imm_2); // @[Valu.scala 129:36]
  wire [7:0] _io_v_output_out_T_2722 = $signed(sew_8_b_15) | $signed(imm_2); // @[Valu.scala 130:35]
  wire [7:0] _io_v_output_out_T_2724 = $signed(sew_8_b_15) ^ $signed(imm_2); // @[Valu.scala 131:36]
  wire [7:0] _io_v_output_out_T_2726 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2715) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2728 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2718) : $signed(
    _io_v_output_out_T_2726); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2730 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2720) : $signed(
    _io_v_output_out_T_2728); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2732 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2722) : $signed(
    _io_v_output_out_T_2730); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2734 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2724) : $signed(
    _io_v_output_out_T_2732); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_2735 = _io_v_output_out_T_1668 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_2734); // @[Valu.scala 123:36]
  wire [7:0] _io_v_output_out_T_2736 = _io_v_output_out_T_1662 ? $signed(sew_8_vd_15) : $signed(_io_v_output_out_T_2735)
    ; // @[Valu.scala 122:32]
  wire [7:0] _io_v_output_out_T_2743 = _io_v_output_out_T_1656 ? $signed(_io_v_output_out_T_2736) : $signed(
    _io_v_output_out_T_1708); // @[Valu.scala 121:11]
  wire [7:0] io_v_output_lo_lo_lo_lo_1 = _io_v_output_out_T ? $signed(sew_8_vd_0) : $signed(_io_v_output_out_T_2038); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_lo_lo_hi_1 = _io_v_output_out_T_57 ? $signed(sew_8_vd_1) : $signed(_io_v_output_out_T_2085); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_lo_hi_lo_1 = _io_v_output_out_T_228 ? $signed(sew_8_vd_2) : $signed(_io_v_output_out_T_2132)
    ; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_lo_hi_hi_1 = _io_v_output_out_T_285 ? $signed(sew_8_vd_3) : $signed(_io_v_output_out_T_2179)
    ; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_hi_lo_lo_1 = _io_v_output_out_T_570 ? $signed(sew_8_vd_4) : $signed(_io_v_output_out_T_2226)
    ; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_hi_lo_hi_1 = _io_v_output_out_T_627 ? $signed(sew_8_vd_5) : $signed(_io_v_output_out_T_2273)
    ; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_hi_hi_lo_1 = _io_v_output_out_T_684 ? $signed(sew_8_vd_6) : $signed(_io_v_output_out_T_2320)
    ; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_hi_hi_hi_1 = _io_v_output_out_T_741 ? $signed(sew_8_vd_7) : $signed(_io_v_output_out_T_2367)
    ; // @[Cat.scala 33:92]
  wire [63:0] io_v_output_lo_6 = {io_v_output_lo_hi_hi_hi_1,io_v_output_lo_hi_hi_lo_1,io_v_output_lo_hi_lo_hi_1,
    io_v_output_lo_hi_lo_lo_1,io_v_output_lo_lo_hi_hi_1,io_v_output_lo_lo_hi_lo_1,io_v_output_lo_lo_lo_hi_1,
    io_v_output_lo_lo_lo_lo_1}; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_lo_lo_lo_1 = _io_v_output_out_T_1254 ? $signed(sew_8_vd_8) : $signed(_io_v_output_out_T_2414
    ); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_lo_lo_hi_1 = _io_v_output_out_T_1311 ? $signed(sew_8_vd_9) : $signed(_io_v_output_out_T_2461
    ); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_lo_hi_lo_1 = _io_v_output_out_T_1368 ? $signed(sew_8_vd_10) : $signed(
    _io_v_output_out_T_2508); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_lo_hi_hi_1 = _io_v_output_out_T_1425 ? $signed(sew_8_vd_11) : $signed(
    _io_v_output_out_T_2555); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_hi_lo_lo_1 = _io_v_output_out_T_1482 ? $signed(sew_8_vd_12) : $signed(
    _io_v_output_out_T_2602); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_hi_lo_hi_1 = _io_v_output_out_T_1539 ? $signed(sew_8_vd_13) : $signed(
    _io_v_output_out_T_2649); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_hi_hi_lo_1 = _io_v_output_out_T_1596 ? $signed(sew_8_vd_14) : $signed(
    _io_v_output_out_T_2696); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_hi_hi_hi_1 = _io_v_output_out_T_1653 ? $signed(sew_8_vd_15) : $signed(
    _io_v_output_out_T_2743); // @[Cat.scala 33:92]
  wire [127:0] _io_v_output_T_13 = {io_v_output_hi_hi_hi_hi_1,io_v_output_hi_hi_hi_lo_1,io_v_output_hi_hi_lo_hi_1,
    io_v_output_hi_hi_lo_lo_1,io_v_output_hi_lo_hi_hi_1,io_v_output_hi_lo_hi_lo_1,io_v_output_hi_lo_lo_hi_1,
    io_v_output_hi_lo_lo_lo_1,io_v_output_lo_6}; // @[Valu.scala 139:24]
  wire [15:0] imm_3 = io_in_B[15:0]; // @[Valu.scala 220:37]
  wire [15:0] _io_v_output_out_T_2762 = $signed(sew_16_b_0) + $signed(imm_3); // @[Valu.scala 127:37]
  wire [15:0] _io_v_output_out_T_2765 = $signed(imm_3) - $signed(sew_16_b_0); // @[Valu.scala 128:33]
  wire [15:0] _io_v_output_out_T_2767 = $signed(sew_16_b_0) & $signed(imm_3); // @[Valu.scala 129:36]
  wire [15:0] _io_v_output_out_T_2769 = $signed(sew_16_b_0) | $signed(imm_3); // @[Valu.scala 130:35]
  wire [15:0] _io_v_output_out_T_2771 = $signed(sew_16_b_0) ^ $signed(imm_3); // @[Valu.scala 131:36]
  wire [15:0] _io_v_output_out_T_2773 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2762) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2775 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2765) : $signed(
    _io_v_output_out_T_2773); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2777 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2767) : $signed(
    _io_v_output_out_T_2775); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2779 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2769) : $signed(
    _io_v_output_out_T_2777); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2781 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2771) : $signed(
    _io_v_output_out_T_2779); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2782 = _io_v_output_out_T_15 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_2781); // @[Valu.scala 123:36]
  wire [15:0] _io_v_output_out_T_2783 = _io_v_output_out_T_9 ? $signed(sew_16_vd_0) : $signed(_io_v_output_out_T_2782); // @[Valu.scala 122:32]
  wire [15:0] _io_v_output_out_T_2790 = _io_v_output_out_T_3 ? $signed(_io_v_output_out_T_2783) : $signed(
    _io_v_output_out_T_397); // @[Valu.scala 121:11]
  wire [15:0] _io_v_output_out_T_2809 = $signed(sew_16_b_1) + $signed(imm_3); // @[Valu.scala 127:37]
  wire [15:0] _io_v_output_out_T_2812 = $signed(imm_3) - $signed(sew_16_b_1); // @[Valu.scala 128:33]
  wire [15:0] _io_v_output_out_T_2814 = $signed(sew_16_b_1) & $signed(imm_3); // @[Valu.scala 129:36]
  wire [15:0] _io_v_output_out_T_2816 = $signed(sew_16_b_1) | $signed(imm_3); // @[Valu.scala 130:35]
  wire [15:0] _io_v_output_out_T_2818 = $signed(sew_16_b_1) ^ $signed(imm_3); // @[Valu.scala 131:36]
  wire [15:0] _io_v_output_out_T_2820 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2809) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2822 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2812) : $signed(
    _io_v_output_out_T_2820); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2824 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2814) : $signed(
    _io_v_output_out_T_2822); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2826 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2816) : $signed(
    _io_v_output_out_T_2824); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2828 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2818) : $signed(
    _io_v_output_out_T_2826); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2829 = _io_v_output_out_T_72 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_2828); // @[Valu.scala 123:36]
  wire [15:0] _io_v_output_out_T_2830 = _io_v_output_out_T_66 ? $signed(sew_16_vd_1) : $signed(_io_v_output_out_T_2829); // @[Valu.scala 122:32]
  wire [15:0] _io_v_output_out_T_2837 = _io_v_output_out_T_60 ? $signed(_io_v_output_out_T_2830) : $signed(
    _io_v_output_out_T_454); // @[Valu.scala 121:11]
  wire [15:0] _io_v_output_out_T_2856 = $signed(sew_16_b_2) + $signed(imm_3); // @[Valu.scala 127:37]
  wire [15:0] _io_v_output_out_T_2859 = $signed(imm_3) - $signed(sew_16_b_2); // @[Valu.scala 128:33]
  wire [15:0] _io_v_output_out_T_2861 = $signed(sew_16_b_2) & $signed(imm_3); // @[Valu.scala 129:36]
  wire [15:0] _io_v_output_out_T_2863 = $signed(sew_16_b_2) | $signed(imm_3); // @[Valu.scala 130:35]
  wire [15:0] _io_v_output_out_T_2865 = $signed(sew_16_b_2) ^ $signed(imm_3); // @[Valu.scala 131:36]
  wire [15:0] _io_v_output_out_T_2867 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2856) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2869 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2859) : $signed(
    _io_v_output_out_T_2867); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2871 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2861) : $signed(
    _io_v_output_out_T_2869); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2873 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2863) : $signed(
    _io_v_output_out_T_2871); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2875 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2865) : $signed(
    _io_v_output_out_T_2873); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2876 = _io_v_output_out_T_243 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_2875); // @[Valu.scala 123:36]
  wire [15:0] _io_v_output_out_T_2877 = _io_v_output_out_T_237 ? $signed(sew_16_vd_2) : $signed(_io_v_output_out_T_2876)
    ; // @[Valu.scala 122:32]
  wire [15:0] _io_v_output_out_T_2884 = _io_v_output_out_T_231 ? $signed(_io_v_output_out_T_2877) : $signed(
    _io_v_output_out_T_511); // @[Valu.scala 121:11]
  wire [15:0] _io_v_output_out_T_2903 = $signed(sew_16_b_3) + $signed(imm_3); // @[Valu.scala 127:37]
  wire [15:0] _io_v_output_out_T_2906 = $signed(imm_3) - $signed(sew_16_b_3); // @[Valu.scala 128:33]
  wire [15:0] _io_v_output_out_T_2908 = $signed(sew_16_b_3) & $signed(imm_3); // @[Valu.scala 129:36]
  wire [15:0] _io_v_output_out_T_2910 = $signed(sew_16_b_3) | $signed(imm_3); // @[Valu.scala 130:35]
  wire [15:0] _io_v_output_out_T_2912 = $signed(sew_16_b_3) ^ $signed(imm_3); // @[Valu.scala 131:36]
  wire [15:0] _io_v_output_out_T_2914 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2903) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2916 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2906) : $signed(
    _io_v_output_out_T_2914); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2918 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2908) : $signed(
    _io_v_output_out_T_2916); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2920 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2910) : $signed(
    _io_v_output_out_T_2918); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2922 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2912) : $signed(
    _io_v_output_out_T_2920); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2923 = _io_v_output_out_T_300 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_2922); // @[Valu.scala 123:36]
  wire [15:0] _io_v_output_out_T_2924 = _io_v_output_out_T_294 ? $signed(sew_16_vd_3) : $signed(_io_v_output_out_T_2923)
    ; // @[Valu.scala 122:32]
  wire [15:0] _io_v_output_out_T_2931 = _io_v_output_out_T_288 ? $signed(_io_v_output_out_T_2924) : $signed(
    _io_v_output_out_T_568); // @[Valu.scala 121:11]
  wire [15:0] _io_v_output_out_T_2950 = $signed(sew_16_b_4) + $signed(imm_3); // @[Valu.scala 127:37]
  wire [15:0] _io_v_output_out_T_2953 = $signed(imm_3) - $signed(sew_16_b_4); // @[Valu.scala 128:33]
  wire [15:0] _io_v_output_out_T_2955 = $signed(sew_16_b_4) & $signed(imm_3); // @[Valu.scala 129:36]
  wire [15:0] _io_v_output_out_T_2957 = $signed(sew_16_b_4) | $signed(imm_3); // @[Valu.scala 130:35]
  wire [15:0] _io_v_output_out_T_2959 = $signed(sew_16_b_4) ^ $signed(imm_3); // @[Valu.scala 131:36]
  wire [15:0] _io_v_output_out_T_2961 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2950) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2963 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_2953) : $signed(
    _io_v_output_out_T_2961); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2965 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_2955) : $signed(
    _io_v_output_out_T_2963); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2967 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_2957) : $signed(
    _io_v_output_out_T_2965); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2969 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_2959) : $signed(
    _io_v_output_out_T_2967); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_2970 = _io_v_output_out_T_585 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_2969); // @[Valu.scala 123:36]
  wire [15:0] _io_v_output_out_T_2971 = _io_v_output_out_T_579 ? $signed(sew_16_vd_4) : $signed(_io_v_output_out_T_2970)
    ; // @[Valu.scala 122:32]
  wire [15:0] _io_v_output_out_T_2978 = _io_v_output_out_T_573 ? $signed(_io_v_output_out_T_2971) : $signed(
    _io_v_output_out_T_625); // @[Valu.scala 121:11]
  wire [15:0] _io_v_output_out_T_2997 = $signed(sew_16_b_5) + $signed(imm_3); // @[Valu.scala 127:37]
  wire [15:0] _io_v_output_out_T_3000 = $signed(imm_3) - $signed(sew_16_b_5); // @[Valu.scala 128:33]
  wire [15:0] _io_v_output_out_T_3002 = $signed(sew_16_b_5) & $signed(imm_3); // @[Valu.scala 129:36]
  wire [15:0] _io_v_output_out_T_3004 = $signed(sew_16_b_5) | $signed(imm_3); // @[Valu.scala 130:35]
  wire [15:0] _io_v_output_out_T_3006 = $signed(sew_16_b_5) ^ $signed(imm_3); // @[Valu.scala 131:36]
  wire [15:0] _io_v_output_out_T_3008 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_2997) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3010 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_3000) : $signed(
    _io_v_output_out_T_3008); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3012 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_3002) : $signed(
    _io_v_output_out_T_3010); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3014 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_3004) : $signed(
    _io_v_output_out_T_3012); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3016 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_3006) : $signed(
    _io_v_output_out_T_3014); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3017 = _io_v_output_out_T_642 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_3016); // @[Valu.scala 123:36]
  wire [15:0] _io_v_output_out_T_3018 = _io_v_output_out_T_636 ? $signed(sew_16_vd_5) : $signed(_io_v_output_out_T_3017)
    ; // @[Valu.scala 122:32]
  wire [15:0] _io_v_output_out_T_3025 = _io_v_output_out_T_630 ? $signed(_io_v_output_out_T_3018) : $signed(
    _io_v_output_out_T_682); // @[Valu.scala 121:11]
  wire [15:0] _io_v_output_out_T_3044 = $signed(sew_16_b_6) + $signed(imm_3); // @[Valu.scala 127:37]
  wire [15:0] _io_v_output_out_T_3047 = $signed(imm_3) - $signed(sew_16_b_6); // @[Valu.scala 128:33]
  wire [15:0] _io_v_output_out_T_3049 = $signed(sew_16_b_6) & $signed(imm_3); // @[Valu.scala 129:36]
  wire [15:0] _io_v_output_out_T_3051 = $signed(sew_16_b_6) | $signed(imm_3); // @[Valu.scala 130:35]
  wire [15:0] _io_v_output_out_T_3053 = $signed(sew_16_b_6) ^ $signed(imm_3); // @[Valu.scala 131:36]
  wire [15:0] _io_v_output_out_T_3055 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_3044) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3057 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_3047) : $signed(
    _io_v_output_out_T_3055); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3059 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_3049) : $signed(
    _io_v_output_out_T_3057); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3061 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_3051) : $signed(
    _io_v_output_out_T_3059); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3063 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_3053) : $signed(
    _io_v_output_out_T_3061); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3064 = _io_v_output_out_T_699 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_3063); // @[Valu.scala 123:36]
  wire [15:0] _io_v_output_out_T_3065 = _io_v_output_out_T_693 ? $signed(sew_16_vd_6) : $signed(_io_v_output_out_T_3064)
    ; // @[Valu.scala 122:32]
  wire [15:0] _io_v_output_out_T_3072 = _io_v_output_out_T_687 ? $signed(_io_v_output_out_T_3065) : $signed(
    _io_v_output_out_T_739); // @[Valu.scala 121:11]
  wire [15:0] _io_v_output_out_T_3091 = $signed(sew_16_b_7) + $signed(imm_3); // @[Valu.scala 127:37]
  wire [15:0] _io_v_output_out_T_3094 = $signed(imm_3) - $signed(sew_16_b_7); // @[Valu.scala 128:33]
  wire [15:0] _io_v_output_out_T_3096 = $signed(sew_16_b_7) & $signed(imm_3); // @[Valu.scala 129:36]
  wire [15:0] _io_v_output_out_T_3098 = $signed(sew_16_b_7) | $signed(imm_3); // @[Valu.scala 130:35]
  wire [15:0] _io_v_output_out_T_3100 = $signed(sew_16_b_7) ^ $signed(imm_3); // @[Valu.scala 131:36]
  wire [15:0] _io_v_output_out_T_3102 = 9'h3 == io_aluc ? $signed(_io_v_output_out_T_3091) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3104 = 9'h1b == io_aluc ? $signed(_io_v_output_out_T_3094) : $signed(
    _io_v_output_out_T_3102); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3106 = 9'h4b == io_aluc ? $signed(_io_v_output_out_T_3096) : $signed(
    _io_v_output_out_T_3104); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3108 = 9'h2b == io_aluc ? $signed(_io_v_output_out_T_3098) : $signed(
    _io_v_output_out_T_3106); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3110 = 9'h5b == io_aluc ? $signed(_io_v_output_out_T_3100) : $signed(
    _io_v_output_out_T_3108); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_3111 = _io_v_output_out_T_756 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_3110); // @[Valu.scala 123:36]
  wire [15:0] _io_v_output_out_T_3112 = _io_v_output_out_T_750 ? $signed(sew_16_vd_7) : $signed(_io_v_output_out_T_3111)
    ; // @[Valu.scala 122:32]
  wire [15:0] _io_v_output_out_T_3119 = _io_v_output_out_T_744 ? $signed(_io_v_output_out_T_3112) : $signed(
    _io_v_output_out_T_796); // @[Valu.scala 121:11]
  wire [15:0] io_v_output_lo_lo_lo_3 = _io_v_output_out_T ? $signed(sew_16_vd_0) : $signed(_io_v_output_out_T_2790); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_lo_lo_hi_3 = _io_v_output_out_T_57 ? $signed(sew_16_vd_1) : $signed(_io_v_output_out_T_2837); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_lo_hi_lo_3 = _io_v_output_out_T_228 ? $signed(sew_16_vd_2) : $signed(_io_v_output_out_T_2884); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_lo_hi_hi_3 = _io_v_output_out_T_285 ? $signed(sew_16_vd_3) : $signed(_io_v_output_out_T_2931); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_hi_lo_lo_3 = _io_v_output_out_T_570 ? $signed(sew_16_vd_4) : $signed(_io_v_output_out_T_2978); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_hi_lo_hi_3 = _io_v_output_out_T_627 ? $signed(sew_16_vd_5) : $signed(_io_v_output_out_T_3025); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_hi_hi_lo_3 = _io_v_output_out_T_684 ? $signed(sew_16_vd_6) : $signed(_io_v_output_out_T_3072); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_hi_hi_hi_3 = _io_v_output_out_T_741 ? $signed(sew_16_vd_7) : $signed(_io_v_output_out_T_3119); // @[Cat.scala 33:92]
  wire [127:0] _io_v_output_T_15 = {io_v_output_hi_hi_hi_3,io_v_output_hi_hi_lo_3,io_v_output_hi_lo_hi_3,
    io_v_output_hi_lo_lo_3,io_v_output_lo_hi_hi_3,io_v_output_lo_hi_lo_3,io_v_output_lo_lo_hi_3,io_v_output_lo_lo_lo_3}; // @[Valu.scala 139:24]
  wire  _T_34 = io_aluc[2:0] == 3'h4; // @[Valu.scala 224:55]
  wire [63:0] imm_4 = {32'h0,io_in_A}; // @[Valu.scala 225:55]
  wire [63:0] _io_v_output_out_T_3138 = $signed(sew_64_b_0) + $signed(imm_4); // @[Valu.scala 151:37]
  wire [63:0] _io_v_output_out_T_3141 = $signed(sew_64_b_0) - $signed(imm_4); // @[Valu.scala 152:37]
  wire [63:0] _io_v_output_out_T_3144 = $signed(imm_4) - $signed(sew_64_b_0); // @[Valu.scala 153:33]
  wire [63:0] _io_v_output_out_T_3146 = $signed(sew_64_b_0) & $signed(imm_4); // @[Valu.scala 154:36]
  wire [63:0] _io_v_output_out_T_3148 = $signed(sew_64_b_0) | $signed(imm_4); // @[Valu.scala 155:35]
  wire [63:0] _io_v_output_out_T_3150 = $signed(sew_64_b_0) ^ $signed(imm_4); // @[Valu.scala 156:36]
  wire [63:0] _io_v_output_out_T_3151 = {32'h0,io_in_A}; // @[Valu.scala 157:36]
  wire [63:0] _io_v_output_out_T_3154 = _io_v_output_out_T_3151 <= _io_v_output_out_T_28 ? $signed(imm_4) : $signed(
    sew_64_b_0); // @[Valu.scala 157:31]
  wire [63:0] _io_v_output_out_T_3156 = $signed(imm_4) <= $signed(sew_64_b_0) ? $signed(imm_4) : $signed(sew_64_b_0); // @[Valu.scala 158:30]
  wire [63:0] _io_v_output_out_T_3160 = _io_v_output_out_T_3151 >= _io_v_output_out_T_28 ? $signed(imm_4) : $signed(
    sew_64_b_0); // @[Valu.scala 159:31]
  wire [63:0] _io_v_output_out_T_3162 = $signed(imm_4) >= $signed(sew_64_b_0) ? $signed(imm_4) : $signed(sew_64_b_0); // @[Valu.scala 160:30]
  wire [63:0] _io_v_output_out_T_3164 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_3138) : $signed(64'sh0); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3166 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_3141) : $signed(
    _io_v_output_out_T_3164); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3168 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_3144) : $signed(
    _io_v_output_out_T_3166); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3170 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_3146) : $signed(
    _io_v_output_out_T_3168); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3172 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_3148) : $signed(
    _io_v_output_out_T_3170); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3174 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_3150) : $signed(
    _io_v_output_out_T_3172); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3176 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_3154) : $signed(
    _io_v_output_out_T_3174); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3178 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_3156) : $signed(
    _io_v_output_out_T_3176); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3180 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_3160) : $signed(
    _io_v_output_out_T_3178); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3182 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_3162) : $signed(
    _io_v_output_out_T_3180); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3183 = _io_v_output_out_T_15 ? $signed(-64'sh1) : $signed(_io_v_output_out_T_3182); // @[Valu.scala 147:36]
  wire [63:0] _io_v_output_out_T_3184 = _io_v_output_out_T_9 ? $signed(sew_64_vd_0) : $signed(_io_v_output_out_T_3183); // @[Valu.scala 146:32]
  wire [63:0] _io_v_output_out_T_3191 = _io_v_output_out_T_3 ? $signed(_io_v_output_out_T_3184) : $signed(-64'sh1); // @[Valu.scala 145:11]
  wire [63:0] _io_v_output_out_T_3210 = $signed(sew_64_b_1) + $signed(imm_4); // @[Valu.scala 151:37]
  wire [63:0] _io_v_output_out_T_3213 = $signed(sew_64_b_1) - $signed(imm_4); // @[Valu.scala 152:37]
  wire [63:0] _io_v_output_out_T_3216 = $signed(imm_4) - $signed(sew_64_b_1); // @[Valu.scala 153:33]
  wire [63:0] _io_v_output_out_T_3218 = $signed(sew_64_b_1) & $signed(imm_4); // @[Valu.scala 154:36]
  wire [63:0] _io_v_output_out_T_3220 = $signed(sew_64_b_1) | $signed(imm_4); // @[Valu.scala 155:35]
  wire [63:0] _io_v_output_out_T_3222 = $signed(sew_64_b_1) ^ $signed(imm_4); // @[Valu.scala 156:36]
  wire [63:0] _io_v_output_out_T_3226 = _io_v_output_out_T_3151 <= _io_v_output_out_T_85 ? $signed(imm_4) : $signed(
    sew_64_b_1); // @[Valu.scala 157:31]
  wire [63:0] _io_v_output_out_T_3228 = $signed(imm_4) <= $signed(sew_64_b_1) ? $signed(imm_4) : $signed(sew_64_b_1); // @[Valu.scala 158:30]
  wire [63:0] _io_v_output_out_T_3232 = _io_v_output_out_T_3151 >= _io_v_output_out_T_85 ? $signed(imm_4) : $signed(
    sew_64_b_1); // @[Valu.scala 159:31]
  wire [63:0] _io_v_output_out_T_3234 = $signed(imm_4) >= $signed(sew_64_b_1) ? $signed(imm_4) : $signed(sew_64_b_1); // @[Valu.scala 160:30]
  wire [63:0] _io_v_output_out_T_3236 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_3210) : $signed(64'sh0); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3238 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_3213) : $signed(
    _io_v_output_out_T_3236); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3240 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_3216) : $signed(
    _io_v_output_out_T_3238); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3242 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_3218) : $signed(
    _io_v_output_out_T_3240); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3244 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_3220) : $signed(
    _io_v_output_out_T_3242); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3246 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_3222) : $signed(
    _io_v_output_out_T_3244); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3248 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_3226) : $signed(
    _io_v_output_out_T_3246); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3250 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_3228) : $signed(
    _io_v_output_out_T_3248); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3252 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_3232) : $signed(
    _io_v_output_out_T_3250); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3254 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_3234) : $signed(
    _io_v_output_out_T_3252); // @[Mux.scala 81:58]
  wire [63:0] _io_v_output_out_T_3255 = _io_v_output_out_T_72 ? $signed(-64'sh1) : $signed(_io_v_output_out_T_3254); // @[Valu.scala 147:36]
  wire [63:0] _io_v_output_out_T_3256 = _io_v_output_out_T_66 ? $signed(sew_64_vd_1) : $signed(_io_v_output_out_T_3255); // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_3259 = _io_v_output_out_T_50 & 32'h1 > io_vl; // @[Valu.scala 164:28]
  wire [63:0] _io_v_output_out_T_3262 = _io_v_output_out_T_50 & 32'h1 > io_vl ? $signed(sew_64_vd_1) : $signed(-64'sh1); // @[Valu.scala 164:12]
  wire [63:0] _io_v_output_out_T_3263 = _io_v_output_out_T_60 ? $signed(_io_v_output_out_T_3256) : $signed(
    _io_v_output_out_T_3262); // @[Valu.scala 145:11]
  wire [63:0] io_v_output_lo_8 = _io_v_output_out_T ? $signed(sew_64_vd_0) : $signed(_io_v_output_out_T_3191); // @[Cat.scala 33:92]
  wire [63:0] io_v_output_hi_8 = _io_v_output_out_T_57 ? $signed(sew_64_vd_1) : $signed(_io_v_output_out_T_3263); // @[Cat.scala 33:92]
  wire [127:0] _io_v_output_T_17 = {io_v_output_hi_8,io_v_output_lo_8}; // @[Valu.scala 167:24]
  wire [31:0] _io_v_output_out_T_3282 = $signed(sew_32_b_0) + $signed(io_in_A); // @[Valu.scala 151:37]
  wire [31:0] _io_v_output_out_T_3285 = $signed(sew_32_b_0) - $signed(io_in_A); // @[Valu.scala 152:37]
  wire [31:0] _io_v_output_out_T_3288 = $signed(io_in_A) - $signed(sew_32_b_0); // @[Valu.scala 153:33]
  wire [31:0] _io_v_output_out_T_3290 = $signed(sew_32_b_0) & $signed(io_in_A); // @[Valu.scala 154:36]
  wire [31:0] _io_v_output_out_T_3292 = $signed(sew_32_b_0) | $signed(io_in_A); // @[Valu.scala 155:35]
  wire [31:0] _io_v_output_out_T_3294 = $signed(sew_32_b_0) ^ $signed(io_in_A); // @[Valu.scala 156:36]
  wire [31:0] _io_v_output_out_T_3295 = io_in_A; // @[Valu.scala 157:36]
  wire [31:0] _io_v_output_out_T_3298 = io_in_A <= _io_v_output_out_T_142 ? $signed(io_in_A) : $signed(sew_32_b_0); // @[Valu.scala 157:31]
  wire [31:0] _io_v_output_out_T_3300 = $signed(io_in_A) <= $signed(sew_32_b_0) ? $signed(io_in_A) : $signed(sew_32_b_0)
    ; // @[Valu.scala 158:30]
  wire [31:0] _io_v_output_out_T_3304 = io_in_A >= _io_v_output_out_T_142 ? $signed(io_in_A) : $signed(sew_32_b_0); // @[Valu.scala 159:31]
  wire [31:0] _io_v_output_out_T_3306 = $signed(io_in_A) >= $signed(sew_32_b_0) ? $signed(io_in_A) : $signed(sew_32_b_0)
    ; // @[Valu.scala 160:30]
  wire [31:0] _io_v_output_out_T_3308 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_3282) : $signed(32'sh0); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3310 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_3285) : $signed(
    _io_v_output_out_T_3308); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3312 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_3288) : $signed(
    _io_v_output_out_T_3310); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3314 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_3290) : $signed(
    _io_v_output_out_T_3312); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3316 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_3292) : $signed(
    _io_v_output_out_T_3314); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3318 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_3294) : $signed(
    _io_v_output_out_T_3316); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3320 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_3298) : $signed(
    _io_v_output_out_T_3318); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3322 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_3300) : $signed(
    _io_v_output_out_T_3320); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3324 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_3304) : $signed(
    _io_v_output_out_T_3322); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3326 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_3306) : $signed(
    _io_v_output_out_T_3324); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3327 = _io_v_output_out_T_15 ? $signed(-32'sh1) : $signed(_io_v_output_out_T_3326); // @[Valu.scala 147:36]
  wire [31:0] _io_v_output_out_T_3328 = _io_v_output_out_T_9 ? $signed(sew_32_vd_0) : $signed(_io_v_output_out_T_3327); // @[Valu.scala 146:32]
  wire [31:0] _io_v_output_out_T_3335 = _io_v_output_out_T_3 ? $signed(_io_v_output_out_T_3328) : $signed(-32'sh1); // @[Valu.scala 145:11]
  wire [31:0] _io_v_output_out_T_3354 = $signed(sew_32_b_1) + $signed(io_in_A); // @[Valu.scala 151:37]
  wire [31:0] _io_v_output_out_T_3357 = $signed(sew_32_b_1) - $signed(io_in_A); // @[Valu.scala 152:37]
  wire [31:0] _io_v_output_out_T_3360 = $signed(io_in_A) - $signed(sew_32_b_1); // @[Valu.scala 153:33]
  wire [31:0] _io_v_output_out_T_3362 = $signed(sew_32_b_1) & $signed(io_in_A); // @[Valu.scala 154:36]
  wire [31:0] _io_v_output_out_T_3364 = $signed(sew_32_b_1) | $signed(io_in_A); // @[Valu.scala 155:35]
  wire [31:0] _io_v_output_out_T_3366 = $signed(sew_32_b_1) ^ $signed(io_in_A); // @[Valu.scala 156:36]
  wire [31:0] _io_v_output_out_T_3370 = io_in_A <= _io_v_output_out_T_199 ? $signed(io_in_A) : $signed(sew_32_b_1); // @[Valu.scala 157:31]
  wire [31:0] _io_v_output_out_T_3372 = $signed(io_in_A) <= $signed(sew_32_b_1) ? $signed(io_in_A) : $signed(sew_32_b_1)
    ; // @[Valu.scala 158:30]
  wire [31:0] _io_v_output_out_T_3376 = io_in_A >= _io_v_output_out_T_199 ? $signed(io_in_A) : $signed(sew_32_b_1); // @[Valu.scala 159:31]
  wire [31:0] _io_v_output_out_T_3378 = $signed(io_in_A) >= $signed(sew_32_b_1) ? $signed(io_in_A) : $signed(sew_32_b_1)
    ; // @[Valu.scala 160:30]
  wire [31:0] _io_v_output_out_T_3380 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_3354) : $signed(32'sh0); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3382 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_3357) : $signed(
    _io_v_output_out_T_3380); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3384 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_3360) : $signed(
    _io_v_output_out_T_3382); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3386 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_3362) : $signed(
    _io_v_output_out_T_3384); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3388 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_3364) : $signed(
    _io_v_output_out_T_3386); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3390 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_3366) : $signed(
    _io_v_output_out_T_3388); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3392 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_3370) : $signed(
    _io_v_output_out_T_3390); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3394 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_3372) : $signed(
    _io_v_output_out_T_3392); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3396 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_3376) : $signed(
    _io_v_output_out_T_3394); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3398 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_3378) : $signed(
    _io_v_output_out_T_3396); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3399 = _io_v_output_out_T_72 ? $signed(-32'sh1) : $signed(_io_v_output_out_T_3398); // @[Valu.scala 147:36]
  wire [31:0] _io_v_output_out_T_3400 = _io_v_output_out_T_66 ? $signed(sew_32_vd_1) : $signed(_io_v_output_out_T_3399); // @[Valu.scala 146:32]
  wire [31:0] _io_v_output_out_T_3406 = _io_v_output_out_T_50 & 32'h1 > io_vl ? $signed(sew_32_vd_1) : $signed(-32'sh1); // @[Valu.scala 164:12]
  wire [31:0] _io_v_output_out_T_3407 = _io_v_output_out_T_60 ? $signed(_io_v_output_out_T_3400) : $signed(
    _io_v_output_out_T_3406); // @[Valu.scala 145:11]
  wire [31:0] _io_v_output_out_T_3426 = $signed(sew_32_b_2) + $signed(io_in_A); // @[Valu.scala 151:37]
  wire [31:0] _io_v_output_out_T_3429 = $signed(sew_32_b_2) - $signed(io_in_A); // @[Valu.scala 152:37]
  wire [31:0] _io_v_output_out_T_3432 = $signed(io_in_A) - $signed(sew_32_b_2); // @[Valu.scala 153:33]
  wire [31:0] _io_v_output_out_T_3434 = $signed(sew_32_b_2) & $signed(io_in_A); // @[Valu.scala 154:36]
  wire [31:0] _io_v_output_out_T_3436 = $signed(sew_32_b_2) | $signed(io_in_A); // @[Valu.scala 155:35]
  wire [31:0] _io_v_output_out_T_3438 = $signed(sew_32_b_2) ^ $signed(io_in_A); // @[Valu.scala 156:36]
  wire [31:0] _io_v_output_out_T_3442 = io_in_A <= _io_v_output_out_T_256 ? $signed(io_in_A) : $signed(sew_32_b_2); // @[Valu.scala 157:31]
  wire [31:0] _io_v_output_out_T_3444 = $signed(io_in_A) <= $signed(sew_32_b_2) ? $signed(io_in_A) : $signed(sew_32_b_2)
    ; // @[Valu.scala 158:30]
  wire [31:0] _io_v_output_out_T_3448 = io_in_A >= _io_v_output_out_T_256 ? $signed(io_in_A) : $signed(sew_32_b_2); // @[Valu.scala 159:31]
  wire [31:0] _io_v_output_out_T_3450 = $signed(io_in_A) >= $signed(sew_32_b_2) ? $signed(io_in_A) : $signed(sew_32_b_2)
    ; // @[Valu.scala 160:30]
  wire [31:0] _io_v_output_out_T_3452 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_3426) : $signed(32'sh0); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3454 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_3429) : $signed(
    _io_v_output_out_T_3452); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3456 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_3432) : $signed(
    _io_v_output_out_T_3454); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3458 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_3434) : $signed(
    _io_v_output_out_T_3456); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3460 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_3436) : $signed(
    _io_v_output_out_T_3458); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3462 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_3438) : $signed(
    _io_v_output_out_T_3460); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3464 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_3442) : $signed(
    _io_v_output_out_T_3462); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3466 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_3444) : $signed(
    _io_v_output_out_T_3464); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3468 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_3448) : $signed(
    _io_v_output_out_T_3466); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3470 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_3450) : $signed(
    _io_v_output_out_T_3468); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3471 = _io_v_output_out_T_243 ? $signed(-32'sh1) : $signed(_io_v_output_out_T_3470); // @[Valu.scala 147:36]
  wire [31:0] _io_v_output_out_T_3472 = _io_v_output_out_T_237 ? $signed(sew_32_vd_2) : $signed(_io_v_output_out_T_3471)
    ; // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_3475 = _io_v_output_out_T_50 & 32'h2 > io_vl; // @[Valu.scala 164:28]
  wire [31:0] _io_v_output_out_T_3478 = _io_v_output_out_T_50 & 32'h2 > io_vl ? $signed(sew_32_vd_2) : $signed(-32'sh1); // @[Valu.scala 164:12]
  wire [31:0] _io_v_output_out_T_3479 = _io_v_output_out_T_231 ? $signed(_io_v_output_out_T_3472) : $signed(
    _io_v_output_out_T_3478); // @[Valu.scala 145:11]
  wire [31:0] _io_v_output_out_T_3498 = $signed(sew_32_b_3) + $signed(io_in_A); // @[Valu.scala 151:37]
  wire [31:0] _io_v_output_out_T_3501 = $signed(sew_32_b_3) - $signed(io_in_A); // @[Valu.scala 152:37]
  wire [31:0] _io_v_output_out_T_3504 = $signed(io_in_A) - $signed(sew_32_b_3); // @[Valu.scala 153:33]
  wire [31:0] _io_v_output_out_T_3506 = $signed(sew_32_b_3) & $signed(io_in_A); // @[Valu.scala 154:36]
  wire [31:0] _io_v_output_out_T_3508 = $signed(sew_32_b_3) | $signed(io_in_A); // @[Valu.scala 155:35]
  wire [31:0] _io_v_output_out_T_3510 = $signed(sew_32_b_3) ^ $signed(io_in_A); // @[Valu.scala 156:36]
  wire [31:0] _io_v_output_out_T_3514 = io_in_A <= _io_v_output_out_T_313 ? $signed(io_in_A) : $signed(sew_32_b_3); // @[Valu.scala 157:31]
  wire [31:0] _io_v_output_out_T_3516 = $signed(io_in_A) <= $signed(sew_32_b_3) ? $signed(io_in_A) : $signed(sew_32_b_3)
    ; // @[Valu.scala 158:30]
  wire [31:0] _io_v_output_out_T_3520 = io_in_A >= _io_v_output_out_T_313 ? $signed(io_in_A) : $signed(sew_32_b_3); // @[Valu.scala 159:31]
  wire [31:0] _io_v_output_out_T_3522 = $signed(io_in_A) >= $signed(sew_32_b_3) ? $signed(io_in_A) : $signed(sew_32_b_3)
    ; // @[Valu.scala 160:30]
  wire [31:0] _io_v_output_out_T_3524 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_3498) : $signed(32'sh0); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3526 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_3501) : $signed(
    _io_v_output_out_T_3524); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3528 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_3504) : $signed(
    _io_v_output_out_T_3526); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3530 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_3506) : $signed(
    _io_v_output_out_T_3528); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3532 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_3508) : $signed(
    _io_v_output_out_T_3530); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3534 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_3510) : $signed(
    _io_v_output_out_T_3532); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3536 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_3514) : $signed(
    _io_v_output_out_T_3534); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3538 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_3516) : $signed(
    _io_v_output_out_T_3536); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3540 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_3520) : $signed(
    _io_v_output_out_T_3538); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3542 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_3522) : $signed(
    _io_v_output_out_T_3540); // @[Mux.scala 81:58]
  wire [31:0] _io_v_output_out_T_3543 = _io_v_output_out_T_300 ? $signed(-32'sh1) : $signed(_io_v_output_out_T_3542); // @[Valu.scala 147:36]
  wire [31:0] _io_v_output_out_T_3544 = _io_v_output_out_T_294 ? $signed(sew_32_vd_3) : $signed(_io_v_output_out_T_3543)
    ; // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_3547 = _io_v_output_out_T_50 & 32'h3 > io_vl; // @[Valu.scala 164:28]
  wire [31:0] _io_v_output_out_T_3550 = _io_v_output_out_T_50 & 32'h3 > io_vl ? $signed(sew_32_vd_3) : $signed(-32'sh1); // @[Valu.scala 164:12]
  wire [31:0] _io_v_output_out_T_3551 = _io_v_output_out_T_288 ? $signed(_io_v_output_out_T_3544) : $signed(
    _io_v_output_out_T_3550); // @[Valu.scala 145:11]
  wire [31:0] io_v_output_lo_lo_6 = _io_v_output_out_T ? $signed(sew_32_vd_0) : $signed(_io_v_output_out_T_3335); // @[Cat.scala 33:92]
  wire [31:0] io_v_output_lo_hi_6 = _io_v_output_out_T_57 ? $signed(sew_32_vd_1) : $signed(_io_v_output_out_T_3407); // @[Cat.scala 33:92]
  wire [31:0] io_v_output_hi_lo_6 = _io_v_output_out_T_228 ? $signed(sew_32_vd_2) : $signed(_io_v_output_out_T_3479); // @[Cat.scala 33:92]
  wire [31:0] io_v_output_hi_hi_6 = _io_v_output_out_T_285 ? $signed(sew_32_vd_3) : $signed(_io_v_output_out_T_3551); // @[Cat.scala 33:92]
  wire [127:0] _io_v_output_T_19 = {io_v_output_hi_hi_6,io_v_output_hi_lo_6,io_v_output_lo_hi_6,io_v_output_lo_lo_6}; // @[Valu.scala 167:24]
  wire [7:0] imm_6 = io_in_A[7:0]; // @[Valu.scala 231:40]
  wire [7:0] _io_v_output_out_T_3570 = $signed(sew_8_b_0) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_3573 = $signed(sew_8_b_0) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_3576 = $signed(imm_6) - $signed(sew_8_b_0); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_3578 = $signed(sew_8_b_0) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_3580 = $signed(sew_8_b_0) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_3582 = $signed(sew_8_b_0) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_3583 = io_in_A[7:0]; // @[Valu.scala 157:36]
  wire [7:0] _io_v_output_out_T_3586 = _io_v_output_out_T_3583 <= _io_v_output_out_T_826 ? $signed(imm_6) : $signed(
    sew_8_b_0); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_3588 = $signed(imm_6) <= $signed(sew_8_b_0) ? $signed(imm_6) : $signed(sew_8_b_0); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_3592 = _io_v_output_out_T_3583 >= _io_v_output_out_T_826 ? $signed(imm_6) : $signed(
    sew_8_b_0); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_3594 = $signed(imm_6) >= $signed(sew_8_b_0) ? $signed(imm_6) : $signed(sew_8_b_0); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_3596 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_3570) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3598 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_3573) : $signed(
    _io_v_output_out_T_3596); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3600 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_3576) : $signed(
    _io_v_output_out_T_3598); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3602 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_3578) : $signed(
    _io_v_output_out_T_3600); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3604 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_3580) : $signed(
    _io_v_output_out_T_3602); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3606 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_3582) : $signed(
    _io_v_output_out_T_3604); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3608 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_3586) : $signed(
    _io_v_output_out_T_3606); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3610 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_3588) : $signed(
    _io_v_output_out_T_3608); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3612 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_3592) : $signed(
    _io_v_output_out_T_3610); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3614 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_3594) : $signed(
    _io_v_output_out_T_3612); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3615 = _io_v_output_out_T_15 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_3614); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_3616 = _io_v_output_out_T_9 ? $signed(sew_8_vd_0) : $signed(_io_v_output_out_T_3615); // @[Valu.scala 146:32]
  wire [7:0] _io_v_output_out_T_3623 = _io_v_output_out_T_3 ? $signed(_io_v_output_out_T_3616) : $signed(-8'sh1); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_3642 = $signed(sew_8_b_1) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_3645 = $signed(sew_8_b_1) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_3648 = $signed(imm_6) - $signed(sew_8_b_1); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_3650 = $signed(sew_8_b_1) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_3652 = $signed(sew_8_b_1) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_3654 = $signed(sew_8_b_1) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_3658 = _io_v_output_out_T_3583 <= _io_v_output_out_T_883 ? $signed(imm_6) : $signed(
    sew_8_b_1); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_3660 = $signed(imm_6) <= $signed(sew_8_b_1) ? $signed(imm_6) : $signed(sew_8_b_1); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_3664 = _io_v_output_out_T_3583 >= _io_v_output_out_T_883 ? $signed(imm_6) : $signed(
    sew_8_b_1); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_3666 = $signed(imm_6) >= $signed(sew_8_b_1) ? $signed(imm_6) : $signed(sew_8_b_1); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_3668 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_3642) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3670 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_3645) : $signed(
    _io_v_output_out_T_3668); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3672 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_3648) : $signed(
    _io_v_output_out_T_3670); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3674 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_3650) : $signed(
    _io_v_output_out_T_3672); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3676 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_3652) : $signed(
    _io_v_output_out_T_3674); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3678 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_3654) : $signed(
    _io_v_output_out_T_3676); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3680 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_3658) : $signed(
    _io_v_output_out_T_3678); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3682 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_3660) : $signed(
    _io_v_output_out_T_3680); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3684 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_3664) : $signed(
    _io_v_output_out_T_3682); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3686 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_3666) : $signed(
    _io_v_output_out_T_3684); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3687 = _io_v_output_out_T_72 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_3686); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_3688 = _io_v_output_out_T_66 ? $signed(sew_8_vd_1) : $signed(_io_v_output_out_T_3687); // @[Valu.scala 146:32]
  wire [7:0] _io_v_output_out_T_3694 = _io_v_output_out_T_50 & 32'h1 > io_vl ? $signed(sew_8_vd_1) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_3695 = _io_v_output_out_T_60 ? $signed(_io_v_output_out_T_3688) : $signed(
    _io_v_output_out_T_3694); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_3714 = $signed(sew_8_b_2) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_3717 = $signed(sew_8_b_2) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_3720 = $signed(imm_6) - $signed(sew_8_b_2); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_3722 = $signed(sew_8_b_2) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_3724 = $signed(sew_8_b_2) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_3726 = $signed(sew_8_b_2) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_3730 = _io_v_output_out_T_3583 <= _io_v_output_out_T_940 ? $signed(imm_6) : $signed(
    sew_8_b_2); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_3732 = $signed(imm_6) <= $signed(sew_8_b_2) ? $signed(imm_6) : $signed(sew_8_b_2); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_3736 = _io_v_output_out_T_3583 >= _io_v_output_out_T_940 ? $signed(imm_6) : $signed(
    sew_8_b_2); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_3738 = $signed(imm_6) >= $signed(sew_8_b_2) ? $signed(imm_6) : $signed(sew_8_b_2); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_3740 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_3714) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3742 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_3717) : $signed(
    _io_v_output_out_T_3740); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3744 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_3720) : $signed(
    _io_v_output_out_T_3742); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3746 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_3722) : $signed(
    _io_v_output_out_T_3744); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3748 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_3724) : $signed(
    _io_v_output_out_T_3746); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3750 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_3726) : $signed(
    _io_v_output_out_T_3748); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3752 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_3730) : $signed(
    _io_v_output_out_T_3750); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3754 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_3732) : $signed(
    _io_v_output_out_T_3752); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3756 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_3736) : $signed(
    _io_v_output_out_T_3754); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3758 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_3738) : $signed(
    _io_v_output_out_T_3756); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3759 = _io_v_output_out_T_243 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_3758); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_3760 = _io_v_output_out_T_237 ? $signed(sew_8_vd_2) : $signed(_io_v_output_out_T_3759); // @[Valu.scala 146:32]
  wire [7:0] _io_v_output_out_T_3766 = _io_v_output_out_T_50 & 32'h2 > io_vl ? $signed(sew_8_vd_2) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_3767 = _io_v_output_out_T_231 ? $signed(_io_v_output_out_T_3760) : $signed(
    _io_v_output_out_T_3766); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_3786 = $signed(sew_8_b_3) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_3789 = $signed(sew_8_b_3) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_3792 = $signed(imm_6) - $signed(sew_8_b_3); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_3794 = $signed(sew_8_b_3) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_3796 = $signed(sew_8_b_3) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_3798 = $signed(sew_8_b_3) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_3802 = _io_v_output_out_T_3583 <= _io_v_output_out_T_997 ? $signed(imm_6) : $signed(
    sew_8_b_3); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_3804 = $signed(imm_6) <= $signed(sew_8_b_3) ? $signed(imm_6) : $signed(sew_8_b_3); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_3808 = _io_v_output_out_T_3583 >= _io_v_output_out_T_997 ? $signed(imm_6) : $signed(
    sew_8_b_3); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_3810 = $signed(imm_6) >= $signed(sew_8_b_3) ? $signed(imm_6) : $signed(sew_8_b_3); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_3812 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_3786) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3814 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_3789) : $signed(
    _io_v_output_out_T_3812); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3816 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_3792) : $signed(
    _io_v_output_out_T_3814); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3818 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_3794) : $signed(
    _io_v_output_out_T_3816); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3820 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_3796) : $signed(
    _io_v_output_out_T_3818); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3822 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_3798) : $signed(
    _io_v_output_out_T_3820); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3824 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_3802) : $signed(
    _io_v_output_out_T_3822); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3826 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_3804) : $signed(
    _io_v_output_out_T_3824); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3828 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_3808) : $signed(
    _io_v_output_out_T_3826); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3830 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_3810) : $signed(
    _io_v_output_out_T_3828); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3831 = _io_v_output_out_T_300 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_3830); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_3832 = _io_v_output_out_T_294 ? $signed(sew_8_vd_3) : $signed(_io_v_output_out_T_3831); // @[Valu.scala 146:32]
  wire [7:0] _io_v_output_out_T_3838 = _io_v_output_out_T_50 & 32'h3 > io_vl ? $signed(sew_8_vd_3) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_3839 = _io_v_output_out_T_288 ? $signed(_io_v_output_out_T_3832) : $signed(
    _io_v_output_out_T_3838); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_3858 = $signed(sew_8_b_4) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_3861 = $signed(sew_8_b_4) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_3864 = $signed(imm_6) - $signed(sew_8_b_4); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_3866 = $signed(sew_8_b_4) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_3868 = $signed(sew_8_b_4) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_3870 = $signed(sew_8_b_4) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_3874 = _io_v_output_out_T_3583 <= _io_v_output_out_T_1054 ? $signed(imm_6) : $signed(
    sew_8_b_4); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_3876 = $signed(imm_6) <= $signed(sew_8_b_4) ? $signed(imm_6) : $signed(sew_8_b_4); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_3880 = _io_v_output_out_T_3583 >= _io_v_output_out_T_1054 ? $signed(imm_6) : $signed(
    sew_8_b_4); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_3882 = $signed(imm_6) >= $signed(sew_8_b_4) ? $signed(imm_6) : $signed(sew_8_b_4); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_3884 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_3858) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3886 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_3861) : $signed(
    _io_v_output_out_T_3884); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3888 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_3864) : $signed(
    _io_v_output_out_T_3886); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3890 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_3866) : $signed(
    _io_v_output_out_T_3888); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3892 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_3868) : $signed(
    _io_v_output_out_T_3890); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3894 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_3870) : $signed(
    _io_v_output_out_T_3892); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3896 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_3874) : $signed(
    _io_v_output_out_T_3894); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3898 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_3876) : $signed(
    _io_v_output_out_T_3896); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3900 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_3880) : $signed(
    _io_v_output_out_T_3898); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3902 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_3882) : $signed(
    _io_v_output_out_T_3900); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3903 = _io_v_output_out_T_585 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_3902); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_3904 = _io_v_output_out_T_579 ? $signed(sew_8_vd_4) : $signed(_io_v_output_out_T_3903); // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_3907 = _io_v_output_out_T_50 & 32'h4 > io_vl; // @[Valu.scala 164:28]
  wire [7:0] _io_v_output_out_T_3910 = _io_v_output_out_T_50 & 32'h4 > io_vl ? $signed(sew_8_vd_4) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_3911 = _io_v_output_out_T_573 ? $signed(_io_v_output_out_T_3904) : $signed(
    _io_v_output_out_T_3910); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_3930 = $signed(sew_8_b_5) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_3933 = $signed(sew_8_b_5) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_3936 = $signed(imm_6) - $signed(sew_8_b_5); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_3938 = $signed(sew_8_b_5) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_3940 = $signed(sew_8_b_5) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_3942 = $signed(sew_8_b_5) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_3946 = _io_v_output_out_T_3583 <= _io_v_output_out_T_1111 ? $signed(imm_6) : $signed(
    sew_8_b_5); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_3948 = $signed(imm_6) <= $signed(sew_8_b_5) ? $signed(imm_6) : $signed(sew_8_b_5); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_3952 = _io_v_output_out_T_3583 >= _io_v_output_out_T_1111 ? $signed(imm_6) : $signed(
    sew_8_b_5); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_3954 = $signed(imm_6) >= $signed(sew_8_b_5) ? $signed(imm_6) : $signed(sew_8_b_5); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_3956 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_3930) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3958 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_3933) : $signed(
    _io_v_output_out_T_3956); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3960 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_3936) : $signed(
    _io_v_output_out_T_3958); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3962 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_3938) : $signed(
    _io_v_output_out_T_3960); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3964 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_3940) : $signed(
    _io_v_output_out_T_3962); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3966 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_3942) : $signed(
    _io_v_output_out_T_3964); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3968 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_3946) : $signed(
    _io_v_output_out_T_3966); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3970 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_3948) : $signed(
    _io_v_output_out_T_3968); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3972 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_3952) : $signed(
    _io_v_output_out_T_3970); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3974 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_3954) : $signed(
    _io_v_output_out_T_3972); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_3975 = _io_v_output_out_T_642 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_3974); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_3976 = _io_v_output_out_T_636 ? $signed(sew_8_vd_5) : $signed(_io_v_output_out_T_3975); // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_3979 = _io_v_output_out_T_50 & 32'h5 > io_vl; // @[Valu.scala 164:28]
  wire [7:0] _io_v_output_out_T_3982 = _io_v_output_out_T_50 & 32'h5 > io_vl ? $signed(sew_8_vd_5) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_3983 = _io_v_output_out_T_630 ? $signed(_io_v_output_out_T_3976) : $signed(
    _io_v_output_out_T_3982); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_4002 = $signed(sew_8_b_6) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_4005 = $signed(sew_8_b_6) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_4008 = $signed(imm_6) - $signed(sew_8_b_6); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_4010 = $signed(sew_8_b_6) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_4012 = $signed(sew_8_b_6) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_4014 = $signed(sew_8_b_6) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_4018 = _io_v_output_out_T_3583 <= _io_v_output_out_T_1168 ? $signed(imm_6) : $signed(
    sew_8_b_6); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_4020 = $signed(imm_6) <= $signed(sew_8_b_6) ? $signed(imm_6) : $signed(sew_8_b_6); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_4024 = _io_v_output_out_T_3583 >= _io_v_output_out_T_1168 ? $signed(imm_6) : $signed(
    sew_8_b_6); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_4026 = $signed(imm_6) >= $signed(sew_8_b_6) ? $signed(imm_6) : $signed(sew_8_b_6); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_4028 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4002) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4030 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4005) : $signed(
    _io_v_output_out_T_4028); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4032 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4008) : $signed(
    _io_v_output_out_T_4030); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4034 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4010) : $signed(
    _io_v_output_out_T_4032); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4036 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4012) : $signed(
    _io_v_output_out_T_4034); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4038 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4014) : $signed(
    _io_v_output_out_T_4036); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4040 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4018) : $signed(
    _io_v_output_out_T_4038); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4042 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4020) : $signed(
    _io_v_output_out_T_4040); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4044 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4024) : $signed(
    _io_v_output_out_T_4042); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4046 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4026) : $signed(
    _io_v_output_out_T_4044); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4047 = _io_v_output_out_T_699 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_4046); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_4048 = _io_v_output_out_T_693 ? $signed(sew_8_vd_6) : $signed(_io_v_output_out_T_4047); // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_4051 = _io_v_output_out_T_50 & 32'h6 > io_vl; // @[Valu.scala 164:28]
  wire [7:0] _io_v_output_out_T_4054 = _io_v_output_out_T_50 & 32'h6 > io_vl ? $signed(sew_8_vd_6) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_4055 = _io_v_output_out_T_687 ? $signed(_io_v_output_out_T_4048) : $signed(
    _io_v_output_out_T_4054); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_4074 = $signed(sew_8_b_7) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_4077 = $signed(sew_8_b_7) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_4080 = $signed(imm_6) - $signed(sew_8_b_7); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_4082 = $signed(sew_8_b_7) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_4084 = $signed(sew_8_b_7) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_4086 = $signed(sew_8_b_7) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_4090 = _io_v_output_out_T_3583 <= _io_v_output_out_T_1225 ? $signed(imm_6) : $signed(
    sew_8_b_7); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_4092 = $signed(imm_6) <= $signed(sew_8_b_7) ? $signed(imm_6) : $signed(sew_8_b_7); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_4096 = _io_v_output_out_T_3583 >= _io_v_output_out_T_1225 ? $signed(imm_6) : $signed(
    sew_8_b_7); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_4098 = $signed(imm_6) >= $signed(sew_8_b_7) ? $signed(imm_6) : $signed(sew_8_b_7); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_4100 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4074) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4102 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4077) : $signed(
    _io_v_output_out_T_4100); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4104 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4080) : $signed(
    _io_v_output_out_T_4102); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4106 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4082) : $signed(
    _io_v_output_out_T_4104); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4108 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4084) : $signed(
    _io_v_output_out_T_4106); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4110 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4086) : $signed(
    _io_v_output_out_T_4108); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4112 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4090) : $signed(
    _io_v_output_out_T_4110); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4114 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4092) : $signed(
    _io_v_output_out_T_4112); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4116 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4096) : $signed(
    _io_v_output_out_T_4114); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4118 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4098) : $signed(
    _io_v_output_out_T_4116); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4119 = _io_v_output_out_T_756 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_4118); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_4120 = _io_v_output_out_T_750 ? $signed(sew_8_vd_7) : $signed(_io_v_output_out_T_4119); // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_4123 = _io_v_output_out_T_50 & 32'h7 > io_vl; // @[Valu.scala 164:28]
  wire [7:0] _io_v_output_out_T_4126 = _io_v_output_out_T_50 & 32'h7 > io_vl ? $signed(sew_8_vd_7) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_4127 = _io_v_output_out_T_744 ? $signed(_io_v_output_out_T_4120) : $signed(
    _io_v_output_out_T_4126); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_4146 = $signed(sew_8_b_8) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_4149 = $signed(sew_8_b_8) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_4152 = $signed(imm_6) - $signed(sew_8_b_8); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_4154 = $signed(sew_8_b_8) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_4156 = $signed(sew_8_b_8) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_4158 = $signed(sew_8_b_8) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_4162 = _io_v_output_out_T_3583 <= _io_v_output_out_T_1282 ? $signed(imm_6) : $signed(
    sew_8_b_8); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_4164 = $signed(imm_6) <= $signed(sew_8_b_8) ? $signed(imm_6) : $signed(sew_8_b_8); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_4168 = _io_v_output_out_T_3583 >= _io_v_output_out_T_1282 ? $signed(imm_6) : $signed(
    sew_8_b_8); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_4170 = $signed(imm_6) >= $signed(sew_8_b_8) ? $signed(imm_6) : $signed(sew_8_b_8); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_4172 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4146) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4174 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4149) : $signed(
    _io_v_output_out_T_4172); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4176 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4152) : $signed(
    _io_v_output_out_T_4174); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4178 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4154) : $signed(
    _io_v_output_out_T_4176); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4180 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4156) : $signed(
    _io_v_output_out_T_4178); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4182 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4158) : $signed(
    _io_v_output_out_T_4180); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4184 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4162) : $signed(
    _io_v_output_out_T_4182); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4186 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4164) : $signed(
    _io_v_output_out_T_4184); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4188 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4168) : $signed(
    _io_v_output_out_T_4186); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4190 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4170) : $signed(
    _io_v_output_out_T_4188); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4191 = _io_v_output_out_T_1269 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_4190); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_4192 = _io_v_output_out_T_1263 ? $signed(sew_8_vd_8) : $signed(_io_v_output_out_T_4191); // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_4195 = _io_v_output_out_T_50 & 32'h8 > io_vl; // @[Valu.scala 164:28]
  wire [7:0] _io_v_output_out_T_4198 = _io_v_output_out_T_50 & 32'h8 > io_vl ? $signed(sew_8_vd_8) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_4199 = _io_v_output_out_T_1257 ? $signed(_io_v_output_out_T_4192) : $signed(
    _io_v_output_out_T_4198); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_4218 = $signed(sew_8_b_9) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_4221 = $signed(sew_8_b_9) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_4224 = $signed(imm_6) - $signed(sew_8_b_9); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_4226 = $signed(sew_8_b_9) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_4228 = $signed(sew_8_b_9) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_4230 = $signed(sew_8_b_9) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_4234 = _io_v_output_out_T_3583 <= _io_v_output_out_T_1339 ? $signed(imm_6) : $signed(
    sew_8_b_9); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_4236 = $signed(imm_6) <= $signed(sew_8_b_9) ? $signed(imm_6) : $signed(sew_8_b_9); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_4240 = _io_v_output_out_T_3583 >= _io_v_output_out_T_1339 ? $signed(imm_6) : $signed(
    sew_8_b_9); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_4242 = $signed(imm_6) >= $signed(sew_8_b_9) ? $signed(imm_6) : $signed(sew_8_b_9); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_4244 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4218) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4246 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4221) : $signed(
    _io_v_output_out_T_4244); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4248 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4224) : $signed(
    _io_v_output_out_T_4246); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4250 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4226) : $signed(
    _io_v_output_out_T_4248); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4252 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4228) : $signed(
    _io_v_output_out_T_4250); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4254 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4230) : $signed(
    _io_v_output_out_T_4252); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4256 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4234) : $signed(
    _io_v_output_out_T_4254); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4258 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4236) : $signed(
    _io_v_output_out_T_4256); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4260 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4240) : $signed(
    _io_v_output_out_T_4258); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4262 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4242) : $signed(
    _io_v_output_out_T_4260); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4263 = _io_v_output_out_T_1326 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_4262); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_4264 = _io_v_output_out_T_1320 ? $signed(sew_8_vd_9) : $signed(_io_v_output_out_T_4263); // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_4267 = _io_v_output_out_T_50 & 32'h9 > io_vl; // @[Valu.scala 164:28]
  wire [7:0] _io_v_output_out_T_4270 = _io_v_output_out_T_50 & 32'h9 > io_vl ? $signed(sew_8_vd_9) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_4271 = _io_v_output_out_T_1314 ? $signed(_io_v_output_out_T_4264) : $signed(
    _io_v_output_out_T_4270); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_4290 = $signed(sew_8_b_10) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_4293 = $signed(sew_8_b_10) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_4296 = $signed(imm_6) - $signed(sew_8_b_10); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_4298 = $signed(sew_8_b_10) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_4300 = $signed(sew_8_b_10) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_4302 = $signed(sew_8_b_10) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_4306 = _io_v_output_out_T_3583 <= _io_v_output_out_T_1396 ? $signed(imm_6) : $signed(
    sew_8_b_10); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_4308 = $signed(imm_6) <= $signed(sew_8_b_10) ? $signed(imm_6) : $signed(sew_8_b_10); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_4312 = _io_v_output_out_T_3583 >= _io_v_output_out_T_1396 ? $signed(imm_6) : $signed(
    sew_8_b_10); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_4314 = $signed(imm_6) >= $signed(sew_8_b_10) ? $signed(imm_6) : $signed(sew_8_b_10); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_4316 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4290) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4318 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4293) : $signed(
    _io_v_output_out_T_4316); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4320 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4296) : $signed(
    _io_v_output_out_T_4318); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4322 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4298) : $signed(
    _io_v_output_out_T_4320); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4324 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4300) : $signed(
    _io_v_output_out_T_4322); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4326 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4302) : $signed(
    _io_v_output_out_T_4324); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4328 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4306) : $signed(
    _io_v_output_out_T_4326); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4330 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4308) : $signed(
    _io_v_output_out_T_4328); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4332 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4312) : $signed(
    _io_v_output_out_T_4330); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4334 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4314) : $signed(
    _io_v_output_out_T_4332); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4335 = _io_v_output_out_T_1383 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_4334); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_4336 = _io_v_output_out_T_1377 ? $signed(sew_8_vd_10) : $signed(_io_v_output_out_T_4335)
    ; // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_4339 = _io_v_output_out_T_50 & 32'ha > io_vl; // @[Valu.scala 164:28]
  wire [7:0] _io_v_output_out_T_4342 = _io_v_output_out_T_50 & 32'ha > io_vl ? $signed(sew_8_vd_10) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_4343 = _io_v_output_out_T_1371 ? $signed(_io_v_output_out_T_4336) : $signed(
    _io_v_output_out_T_4342); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_4362 = $signed(sew_8_b_11) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_4365 = $signed(sew_8_b_11) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_4368 = $signed(imm_6) - $signed(sew_8_b_11); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_4370 = $signed(sew_8_b_11) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_4372 = $signed(sew_8_b_11) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_4374 = $signed(sew_8_b_11) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_4378 = _io_v_output_out_T_3583 <= _io_v_output_out_T_1453 ? $signed(imm_6) : $signed(
    sew_8_b_11); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_4380 = $signed(imm_6) <= $signed(sew_8_b_11) ? $signed(imm_6) : $signed(sew_8_b_11); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_4384 = _io_v_output_out_T_3583 >= _io_v_output_out_T_1453 ? $signed(imm_6) : $signed(
    sew_8_b_11); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_4386 = $signed(imm_6) >= $signed(sew_8_b_11) ? $signed(imm_6) : $signed(sew_8_b_11); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_4388 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4362) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4390 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4365) : $signed(
    _io_v_output_out_T_4388); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4392 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4368) : $signed(
    _io_v_output_out_T_4390); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4394 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4370) : $signed(
    _io_v_output_out_T_4392); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4396 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4372) : $signed(
    _io_v_output_out_T_4394); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4398 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4374) : $signed(
    _io_v_output_out_T_4396); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4400 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4378) : $signed(
    _io_v_output_out_T_4398); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4402 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4380) : $signed(
    _io_v_output_out_T_4400); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4404 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4384) : $signed(
    _io_v_output_out_T_4402); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4406 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4386) : $signed(
    _io_v_output_out_T_4404); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4407 = _io_v_output_out_T_1440 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_4406); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_4408 = _io_v_output_out_T_1434 ? $signed(sew_8_vd_11) : $signed(_io_v_output_out_T_4407)
    ; // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_4411 = _io_v_output_out_T_50 & 32'hb > io_vl; // @[Valu.scala 164:28]
  wire [7:0] _io_v_output_out_T_4414 = _io_v_output_out_T_50 & 32'hb > io_vl ? $signed(sew_8_vd_11) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_4415 = _io_v_output_out_T_1428 ? $signed(_io_v_output_out_T_4408) : $signed(
    _io_v_output_out_T_4414); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_4434 = $signed(sew_8_b_12) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_4437 = $signed(sew_8_b_12) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_4440 = $signed(imm_6) - $signed(sew_8_b_12); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_4442 = $signed(sew_8_b_12) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_4444 = $signed(sew_8_b_12) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_4446 = $signed(sew_8_b_12) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_4450 = _io_v_output_out_T_3583 <= _io_v_output_out_T_1510 ? $signed(imm_6) : $signed(
    sew_8_b_12); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_4452 = $signed(imm_6) <= $signed(sew_8_b_12) ? $signed(imm_6) : $signed(sew_8_b_12); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_4456 = _io_v_output_out_T_3583 >= _io_v_output_out_T_1510 ? $signed(imm_6) : $signed(
    sew_8_b_12); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_4458 = $signed(imm_6) >= $signed(sew_8_b_12) ? $signed(imm_6) : $signed(sew_8_b_12); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_4460 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4434) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4462 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4437) : $signed(
    _io_v_output_out_T_4460); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4464 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4440) : $signed(
    _io_v_output_out_T_4462); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4466 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4442) : $signed(
    _io_v_output_out_T_4464); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4468 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4444) : $signed(
    _io_v_output_out_T_4466); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4470 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4446) : $signed(
    _io_v_output_out_T_4468); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4472 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4450) : $signed(
    _io_v_output_out_T_4470); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4474 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4452) : $signed(
    _io_v_output_out_T_4472); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4476 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4456) : $signed(
    _io_v_output_out_T_4474); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4478 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4458) : $signed(
    _io_v_output_out_T_4476); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4479 = _io_v_output_out_T_1497 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_4478); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_4480 = _io_v_output_out_T_1491 ? $signed(sew_8_vd_12) : $signed(_io_v_output_out_T_4479)
    ; // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_4483 = _io_v_output_out_T_50 & 32'hc > io_vl; // @[Valu.scala 164:28]
  wire [7:0] _io_v_output_out_T_4486 = _io_v_output_out_T_50 & 32'hc > io_vl ? $signed(sew_8_vd_12) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_4487 = _io_v_output_out_T_1485 ? $signed(_io_v_output_out_T_4480) : $signed(
    _io_v_output_out_T_4486); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_4506 = $signed(sew_8_b_13) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_4509 = $signed(sew_8_b_13) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_4512 = $signed(imm_6) - $signed(sew_8_b_13); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_4514 = $signed(sew_8_b_13) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_4516 = $signed(sew_8_b_13) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_4518 = $signed(sew_8_b_13) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_4522 = _io_v_output_out_T_3583 <= _io_v_output_out_T_1567 ? $signed(imm_6) : $signed(
    sew_8_b_13); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_4524 = $signed(imm_6) <= $signed(sew_8_b_13) ? $signed(imm_6) : $signed(sew_8_b_13); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_4528 = _io_v_output_out_T_3583 >= _io_v_output_out_T_1567 ? $signed(imm_6) : $signed(
    sew_8_b_13); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_4530 = $signed(imm_6) >= $signed(sew_8_b_13) ? $signed(imm_6) : $signed(sew_8_b_13); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_4532 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4506) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4534 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4509) : $signed(
    _io_v_output_out_T_4532); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4536 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4512) : $signed(
    _io_v_output_out_T_4534); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4538 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4514) : $signed(
    _io_v_output_out_T_4536); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4540 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4516) : $signed(
    _io_v_output_out_T_4538); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4542 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4518) : $signed(
    _io_v_output_out_T_4540); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4544 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4522) : $signed(
    _io_v_output_out_T_4542); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4546 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4524) : $signed(
    _io_v_output_out_T_4544); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4548 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4528) : $signed(
    _io_v_output_out_T_4546); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4550 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4530) : $signed(
    _io_v_output_out_T_4548); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4551 = _io_v_output_out_T_1554 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_4550); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_4552 = _io_v_output_out_T_1548 ? $signed(sew_8_vd_13) : $signed(_io_v_output_out_T_4551)
    ; // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_4555 = _io_v_output_out_T_50 & 32'hd > io_vl; // @[Valu.scala 164:28]
  wire [7:0] _io_v_output_out_T_4558 = _io_v_output_out_T_50 & 32'hd > io_vl ? $signed(sew_8_vd_13) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_4559 = _io_v_output_out_T_1542 ? $signed(_io_v_output_out_T_4552) : $signed(
    _io_v_output_out_T_4558); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_4578 = $signed(sew_8_b_14) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_4581 = $signed(sew_8_b_14) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_4584 = $signed(imm_6) - $signed(sew_8_b_14); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_4586 = $signed(sew_8_b_14) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_4588 = $signed(sew_8_b_14) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_4590 = $signed(sew_8_b_14) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_4594 = _io_v_output_out_T_3583 <= _io_v_output_out_T_1624 ? $signed(imm_6) : $signed(
    sew_8_b_14); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_4596 = $signed(imm_6) <= $signed(sew_8_b_14) ? $signed(imm_6) : $signed(sew_8_b_14); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_4600 = _io_v_output_out_T_3583 >= _io_v_output_out_T_1624 ? $signed(imm_6) : $signed(
    sew_8_b_14); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_4602 = $signed(imm_6) >= $signed(sew_8_b_14) ? $signed(imm_6) : $signed(sew_8_b_14); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_4604 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4578) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4606 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4581) : $signed(
    _io_v_output_out_T_4604); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4608 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4584) : $signed(
    _io_v_output_out_T_4606); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4610 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4586) : $signed(
    _io_v_output_out_T_4608); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4612 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4588) : $signed(
    _io_v_output_out_T_4610); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4614 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4590) : $signed(
    _io_v_output_out_T_4612); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4616 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4594) : $signed(
    _io_v_output_out_T_4614); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4618 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4596) : $signed(
    _io_v_output_out_T_4616); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4620 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4600) : $signed(
    _io_v_output_out_T_4618); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4622 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4602) : $signed(
    _io_v_output_out_T_4620); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4623 = _io_v_output_out_T_1611 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_4622); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_4624 = _io_v_output_out_T_1605 ? $signed(sew_8_vd_14) : $signed(_io_v_output_out_T_4623)
    ; // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_4627 = _io_v_output_out_T_50 & 32'he > io_vl; // @[Valu.scala 164:28]
  wire [7:0] _io_v_output_out_T_4630 = _io_v_output_out_T_50 & 32'he > io_vl ? $signed(sew_8_vd_14) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_4631 = _io_v_output_out_T_1599 ? $signed(_io_v_output_out_T_4624) : $signed(
    _io_v_output_out_T_4630); // @[Valu.scala 145:11]
  wire [7:0] _io_v_output_out_T_4650 = $signed(sew_8_b_15) + $signed(imm_6); // @[Valu.scala 151:37]
  wire [7:0] _io_v_output_out_T_4653 = $signed(sew_8_b_15) - $signed(imm_6); // @[Valu.scala 152:37]
  wire [7:0] _io_v_output_out_T_4656 = $signed(imm_6) - $signed(sew_8_b_15); // @[Valu.scala 153:33]
  wire [7:0] _io_v_output_out_T_4658 = $signed(sew_8_b_15) & $signed(imm_6); // @[Valu.scala 154:36]
  wire [7:0] _io_v_output_out_T_4660 = $signed(sew_8_b_15) | $signed(imm_6); // @[Valu.scala 155:35]
  wire [7:0] _io_v_output_out_T_4662 = $signed(sew_8_b_15) ^ $signed(imm_6); // @[Valu.scala 156:36]
  wire [7:0] _io_v_output_out_T_4666 = _io_v_output_out_T_3583 <= _io_v_output_out_T_1681 ? $signed(imm_6) : $signed(
    sew_8_b_15); // @[Valu.scala 157:31]
  wire [7:0] _io_v_output_out_T_4668 = $signed(imm_6) <= $signed(sew_8_b_15) ? $signed(imm_6) : $signed(sew_8_b_15); // @[Valu.scala 158:30]
  wire [7:0] _io_v_output_out_T_4672 = _io_v_output_out_T_3583 >= _io_v_output_out_T_1681 ? $signed(imm_6) : $signed(
    sew_8_b_15); // @[Valu.scala 159:31]
  wire [7:0] _io_v_output_out_T_4674 = $signed(imm_6) >= $signed(sew_8_b_15) ? $signed(imm_6) : $signed(sew_8_b_15); // @[Valu.scala 160:30]
  wire [7:0] _io_v_output_out_T_4676 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4650) : $signed(8'sh0); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4678 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4653) : $signed(
    _io_v_output_out_T_4676); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4680 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4656) : $signed(
    _io_v_output_out_T_4678); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4682 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4658) : $signed(
    _io_v_output_out_T_4680); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4684 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4660) : $signed(
    _io_v_output_out_T_4682); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4686 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4662) : $signed(
    _io_v_output_out_T_4684); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4688 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4666) : $signed(
    _io_v_output_out_T_4686); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4690 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4668) : $signed(
    _io_v_output_out_T_4688); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4692 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4672) : $signed(
    _io_v_output_out_T_4690); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4694 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4674) : $signed(
    _io_v_output_out_T_4692); // @[Mux.scala 81:58]
  wire [7:0] _io_v_output_out_T_4695 = _io_v_output_out_T_1668 ? $signed(-8'sh1) : $signed(_io_v_output_out_T_4694); // @[Valu.scala 147:36]
  wire [7:0] _io_v_output_out_T_4696 = _io_v_output_out_T_1662 ? $signed(sew_8_vd_15) : $signed(_io_v_output_out_T_4695)
    ; // @[Valu.scala 146:32]
  wire  _io_v_output_out_T_4699 = _io_v_output_out_T_50 & 32'hf > io_vl; // @[Valu.scala 164:28]
  wire [7:0] _io_v_output_out_T_4702 = _io_v_output_out_T_50 & 32'hf > io_vl ? $signed(sew_8_vd_15) : $signed(-8'sh1); // @[Valu.scala 164:12]
  wire [7:0] _io_v_output_out_T_4703 = _io_v_output_out_T_1656 ? $signed(_io_v_output_out_T_4696) : $signed(
    _io_v_output_out_T_4702); // @[Valu.scala 145:11]
  wire [7:0] io_v_output_lo_lo_lo_lo_2 = _io_v_output_out_T ? $signed(sew_8_vd_0) : $signed(_io_v_output_out_T_3623); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_lo_lo_hi_2 = _io_v_output_out_T_57 ? $signed(sew_8_vd_1) : $signed(_io_v_output_out_T_3695); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_lo_hi_lo_2 = _io_v_output_out_T_228 ? $signed(sew_8_vd_2) : $signed(_io_v_output_out_T_3767)
    ; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_lo_hi_hi_2 = _io_v_output_out_T_285 ? $signed(sew_8_vd_3) : $signed(_io_v_output_out_T_3839)
    ; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_hi_lo_lo_2 = _io_v_output_out_T_570 ? $signed(sew_8_vd_4) : $signed(_io_v_output_out_T_3911)
    ; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_hi_lo_hi_2 = _io_v_output_out_T_627 ? $signed(sew_8_vd_5) : $signed(_io_v_output_out_T_3983)
    ; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_hi_hi_lo_2 = _io_v_output_out_T_684 ? $signed(sew_8_vd_6) : $signed(_io_v_output_out_T_4055)
    ; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_lo_hi_hi_hi_2 = _io_v_output_out_T_741 ? $signed(sew_8_vd_7) : $signed(_io_v_output_out_T_4127)
    ; // @[Cat.scala 33:92]
  wire [63:0] io_v_output_lo_10 = {io_v_output_lo_hi_hi_hi_2,io_v_output_lo_hi_hi_lo_2,io_v_output_lo_hi_lo_hi_2,
    io_v_output_lo_hi_lo_lo_2,io_v_output_lo_lo_hi_hi_2,io_v_output_lo_lo_hi_lo_2,io_v_output_lo_lo_lo_hi_2,
    io_v_output_lo_lo_lo_lo_2}; // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_lo_lo_lo_2 = _io_v_output_out_T_1254 ? $signed(sew_8_vd_8) : $signed(_io_v_output_out_T_4199
    ); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_lo_lo_hi_2 = _io_v_output_out_T_1311 ? $signed(sew_8_vd_9) : $signed(_io_v_output_out_T_4271
    ); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_lo_hi_lo_2 = _io_v_output_out_T_1368 ? $signed(sew_8_vd_10) : $signed(
    _io_v_output_out_T_4343); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_lo_hi_hi_2 = _io_v_output_out_T_1425 ? $signed(sew_8_vd_11) : $signed(
    _io_v_output_out_T_4415); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_hi_lo_lo_2 = _io_v_output_out_T_1482 ? $signed(sew_8_vd_12) : $signed(
    _io_v_output_out_T_4487); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_hi_lo_hi_2 = _io_v_output_out_T_1539 ? $signed(sew_8_vd_13) : $signed(
    _io_v_output_out_T_4559); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_hi_hi_lo_2 = _io_v_output_out_T_1596 ? $signed(sew_8_vd_14) : $signed(
    _io_v_output_out_T_4631); // @[Cat.scala 33:92]
  wire [7:0] io_v_output_hi_hi_hi_hi_2 = _io_v_output_out_T_1653 ? $signed(sew_8_vd_15) : $signed(
    _io_v_output_out_T_4703); // @[Cat.scala 33:92]
  wire [127:0] _io_v_output_T_21 = {io_v_output_hi_hi_hi_hi_2,io_v_output_hi_hi_hi_lo_2,io_v_output_hi_hi_lo_hi_2,
    io_v_output_hi_hi_lo_lo_2,io_v_output_hi_lo_hi_hi_2,io_v_output_hi_lo_hi_lo_2,io_v_output_hi_lo_lo_hi_2,
    io_v_output_hi_lo_lo_lo_2,io_v_output_lo_10}; // @[Valu.scala 167:24]
  wire [15:0] imm_7 = io_in_A[15:0]; // @[Valu.scala 234:45]
  wire [15:0] _io_v_output_out_T_4722 = $signed(sew_16_b_0) + $signed(imm_7); // @[Valu.scala 151:37]
  wire [15:0] _io_v_output_out_T_4725 = $signed(sew_16_b_0) - $signed(imm_7); // @[Valu.scala 152:37]
  wire [15:0] _io_v_output_out_T_4728 = $signed(imm_7) - $signed(sew_16_b_0); // @[Valu.scala 153:33]
  wire [15:0] _io_v_output_out_T_4730 = $signed(sew_16_b_0) & $signed(imm_7); // @[Valu.scala 154:36]
  wire [15:0] _io_v_output_out_T_4732 = $signed(sew_16_b_0) | $signed(imm_7); // @[Valu.scala 155:35]
  wire [15:0] _io_v_output_out_T_4734 = $signed(sew_16_b_0) ^ $signed(imm_7); // @[Valu.scala 156:36]
  wire [15:0] _io_v_output_out_T_4735 = io_in_A[15:0]; // @[Valu.scala 157:36]
  wire [15:0] _io_v_output_out_T_4738 = _io_v_output_out_T_4735 <= _io_v_output_out_T_370 ? $signed(imm_7) : $signed(
    sew_16_b_0); // @[Valu.scala 157:31]
  wire [15:0] _io_v_output_out_T_4740 = $signed(imm_7) <= $signed(sew_16_b_0) ? $signed(imm_7) : $signed(sew_16_b_0); // @[Valu.scala 158:30]
  wire [15:0] _io_v_output_out_T_4744 = _io_v_output_out_T_4735 >= _io_v_output_out_T_370 ? $signed(imm_7) : $signed(
    sew_16_b_0); // @[Valu.scala 159:31]
  wire [15:0] _io_v_output_out_T_4746 = $signed(imm_7) >= $signed(sew_16_b_0) ? $signed(imm_7) : $signed(sew_16_b_0); // @[Valu.scala 160:30]
  wire [15:0] _io_v_output_out_T_4748 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4722) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4750 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4725) : $signed(
    _io_v_output_out_T_4748); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4752 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4728) : $signed(
    _io_v_output_out_T_4750); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4754 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4730) : $signed(
    _io_v_output_out_T_4752); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4756 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4732) : $signed(
    _io_v_output_out_T_4754); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4758 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4734) : $signed(
    _io_v_output_out_T_4756); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4760 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4738) : $signed(
    _io_v_output_out_T_4758); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4762 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4740) : $signed(
    _io_v_output_out_T_4760); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4764 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4744) : $signed(
    _io_v_output_out_T_4762); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4766 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4746) : $signed(
    _io_v_output_out_T_4764); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4767 = _io_v_output_out_T_15 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_4766); // @[Valu.scala 147:36]
  wire [15:0] _io_v_output_out_T_4768 = _io_v_output_out_T_9 ? $signed(sew_16_vd_0) : $signed(_io_v_output_out_T_4767); // @[Valu.scala 146:32]
  wire [15:0] _io_v_output_out_T_4775 = _io_v_output_out_T_3 ? $signed(_io_v_output_out_T_4768) : $signed(-16'sh1); // @[Valu.scala 145:11]
  wire [15:0] _io_v_output_out_T_4794 = $signed(sew_16_b_1) + $signed(imm_7); // @[Valu.scala 151:37]
  wire [15:0] _io_v_output_out_T_4797 = $signed(sew_16_b_1) - $signed(imm_7); // @[Valu.scala 152:37]
  wire [15:0] _io_v_output_out_T_4800 = $signed(imm_7) - $signed(sew_16_b_1); // @[Valu.scala 153:33]
  wire [15:0] _io_v_output_out_T_4802 = $signed(sew_16_b_1) & $signed(imm_7); // @[Valu.scala 154:36]
  wire [15:0] _io_v_output_out_T_4804 = $signed(sew_16_b_1) | $signed(imm_7); // @[Valu.scala 155:35]
  wire [15:0] _io_v_output_out_T_4806 = $signed(sew_16_b_1) ^ $signed(imm_7); // @[Valu.scala 156:36]
  wire [15:0] _io_v_output_out_T_4810 = _io_v_output_out_T_4735 <= _io_v_output_out_T_427 ? $signed(imm_7) : $signed(
    sew_16_b_1); // @[Valu.scala 157:31]
  wire [15:0] _io_v_output_out_T_4812 = $signed(imm_7) <= $signed(sew_16_b_1) ? $signed(imm_7) : $signed(sew_16_b_1); // @[Valu.scala 158:30]
  wire [15:0] _io_v_output_out_T_4816 = _io_v_output_out_T_4735 >= _io_v_output_out_T_427 ? $signed(imm_7) : $signed(
    sew_16_b_1); // @[Valu.scala 159:31]
  wire [15:0] _io_v_output_out_T_4818 = $signed(imm_7) >= $signed(sew_16_b_1) ? $signed(imm_7) : $signed(sew_16_b_1); // @[Valu.scala 160:30]
  wire [15:0] _io_v_output_out_T_4820 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4794) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4822 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4797) : $signed(
    _io_v_output_out_T_4820); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4824 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4800) : $signed(
    _io_v_output_out_T_4822); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4826 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4802) : $signed(
    _io_v_output_out_T_4824); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4828 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4804) : $signed(
    _io_v_output_out_T_4826); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4830 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4806) : $signed(
    _io_v_output_out_T_4828); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4832 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4810) : $signed(
    _io_v_output_out_T_4830); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4834 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4812) : $signed(
    _io_v_output_out_T_4832); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4836 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4816) : $signed(
    _io_v_output_out_T_4834); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4838 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4818) : $signed(
    _io_v_output_out_T_4836); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4839 = _io_v_output_out_T_72 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_4838); // @[Valu.scala 147:36]
  wire [15:0] _io_v_output_out_T_4840 = _io_v_output_out_T_66 ? $signed(sew_16_vd_1) : $signed(_io_v_output_out_T_4839); // @[Valu.scala 146:32]
  wire [15:0] _io_v_output_out_T_4846 = _io_v_output_out_T_50 & 32'h1 > io_vl ? $signed(sew_16_vd_1) : $signed(-16'sh1); // @[Valu.scala 164:12]
  wire [15:0] _io_v_output_out_T_4847 = _io_v_output_out_T_60 ? $signed(_io_v_output_out_T_4840) : $signed(
    _io_v_output_out_T_4846); // @[Valu.scala 145:11]
  wire [15:0] _io_v_output_out_T_4866 = $signed(sew_16_b_2) + $signed(imm_7); // @[Valu.scala 151:37]
  wire [15:0] _io_v_output_out_T_4869 = $signed(sew_16_b_2) - $signed(imm_7); // @[Valu.scala 152:37]
  wire [15:0] _io_v_output_out_T_4872 = $signed(imm_7) - $signed(sew_16_b_2); // @[Valu.scala 153:33]
  wire [15:0] _io_v_output_out_T_4874 = $signed(sew_16_b_2) & $signed(imm_7); // @[Valu.scala 154:36]
  wire [15:0] _io_v_output_out_T_4876 = $signed(sew_16_b_2) | $signed(imm_7); // @[Valu.scala 155:35]
  wire [15:0] _io_v_output_out_T_4878 = $signed(sew_16_b_2) ^ $signed(imm_7); // @[Valu.scala 156:36]
  wire [15:0] _io_v_output_out_T_4882 = _io_v_output_out_T_4735 <= _io_v_output_out_T_484 ? $signed(imm_7) : $signed(
    sew_16_b_2); // @[Valu.scala 157:31]
  wire [15:0] _io_v_output_out_T_4884 = $signed(imm_7) <= $signed(sew_16_b_2) ? $signed(imm_7) : $signed(sew_16_b_2); // @[Valu.scala 158:30]
  wire [15:0] _io_v_output_out_T_4888 = _io_v_output_out_T_4735 >= _io_v_output_out_T_484 ? $signed(imm_7) : $signed(
    sew_16_b_2); // @[Valu.scala 159:31]
  wire [15:0] _io_v_output_out_T_4890 = $signed(imm_7) >= $signed(sew_16_b_2) ? $signed(imm_7) : $signed(sew_16_b_2); // @[Valu.scala 160:30]
  wire [15:0] _io_v_output_out_T_4892 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4866) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4894 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4869) : $signed(
    _io_v_output_out_T_4892); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4896 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4872) : $signed(
    _io_v_output_out_T_4894); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4898 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4874) : $signed(
    _io_v_output_out_T_4896); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4900 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4876) : $signed(
    _io_v_output_out_T_4898); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4902 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4878) : $signed(
    _io_v_output_out_T_4900); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4904 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4882) : $signed(
    _io_v_output_out_T_4902); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4906 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4884) : $signed(
    _io_v_output_out_T_4904); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4908 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4888) : $signed(
    _io_v_output_out_T_4906); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4910 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4890) : $signed(
    _io_v_output_out_T_4908); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4911 = _io_v_output_out_T_243 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_4910); // @[Valu.scala 147:36]
  wire [15:0] _io_v_output_out_T_4912 = _io_v_output_out_T_237 ? $signed(sew_16_vd_2) : $signed(_io_v_output_out_T_4911)
    ; // @[Valu.scala 146:32]
  wire [15:0] _io_v_output_out_T_4918 = _io_v_output_out_T_50 & 32'h2 > io_vl ? $signed(sew_16_vd_2) : $signed(-16'sh1); // @[Valu.scala 164:12]
  wire [15:0] _io_v_output_out_T_4919 = _io_v_output_out_T_231 ? $signed(_io_v_output_out_T_4912) : $signed(
    _io_v_output_out_T_4918); // @[Valu.scala 145:11]
  wire [15:0] _io_v_output_out_T_4938 = $signed(sew_16_b_3) + $signed(imm_7); // @[Valu.scala 151:37]
  wire [15:0] _io_v_output_out_T_4941 = $signed(sew_16_b_3) - $signed(imm_7); // @[Valu.scala 152:37]
  wire [15:0] _io_v_output_out_T_4944 = $signed(imm_7) - $signed(sew_16_b_3); // @[Valu.scala 153:33]
  wire [15:0] _io_v_output_out_T_4946 = $signed(sew_16_b_3) & $signed(imm_7); // @[Valu.scala 154:36]
  wire [15:0] _io_v_output_out_T_4948 = $signed(sew_16_b_3) | $signed(imm_7); // @[Valu.scala 155:35]
  wire [15:0] _io_v_output_out_T_4950 = $signed(sew_16_b_3) ^ $signed(imm_7); // @[Valu.scala 156:36]
  wire [15:0] _io_v_output_out_T_4954 = _io_v_output_out_T_4735 <= _io_v_output_out_T_541 ? $signed(imm_7) : $signed(
    sew_16_b_3); // @[Valu.scala 157:31]
  wire [15:0] _io_v_output_out_T_4956 = $signed(imm_7) <= $signed(sew_16_b_3) ? $signed(imm_7) : $signed(sew_16_b_3); // @[Valu.scala 158:30]
  wire [15:0] _io_v_output_out_T_4960 = _io_v_output_out_T_4735 >= _io_v_output_out_T_541 ? $signed(imm_7) : $signed(
    sew_16_b_3); // @[Valu.scala 159:31]
  wire [15:0] _io_v_output_out_T_4962 = $signed(imm_7) >= $signed(sew_16_b_3) ? $signed(imm_7) : $signed(sew_16_b_3); // @[Valu.scala 160:30]
  wire [15:0] _io_v_output_out_T_4964 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_4938) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4966 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_4941) : $signed(
    _io_v_output_out_T_4964); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4968 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_4944) : $signed(
    _io_v_output_out_T_4966); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4970 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_4946) : $signed(
    _io_v_output_out_T_4968); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4972 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_4948) : $signed(
    _io_v_output_out_T_4970); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4974 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_4950) : $signed(
    _io_v_output_out_T_4972); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4976 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_4954) : $signed(
    _io_v_output_out_T_4974); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4978 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_4956) : $signed(
    _io_v_output_out_T_4976); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4980 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_4960) : $signed(
    _io_v_output_out_T_4978); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4982 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_4962) : $signed(
    _io_v_output_out_T_4980); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_4983 = _io_v_output_out_T_300 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_4982); // @[Valu.scala 147:36]
  wire [15:0] _io_v_output_out_T_4984 = _io_v_output_out_T_294 ? $signed(sew_16_vd_3) : $signed(_io_v_output_out_T_4983)
    ; // @[Valu.scala 146:32]
  wire [15:0] _io_v_output_out_T_4990 = _io_v_output_out_T_50 & 32'h3 > io_vl ? $signed(sew_16_vd_3) : $signed(-16'sh1); // @[Valu.scala 164:12]
  wire [15:0] _io_v_output_out_T_4991 = _io_v_output_out_T_288 ? $signed(_io_v_output_out_T_4984) : $signed(
    _io_v_output_out_T_4990); // @[Valu.scala 145:11]
  wire [15:0] _io_v_output_out_T_5010 = $signed(sew_16_b_4) + $signed(imm_7); // @[Valu.scala 151:37]
  wire [15:0] _io_v_output_out_T_5013 = $signed(sew_16_b_4) - $signed(imm_7); // @[Valu.scala 152:37]
  wire [15:0] _io_v_output_out_T_5016 = $signed(imm_7) - $signed(sew_16_b_4); // @[Valu.scala 153:33]
  wire [15:0] _io_v_output_out_T_5018 = $signed(sew_16_b_4) & $signed(imm_7); // @[Valu.scala 154:36]
  wire [15:0] _io_v_output_out_T_5020 = $signed(sew_16_b_4) | $signed(imm_7); // @[Valu.scala 155:35]
  wire [15:0] _io_v_output_out_T_5022 = $signed(sew_16_b_4) ^ $signed(imm_7); // @[Valu.scala 156:36]
  wire [15:0] _io_v_output_out_T_5026 = _io_v_output_out_T_4735 <= _io_v_output_out_T_598 ? $signed(imm_7) : $signed(
    sew_16_b_4); // @[Valu.scala 157:31]
  wire [15:0] _io_v_output_out_T_5028 = $signed(imm_7) <= $signed(sew_16_b_4) ? $signed(imm_7) : $signed(sew_16_b_4); // @[Valu.scala 158:30]
  wire [15:0] _io_v_output_out_T_5032 = _io_v_output_out_T_4735 >= _io_v_output_out_T_598 ? $signed(imm_7) : $signed(
    sew_16_b_4); // @[Valu.scala 159:31]
  wire [15:0] _io_v_output_out_T_5034 = $signed(imm_7) >= $signed(sew_16_b_4) ? $signed(imm_7) : $signed(sew_16_b_4); // @[Valu.scala 160:30]
  wire [15:0] _io_v_output_out_T_5036 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_5010) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5038 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_5013) : $signed(
    _io_v_output_out_T_5036); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5040 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_5016) : $signed(
    _io_v_output_out_T_5038); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5042 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_5018) : $signed(
    _io_v_output_out_T_5040); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5044 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_5020) : $signed(
    _io_v_output_out_T_5042); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5046 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_5022) : $signed(
    _io_v_output_out_T_5044); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5048 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_5026) : $signed(
    _io_v_output_out_T_5046); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5050 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_5028) : $signed(
    _io_v_output_out_T_5048); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5052 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_5032) : $signed(
    _io_v_output_out_T_5050); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5054 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_5034) : $signed(
    _io_v_output_out_T_5052); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5055 = _io_v_output_out_T_585 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_5054); // @[Valu.scala 147:36]
  wire [15:0] _io_v_output_out_T_5056 = _io_v_output_out_T_579 ? $signed(sew_16_vd_4) : $signed(_io_v_output_out_T_5055)
    ; // @[Valu.scala 146:32]
  wire [15:0] _io_v_output_out_T_5062 = _io_v_output_out_T_50 & 32'h4 > io_vl ? $signed(sew_16_vd_4) : $signed(-16'sh1); // @[Valu.scala 164:12]
  wire [15:0] _io_v_output_out_T_5063 = _io_v_output_out_T_573 ? $signed(_io_v_output_out_T_5056) : $signed(
    _io_v_output_out_T_5062); // @[Valu.scala 145:11]
  wire [15:0] _io_v_output_out_T_5082 = $signed(sew_16_b_5) + $signed(imm_7); // @[Valu.scala 151:37]
  wire [15:0] _io_v_output_out_T_5085 = $signed(sew_16_b_5) - $signed(imm_7); // @[Valu.scala 152:37]
  wire [15:0] _io_v_output_out_T_5088 = $signed(imm_7) - $signed(sew_16_b_5); // @[Valu.scala 153:33]
  wire [15:0] _io_v_output_out_T_5090 = $signed(sew_16_b_5) & $signed(imm_7); // @[Valu.scala 154:36]
  wire [15:0] _io_v_output_out_T_5092 = $signed(sew_16_b_5) | $signed(imm_7); // @[Valu.scala 155:35]
  wire [15:0] _io_v_output_out_T_5094 = $signed(sew_16_b_5) ^ $signed(imm_7); // @[Valu.scala 156:36]
  wire [15:0] _io_v_output_out_T_5098 = _io_v_output_out_T_4735 <= _io_v_output_out_T_655 ? $signed(imm_7) : $signed(
    sew_16_b_5); // @[Valu.scala 157:31]
  wire [15:0] _io_v_output_out_T_5100 = $signed(imm_7) <= $signed(sew_16_b_5) ? $signed(imm_7) : $signed(sew_16_b_5); // @[Valu.scala 158:30]
  wire [15:0] _io_v_output_out_T_5104 = _io_v_output_out_T_4735 >= _io_v_output_out_T_655 ? $signed(imm_7) : $signed(
    sew_16_b_5); // @[Valu.scala 159:31]
  wire [15:0] _io_v_output_out_T_5106 = $signed(imm_7) >= $signed(sew_16_b_5) ? $signed(imm_7) : $signed(sew_16_b_5); // @[Valu.scala 160:30]
  wire [15:0] _io_v_output_out_T_5108 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_5082) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5110 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_5085) : $signed(
    _io_v_output_out_T_5108); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5112 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_5088) : $signed(
    _io_v_output_out_T_5110); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5114 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_5090) : $signed(
    _io_v_output_out_T_5112); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5116 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_5092) : $signed(
    _io_v_output_out_T_5114); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5118 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_5094) : $signed(
    _io_v_output_out_T_5116); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5120 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_5098) : $signed(
    _io_v_output_out_T_5118); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5122 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_5100) : $signed(
    _io_v_output_out_T_5120); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5124 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_5104) : $signed(
    _io_v_output_out_T_5122); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5126 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_5106) : $signed(
    _io_v_output_out_T_5124); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5127 = _io_v_output_out_T_642 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_5126); // @[Valu.scala 147:36]
  wire [15:0] _io_v_output_out_T_5128 = _io_v_output_out_T_636 ? $signed(sew_16_vd_5) : $signed(_io_v_output_out_T_5127)
    ; // @[Valu.scala 146:32]
  wire [15:0] _io_v_output_out_T_5134 = _io_v_output_out_T_50 & 32'h5 > io_vl ? $signed(sew_16_vd_5) : $signed(-16'sh1); // @[Valu.scala 164:12]
  wire [15:0] _io_v_output_out_T_5135 = _io_v_output_out_T_630 ? $signed(_io_v_output_out_T_5128) : $signed(
    _io_v_output_out_T_5134); // @[Valu.scala 145:11]
  wire [15:0] _io_v_output_out_T_5154 = $signed(sew_16_b_6) + $signed(imm_7); // @[Valu.scala 151:37]
  wire [15:0] _io_v_output_out_T_5157 = $signed(sew_16_b_6) - $signed(imm_7); // @[Valu.scala 152:37]
  wire [15:0] _io_v_output_out_T_5160 = $signed(imm_7) - $signed(sew_16_b_6); // @[Valu.scala 153:33]
  wire [15:0] _io_v_output_out_T_5162 = $signed(sew_16_b_6) & $signed(imm_7); // @[Valu.scala 154:36]
  wire [15:0] _io_v_output_out_T_5164 = $signed(sew_16_b_6) | $signed(imm_7); // @[Valu.scala 155:35]
  wire [15:0] _io_v_output_out_T_5166 = $signed(sew_16_b_6) ^ $signed(imm_7); // @[Valu.scala 156:36]
  wire [15:0] _io_v_output_out_T_5170 = _io_v_output_out_T_4735 <= _io_v_output_out_T_712 ? $signed(imm_7) : $signed(
    sew_16_b_6); // @[Valu.scala 157:31]
  wire [15:0] _io_v_output_out_T_5172 = $signed(imm_7) <= $signed(sew_16_b_6) ? $signed(imm_7) : $signed(sew_16_b_6); // @[Valu.scala 158:30]
  wire [15:0] _io_v_output_out_T_5176 = _io_v_output_out_T_4735 >= _io_v_output_out_T_712 ? $signed(imm_7) : $signed(
    sew_16_b_6); // @[Valu.scala 159:31]
  wire [15:0] _io_v_output_out_T_5178 = $signed(imm_7) >= $signed(sew_16_b_6) ? $signed(imm_7) : $signed(sew_16_b_6); // @[Valu.scala 160:30]
  wire [15:0] _io_v_output_out_T_5180 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_5154) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5182 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_5157) : $signed(
    _io_v_output_out_T_5180); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5184 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_5160) : $signed(
    _io_v_output_out_T_5182); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5186 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_5162) : $signed(
    _io_v_output_out_T_5184); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5188 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_5164) : $signed(
    _io_v_output_out_T_5186); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5190 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_5166) : $signed(
    _io_v_output_out_T_5188); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5192 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_5170) : $signed(
    _io_v_output_out_T_5190); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5194 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_5172) : $signed(
    _io_v_output_out_T_5192); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5196 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_5176) : $signed(
    _io_v_output_out_T_5194); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5198 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_5178) : $signed(
    _io_v_output_out_T_5196); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5199 = _io_v_output_out_T_699 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_5198); // @[Valu.scala 147:36]
  wire [15:0] _io_v_output_out_T_5200 = _io_v_output_out_T_693 ? $signed(sew_16_vd_6) : $signed(_io_v_output_out_T_5199)
    ; // @[Valu.scala 146:32]
  wire [15:0] _io_v_output_out_T_5206 = _io_v_output_out_T_50 & 32'h6 > io_vl ? $signed(sew_16_vd_6) : $signed(-16'sh1); // @[Valu.scala 164:12]
  wire [15:0] _io_v_output_out_T_5207 = _io_v_output_out_T_687 ? $signed(_io_v_output_out_T_5200) : $signed(
    _io_v_output_out_T_5206); // @[Valu.scala 145:11]
  wire [15:0] _io_v_output_out_T_5226 = $signed(sew_16_b_7) + $signed(imm_7); // @[Valu.scala 151:37]
  wire [15:0] _io_v_output_out_T_5229 = $signed(sew_16_b_7) - $signed(imm_7); // @[Valu.scala 152:37]
  wire [15:0] _io_v_output_out_T_5232 = $signed(imm_7) - $signed(sew_16_b_7); // @[Valu.scala 153:33]
  wire [15:0] _io_v_output_out_T_5234 = $signed(sew_16_b_7) & $signed(imm_7); // @[Valu.scala 154:36]
  wire [15:0] _io_v_output_out_T_5236 = $signed(sew_16_b_7) | $signed(imm_7); // @[Valu.scala 155:35]
  wire [15:0] _io_v_output_out_T_5238 = $signed(sew_16_b_7) ^ $signed(imm_7); // @[Valu.scala 156:36]
  wire [15:0] _io_v_output_out_T_5242 = _io_v_output_out_T_4735 <= _io_v_output_out_T_769 ? $signed(imm_7) : $signed(
    sew_16_b_7); // @[Valu.scala 157:31]
  wire [15:0] _io_v_output_out_T_5244 = $signed(imm_7) <= $signed(sew_16_b_7) ? $signed(imm_7) : $signed(sew_16_b_7); // @[Valu.scala 158:30]
  wire [15:0] _io_v_output_out_T_5248 = _io_v_output_out_T_4735 >= _io_v_output_out_T_769 ? $signed(imm_7) : $signed(
    sew_16_b_7); // @[Valu.scala 159:31]
  wire [15:0] _io_v_output_out_T_5250 = $signed(imm_7) >= $signed(sew_16_b_7) ? $signed(imm_7) : $signed(sew_16_b_7); // @[Valu.scala 160:30]
  wire [15:0] _io_v_output_out_T_5252 = 9'h4 == io_aluc ? $signed(_io_v_output_out_T_5226) : $signed(16'sh0); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5254 = 9'h14 == io_aluc ? $signed(_io_v_output_out_T_5229) : $signed(
    _io_v_output_out_T_5252); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5256 = 9'h1c == io_aluc ? $signed(_io_v_output_out_T_5232) : $signed(
    _io_v_output_out_T_5254); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5258 = 9'h4c == io_aluc ? $signed(_io_v_output_out_T_5234) : $signed(
    _io_v_output_out_T_5256); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5260 = 9'h54 == io_aluc ? $signed(_io_v_output_out_T_5236) : $signed(
    _io_v_output_out_T_5258); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5262 = 9'h5c == io_aluc ? $signed(_io_v_output_out_T_5238) : $signed(
    _io_v_output_out_T_5260); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5264 = 9'h24 == io_aluc ? $signed(_io_v_output_out_T_5242) : $signed(
    _io_v_output_out_T_5262); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5266 = 9'h2c == io_aluc ? $signed(_io_v_output_out_T_5244) : $signed(
    _io_v_output_out_T_5264); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5268 = 9'h34 == io_aluc ? $signed(_io_v_output_out_T_5248) : $signed(
    _io_v_output_out_T_5266); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5270 = 9'h3c == io_aluc ? $signed(_io_v_output_out_T_5250) : $signed(
    _io_v_output_out_T_5268); // @[Mux.scala 81:58]
  wire [15:0] _io_v_output_out_T_5271 = _io_v_output_out_T_756 ? $signed(-16'sh1) : $signed(_io_v_output_out_T_5270); // @[Valu.scala 147:36]
  wire [15:0] _io_v_output_out_T_5272 = _io_v_output_out_T_750 ? $signed(sew_16_vd_7) : $signed(_io_v_output_out_T_5271)
    ; // @[Valu.scala 146:32]
  wire [15:0] _io_v_output_out_T_5278 = _io_v_output_out_T_50 & 32'h7 > io_vl ? $signed(sew_16_vd_7) : $signed(-16'sh1); // @[Valu.scala 164:12]
  wire [15:0] _io_v_output_out_T_5279 = _io_v_output_out_T_744 ? $signed(_io_v_output_out_T_5272) : $signed(
    _io_v_output_out_T_5278); // @[Valu.scala 145:11]
  wire [15:0] io_v_output_lo_lo_lo_5 = _io_v_output_out_T ? $signed(sew_16_vd_0) : $signed(_io_v_output_out_T_4775); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_lo_lo_hi_5 = _io_v_output_out_T_57 ? $signed(sew_16_vd_1) : $signed(_io_v_output_out_T_4847); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_lo_hi_lo_5 = _io_v_output_out_T_228 ? $signed(sew_16_vd_2) : $signed(_io_v_output_out_T_4919); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_lo_hi_hi_5 = _io_v_output_out_T_285 ? $signed(sew_16_vd_3) : $signed(_io_v_output_out_T_4991); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_hi_lo_lo_5 = _io_v_output_out_T_570 ? $signed(sew_16_vd_4) : $signed(_io_v_output_out_T_5063); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_hi_lo_hi_5 = _io_v_output_out_T_627 ? $signed(sew_16_vd_5) : $signed(_io_v_output_out_T_5135); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_hi_hi_lo_5 = _io_v_output_out_T_684 ? $signed(sew_16_vd_6) : $signed(_io_v_output_out_T_5207); // @[Cat.scala 33:92]
  wire [15:0] io_v_output_hi_hi_hi_5 = _io_v_output_out_T_741 ? $signed(sew_16_vd_7) : $signed(_io_v_output_out_T_5279); // @[Cat.scala 33:92]
  wire [127:0] _io_v_output_T_23 = {io_v_output_hi_hi_hi_5,io_v_output_hi_hi_lo_5,io_v_output_hi_lo_hi_5,
    io_v_output_hi_lo_lo_5,io_v_output_lo_hi_hi_5,io_v_output_lo_hi_lo_5,io_v_output_lo_lo_hi_5,io_v_output_lo_lo_lo_5}; // @[Valu.scala 167:24]
  wire  _T_49 = io_vd_addr == 5'h0; // @[Valu.scala 239:29]
  wire [127:0] _io_v_output_T_25 = {96'h0,io_in_A}; // @[Valu.scala 240:57]
  wire [63:0] _io_v_output_out_T_5281 = io_vd[63:0]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5299 = _io_v_output_out_T_15 ? 64'hffffffffffffffff : _io_v_output_out_T_3151; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5300 = _io_v_output_out_T_9 ? _io_v_output_out_T_5281 : _io_v_output_out_T_5299; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5308 = _io_v_output_out_T_3 ? _io_v_output_out_T_5300 : 64'hffffffffffffffff; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_0_12 = _io_v_output_out_T ? _io_v_output_out_T_5281 : _io_v_output_out_T_5308; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_5310 = io_vd[127:64]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5328 = _io_v_output_out_T_72 ? 64'hffffffffffffffff : _io_v_output_out_T_3151; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5329 = _io_v_output_out_T_66 ? _io_v_output_out_T_5310 : _io_v_output_out_T_5328; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5336 = _io_v_output_out_T_3259 ? _io_v_output_out_T_5310 : 64'hffffffffffffffff; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5337 = _io_v_output_out_T_60 ? _io_v_output_out_T_5329 : _io_v_output_out_T_5336; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_1_12 = _io_v_output_out_T_57 ? _io_v_output_out_T_5310 : _io_v_output_out_T_5337; // @[Valu.scala 172:11]
  wire [127:0] _io_v_output_T_27 = {io_v_output_out_1_12,io_v_output_out_0_12}; // @[Valu.scala 180:24]
  wire [31:0] _io_v_output_out_T_5339 = io_vd[31:0]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5357 = _io_v_output_out_T_15 ? 64'hffffffffffffffff : {{32'd0}, _io_v_output_out_T_3295
    }; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5358 = _io_v_output_out_T_9 ? {{32'd0}, _io_v_output_out_T_5339} :
    _io_v_output_out_T_5357; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5366 = _io_v_output_out_T_3 ? _io_v_output_out_T_5358 : 64'hffffffffffffffff; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_0_13 = _io_v_output_out_T ? {{32'd0}, _io_v_output_out_T_5339} : _io_v_output_out_T_5366; // @[Valu.scala 172:11]
  wire [31:0] _io_v_output_out_T_5368 = io_vd[63:32]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5386 = _io_v_output_out_T_72 ? 64'hffffffffffffffff : {{32'd0}, _io_v_output_out_T_3295
    }; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5387 = _io_v_output_out_T_66 ? {{32'd0}, _io_v_output_out_T_5368} :
    _io_v_output_out_T_5386; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5394 = _io_v_output_out_T_3259 ? {{32'd0}, _io_v_output_out_T_5368} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5395 = _io_v_output_out_T_60 ? _io_v_output_out_T_5387 : _io_v_output_out_T_5394; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_1_13 = _io_v_output_out_T_57 ? {{32'd0}, _io_v_output_out_T_5368} :
    _io_v_output_out_T_5395; // @[Valu.scala 172:11]
  wire [31:0] _io_v_output_out_T_5397 = io_vd[95:64]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5415 = _io_v_output_out_T_243 ? 64'hffffffffffffffff : {{32'd0},
    _io_v_output_out_T_3295}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5416 = _io_v_output_out_T_237 ? {{32'd0}, _io_v_output_out_T_5397} :
    _io_v_output_out_T_5415; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5423 = _io_v_output_out_T_3475 ? {{32'd0}, _io_v_output_out_T_5397} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5424 = _io_v_output_out_T_231 ? _io_v_output_out_T_5416 : _io_v_output_out_T_5423; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_2_9 = _io_v_output_out_T_228 ? {{32'd0}, _io_v_output_out_T_5397} :
    _io_v_output_out_T_5424; // @[Valu.scala 172:11]
  wire [31:0] _io_v_output_out_T_5426 = io_vd[127:96]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5444 = _io_v_output_out_T_300 ? 64'hffffffffffffffff : {{32'd0},
    _io_v_output_out_T_3295}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5445 = _io_v_output_out_T_294 ? {{32'd0}, _io_v_output_out_T_5426} :
    _io_v_output_out_T_5444; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5452 = _io_v_output_out_T_3547 ? {{32'd0}, _io_v_output_out_T_5426} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5453 = _io_v_output_out_T_288 ? _io_v_output_out_T_5445 : _io_v_output_out_T_5452; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_3_9 = _io_v_output_out_T_285 ? {{32'd0}, _io_v_output_out_T_5426} :
    _io_v_output_out_T_5453; // @[Valu.scala 172:11]
  wire [255:0] _io_v_output_T_29 = {io_v_output_out_3_9,io_v_output_out_2_9,io_v_output_out_1_13,io_v_output_out_0_13}; // @[Valu.scala 180:24]
  wire [15:0] _io_v_output_out_T_5455 = io_vd[15:0]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5473 = _io_v_output_out_T_15 ? 64'hffffffffffffffff : {{48'd0}, _io_v_output_out_T_4735
    }; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5474 = _io_v_output_out_T_9 ? {{48'd0}, _io_v_output_out_T_5455} :
    _io_v_output_out_T_5473; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5482 = _io_v_output_out_T_3 ? _io_v_output_out_T_5474 : 64'hffffffffffffffff; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_0_14 = _io_v_output_out_T ? {{48'd0}, _io_v_output_out_T_5455} : _io_v_output_out_T_5482; // @[Valu.scala 172:11]
  wire [15:0] _io_v_output_out_T_5484 = io_vd[31:16]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5502 = _io_v_output_out_T_72 ? 64'hffffffffffffffff : {{48'd0}, _io_v_output_out_T_4735
    }; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5503 = _io_v_output_out_T_66 ? {{48'd0}, _io_v_output_out_T_5484} :
    _io_v_output_out_T_5502; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5510 = _io_v_output_out_T_3259 ? {{48'd0}, _io_v_output_out_T_5484} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5511 = _io_v_output_out_T_60 ? _io_v_output_out_T_5503 : _io_v_output_out_T_5510; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_1_14 = _io_v_output_out_T_57 ? {{48'd0}, _io_v_output_out_T_5484} :
    _io_v_output_out_T_5511; // @[Valu.scala 172:11]
  wire [15:0] _io_v_output_out_T_5513 = io_vd[47:32]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5531 = _io_v_output_out_T_243 ? 64'hffffffffffffffff : {{48'd0},
    _io_v_output_out_T_4735}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5532 = _io_v_output_out_T_237 ? {{48'd0}, _io_v_output_out_T_5513} :
    _io_v_output_out_T_5531; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5539 = _io_v_output_out_T_3475 ? {{48'd0}, _io_v_output_out_T_5513} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5540 = _io_v_output_out_T_231 ? _io_v_output_out_T_5532 : _io_v_output_out_T_5539; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_2_10 = _io_v_output_out_T_228 ? {{48'd0}, _io_v_output_out_T_5513} :
    _io_v_output_out_T_5540; // @[Valu.scala 172:11]
  wire [15:0] _io_v_output_out_T_5542 = io_vd[63:48]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5560 = _io_v_output_out_T_300 ? 64'hffffffffffffffff : {{48'd0},
    _io_v_output_out_T_4735}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5561 = _io_v_output_out_T_294 ? {{48'd0}, _io_v_output_out_T_5542} :
    _io_v_output_out_T_5560; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5568 = _io_v_output_out_T_3547 ? {{48'd0}, _io_v_output_out_T_5542} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5569 = _io_v_output_out_T_288 ? _io_v_output_out_T_5561 : _io_v_output_out_T_5568; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_3_10 = _io_v_output_out_T_285 ? {{48'd0}, _io_v_output_out_T_5542} :
    _io_v_output_out_T_5569; // @[Valu.scala 172:11]
  wire [15:0] _io_v_output_out_T_5571 = io_vd[79:64]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5589 = _io_v_output_out_T_585 ? 64'hffffffffffffffff : {{48'd0},
    _io_v_output_out_T_4735}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5590 = _io_v_output_out_T_579 ? {{48'd0}, _io_v_output_out_T_5571} :
    _io_v_output_out_T_5589; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5597 = _io_v_output_out_T_3907 ? {{48'd0}, _io_v_output_out_T_5571} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5598 = _io_v_output_out_T_573 ? _io_v_output_out_T_5590 : _io_v_output_out_T_5597; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_4_6 = _io_v_output_out_T_570 ? {{48'd0}, _io_v_output_out_T_5571} :
    _io_v_output_out_T_5598; // @[Valu.scala 172:11]
  wire [15:0] _io_v_output_out_T_5600 = io_vd[95:80]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5618 = _io_v_output_out_T_642 ? 64'hffffffffffffffff : {{48'd0},
    _io_v_output_out_T_4735}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5619 = _io_v_output_out_T_636 ? {{48'd0}, _io_v_output_out_T_5600} :
    _io_v_output_out_T_5618; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5626 = _io_v_output_out_T_3979 ? {{48'd0}, _io_v_output_out_T_5600} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5627 = _io_v_output_out_T_630 ? _io_v_output_out_T_5619 : _io_v_output_out_T_5626; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_5_6 = _io_v_output_out_T_627 ? {{48'd0}, _io_v_output_out_T_5600} :
    _io_v_output_out_T_5627; // @[Valu.scala 172:11]
  wire [15:0] _io_v_output_out_T_5629 = io_vd[111:96]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5647 = _io_v_output_out_T_699 ? 64'hffffffffffffffff : {{48'd0},
    _io_v_output_out_T_4735}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5648 = _io_v_output_out_T_693 ? {{48'd0}, _io_v_output_out_T_5629} :
    _io_v_output_out_T_5647; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5655 = _io_v_output_out_T_4051 ? {{48'd0}, _io_v_output_out_T_5629} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5656 = _io_v_output_out_T_687 ? _io_v_output_out_T_5648 : _io_v_output_out_T_5655; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_6_6 = _io_v_output_out_T_684 ? {{48'd0}, _io_v_output_out_T_5629} :
    _io_v_output_out_T_5656; // @[Valu.scala 172:11]
  wire [15:0] _io_v_output_out_T_5658 = io_vd[127:112]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5676 = _io_v_output_out_T_756 ? 64'hffffffffffffffff : {{48'd0},
    _io_v_output_out_T_4735}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5677 = _io_v_output_out_T_750 ? {{48'd0}, _io_v_output_out_T_5658} :
    _io_v_output_out_T_5676; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5684 = _io_v_output_out_T_4123 ? {{48'd0}, _io_v_output_out_T_5658} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5685 = _io_v_output_out_T_744 ? _io_v_output_out_T_5677 : _io_v_output_out_T_5684; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_7_6 = _io_v_output_out_T_741 ? {{48'd0}, _io_v_output_out_T_5658} :
    _io_v_output_out_T_5685; // @[Valu.scala 172:11]
  wire [511:0] _io_v_output_T_31 = {io_v_output_out_7_6,io_v_output_out_6_6,io_v_output_out_5_6,io_v_output_out_4_6,
    io_v_output_out_3_10,io_v_output_out_2_10,io_v_output_out_1_14,io_v_output_out_0_14}; // @[Valu.scala 180:24]
  wire [7:0] _io_v_output_out_T_5687 = io_vd[7:0]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5705 = _io_v_output_out_T_15 ? 64'hffffffffffffffff : {{56'd0}, _io_v_output_out_T_3583
    }; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5706 = _io_v_output_out_T_9 ? {{56'd0}, _io_v_output_out_T_5687} :
    _io_v_output_out_T_5705; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5714 = _io_v_output_out_T_3 ? _io_v_output_out_T_5706 : 64'hffffffffffffffff; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_0_15 = _io_v_output_out_T ? {{56'd0}, _io_v_output_out_T_5687} : _io_v_output_out_T_5714; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_5716 = io_vd[15:8]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5734 = _io_v_output_out_T_72 ? 64'hffffffffffffffff : {{56'd0}, _io_v_output_out_T_3583
    }; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5735 = _io_v_output_out_T_66 ? {{56'd0}, _io_v_output_out_T_5716} :
    _io_v_output_out_T_5734; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5742 = _io_v_output_out_T_3259 ? {{56'd0}, _io_v_output_out_T_5716} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5743 = _io_v_output_out_T_60 ? _io_v_output_out_T_5735 : _io_v_output_out_T_5742; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_1_15 = _io_v_output_out_T_57 ? {{56'd0}, _io_v_output_out_T_5716} :
    _io_v_output_out_T_5743; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_5745 = io_vd[23:16]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5763 = _io_v_output_out_T_243 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5764 = _io_v_output_out_T_237 ? {{56'd0}, _io_v_output_out_T_5745} :
    _io_v_output_out_T_5763; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5771 = _io_v_output_out_T_3475 ? {{56'd0}, _io_v_output_out_T_5745} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5772 = _io_v_output_out_T_231 ? _io_v_output_out_T_5764 : _io_v_output_out_T_5771; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_2_11 = _io_v_output_out_T_228 ? {{56'd0}, _io_v_output_out_T_5745} :
    _io_v_output_out_T_5772; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_5774 = io_vd[31:24]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5792 = _io_v_output_out_T_300 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5793 = _io_v_output_out_T_294 ? {{56'd0}, _io_v_output_out_T_5774} :
    _io_v_output_out_T_5792; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5800 = _io_v_output_out_T_3547 ? {{56'd0}, _io_v_output_out_T_5774} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5801 = _io_v_output_out_T_288 ? _io_v_output_out_T_5793 : _io_v_output_out_T_5800; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_3_11 = _io_v_output_out_T_285 ? {{56'd0}, _io_v_output_out_T_5774} :
    _io_v_output_out_T_5801; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_5803 = io_vd[39:32]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5821 = _io_v_output_out_T_585 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5822 = _io_v_output_out_T_579 ? {{56'd0}, _io_v_output_out_T_5803} :
    _io_v_output_out_T_5821; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5829 = _io_v_output_out_T_3907 ? {{56'd0}, _io_v_output_out_T_5803} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5830 = _io_v_output_out_T_573 ? _io_v_output_out_T_5822 : _io_v_output_out_T_5829; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_4_7 = _io_v_output_out_T_570 ? {{56'd0}, _io_v_output_out_T_5803} :
    _io_v_output_out_T_5830; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_5832 = io_vd[47:40]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5850 = _io_v_output_out_T_642 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5851 = _io_v_output_out_T_636 ? {{56'd0}, _io_v_output_out_T_5832} :
    _io_v_output_out_T_5850; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5858 = _io_v_output_out_T_3979 ? {{56'd0}, _io_v_output_out_T_5832} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5859 = _io_v_output_out_T_630 ? _io_v_output_out_T_5851 : _io_v_output_out_T_5858; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_5_7 = _io_v_output_out_T_627 ? {{56'd0}, _io_v_output_out_T_5832} :
    _io_v_output_out_T_5859; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_5861 = io_vd[55:48]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5879 = _io_v_output_out_T_699 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5880 = _io_v_output_out_T_693 ? {{56'd0}, _io_v_output_out_T_5861} :
    _io_v_output_out_T_5879; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5887 = _io_v_output_out_T_4051 ? {{56'd0}, _io_v_output_out_T_5861} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5888 = _io_v_output_out_T_687 ? _io_v_output_out_T_5880 : _io_v_output_out_T_5887; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_6_7 = _io_v_output_out_T_684 ? {{56'd0}, _io_v_output_out_T_5861} :
    _io_v_output_out_T_5888; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_5890 = io_vd[63:56]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5908 = _io_v_output_out_T_756 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5909 = _io_v_output_out_T_750 ? {{56'd0}, _io_v_output_out_T_5890} :
    _io_v_output_out_T_5908; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5916 = _io_v_output_out_T_4123 ? {{56'd0}, _io_v_output_out_T_5890} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5917 = _io_v_output_out_T_744 ? _io_v_output_out_T_5909 : _io_v_output_out_T_5916; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_7_7 = _io_v_output_out_T_741 ? {{56'd0}, _io_v_output_out_T_5890} :
    _io_v_output_out_T_5917; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_5919 = io_vd[71:64]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5937 = _io_v_output_out_T_1269 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5938 = _io_v_output_out_T_1263 ? {{56'd0}, _io_v_output_out_T_5919} :
    _io_v_output_out_T_5937; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5945 = _io_v_output_out_T_4195 ? {{56'd0}, _io_v_output_out_T_5919} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5946 = _io_v_output_out_T_1257 ? _io_v_output_out_T_5938 : _io_v_output_out_T_5945; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_8_3 = _io_v_output_out_T_1254 ? {{56'd0}, _io_v_output_out_T_5919} :
    _io_v_output_out_T_5946; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_5948 = io_vd[79:72]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5966 = _io_v_output_out_T_1326 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5967 = _io_v_output_out_T_1320 ? {{56'd0}, _io_v_output_out_T_5948} :
    _io_v_output_out_T_5966; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_5974 = _io_v_output_out_T_4267 ? {{56'd0}, _io_v_output_out_T_5948} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_5975 = _io_v_output_out_T_1314 ? _io_v_output_out_T_5967 : _io_v_output_out_T_5974; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_9_3 = _io_v_output_out_T_1311 ? {{56'd0}, _io_v_output_out_T_5948} :
    _io_v_output_out_T_5975; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_5977 = io_vd[87:80]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_5995 = _io_v_output_out_T_1383 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_5996 = _io_v_output_out_T_1377 ? {{56'd0}, _io_v_output_out_T_5977} :
    _io_v_output_out_T_5995; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6003 = _io_v_output_out_T_4339 ? {{56'd0}, _io_v_output_out_T_5977} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_6004 = _io_v_output_out_T_1371 ? _io_v_output_out_T_5996 : _io_v_output_out_T_6003; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_10_3 = _io_v_output_out_T_1368 ? {{56'd0}, _io_v_output_out_T_5977} :
    _io_v_output_out_T_6004; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_6006 = io_vd[95:88]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_6024 = _io_v_output_out_T_1440 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6025 = _io_v_output_out_T_1434 ? {{56'd0}, _io_v_output_out_T_6006} :
    _io_v_output_out_T_6024; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6032 = _io_v_output_out_T_4411 ? {{56'd0}, _io_v_output_out_T_6006} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_6033 = _io_v_output_out_T_1428 ? _io_v_output_out_T_6025 : _io_v_output_out_T_6032; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_11_3 = _io_v_output_out_T_1425 ? {{56'd0}, _io_v_output_out_T_6006} :
    _io_v_output_out_T_6033; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_6035 = io_vd[103:96]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_6053 = _io_v_output_out_T_1497 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6054 = _io_v_output_out_T_1491 ? {{56'd0}, _io_v_output_out_T_6035} :
    _io_v_output_out_T_6053; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6061 = _io_v_output_out_T_4483 ? {{56'd0}, _io_v_output_out_T_6035} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_6062 = _io_v_output_out_T_1485 ? _io_v_output_out_T_6054 : _io_v_output_out_T_6061; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_12_3 = _io_v_output_out_T_1482 ? {{56'd0}, _io_v_output_out_T_6035} :
    _io_v_output_out_T_6062; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_6064 = io_vd[111:104]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_6082 = _io_v_output_out_T_1554 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6083 = _io_v_output_out_T_1548 ? {{56'd0}, _io_v_output_out_T_6064} :
    _io_v_output_out_T_6082; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6090 = _io_v_output_out_T_4555 ? {{56'd0}, _io_v_output_out_T_6064} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_6091 = _io_v_output_out_T_1542 ? _io_v_output_out_T_6083 : _io_v_output_out_T_6090; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_13_3 = _io_v_output_out_T_1539 ? {{56'd0}, _io_v_output_out_T_6064} :
    _io_v_output_out_T_6091; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_6093 = io_vd[119:112]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_6111 = _io_v_output_out_T_1611 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6112 = _io_v_output_out_T_1605 ? {{56'd0}, _io_v_output_out_T_6093} :
    _io_v_output_out_T_6111; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6119 = _io_v_output_out_T_4627 ? {{56'd0}, _io_v_output_out_T_6093} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_6120 = _io_v_output_out_T_1599 ? _io_v_output_out_T_6112 : _io_v_output_out_T_6119; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_14_3 = _io_v_output_out_T_1596 ? {{56'd0}, _io_v_output_out_T_6093} :
    _io_v_output_out_T_6120; // @[Valu.scala 172:11]
  wire [7:0] _io_v_output_out_T_6122 = io_vd[127:120]; // @[Valu.scala 172:33]
  wire [63:0] _io_v_output_out_T_6140 = _io_v_output_out_T_1668 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_3583}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6141 = _io_v_output_out_T_1662 ? {{56'd0}, _io_v_output_out_T_6122} :
    _io_v_output_out_T_6140; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6148 = _io_v_output_out_T_4699 ? {{56'd0}, _io_v_output_out_T_6122} : 64'hffffffffffffffff
    ; // @[Valu.scala 177:12]
  wire [63:0] _io_v_output_out_T_6149 = _io_v_output_out_T_1656 ? _io_v_output_out_T_6141 : _io_v_output_out_T_6148; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_15_3 = _io_v_output_out_T_1653 ? {{56'd0}, _io_v_output_out_T_6122} :
    _io_v_output_out_T_6149; // @[Valu.scala 172:11]
  wire [511:0] io_v_output_lo_15 = {io_v_output_out_7_7,io_v_output_out_6_7,io_v_output_out_5_7,io_v_output_out_4_7,
    io_v_output_out_3_11,io_v_output_out_2_11,io_v_output_out_1_15,io_v_output_out_0_15}; // @[Cat.scala 33:92]
  wire [1023:0] _io_v_output_T_33 = {io_v_output_out_15_3,io_v_output_out_14_3,io_v_output_out_13_3,io_v_output_out_12_3
    ,io_v_output_out_11_3,io_v_output_out_10_3,io_v_output_out_9_3,io_v_output_out_8_3,io_v_output_lo_15}; // @[Valu.scala 180:24]
  wire [1023:0] _GEN_0 = _T_12 ? $signed(_io_v_output_T_33) : $signed(1024'sh0); // @[Valu.scala 197:13 251:49 253:33]
  wire [1023:0] _GEN_1 = _T_8 ? $signed({{512{_io_v_output_T_31[511]}},_io_v_output_T_31}) : $signed(_GEN_0); // @[Valu.scala 248:49 250:33]
  wire [1023:0] _GEN_2 = _T_4 ? $signed({{768{_io_v_output_T_29[255]}},_io_v_output_T_29}) : $signed(_GEN_1); // @[Valu.scala 245:49 247:33]
  wire [1023:0] _GEN_3 = _T ? $signed({{896{_io_v_output_T_27[127]}},_io_v_output_T_27}) : $signed(_GEN_2); // @[Valu.scala 242:43 244:33]
  wire [1023:0] _GEN_4 = io_vd_addr == 5'h0 ? $signed({{896{_io_v_output_T_25[127]}},_io_v_output_T_25}) : $signed(
    _GEN_3); // @[Valu.scala 239:37 240:29]
  wire [127:0] _io_v_output_T_35 = {96'h0,io_in_B}; // @[Valu.scala 261:57]
  wire [63:0] _io_v_output_out_T_6168 = {32'h0,io_in_B}; // @[Valu.scala 175:167]
  wire [63:0] _io_v_output_out_T_6169 = _io_v_output_out_T_15 ? 64'hffffffffffffffff : _io_v_output_out_T_6168; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6170 = _io_v_output_out_T_9 ? _io_v_output_out_T_5281 : _io_v_output_out_T_6169; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6178 = _io_v_output_out_T_3 ? _io_v_output_out_T_6170 : 64'hffffffffffffffff; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_0_16 = _io_v_output_out_T ? _io_v_output_out_T_5281 : _io_v_output_out_T_6178; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6198 = _io_v_output_out_T_72 ? 64'hffffffffffffffff : _io_v_output_out_T_6168; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6199 = _io_v_output_out_T_66 ? _io_v_output_out_T_5310 : _io_v_output_out_T_6198; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6207 = _io_v_output_out_T_60 ? _io_v_output_out_T_6199 : _io_v_output_out_T_5336; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_1_16 = _io_v_output_out_T_57 ? _io_v_output_out_T_5310 : _io_v_output_out_T_6207; // @[Valu.scala 172:11]
  wire [127:0] _io_v_output_T_37 = {io_v_output_out_1_16,io_v_output_out_0_16}; // @[Valu.scala 180:24]
  wire [31:0] _io_v_output_out_T_6226 = io_in_B; // @[Valu.scala 175:167]
  wire [63:0] _io_v_output_out_T_6227 = _io_v_output_out_T_15 ? 64'hffffffffffffffff : {{32'd0}, _io_v_output_out_T_6226
    }; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6228 = _io_v_output_out_T_9 ? {{32'd0}, _io_v_output_out_T_5339} :
    _io_v_output_out_T_6227; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6236 = _io_v_output_out_T_3 ? _io_v_output_out_T_6228 : 64'hffffffffffffffff; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_0_17 = _io_v_output_out_T ? {{32'd0}, _io_v_output_out_T_5339} : _io_v_output_out_T_6236; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6256 = _io_v_output_out_T_72 ? 64'hffffffffffffffff : {{32'd0}, _io_v_output_out_T_6226
    }; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6257 = _io_v_output_out_T_66 ? {{32'd0}, _io_v_output_out_T_5368} :
    _io_v_output_out_T_6256; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6265 = _io_v_output_out_T_60 ? _io_v_output_out_T_6257 : _io_v_output_out_T_5394; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_1_17 = _io_v_output_out_T_57 ? {{32'd0}, _io_v_output_out_T_5368} :
    _io_v_output_out_T_6265; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6285 = _io_v_output_out_T_243 ? 64'hffffffffffffffff : {{32'd0},
    _io_v_output_out_T_6226}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6286 = _io_v_output_out_T_237 ? {{32'd0}, _io_v_output_out_T_5397} :
    _io_v_output_out_T_6285; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6294 = _io_v_output_out_T_231 ? _io_v_output_out_T_6286 : _io_v_output_out_T_5423; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_2_12 = _io_v_output_out_T_228 ? {{32'd0}, _io_v_output_out_T_5397} :
    _io_v_output_out_T_6294; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6314 = _io_v_output_out_T_300 ? 64'hffffffffffffffff : {{32'd0},
    _io_v_output_out_T_6226}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6315 = _io_v_output_out_T_294 ? {{32'd0}, _io_v_output_out_T_5426} :
    _io_v_output_out_T_6314; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6323 = _io_v_output_out_T_288 ? _io_v_output_out_T_6315 : _io_v_output_out_T_5452; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_3_12 = _io_v_output_out_T_285 ? {{32'd0}, _io_v_output_out_T_5426} :
    _io_v_output_out_T_6323; // @[Valu.scala 172:11]
  wire [255:0] _io_v_output_T_39 = {io_v_output_out_3_12,io_v_output_out_2_12,io_v_output_out_1_17,io_v_output_out_0_17}
    ; // @[Valu.scala 180:24]
  wire [7:0] _io_v_output_out_T_6342 = io_in_B[7:0]; // @[Valu.scala 175:167]
  wire [63:0] _io_v_output_out_T_6343 = _io_v_output_out_T_15 ? 64'hffffffffffffffff : {{56'd0}, _io_v_output_out_T_6342
    }; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6344 = _io_v_output_out_T_9 ? {{56'd0}, _io_v_output_out_T_5687} :
    _io_v_output_out_T_6343; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6352 = _io_v_output_out_T_3 ? _io_v_output_out_T_6344 : 64'hffffffffffffffff; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_0_18 = _io_v_output_out_T ? {{56'd0}, _io_v_output_out_T_5687} : _io_v_output_out_T_6352; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6372 = _io_v_output_out_T_72 ? 64'hffffffffffffffff : {{56'd0}, _io_v_output_out_T_6342
    }; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6373 = _io_v_output_out_T_66 ? {{56'd0}, _io_v_output_out_T_5716} :
    _io_v_output_out_T_6372; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6381 = _io_v_output_out_T_60 ? _io_v_output_out_T_6373 : _io_v_output_out_T_5742; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_1_18 = _io_v_output_out_T_57 ? {{56'd0}, _io_v_output_out_T_5716} :
    _io_v_output_out_T_6381; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6401 = _io_v_output_out_T_243 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6402 = _io_v_output_out_T_237 ? {{56'd0}, _io_v_output_out_T_5745} :
    _io_v_output_out_T_6401; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6410 = _io_v_output_out_T_231 ? _io_v_output_out_T_6402 : _io_v_output_out_T_5771; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_2_13 = _io_v_output_out_T_228 ? {{56'd0}, _io_v_output_out_T_5745} :
    _io_v_output_out_T_6410; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6430 = _io_v_output_out_T_300 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6431 = _io_v_output_out_T_294 ? {{56'd0}, _io_v_output_out_T_5774} :
    _io_v_output_out_T_6430; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6439 = _io_v_output_out_T_288 ? _io_v_output_out_T_6431 : _io_v_output_out_T_5800; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_3_13 = _io_v_output_out_T_285 ? {{56'd0}, _io_v_output_out_T_5774} :
    _io_v_output_out_T_6439; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6459 = _io_v_output_out_T_585 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6460 = _io_v_output_out_T_579 ? {{56'd0}, _io_v_output_out_T_5803} :
    _io_v_output_out_T_6459; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6468 = _io_v_output_out_T_573 ? _io_v_output_out_T_6460 : _io_v_output_out_T_5829; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_4_8 = _io_v_output_out_T_570 ? {{56'd0}, _io_v_output_out_T_5803} :
    _io_v_output_out_T_6468; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6488 = _io_v_output_out_T_642 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6489 = _io_v_output_out_T_636 ? {{56'd0}, _io_v_output_out_T_5832} :
    _io_v_output_out_T_6488; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6497 = _io_v_output_out_T_630 ? _io_v_output_out_T_6489 : _io_v_output_out_T_5858; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_5_8 = _io_v_output_out_T_627 ? {{56'd0}, _io_v_output_out_T_5832} :
    _io_v_output_out_T_6497; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6517 = _io_v_output_out_T_699 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6518 = _io_v_output_out_T_693 ? {{56'd0}, _io_v_output_out_T_5861} :
    _io_v_output_out_T_6517; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6526 = _io_v_output_out_T_687 ? _io_v_output_out_T_6518 : _io_v_output_out_T_5887; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_6_8 = _io_v_output_out_T_684 ? {{56'd0}, _io_v_output_out_T_5861} :
    _io_v_output_out_T_6526; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6546 = _io_v_output_out_T_756 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6547 = _io_v_output_out_T_750 ? {{56'd0}, _io_v_output_out_T_5890} :
    _io_v_output_out_T_6546; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6555 = _io_v_output_out_T_744 ? _io_v_output_out_T_6547 : _io_v_output_out_T_5916; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_7_8 = _io_v_output_out_T_741 ? {{56'd0}, _io_v_output_out_T_5890} :
    _io_v_output_out_T_6555; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6575 = _io_v_output_out_T_1269 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6576 = _io_v_output_out_T_1263 ? {{56'd0}, _io_v_output_out_T_5919} :
    _io_v_output_out_T_6575; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6584 = _io_v_output_out_T_1257 ? _io_v_output_out_T_6576 : _io_v_output_out_T_5945; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_8_4 = _io_v_output_out_T_1254 ? {{56'd0}, _io_v_output_out_T_5919} :
    _io_v_output_out_T_6584; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6604 = _io_v_output_out_T_1326 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6605 = _io_v_output_out_T_1320 ? {{56'd0}, _io_v_output_out_T_5948} :
    _io_v_output_out_T_6604; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6613 = _io_v_output_out_T_1314 ? _io_v_output_out_T_6605 : _io_v_output_out_T_5974; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_9_4 = _io_v_output_out_T_1311 ? {{56'd0}, _io_v_output_out_T_5948} :
    _io_v_output_out_T_6613; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6633 = _io_v_output_out_T_1383 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6634 = _io_v_output_out_T_1377 ? {{56'd0}, _io_v_output_out_T_5977} :
    _io_v_output_out_T_6633; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6642 = _io_v_output_out_T_1371 ? _io_v_output_out_T_6634 : _io_v_output_out_T_6003; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_10_4 = _io_v_output_out_T_1368 ? {{56'd0}, _io_v_output_out_T_5977} :
    _io_v_output_out_T_6642; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6662 = _io_v_output_out_T_1440 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6663 = _io_v_output_out_T_1434 ? {{56'd0}, _io_v_output_out_T_6006} :
    _io_v_output_out_T_6662; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6671 = _io_v_output_out_T_1428 ? _io_v_output_out_T_6663 : _io_v_output_out_T_6032; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_11_4 = _io_v_output_out_T_1425 ? {{56'd0}, _io_v_output_out_T_6006} :
    _io_v_output_out_T_6671; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6691 = _io_v_output_out_T_1497 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6692 = _io_v_output_out_T_1491 ? {{56'd0}, _io_v_output_out_T_6035} :
    _io_v_output_out_T_6691; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6700 = _io_v_output_out_T_1485 ? _io_v_output_out_T_6692 : _io_v_output_out_T_6061; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_12_4 = _io_v_output_out_T_1482 ? {{56'd0}, _io_v_output_out_T_6035} :
    _io_v_output_out_T_6700; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6720 = _io_v_output_out_T_1554 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6721 = _io_v_output_out_T_1548 ? {{56'd0}, _io_v_output_out_T_6064} :
    _io_v_output_out_T_6720; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6729 = _io_v_output_out_T_1542 ? _io_v_output_out_T_6721 : _io_v_output_out_T_6090; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_13_4 = _io_v_output_out_T_1539 ? {{56'd0}, _io_v_output_out_T_6064} :
    _io_v_output_out_T_6729; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6749 = _io_v_output_out_T_1611 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6750 = _io_v_output_out_T_1605 ? {{56'd0}, _io_v_output_out_T_6093} :
    _io_v_output_out_T_6749; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6758 = _io_v_output_out_T_1599 ? _io_v_output_out_T_6750 : _io_v_output_out_T_6119; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_14_4 = _io_v_output_out_T_1596 ? {{56'd0}, _io_v_output_out_T_6093} :
    _io_v_output_out_T_6758; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6778 = _io_v_output_out_T_1668 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_6342}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6779 = _io_v_output_out_T_1662 ? {{56'd0}, _io_v_output_out_T_6122} :
    _io_v_output_out_T_6778; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6787 = _io_v_output_out_T_1656 ? _io_v_output_out_T_6779 : _io_v_output_out_T_6148; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_15_4 = _io_v_output_out_T_1653 ? {{56'd0}, _io_v_output_out_T_6122} :
    _io_v_output_out_T_6787; // @[Valu.scala 172:11]
  wire [511:0] io_v_output_lo_18 = {io_v_output_out_7_8,io_v_output_out_6_8,io_v_output_out_5_8,io_v_output_out_4_8,
    io_v_output_out_3_13,io_v_output_out_2_13,io_v_output_out_1_18,io_v_output_out_0_18}; // @[Cat.scala 33:92]
  wire [1023:0] _io_v_output_T_41 = {io_v_output_out_15_4,io_v_output_out_14_4,io_v_output_out_13_4,io_v_output_out_12_4
    ,io_v_output_out_11_4,io_v_output_out_10_4,io_v_output_out_9_4,io_v_output_out_8_4,io_v_output_lo_18}; // @[Valu.scala 180:24]
  wire [15:0] _io_v_output_out_T_6806 = io_in_B[15:0]; // @[Valu.scala 175:167]
  wire [63:0] _io_v_output_out_T_6807 = _io_v_output_out_T_15 ? 64'hffffffffffffffff : {{48'd0}, _io_v_output_out_T_6806
    }; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6808 = _io_v_output_out_T_9 ? {{48'd0}, _io_v_output_out_T_5455} :
    _io_v_output_out_T_6807; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6816 = _io_v_output_out_T_3 ? _io_v_output_out_T_6808 : 64'hffffffffffffffff; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_0_19 = _io_v_output_out_T ? {{48'd0}, _io_v_output_out_T_5455} : _io_v_output_out_T_6816; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6836 = _io_v_output_out_T_72 ? 64'hffffffffffffffff : {{48'd0}, _io_v_output_out_T_6806
    }; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6837 = _io_v_output_out_T_66 ? {{48'd0}, _io_v_output_out_T_5484} :
    _io_v_output_out_T_6836; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6845 = _io_v_output_out_T_60 ? _io_v_output_out_T_6837 : _io_v_output_out_T_5510; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_1_19 = _io_v_output_out_T_57 ? {{48'd0}, _io_v_output_out_T_5484} :
    _io_v_output_out_T_6845; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6865 = _io_v_output_out_T_243 ? 64'hffffffffffffffff : {{48'd0},
    _io_v_output_out_T_6806}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6866 = _io_v_output_out_T_237 ? {{48'd0}, _io_v_output_out_T_5513} :
    _io_v_output_out_T_6865; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6874 = _io_v_output_out_T_231 ? _io_v_output_out_T_6866 : _io_v_output_out_T_5539; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_2_14 = _io_v_output_out_T_228 ? {{48'd0}, _io_v_output_out_T_5513} :
    _io_v_output_out_T_6874; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6894 = _io_v_output_out_T_300 ? 64'hffffffffffffffff : {{48'd0},
    _io_v_output_out_T_6806}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6895 = _io_v_output_out_T_294 ? {{48'd0}, _io_v_output_out_T_5542} :
    _io_v_output_out_T_6894; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6903 = _io_v_output_out_T_288 ? _io_v_output_out_T_6895 : _io_v_output_out_T_5568; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_3_14 = _io_v_output_out_T_285 ? {{48'd0}, _io_v_output_out_T_5542} :
    _io_v_output_out_T_6903; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6923 = _io_v_output_out_T_585 ? 64'hffffffffffffffff : {{48'd0},
    _io_v_output_out_T_6806}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6924 = _io_v_output_out_T_579 ? {{48'd0}, _io_v_output_out_T_5571} :
    _io_v_output_out_T_6923; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6932 = _io_v_output_out_T_573 ? _io_v_output_out_T_6924 : _io_v_output_out_T_5597; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_4_9 = _io_v_output_out_T_570 ? {{48'd0}, _io_v_output_out_T_5571} :
    _io_v_output_out_T_6932; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6952 = _io_v_output_out_T_642 ? 64'hffffffffffffffff : {{48'd0},
    _io_v_output_out_T_6806}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6953 = _io_v_output_out_T_636 ? {{48'd0}, _io_v_output_out_T_5600} :
    _io_v_output_out_T_6952; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6961 = _io_v_output_out_T_630 ? _io_v_output_out_T_6953 : _io_v_output_out_T_5626; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_5_9 = _io_v_output_out_T_627 ? {{48'd0}, _io_v_output_out_T_5600} :
    _io_v_output_out_T_6961; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_6981 = _io_v_output_out_T_699 ? 64'hffffffffffffffff : {{48'd0},
    _io_v_output_out_T_6806}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_6982 = _io_v_output_out_T_693 ? {{48'd0}, _io_v_output_out_T_5629} :
    _io_v_output_out_T_6981; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_6990 = _io_v_output_out_T_687 ? _io_v_output_out_T_6982 : _io_v_output_out_T_5655; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_6_9 = _io_v_output_out_T_684 ? {{48'd0}, _io_v_output_out_T_5629} :
    _io_v_output_out_T_6990; // @[Valu.scala 172:11]
  wire [63:0] _io_v_output_out_T_7010 = _io_v_output_out_T_756 ? 64'hffffffffffffffff : {{48'd0},
    _io_v_output_out_T_6806}; // @[Valu.scala 175:36]
  wire [63:0] _io_v_output_out_T_7011 = _io_v_output_out_T_750 ? {{48'd0}, _io_v_output_out_T_5658} :
    _io_v_output_out_T_7010; // @[Valu.scala 174:32]
  wire [63:0] _io_v_output_out_T_7019 = _io_v_output_out_T_744 ? _io_v_output_out_T_7011 : _io_v_output_out_T_5684; // @[Valu.scala 173:11]
  wire [63:0] io_v_output_out_7_9 = _io_v_output_out_T_741 ? {{48'd0}, _io_v_output_out_T_5658} :
    _io_v_output_out_T_7019; // @[Valu.scala 172:11]
  wire [511:0] _io_v_output_T_43 = {io_v_output_out_7_9,io_v_output_out_6_9,io_v_output_out_5_9,io_v_output_out_4_9,
    io_v_output_out_3_14,io_v_output_out_2_14,io_v_output_out_1_19,io_v_output_out_0_19}; // @[Valu.scala 180:24]
  wire [511:0] _GEN_5 = _T_8 ? $signed(_io_v_output_T_43) : $signed(512'sh0); // @[Valu.scala 197:13 273:53 275:33]
  wire [1023:0] _GEN_6 = _T_12 ? $signed(_io_v_output_T_41) : $signed({{512{_GEN_5[511]}},_GEN_5}); // @[Valu.scala 270:49 272:33]
  wire [1023:0] _GEN_7 = _T_4 ? $signed({{768{_io_v_output_T_39[255]}},_io_v_output_T_39}) : $signed(_GEN_6); // @[Valu.scala 267:49 269:33]
  wire [1023:0] _GEN_8 = _T ? $signed({{896{_io_v_output_T_37[127]}},_io_v_output_T_37}) : $signed(_GEN_7); // @[Valu.scala 263:43 265:33]
  wire [1023:0] _GEN_9 = _T_49 ? $signed({{896{_io_v_output_T_35[127]}},_io_v_output_T_35}) : $signed(_GEN_8); // @[Valu.scala 260:37 261:29]
  wire [63:0] _io_v_output_out_T_7039 = _io_v_output_out_T_15 ? 64'hffffffffffffffff : _io_v_output_out_T_29; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7040 = _io_v_output_out_T_9 ? _io_v_output_out_T_5281 : _io_v_output_out_T_7039; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7048 = _io_v_output_out_T_3 ? _io_v_output_out_T_7040 : 64'hffffffffffffffff; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_0_20 = _io_v_output_out_T ? _io_v_output_out_T_5281 : _io_v_output_out_T_7048; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7068 = _io_v_output_out_T_72 ? 64'hffffffffffffffff : _io_v_output_out_T_86; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7069 = _io_v_output_out_T_66 ? _io_v_output_out_T_5310 : _io_v_output_out_T_7068; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7077 = _io_v_output_out_T_60 ? _io_v_output_out_T_7069 : _io_v_output_out_T_5336; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_1_20 = _io_v_output_out_T_57 ? _io_v_output_out_T_5310 : _io_v_output_out_T_7077; // @[Valu.scala 184:11]
  wire [127:0] _io_v_output_T_45 = {io_v_output_out_1_20,io_v_output_out_0_20}; // @[Valu.scala 192:24]
  wire [63:0] _io_v_output_out_T_7097 = _io_v_output_out_T_15 ? 64'hffffffffffffffff : {{32'd0}, _io_v_output_out_T_143}
    ; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7098 = _io_v_output_out_T_9 ? {{32'd0}, _io_v_output_out_T_5339} :
    _io_v_output_out_T_7097; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7106 = _io_v_output_out_T_3 ? _io_v_output_out_T_7098 : 64'hffffffffffffffff; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_0_21 = _io_v_output_out_T ? {{32'd0}, _io_v_output_out_T_5339} : _io_v_output_out_T_7106; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7126 = _io_v_output_out_T_72 ? 64'hffffffffffffffff : {{32'd0}, _io_v_output_out_T_200}
    ; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7127 = _io_v_output_out_T_66 ? {{32'd0}, _io_v_output_out_T_5368} :
    _io_v_output_out_T_7126; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7135 = _io_v_output_out_T_60 ? _io_v_output_out_T_7127 : _io_v_output_out_T_5394; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_1_21 = _io_v_output_out_T_57 ? {{32'd0}, _io_v_output_out_T_5368} :
    _io_v_output_out_T_7135; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7155 = _io_v_output_out_T_243 ? 64'hffffffffffffffff : {{32'd0}, _io_v_output_out_T_257
    }; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7156 = _io_v_output_out_T_237 ? {{32'd0}, _io_v_output_out_T_5397} :
    _io_v_output_out_T_7155; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7164 = _io_v_output_out_T_231 ? _io_v_output_out_T_7156 : _io_v_output_out_T_5423; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_2_15 = _io_v_output_out_T_228 ? {{32'd0}, _io_v_output_out_T_5397} :
    _io_v_output_out_T_7164; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7184 = _io_v_output_out_T_300 ? 64'hffffffffffffffff : {{32'd0}, _io_v_output_out_T_314
    }; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7185 = _io_v_output_out_T_294 ? {{32'd0}, _io_v_output_out_T_5426} :
    _io_v_output_out_T_7184; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7193 = _io_v_output_out_T_288 ? _io_v_output_out_T_7185 : _io_v_output_out_T_5452; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_3_15 = _io_v_output_out_T_285 ? {{32'd0}, _io_v_output_out_T_5426} :
    _io_v_output_out_T_7193; // @[Valu.scala 184:11]
  wire [255:0] _io_v_output_T_47 = {io_v_output_out_3_15,io_v_output_out_2_15,io_v_output_out_1_21,io_v_output_out_0_21}
    ; // @[Valu.scala 192:24]
  wire [63:0] _io_v_output_out_T_7213 = _io_v_output_out_T_15 ? 64'hffffffffffffffff : {{56'd0}, _io_v_output_out_T_827}
    ; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7214 = _io_v_output_out_T_9 ? {{56'd0}, _io_v_output_out_T_5687} :
    _io_v_output_out_T_7213; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7222 = _io_v_output_out_T_3 ? _io_v_output_out_T_7214 : 64'hffffffffffffffff; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_0_22 = _io_v_output_out_T ? {{56'd0}, _io_v_output_out_T_5687} : _io_v_output_out_T_7222; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7242 = _io_v_output_out_T_72 ? 64'hffffffffffffffff : {{56'd0}, _io_v_output_out_T_884}
    ; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7243 = _io_v_output_out_T_66 ? {{56'd0}, _io_v_output_out_T_5716} :
    _io_v_output_out_T_7242; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7251 = _io_v_output_out_T_60 ? _io_v_output_out_T_7243 : _io_v_output_out_T_5742; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_1_22 = _io_v_output_out_T_57 ? {{56'd0}, _io_v_output_out_T_5716} :
    _io_v_output_out_T_7251; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7271 = _io_v_output_out_T_243 ? 64'hffffffffffffffff : {{56'd0}, _io_v_output_out_T_941
    }; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7272 = _io_v_output_out_T_237 ? {{56'd0}, _io_v_output_out_T_5745} :
    _io_v_output_out_T_7271; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7280 = _io_v_output_out_T_231 ? _io_v_output_out_T_7272 : _io_v_output_out_T_5771; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_2_16 = _io_v_output_out_T_228 ? {{56'd0}, _io_v_output_out_T_5745} :
    _io_v_output_out_T_7280; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7300 = _io_v_output_out_T_300 ? 64'hffffffffffffffff : {{56'd0}, _io_v_output_out_T_998
    }; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7301 = _io_v_output_out_T_294 ? {{56'd0}, _io_v_output_out_T_5774} :
    _io_v_output_out_T_7300; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7309 = _io_v_output_out_T_288 ? _io_v_output_out_T_7301 : _io_v_output_out_T_5800; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_3_16 = _io_v_output_out_T_285 ? {{56'd0}, _io_v_output_out_T_5774} :
    _io_v_output_out_T_7309; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7329 = _io_v_output_out_T_585 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_1055}; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7330 = _io_v_output_out_T_579 ? {{56'd0}, _io_v_output_out_T_5803} :
    _io_v_output_out_T_7329; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7338 = _io_v_output_out_T_573 ? _io_v_output_out_T_7330 : _io_v_output_out_T_5829; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_4_10 = _io_v_output_out_T_570 ? {{56'd0}, _io_v_output_out_T_5803} :
    _io_v_output_out_T_7338; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7358 = _io_v_output_out_T_642 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_1112}; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7359 = _io_v_output_out_T_636 ? {{56'd0}, _io_v_output_out_T_5832} :
    _io_v_output_out_T_7358; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7367 = _io_v_output_out_T_630 ? _io_v_output_out_T_7359 : _io_v_output_out_T_5858; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_5_10 = _io_v_output_out_T_627 ? {{56'd0}, _io_v_output_out_T_5832} :
    _io_v_output_out_T_7367; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7387 = _io_v_output_out_T_699 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_1169}; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7388 = _io_v_output_out_T_693 ? {{56'd0}, _io_v_output_out_T_5861} :
    _io_v_output_out_T_7387; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7396 = _io_v_output_out_T_687 ? _io_v_output_out_T_7388 : _io_v_output_out_T_5887; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_6_10 = _io_v_output_out_T_684 ? {{56'd0}, _io_v_output_out_T_5861} :
    _io_v_output_out_T_7396; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7416 = _io_v_output_out_T_756 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_1226}; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7417 = _io_v_output_out_T_750 ? {{56'd0}, _io_v_output_out_T_5890} :
    _io_v_output_out_T_7416; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7425 = _io_v_output_out_T_744 ? _io_v_output_out_T_7417 : _io_v_output_out_T_5916; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_7_10 = _io_v_output_out_T_741 ? {{56'd0}, _io_v_output_out_T_5890} :
    _io_v_output_out_T_7425; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7445 = _io_v_output_out_T_1269 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_1283}; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7446 = _io_v_output_out_T_1263 ? {{56'd0}, _io_v_output_out_T_5919} :
    _io_v_output_out_T_7445; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7454 = _io_v_output_out_T_1257 ? _io_v_output_out_T_7446 : _io_v_output_out_T_5945; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_8_5 = _io_v_output_out_T_1254 ? {{56'd0}, _io_v_output_out_T_5919} :
    _io_v_output_out_T_7454; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7474 = _io_v_output_out_T_1326 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_1340}; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7475 = _io_v_output_out_T_1320 ? {{56'd0}, _io_v_output_out_T_5948} :
    _io_v_output_out_T_7474; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7483 = _io_v_output_out_T_1314 ? _io_v_output_out_T_7475 : _io_v_output_out_T_5974; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_9_5 = _io_v_output_out_T_1311 ? {{56'd0}, _io_v_output_out_T_5948} :
    _io_v_output_out_T_7483; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7503 = _io_v_output_out_T_1383 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_1397}; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7504 = _io_v_output_out_T_1377 ? {{56'd0}, _io_v_output_out_T_5977} :
    _io_v_output_out_T_7503; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7512 = _io_v_output_out_T_1371 ? _io_v_output_out_T_7504 : _io_v_output_out_T_6003; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_10_5 = _io_v_output_out_T_1368 ? {{56'd0}, _io_v_output_out_T_5977} :
    _io_v_output_out_T_7512; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7532 = _io_v_output_out_T_1440 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_1454}; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7533 = _io_v_output_out_T_1434 ? {{56'd0}, _io_v_output_out_T_6006} :
    _io_v_output_out_T_7532; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7541 = _io_v_output_out_T_1428 ? _io_v_output_out_T_7533 : _io_v_output_out_T_6032; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_11_5 = _io_v_output_out_T_1425 ? {{56'd0}, _io_v_output_out_T_6006} :
    _io_v_output_out_T_7541; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7561 = _io_v_output_out_T_1497 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_1511}; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7562 = _io_v_output_out_T_1491 ? {{56'd0}, _io_v_output_out_T_6035} :
    _io_v_output_out_T_7561; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7570 = _io_v_output_out_T_1485 ? _io_v_output_out_T_7562 : _io_v_output_out_T_6061; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_12_5 = _io_v_output_out_T_1482 ? {{56'd0}, _io_v_output_out_T_6035} :
    _io_v_output_out_T_7570; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7590 = _io_v_output_out_T_1554 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_1568}; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7591 = _io_v_output_out_T_1548 ? {{56'd0}, _io_v_output_out_T_6064} :
    _io_v_output_out_T_7590; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7599 = _io_v_output_out_T_1542 ? _io_v_output_out_T_7591 : _io_v_output_out_T_6090; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_13_5 = _io_v_output_out_T_1539 ? {{56'd0}, _io_v_output_out_T_6064} :
    _io_v_output_out_T_7599; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7619 = _io_v_output_out_T_1611 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_1625}; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7620 = _io_v_output_out_T_1605 ? {{56'd0}, _io_v_output_out_T_6093} :
    _io_v_output_out_T_7619; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7628 = _io_v_output_out_T_1599 ? _io_v_output_out_T_7620 : _io_v_output_out_T_6119; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_14_5 = _io_v_output_out_T_1596 ? {{56'd0}, _io_v_output_out_T_6093} :
    _io_v_output_out_T_7628; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7648 = _io_v_output_out_T_1668 ? 64'hffffffffffffffff : {{56'd0},
    _io_v_output_out_T_1682}; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7649 = _io_v_output_out_T_1662 ? {{56'd0}, _io_v_output_out_T_6122} :
    _io_v_output_out_T_7648; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7657 = _io_v_output_out_T_1656 ? _io_v_output_out_T_7649 : _io_v_output_out_T_6148; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_15_5 = _io_v_output_out_T_1653 ? {{56'd0}, _io_v_output_out_T_6122} :
    _io_v_output_out_T_7657; // @[Valu.scala 184:11]
  wire [511:0] io_v_output_lo_21 = {io_v_output_out_7_10,io_v_output_out_6_10,io_v_output_out_5_10,io_v_output_out_4_10,
    io_v_output_out_3_16,io_v_output_out_2_16,io_v_output_out_1_22,io_v_output_out_0_22}; // @[Cat.scala 33:92]
  wire [1023:0] _io_v_output_T_49 = {io_v_output_out_15_5,io_v_output_out_14_5,io_v_output_out_13_5,io_v_output_out_12_5
    ,io_v_output_out_11_5,io_v_output_out_10_5,io_v_output_out_9_5,io_v_output_out_8_5,io_v_output_lo_21}; // @[Valu.scala 192:24]
  wire [63:0] _io_v_output_out_T_7677 = _io_v_output_out_T_15 ? 64'hffffffffffffffff : {{48'd0}, _io_v_output_out_T_371}
    ; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7678 = _io_v_output_out_T_9 ? {{48'd0}, _io_v_output_out_T_5455} :
    _io_v_output_out_T_7677; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7686 = _io_v_output_out_T_3 ? _io_v_output_out_T_7678 : 64'hffffffffffffffff; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_0_23 = _io_v_output_out_T ? {{48'd0}, _io_v_output_out_T_5455} : _io_v_output_out_T_7686; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7706 = _io_v_output_out_T_72 ? 64'hffffffffffffffff : {{48'd0}, _io_v_output_out_T_428}
    ; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7707 = _io_v_output_out_T_66 ? {{48'd0}, _io_v_output_out_T_5484} :
    _io_v_output_out_T_7706; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7715 = _io_v_output_out_T_60 ? _io_v_output_out_T_7707 : _io_v_output_out_T_5510; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_1_23 = _io_v_output_out_T_57 ? {{48'd0}, _io_v_output_out_T_5484} :
    _io_v_output_out_T_7715; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7735 = _io_v_output_out_T_243 ? 64'hffffffffffffffff : {{48'd0}, _io_v_output_out_T_485
    }; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7736 = _io_v_output_out_T_237 ? {{48'd0}, _io_v_output_out_T_5513} :
    _io_v_output_out_T_7735; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7744 = _io_v_output_out_T_231 ? _io_v_output_out_T_7736 : _io_v_output_out_T_5539; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_2_17 = _io_v_output_out_T_228 ? {{48'd0}, _io_v_output_out_T_5513} :
    _io_v_output_out_T_7744; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7764 = _io_v_output_out_T_300 ? 64'hffffffffffffffff : {{48'd0}, _io_v_output_out_T_542
    }; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7765 = _io_v_output_out_T_294 ? {{48'd0}, _io_v_output_out_T_5542} :
    _io_v_output_out_T_7764; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7773 = _io_v_output_out_T_288 ? _io_v_output_out_T_7765 : _io_v_output_out_T_5568; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_3_17 = _io_v_output_out_T_285 ? {{48'd0}, _io_v_output_out_T_5542} :
    _io_v_output_out_T_7773; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7793 = _io_v_output_out_T_585 ? 64'hffffffffffffffff : {{48'd0}, _io_v_output_out_T_599
    }; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7794 = _io_v_output_out_T_579 ? {{48'd0}, _io_v_output_out_T_5571} :
    _io_v_output_out_T_7793; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7802 = _io_v_output_out_T_573 ? _io_v_output_out_T_7794 : _io_v_output_out_T_5597; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_4_11 = _io_v_output_out_T_570 ? {{48'd0}, _io_v_output_out_T_5571} :
    _io_v_output_out_T_7802; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7822 = _io_v_output_out_T_642 ? 64'hffffffffffffffff : {{48'd0}, _io_v_output_out_T_656
    }; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7823 = _io_v_output_out_T_636 ? {{48'd0}, _io_v_output_out_T_5600} :
    _io_v_output_out_T_7822; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7831 = _io_v_output_out_T_630 ? _io_v_output_out_T_7823 : _io_v_output_out_T_5626; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_5_11 = _io_v_output_out_T_627 ? {{48'd0}, _io_v_output_out_T_5600} :
    _io_v_output_out_T_7831; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7851 = _io_v_output_out_T_699 ? 64'hffffffffffffffff : {{48'd0}, _io_v_output_out_T_713
    }; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7852 = _io_v_output_out_T_693 ? {{48'd0}, _io_v_output_out_T_5629} :
    _io_v_output_out_T_7851; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7860 = _io_v_output_out_T_687 ? _io_v_output_out_T_7852 : _io_v_output_out_T_5655; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_6_11 = _io_v_output_out_T_684 ? {{48'd0}, _io_v_output_out_T_5629} :
    _io_v_output_out_T_7860; // @[Valu.scala 184:11]
  wire [63:0] _io_v_output_out_T_7880 = _io_v_output_out_T_756 ? 64'hffffffffffffffff : {{48'd0}, _io_v_output_out_T_770
    }; // @[Valu.scala 187:36]
  wire [63:0] _io_v_output_out_T_7881 = _io_v_output_out_T_750 ? {{48'd0}, _io_v_output_out_T_5658} :
    _io_v_output_out_T_7880; // @[Valu.scala 186:32]
  wire [63:0] _io_v_output_out_T_7889 = _io_v_output_out_T_744 ? _io_v_output_out_T_7881 : _io_v_output_out_T_5684; // @[Valu.scala 185:11]
  wire [63:0] io_v_output_out_7_11 = _io_v_output_out_T_741 ? {{48'd0}, _io_v_output_out_T_5658} :
    _io_v_output_out_T_7889; // @[Valu.scala 184:11]
  wire [511:0] _io_v_output_T_51 = {io_v_output_out_7_11,io_v_output_out_6_11,io_v_output_out_5_11,io_v_output_out_4_11,
    io_v_output_out_3_17,io_v_output_out_2_17,io_v_output_out_1_23,io_v_output_out_0_23}; // @[Valu.scala 192:24]
  wire [511:0] _GEN_10 = _T_8 ? $signed(_io_v_output_T_51) : $signed(512'sh0); // @[Valu.scala 197:13 294:47 295:23]
  wire [1023:0] _GEN_11 = _T_12 ? $signed(_io_v_output_T_49) : $signed({{512{_GEN_10[511]}},_GEN_10}); // @[Valu.scala 292:41 293:41]
  wire [1023:0] _GEN_12 = _T_4 ? $signed({{768{_io_v_output_T_47[255]}},_io_v_output_T_47}) : $signed(_GEN_11); // @[Valu.scala 289:41 290:22]
  wire [1023:0] _GEN_13 = _T ? $signed({{896{_io_v_output_T_45[127]}},_io_v_output_T_45}) : $signed(_GEN_12); // @[Valu.scala 286:39 287:21]
  wire [1023:0] _GEN_14 = _T_49 ? $signed({{896{io_vs1[127]}},io_vs1}) : $signed(_GEN_13); // @[Valu.scala 283:37 284:29]
  wire [1023:0] _GEN_15 = io_aluc == 9'hb8 ? $signed(_GEN_14) : $signed(1024'sh0); // @[Valu.scala 197:13 282:38]
  wire [1023:0] _GEN_16 = io_aluc == 9'hbb ? $signed(_GEN_9) : $signed(_GEN_15); // @[Valu.scala 259:38]
  wire [1023:0] _GEN_17 = io_aluc == 9'hbc ? $signed(_GEN_4) : $signed(_GEN_16); // @[Valu.scala 238:37]
  wire [1023:0] _GEN_18 = _T_8 & _T_34 ? $signed({{896{_io_v_output_T_23[127]}},_io_v_output_T_23}) : $signed(_GEN_17); // @[Valu.scala 233:70 235:25]
  wire [1023:0] _GEN_19 = _T_12 & _T_34 ? $signed({{896{_io_v_output_T_21[127]}},_io_v_output_T_21}) : $signed(_GEN_18); // @[Valu.scala 230:69 232:25]
  wire [1023:0] _GEN_20 = _T_4 & _T_34 ? $signed({{896{_io_v_output_T_19[127]}},_io_v_output_T_19}) : $signed(_GEN_19); // @[Valu.scala 227:69 229:25]
  wire [1023:0] _GEN_21 = _T & io_aluc[2:0] == 3'h4 ? $signed({{896{_io_v_output_T_17[127]}},_io_v_output_T_17}) :
    $signed(_GEN_20); // @[Valu.scala 224:68 226:25]
  wire [1023:0] _GEN_22 = _T_8 & _T_18 ? $signed({{896{_io_v_output_T_15[127]}},_io_v_output_T_15}) : $signed(_GEN_21); // @[Valu.scala 219:70 221:25]
  wire [1023:0] _GEN_23 = _T_12 & _T_18 ? $signed({{896{_io_v_output_T_13[127]}},_io_v_output_T_13}) : $signed(_GEN_22); // @[Valu.scala 216:69 218:25]
  wire [1023:0] _GEN_24 = _T_4 & _T_18 ? $signed({{896{_io_v_output_T_11[127]}},_io_v_output_T_11}) : $signed(_GEN_23); // @[Valu.scala 213:69 215:25]
  wire [1023:0] _GEN_25 = _T & io_aluc[2:0] == 3'h3 ? $signed({{896{_io_v_output_T_9[127]}},_io_v_output_T_9}) :
    $signed(_GEN_24); // @[Valu.scala 210:69 212:21]
  wire [1023:0] _GEN_26 = io_sew == 3'h0 & _T_2 ? $signed({{896{_io_v_output_T_7[127]}},_io_v_output_T_7}) : $signed(
    _GEN_25); // @[Valu.scala 206:74 207:25]
  wire [1023:0] _GEN_27 = io_sew == 3'h1 & _T_2 ? $signed({{896{_io_v_output_T_5[127]}},_io_v_output_T_5}) : $signed(
    _GEN_26); // @[Valu.scala 204:70 205:25]
  wire [1023:0] _GEN_28 = io_sew == 3'h2 & _T_2 ? $signed({{896{_io_v_output_T_3[127]}},_io_v_output_T_3}) : $signed(
    _GEN_27); // @[Valu.scala 202:71 203:25]
  wire [1023:0] _GEN_29 = io_sew == 3'h3 & io_aluc[2:0] == 3'h0 ? $signed({{896{_io_v_output_T_1[127]}},_io_v_output_T_1
    }) : $signed(_GEN_28); // @[Valu.scala 200:65 201:25]
  assign io_v_output = _GEN_29[127:0];
  assign io_vs0_o = io_vs0; // @[Valu.scala 301:14]
  assign io_vs3 = io_vd; // @[Valu.scala 300:12]
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
  wire [1:0] _GEN_1 = vsew == 3'h1 ? $signed(2'sh1) : $signed(2'sh0); // @[Vconfigure.scala 34:38 35:20]
  wire [2:0] _GEN_2 = vsew == 3'h0 ? $signed(3'sh2) : $signed({{1{_GEN_1[1]}},_GEN_1}); // @[Vconfigure.scala 32:33 33:20]
  wire [1:0] _GEN_3 = _T_3 ? $signed(2'sh1) : $signed(2'sh0); // @[Vconfigure.scala 49:38 50:20 23:26]
  wire [2:0] _GEN_4 = _T_2 ? $signed(3'sh2) : $signed({{1{_GEN_3[1]}},_GEN_3}); // @[Vconfigure.scala 47:38 48:20]
  wire [3:0] _GEN_5 = _T_1 ? $signed(4'sh4) : $signed({{1{_GEN_4[2]}},_GEN_4}); // @[Vconfigure.scala 45:33 46:20]
  wire  _T_12 = vsew == 3'h3; // @[Vconfigure.scala 63:25]
  wire [1:0] _GEN_6 = vsew == 3'h3 ? $signed(2'sh1) : $signed(2'sh0); // @[Vconfigure.scala 63:37 64:20 23:26]
  wire [2:0] _GEN_7 = _T_3 ? $signed(3'sh2) : $signed({{1{_GEN_6[1]}},_GEN_6}); // @[Vconfigure.scala 61:38 62:20]
  wire [3:0] _GEN_8 = _T_2 ? $signed(4'sh4) : $signed({{1{_GEN_7[2]}},_GEN_7}); // @[Vconfigure.scala 59:38 60:20]
  wire [4:0] _GEN_9 = _T_1 ? $signed(5'sh8) : $signed({{1{_GEN_8[3]}},_GEN_8}); // @[Vconfigure.scala 57:33 58:20]
  wire  _y0_T_1 = ~vlmul[1]; // @[Vconfigure.scala 67:18]
  wire  _y0_T_3 = ~vlmul[0]; // @[Vconfigure.scala 67:31]
  wire  y0 = ~vlmul[1] & ~vlmul[0] | vlmul[2]; // @[Vconfigure.scala 67:41]
  wire  _y1_T_1 = ~vlmul[2]; // @[Vconfigure.scala 68:18]
  wire  y1 = ~vlmul[2] & _y0_T_1 & vlmul[0]; // @[Vconfigure.scala 68:41]
  wire  _y2_T_3 = _y1_T_1 & vlmul[1]; // @[Vconfigure.scala 69:28]
  wire  y2 = _y1_T_1 & vlmul[1] & _y0_T_3; // @[Vconfigure.scala 69:40]
  wire  y3 = _y2_T_3 & vlmul[0]; // @[Vconfigure.scala 70:40]
  wire [3:0] _io_lmul_T = {y3,y2,y1,y0}; // @[Cat.scala 33:92]
  wire [35:0] _valmax_T_2 = {io_lmul,4'h0}; // @[Vconfigure.scala 74:44]
  wire [34:0] _valmax_T_4 = {io_lmul,3'h0}; // @[Vconfigure.scala 76:45]
  wire [33:0] _valmax_T_6 = {io_lmul,2'h0}; // @[Vconfigure.scala 78:45]
  wire [32:0] _valmax_T_8 = {io_lmul,1'h0}; // @[Vconfigure.scala 80:45]
  wire [32:0] _GEN_10 = _T_12 ? $signed(_valmax_T_8) : $signed(33'sh0); // @[Vconfigure.scala 79:37 80:19 23:26]
  wire [33:0] _GEN_11 = _T_3 ? $signed(_valmax_T_6) : $signed({{1{_GEN_10[32]}},_GEN_10}); // @[Vconfigure.scala 77:38 78:19]
  wire [34:0] _GEN_12 = _T_2 ? $signed(_valmax_T_4) : $signed({{1{_GEN_11[33]}},_GEN_11}); // @[Vconfigure.scala 75:38 76:19]
  wire [35:0] _GEN_13 = _T_1 ? $signed(_valmax_T_2) : $signed({{1{_GEN_12[34]}},_GEN_12}); // @[Vconfigure.scala 73:32 74:18]
  wire [35:0] _GEN_14 = vlmul == 3'h7 ? $signed({{31{_GEN_9[4]}},_GEN_9}) : $signed(_GEN_13); // @[Vconfigure.scala 55:35]
  wire [3:0] _GEN_15 = vlmul == 3'h7 ? 4'h1 : _io_lmul_T; // @[Vconfigure.scala 25:13 55:35 71:17]
  wire [35:0] _GEN_16 = vlmul == 3'h6 ? $signed({{32{_GEN_5[3]}},_GEN_5}) : $signed(_GEN_14); // @[Vconfigure.scala 43:35]
  wire [3:0] _GEN_17 = vlmul == 3'h6 ? 4'h1 : _GEN_15; // @[Vconfigure.scala 25:13 43:35]
  wire [35:0] valmax = vlmul == 3'h5 ? $signed({{33{_GEN_2[2]}},_GEN_2}) : $signed(_GEN_16); // @[Vconfigure.scala 30:30]
  wire [3:0] _GEN_19 = vlmul == 3'h5 ? 4'h1 : _GEN_17; // @[Vconfigure.scala 25:13 30:30]
  wire  _avl_T_2 = io_rs1 == 5'h0; // @[Vconfigure.scala 85:40]
  wire [31:0] _avl_T_7 = _avl_T_2 & io_rd == 5'h0 ? $signed(io_current_vl) : $signed(32'sh0); // @[Vconfigure.scala 86:8]
  wire [35:0] _avl_T_8 = io_rd != 5'h0 & io_rs1 == 5'h0 ? $signed(valmax) : $signed({{4{_avl_T_7[31]}},_avl_T_7}); // @[Vconfigure.scala 85:8]
  wire [35:0] avl = io_rs1 != 5'h0 ? $signed({{4{io_rs1_readdata[31]}},io_rs1_readdata}) : $signed(_avl_T_8); // @[Vconfigure.scala 84:10]
  wire [35:0] _GEN_20 = $signed(avl) <= $signed(valmax) ? $signed(avl) : $signed(valmax); // @[Vconfigure.scala 88:25 89:14 91:14]
  assign io_lmul = {{28'd0}, _GEN_19};
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
  wire  _result_T = io_op == 5'h0; // @[MDU.scala 34:16]
  wire  _result_T_1 = io_op == 5'h3; // @[MDU.scala 34:33]
  wire  _result_T_2 = io_op == 5'h0 | io_op == 5'h3; // @[MDU.scala 34:24]
  wire [63:0] _result_T_3 = io_src_a * io_src_b; // @[MDU.scala 34:58]
  wire  _result_T_4 = io_op == 5'h2; // @[MDU.scala 35:16]
  wire [32:0] _result_T_6 = {1'b0,$signed(io_src_b)}; // @[MDU.scala 35:66]
  wire [64:0] _result_T_7 = $signed(io_src_a) * $signed(_result_T_6); // @[MDU.scala 35:66]
  wire [63:0] _result_T_10 = _result_T_7[63:0]; // @[MDU.scala 35:78]
  wire  _result_T_11 = io_op == 5'h1; // @[MDU.scala 36:16]
  wire [63:0] _result_T_15 = $signed(io_src_a) * $signed(io_src_b); // @[MDU.scala 36:85]
  wire [63:0] _result_T_16 = _result_T_11 ? _result_T_15 : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _result_T_17 = _result_T_4 ? _result_T_10 : _result_T_16; // @[Mux.scala 101:16]
  wire [63:0] result = _result_T_2 ? _result_T_3 : _result_T_17; // @[Mux.scala 101:16]
  reg  r_ready; // @[MDU.scala 41:29]
  reg [5:0] r_counter; // @[MDU.scala 42:29]
  reg [31:0] r_dividend; // @[MDU.scala 43:29]
  reg [31:0] r_quotient; // @[MDU.scala 44:29]
  wire  _is_div_rem_u_T = io_op == 5'h5; // @[MDU.scala 48:39]
  wire  _is_div_rem_u_T_1 = io_op == 5'h7; // @[MDU.scala 48:57]
  wire  is_div_rem_u = io_op == 5'h5 | io_op == 5'h7; // @[MDU.scala 48:48]
  wire  _is_div_rem_s_T = io_op == 5'h4; // @[MDU.scala 49:39]
  wire  _is_div_rem_s_T_1 = io_op == 5'h6; // @[MDU.scala 49:56]
  wire  is_div_rem_s = io_op == 5'h4 | io_op == 5'h6; // @[MDU.scala 49:47]
  wire [31:0] _dividend_T_3 = 32'h0 - io_src_a; // @[MDU.scala 51:59]
  wire [31:0] dividend = is_div_rem_s & io_src_a[31] ? _dividend_T_3 : io_src_a; // @[MDU.scala 51:28]
  wire [31:0] _divisor_T_3 = 32'h0 - io_src_b; // @[MDU.scala 52:59]
  wire [31:0] divisor = is_div_rem_s & io_src_b[31] ? _divisor_T_3 : io_src_b; // @[MDU.scala 52:28]
  wire [5:0] _T_4 = r_counter - 6'h1; // @[MDU.scala 59:52]
  wire [94:0] _GEN_2 = {{63'd0}, divisor}; // @[MDU.scala 59:40]
  wire [94:0] _T_5 = _GEN_2 << _T_4; // @[MDU.scala 59:40]
  wire [94:0] _GEN_26 = {{63'd0}, r_dividend}; // @[MDU.scala 59:29]
  wire [94:0] _r_dividend_T_4 = _GEN_26 - _T_5; // @[MDU.scala 60:45]
  wire [63:0] _r_quotient_T_2 = 64'h1 << _T_4; // @[MDU.scala 61:51]
  wire [63:0] _GEN_28 = {{32'd0}, r_quotient}; // @[MDU.scala 61:45]
  wire [63:0] _r_quotient_T_4 = _GEN_28 + _r_quotient_T_2; // @[MDU.scala 61:45]
  wire [94:0] _GEN_0 = _GEN_26 >= _T_5 ? _r_dividend_T_4 : {{63'd0}, r_dividend}; // @[MDU.scala 43:29 59:59 60:31]
  wire [63:0] _GEN_1 = _GEN_26 >= _T_5 ? _r_quotient_T_4 : {{32'd0}, r_quotient}; // @[MDU.scala 44:29 59:59 61:31]
  wire [94:0] _GEN_3 = r_counter != 6'h0 ? _GEN_0 : {{63'd0}, r_dividend}; // @[MDU.scala 43:29 58:38]
  wire [63:0] _GEN_4 = r_counter != 6'h0 ? _GEN_1 : {{32'd0}, r_quotient}; // @[MDU.scala 44:29 58:38]
  wire  _GEN_5 = r_counter != 6'h0 ? r_counter == 6'h1 : r_ready; // @[MDU.scala 58:38 66:24 41:29]
  wire  _GEN_7 = r_counter != 6'h0 ? 1'h0 : 1'h1; // @[MDU.scala 46:21 58:38 68:29]
  wire  _GEN_8 = io_valid ? 1'h0 : _GEN_5; // @[MDU.scala 53:32 54:24]
  wire [94:0] _GEN_10 = io_valid ? {{63'd0}, dividend} : _GEN_3; // @[MDU.scala 53:32 56:24]
  wire [63:0] _GEN_11 = io_valid ? 64'h0 : _GEN_4; // @[MDU.scala 53:32 57:24]
  wire  _GEN_12 = io_valid ? 1'h0 : _GEN_7; // @[MDU.scala 46:21 53:32]
  wire  _GEN_13 = is_div_rem_s | is_div_rem_u ? _GEN_8 : r_ready; // @[MDU.scala 41:29 50:39]
  wire [94:0] _GEN_15 = is_div_rem_s | is_div_rem_u ? _GEN_10 : {{63'd0}, r_dividend}; // @[MDU.scala 43:29 50:39]
  wire [63:0] _GEN_16 = is_div_rem_s | is_div_rem_u ? _GEN_11 : {{32'd0}, r_quotient}; // @[MDU.scala 44:29 50:39]
  wire  _GEN_17 = (is_div_rem_s | is_div_rem_u) & _GEN_12; // @[MDU.scala 46:21 50:39]
  wire [31:0] _io_output_bits_T_8 = 32'h0 - r_quotient; // @[MDU.scala 80:76]
  wire [31:0] _io_output_bits_T_9 = io_src_a[31] != io_src_b[31] & |io_src_b ? _io_output_bits_T_8 : r_quotient; // @[MDU.scala 80:30]
  wire [31:0] _io_output_bits_T_12 = 32'h0 - r_dividend; // @[MDU.scala 84:44]
  wire [31:0] _io_output_bits_T_13 = io_src_a[31] ? _io_output_bits_T_12 : r_dividend; // @[MDU.scala 84:30]
  wire [31:0] _GEN_18 = _is_div_rem_u_T_1 ? r_dividend : 32'h0; // @[MDU.scala 85:31 86:24 88:24]
  wire [31:0] _GEN_19 = _is_div_rem_s_T_1 ? _io_output_bits_T_13 : _GEN_18; // @[MDU.scala 83:30 84:24]
  wire [31:0] _GEN_20 = _is_div_rem_u_T ? r_quotient : _GEN_19; // @[MDU.scala 81:31 82:24]
  wire [31:0] _GEN_21 = _is_div_rem_s_T ? _io_output_bits_T_9 : _GEN_20; // @[MDU.scala 79:30 80:24]
  wire [31:0] _GEN_22 = _result_T_11 | _result_T_1 | _result_T_4 ? result[63:32] : _GEN_21; // @[MDU.scala 76:70 77:24]
  wire  _GEN_23 = _result_T_11 | _result_T_1 | _result_T_4 | _GEN_17; // @[MDU.scala 76:70 78:25]
  wire [94:0] _GEN_29 = reset ? 95'h0 : _GEN_15; // @[MDU.scala 43:{29,29}]
  wire [63:0] _GEN_30 = reset ? 64'h0 : _GEN_16; // @[MDU.scala 44:{29,29}]
  assign io_ready = r_ready; // @[MDU.scala 72:18]
  assign io_output_valid = _result_T | _GEN_23; // @[MDU.scala 73:24 75:25]
  assign io_output_bits = _result_T ? result[31:0] : _GEN_22; // @[MDU.scala 73:24 74:24]
  always @(posedge clock) begin
    r_ready <= reset | _GEN_13; // @[MDU.scala 41:{29,29}]
    if (reset) begin // @[MDU.scala 42:29]
      r_counter <= 6'h20; // @[MDU.scala 42:29]
    end else if (is_div_rem_s | is_div_rem_u) begin // @[MDU.scala 50:39]
      if (io_valid) begin // @[MDU.scala 53:32]
        r_counter <= 6'h20; // @[MDU.scala 55:24]
      end else if (r_counter != 6'h0) begin // @[MDU.scala 58:38]
        r_counter <= _T_4; // @[MDU.scala 65:24]
      end
    end
    r_dividend <= _GEN_29[31:0]; // @[MDU.scala 43:{29,29}]
    r_quotient <= _GEN_30[31:0]; // @[MDU.scala 44:{29,29}]
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
  output [127:0] io_vs0_o,
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
  wire [31:0] alu_io_input1; // @[Execute.scala 73:19]
  wire [31:0] alu_io_input2; // @[Execute.scala 73:19]
  wire [3:0] alu_io_aluCtl; // @[Execute.scala 73:19]
  wire [31:0] alu_io_result; // @[Execute.scala 73:19]
  wire [1:0] aluCtl_io_aluOp; // @[Execute.scala 74:22]
  wire  aluCtl_io_f7; // @[Execute.scala 74:22]
  wire [2:0] aluCtl_io_f3; // @[Execute.scala 74:22]
  wire  aluCtl_io_aluSrc; // @[Execute.scala 74:22]
  wire [3:0] aluCtl_io_out; // @[Execute.scala 74:22]
  wire [4:0] ForwardingUnit_io_ex_reg_rd; // @[Execute.scala 75:18]
  wire [4:0] ForwardingUnit_io_mem_reg_rd; // @[Execute.scala 75:18]
  wire [4:0] ForwardingUnit_io_reg_rs1; // @[Execute.scala 75:18]
  wire [4:0] ForwardingUnit_io_reg_rs2; // @[Execute.scala 75:18]
  wire  ForwardingUnit_io_ex_regWrite; // @[Execute.scala 75:18]
  wire  ForwardingUnit_io_mem_regWrite; // @[Execute.scala 75:18]
  wire [4:0] ForwardingUnit_io_ex_reg_vd; // @[Execute.scala 75:18]
  wire [4:0] ForwardingUnit_io_mem_reg_vd; // @[Execute.scala 75:18]
  wire [4:0] ForwardingUnit_io_reg_vs1; // @[Execute.scala 75:18]
  wire [4:0] ForwardingUnit_io_reg_vs2; // @[Execute.scala 75:18]
  wire [4:0] ForwardingUnit_io_reg_vs3; // @[Execute.scala 75:18]
  wire  ForwardingUnit_io_ex_reg_write; // @[Execute.scala 75:18]
  wire  ForwardingUnit_io_mem_reg_write; // @[Execute.scala 75:18]
  wire [1:0] ForwardingUnit_io_forwardA; // @[Execute.scala 75:18]
  wire [1:0] ForwardingUnit_io_forwardB; // @[Execute.scala 75:18]
  wire [1:0] ForwardingUnit_io_forwardC; // @[Execute.scala 75:18]
  wire [2:0] Vec_aluCtl_io_func3; // @[Execute.scala 125:26]
  wire [2:0] Vec_aluCtl_io_aluOp; // @[Execute.scala 125:26]
  wire [5:0] Vec_aluCtl_io_func6; // @[Execute.scala 125:26]
  wire [8:0] Vec_aluCtl_io_aluc; // @[Execute.scala 125:26]
  wire [31:0] vec_alu_io_in_A; // @[Execute.scala 136:23]
  wire [31:0] vec_alu_io_in_B; // @[Execute.scala 136:23]
  wire [127:0] vec_alu_io_vs1; // @[Execute.scala 136:23]
  wire [127:0] vec_alu_io_vs2; // @[Execute.scala 136:23]
  wire [127:0] vec_alu_io_vs0; // @[Execute.scala 136:23]
  wire [127:0] vec_alu_io_vd; // @[Execute.scala 136:23]
  wire [31:0] vec_alu_io_vl; // @[Execute.scala 136:23]
  wire [31:0] vec_alu_io_vstart; // @[Execute.scala 136:23]
  wire  vec_alu_io_vma; // @[Execute.scala 136:23]
  wire  vec_alu_io_vta; // @[Execute.scala 136:23]
  wire  vec_alu_io_vm; // @[Execute.scala 136:23]
  wire [4:0] vec_alu_io_vd_addr; // @[Execute.scala 136:23]
  wire [8:0] vec_alu_io_aluc; // @[Execute.scala 136:23]
  wire [2:0] vec_alu_io_sew; // @[Execute.scala 136:23]
  wire  vec_alu_io_v_ins; // @[Execute.scala 136:23]
  wire [127:0] vec_alu_io_v_output; // @[Execute.scala 136:23]
  wire [127:0] vec_alu_io_vs0_o; // @[Execute.scala 136:23]
  wire [127:0] vec_alu_io_vs3; // @[Execute.scala 136:23]
  wire [31:0] vec_config_io_zimm; // @[Execute.scala 203:26]
  wire [4:0] vec_config_io_rs1; // @[Execute.scala 203:26]
  wire [4:0] vec_config_io_rd; // @[Execute.scala 203:26]
  wire [31:0] vec_config_io_rs1_readdata; // @[Execute.scala 203:26]
  wire [31:0] vec_config_io_current_vl; // @[Execute.scala 203:26]
  wire [31:0] vec_config_io_lmul; // @[Execute.scala 203:26]
  wire [31:0] vec_config_io_vl; // @[Execute.scala 203:26]
  wire [4:0] vec_config_io_rd_out; // @[Execute.scala 203:26]
  wire [31:0] vec_config_io_avl_o; // @[Execute.scala 203:26]
  wire [31:0] vec_config_io_valmax_o; // @[Execute.scala 203:26]
  wire  mdu_clock; // @[Execute.scala 235:22]
  wire  mdu_reset; // @[Execute.scala 235:22]
  wire [31:0] mdu_io_src_a; // @[Execute.scala 235:22]
  wire [31:0] mdu_io_src_b; // @[Execute.scala 235:22]
  wire [4:0] mdu_io_op; // @[Execute.scala 235:22]
  wire  mdu_io_valid; // @[Execute.scala 235:22]
  wire  mdu_io_ready; // @[Execute.scala 235:22]
  wire  mdu_io_output_valid; // @[Execute.scala 235:22]
  wire [31:0] mdu_io_output_bits; // @[Execute.scala 235:22]
  wire  _inputMux1_T = ForwardingUnit_io_forwardA == 2'h0; // @[Execute.scala 97:20]
  wire  _inputMux1_T_1 = ForwardingUnit_io_forwardA == 2'h1; // @[Execute.scala 98:20]
  wire  _inputMux1_T_2 = ForwardingUnit_io_forwardA == 2'h2; // @[Execute.scala 99:20]
  wire [31:0] _inputMux1_T_3 = _inputMux1_T_2 ? io_wb_result : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _inputMux1_T_4 = _inputMux1_T_1 ? io_mem_result : _inputMux1_T_3; // @[Mux.scala 101:16]
  wire [31:0] inputMux1 = _inputMux1_T ? io_readData1 : _inputMux1_T_4; // @[Mux.scala 101:16]
  wire  _inputMux2_T = ForwardingUnit_io_forwardB == 2'h0; // @[Execute.scala 105:20]
  wire  _inputMux2_T_1 = ForwardingUnit_io_forwardB == 2'h1; // @[Execute.scala 106:20]
  wire  _inputMux2_T_2 = ForwardingUnit_io_forwardB == 2'h2; // @[Execute.scala 107:20]
  wire [31:0] _inputMux2_T_3 = _inputMux2_T_2 ? io_wb_result : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _inputMux2_T_4 = _inputMux2_T_1 ? io_mem_result : _inputMux2_T_3; // @[Mux.scala 101:16]
  wire [31:0] inputMux2 = _inputMux2_T ? io_readData2 : _inputMux2_T_4; // @[Mux.scala 101:16]
  wire  _aluIn1_T = io_ctl_aluSrc1 == 2'h1; // @[Execute.scala 114:23]
  wire  _aluIn1_T_1 = io_ctl_aluSrc1 == 2'h2; // @[Execute.scala 115:23]
  wire [31:0] _aluIn1_T_2 = _aluIn1_T_1 ? 32'h0 : inputMux1; // @[Mux.scala 101:16]
  wire [31:0] aluIn1 = _aluIn1_T ? io_pcAddress : _aluIn1_T_2; // @[Mux.scala 101:16]
  wire [31:0] aluIn2 = io_ctl_aluSrc ? inputMux2 : io_immediate; // @[Execute.scala 118:19]
  wire [31:0] _GEN_0 = _inputMux1_T_2 ? $signed(io_wb_result) : $signed(io_readData1); // @[Execute.scala 142:34 143:21 145:21]
  wire [31:0] _GEN_1 = _inputMux1_T_1 ? $signed(io_mem_result) : $signed(_GEN_0); // @[Execute.scala 140:28 141:21]
  wire [127:0] _GEN_2 = _inputMux1_T_2 ? $signed(io_vec_wb_res) : $signed(io_vs1_data); // @[Execute.scala 150:34 151:20 153:20]
  wire [127:0] _GEN_4 = ForwardingUnit_io_forwardC == 2'h2 ? $signed(io_vec_wb_res) : $signed(io_vs3_data); // @[Execute.scala 159:34 160:19 163:19]
  wire [31:0] _GEN_6 = _inputMux2_T_2 ? $signed(io_wb_result) : $signed(io_readData2); // @[Execute.scala 174:36 175:23 177:23]
  wire [31:0] _GEN_7 = _inputMux2_T_1 ? $signed(io_mem_result) : $signed(_GEN_6); // @[Execute.scala 172:30 173:23]
  wire [31:0] _GEN_8 = io_v_ctl_exsel == 4'h4 & io_v_ctl_opBsel ? $signed(io_v_addi_imm) : $signed(_GEN_7); // @[Execute.scala 169:70 170:21]
  wire [127:0] _GEN_10 = _inputMux2_T_2 ? $signed(io_vec_wb_res) : $signed(io_vs2_data); // @[Execute.scala 183:34 184:20 186:20]
  wire [10:0] _GEN_14 = io_v_ctl_vset ? io_id_ex_ins[30:20] : 11'h0; // @[Execute.scala 205:31 206:24 218:24]
  reg [31:0] src_a_reg; // @[Execute.scala 242:28]
  reg [31:0] src_b_reg; // @[Execute.scala 243:28]
  reg [2:0] op_reg; // @[Execute.scala 244:28]
  reg  div_en; // @[Execute.scala 245:28]
  reg [5:0] f7_reg; // @[Execute.scala 246:28]
  reg [5:0] counter; // @[Execute.scala 247:28]
  wire  _T_23 = io_func7 == 7'h1; // @[Execute.scala 249:19]
  wire  _T_31 = io_func7 == 7'h1 & (io_func3 == 3'h0 | io_func3 == 3'h1 | io_func3 == 3'h2 | io_func3 == 3'h3); // @[Execute.scala 249:27]
  wire  _T_42 = _T_23 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7); // @[Execute.scala 255:38]
  wire  _GEN_20 = _T_23 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7) | _T_31; // @[Execute.scala 255:120 256:20]
  wire  _GEN_21 = _T_23 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7) | div_en
    ; // @[Execute.scala 255:120 257:14 245:28]
  wire [6:0] _GEN_25 = _T_23 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7) ?
    io_func7 : {{1'd0}, f7_reg}; // @[Execute.scala 255:120 261:14 246:28]
  wire [5:0] _counter_T_1 = counter + 6'h1; // @[Execute.scala 274:28]
  wire  _GEN_27 = counter < 6'h20 | _T_42; // @[Execute.scala 268:28 269:18]
  wire  _GEN_32 = counter < 6'h20 & _GEN_20; // @[Execute.scala 268:28 276:22]
  wire  _GEN_33 = counter < 6'h20 & _GEN_21; // @[Execute.scala 268:28 277:22]
  wire [2:0] _GEN_37 = div_en ? op_reg : io_func3; // @[Execute.scala 266:17 238:18]
  wire [31:0] _io_ALUresult_T = mdu_io_output_valid ? mdu_io_output_bits : 32'h0; // @[Execute.scala 286:26]
  wire [31:0] _GEN_41 = _T_23 & mdu_io_ready ? _io_ALUresult_T : alu_io_result; // @[Execute.scala 288:49 289:20 291:29]
  wire [6:0] _GEN_43 = reset ? 7'h0 : _GEN_25; // @[Execute.scala 246:{28,28}]
  ALU alu ( // @[Execute.scala 73:19]
    .io_input1(alu_io_input1),
    .io_input2(alu_io_input2),
    .io_aluCtl(alu_io_aluCtl),
    .io_result(alu_io_result)
  );
  AluControl aluCtl ( // @[Execute.scala 74:22]
    .io_aluOp(aluCtl_io_aluOp),
    .io_f7(aluCtl_io_f7),
    .io_f3(aluCtl_io_f3),
    .io_aluSrc(aluCtl_io_aluSrc),
    .io_out(aluCtl_io_out)
  );
  ForwardingUnit ForwardingUnit ( // @[Execute.scala 75:18]
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
  Alu_Control Vec_aluCtl ( // @[Execute.scala 125:26]
    .io_func3(Vec_aluCtl_io_func3),
    .io_aluOp(Vec_aluCtl_io_aluOp),
    .io_func6(Vec_aluCtl_io_func6),
    .io_aluc(Vec_aluCtl_io_aluc)
  );
  VALU vec_alu ( // @[Execute.scala 136:23]
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
    .io_vs0_o(vec_alu_io_vs0_o),
    .io_vs3(vec_alu_io_vs3)
  );
  configure vec_config ( // @[Execute.scala 203:26]
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
  MDU mdu ( // @[Execute.scala 235:22]
    .clock(mdu_clock),
    .reset(mdu_reset),
    .io_src_a(mdu_io_src_a),
    .io_src_b(mdu_io_src_b),
    .io_op(mdu_io_op),
    .io_valid(mdu_io_valid),
    .io_ready(mdu_io_ready),
    .io_output_valid(mdu_io_output_valid),
    .io_output_bits(mdu_io_output_bits)
  );
  assign io_vec_alu_res = vec_alu_io_v_output; // @[Execute.scala 199:18]
  assign io_vec_vl = vec_config_io_vl; // @[Execute.scala 225:13]
  assign io_vec_rd_out = vec_config_io_rd_out; // @[Execute.scala 227:17]
  assign io_vec_avl_o = vec_config_io_avl_o; // @[Execute.scala 228:16]
  assign io_vec_valmax_o = vec_config_io_valmax_o; // @[Execute.scala 229:19]
  assign io_vs3_data_o = ForwardingUnit_io_forwardC == 2'h1 ? $signed(io_vec_mem_res) : $signed(_GEN_4); // @[Execute.scala 156:28 157:19]
  assign io_writeData = _inputMux2_T ? io_readData2 : _inputMux2_T_4; // @[Mux.scala 101:16]
  assign io_ALUresult = div_en & f7_reg == 6'h1 & mdu_io_ready ? _io_ALUresult_T : _GEN_41; // @[Execute.scala 285:51 286:20]
  assign io_vs0_o = vec_alu_io_vs0_o; // @[Execute.scala 200:12]
  assign io_stall = div_en ? _GEN_27 : _T_42; // @[Execute.scala 266:17]
  assign alu_io_input1 = _aluIn1_T ? io_pcAddress : _aluIn1_T_2; // @[Mux.scala 101:16]
  assign alu_io_input2 = io_ctl_aluSrc ? inputMux2 : io_immediate; // @[Execute.scala 118:19]
  assign alu_io_aluCtl = aluCtl_io_out; // @[Execute.scala 133:17]
  assign aluCtl_io_aluOp = io_ctl_aluOp; // @[Execute.scala 122:19]
  assign aluCtl_io_f7 = io_func7[5]; // @[Execute.scala 121:27]
  assign aluCtl_io_f3 = io_func3; // @[Execute.scala 120:16]
  assign aluCtl_io_aluSrc = io_ctl_aluSrc; // @[Execute.scala 123:20]
  assign ForwardingUnit_io_ex_reg_rd = io_ex_mem_ins[11:7]; // @[Execute.scala 81:32]
  assign ForwardingUnit_io_mem_reg_rd = io_mem_wb_ins[11:7]; // @[Execute.scala 82:33]
  assign ForwardingUnit_io_reg_rs1 = io_id_ex_ins[19:15]; // @[Execute.scala 83:29]
  assign ForwardingUnit_io_reg_rs2 = io_id_ex_ins[24:20]; // @[Execute.scala 84:29]
  assign ForwardingUnit_io_ex_regWrite = io_ex_mem_regWrite; // @[Execute.scala 79:18]
  assign ForwardingUnit_io_mem_regWrite = io_mem_wb_regWrite; // @[Execute.scala 80:19]
  assign ForwardingUnit_io_ex_reg_vd = io_fu_ex_reg_vd; // @[Execute.scala 86:16]
  assign ForwardingUnit_io_mem_reg_vd = io_fu_mem_reg_vd; // @[Execute.scala 87:17]
  assign ForwardingUnit_io_reg_vs1 = io_fu_reg_vs1; // @[Execute.scala 88:14]
  assign ForwardingUnit_io_reg_vs2 = io_fu_reg_vs2; // @[Execute.scala 89:14]
  assign ForwardingUnit_io_reg_vs3 = io_fu_reg_vs3; // @[Execute.scala 90:14]
  assign ForwardingUnit_io_ex_reg_write = io_fu_ex_reg_write; // @[Execute.scala 91:19]
  assign ForwardingUnit_io_mem_reg_write = io_fu_mem_reg_write; // @[Execute.scala 92:20]
  assign Vec_aluCtl_io_func3 = io_func3; // @[Execute.scala 127:23]
  assign Vec_aluCtl_io_aluOp = io_v_ctl_aluop; // @[Execute.scala 129:23]
  assign Vec_aluCtl_io_func6 = io_func6; // @[Execute.scala 128:23]
  assign vec_alu_io_in_A = _inputMux1_T_1 ? $signed(io_mem_result) : $signed(_GEN_0); // @[Execute.scala 140:28 141:21]
  assign vec_alu_io_in_B = io_v_ctl_exsel == 4'h3 & io_v_ctl_opBsel ? $signed(io_zimm) : $signed(_GEN_8); // @[Execute.scala 167:64 168:21]
  assign vec_alu_io_vs1 = _inputMux1_T_1 ? $signed(io_vec_mem_res) : $signed(_GEN_2); // @[Execute.scala 148:28 149:20]
  assign vec_alu_io_vs2 = _inputMux2_T_1 ? $signed(io_vec_mem_res) : $signed(_GEN_10); // @[Execute.scala 181:28 182:20]
  assign vec_alu_io_vs0 = io_vs0; // @[Execute.scala 197:18]
  assign vec_alu_io_vd = io_vs3_data; // @[Execute.scala 196:17]
  assign vec_alu_io_vl = io_vl; // @[Execute.scala 192:26]
  assign vec_alu_io_vstart = io_vstart; // @[Execute.scala 198:34]
  assign vec_alu_io_vma = io_vma; // @[Execute.scala 194:18]
  assign vec_alu_io_vta = io_vta; // @[Execute.scala 193:18]
  assign vec_alu_io_vm = io_vm; // @[Execute.scala 195:17]
  assign vec_alu_io_vd_addr = io_vd_addr; // @[Execute.scala 189:22]
  assign vec_alu_io_aluc = Vec_aluCtl_io_aluc; // @[Execute.scala 188:19]
  assign vec_alu_io_sew = io_v_sew; // @[Execute.scala 190:18]
  assign vec_alu_io_v_ins = io_v_ctl_v_ins; // @[Execute.scala 191:20]
  assign vec_config_io_zimm = {{21'd0}, _GEN_14};
  assign vec_config_io_rs1 = io_v_ctl_vset ? io_id_ex_ins[19:15] : 5'h0; // @[Execute.scala 205:31 207:23 219:23]
  assign vec_config_io_rd = io_v_ctl_vset ? io_id_ex_ins[11:7] : 5'h0; // @[Execute.scala 205:31 208:22 220:22]
  assign vec_config_io_rs1_readdata = io_v_ctl_vset ? $signed(_GEN_1) : $signed(32'sh0); // @[Execute.scala 205:31 221:32]
  assign vec_config_io_current_vl = io_vl; // @[Execute.scala 205:31 216:30 222:30]
  assign mdu_clock = clock;
  assign mdu_reset = reset;
  assign mdu_io_src_a = div_en ? src_a_reg : aluIn1; // @[Execute.scala 266:17 236:18]
  assign mdu_io_src_b = div_en ? src_b_reg : aluIn2; // @[Execute.scala 266:17 237:18]
  assign mdu_io_op = {{2'd0}, _GEN_37};
  assign mdu_io_valid = div_en ? _GEN_32 : _GEN_20; // @[Execute.scala 266:17]
  always @(posedge clock) begin
    if (reset) begin // @[Execute.scala 242:28]
      src_a_reg <= 32'h0; // @[Execute.scala 242:28]
    end else if (_T_23 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7)) begin // @[Execute.scala 255:120]
      if (_aluIn1_T) begin // @[Mux.scala 101:16]
        src_a_reg <= io_pcAddress;
      end else if (_aluIn1_T_1) begin // @[Mux.scala 101:16]
        src_a_reg <= 32'h0;
      end else begin
        src_a_reg <= inputMux1;
      end
    end
    if (reset) begin // @[Execute.scala 243:28]
      src_b_reg <= 32'h0; // @[Execute.scala 243:28]
    end else if (_T_23 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7)) begin // @[Execute.scala 255:120]
      if (io_ctl_aluSrc) begin // @[Execute.scala 118:19]
        if (_inputMux2_T) begin // @[Mux.scala 101:16]
          src_b_reg <= io_readData2;
        end else begin
          src_b_reg <= _inputMux2_T_4;
        end
      end else begin
        src_b_reg <= io_immediate;
      end
    end
    if (reset) begin // @[Execute.scala 244:28]
      op_reg <= 3'h0; // @[Execute.scala 244:28]
    end else if (_T_23 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7)) begin // @[Execute.scala 255:120]
      op_reg <= io_func3; // @[Execute.scala 260:14]
    end
    if (reset) begin // @[Execute.scala 245:28]
      div_en <= 1'h0; // @[Execute.scala 245:28]
    end else if (div_en) begin // @[Execute.scala 266:17]
      div_en <= _GEN_33;
    end else begin
      div_en <= _GEN_21;
    end
    f7_reg <= _GEN_43[5:0]; // @[Execute.scala 246:{28,28}]
    if (reset) begin // @[Execute.scala 247:28]
      counter <= 6'h0; // @[Execute.scala 247:28]
    end else if (div_en) begin // @[Execute.scala 266:17]
      if (counter < 6'h20) begin // @[Execute.scala 268:28]
        counter <= _counter_T_1; // @[Execute.scala 274:17]
      end else begin
        counter <= 6'h0; // @[Execute.scala 281:17]
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
  src_a_reg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  src_b_reg = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  op_reg = _RAND_2[2:0];
  _RAND_3 = {1{`RANDOM}};
  div_en = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  f7_reg = _RAND_4[5:0];
  _RAND_5 = {1{`RANDOM}};
  counter = _RAND_5[5:0];
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
  wire  _T_4 = offsetSW == 2'h0; // @[MemoryFetch.scala 58:19]
  wire  _T_5 = offsetSW == 2'h1; // @[MemoryFetch.scala 60:25]
  wire [7:0] _GEN_4 = offsetSW == 2'h2 ? io_writeData[15:8] : io_writeData[15:8]; // @[MemoryFetch.scala 66:33 67:16 73:16]
  wire [7:0] _GEN_5 = offsetSW == 2'h2 ? io_writeData[23:16] : io_writeData[23:16]; // @[MemoryFetch.scala 66:33 68:16 74:16]
  wire [7:0] _GEN_6 = offsetSW == 2'h2 ? io_writeData[7:0] : io_writeData[31:24]; // @[MemoryFetch.scala 66:33 69:16 75:16]
  wire [7:0] _GEN_7 = offsetSW == 2'h2 ? io_writeData[31:24] : io_writeData[7:0]; // @[MemoryFetch.scala 66:33 70:16 76:16]
  wire [3:0] _GEN_8 = offsetSW == 2'h2 ? 4'h4 : 4'h8; // @[MemoryFetch.scala 66:33 71:38 77:38]
  wire [7:0] _GEN_9 = offsetSW == 2'h1 ? io_writeData[15:8] : _GEN_4; // @[MemoryFetch.scala 60:33 61:16]
  wire [7:0] _GEN_10 = offsetSW == 2'h1 ? io_writeData[7:0] : _GEN_5; // @[MemoryFetch.scala 60:33 62:16]
  wire [7:0] _GEN_11 = offsetSW == 2'h1 ? io_writeData[23:16] : _GEN_6; // @[MemoryFetch.scala 60:33 63:16]
  wire [7:0] _GEN_12 = offsetSW == 2'h1 ? io_writeData[31:24] : _GEN_7; // @[MemoryFetch.scala 60:33 64:16]
  wire [3:0] _GEN_13 = offsetSW == 2'h1 ? 4'h2 : _GEN_8; // @[MemoryFetch.scala 60:33 65:38]
  wire [3:0] _GEN_14 = offsetSW == 2'h0 ? 4'h1 : _GEN_13; // @[MemoryFetch.scala 58:27 59:38]
  wire [7:0] _GEN_15 = offsetSW == 2'h0 ? io_writeData[7:0] : _GEN_9; // @[MemoryFetch.scala 51:12 58:27]
  wire [7:0] _GEN_16 = offsetSW == 2'h0 ? io_writeData[15:8] : _GEN_10; // @[MemoryFetch.scala 52:12 58:27]
  wire [7:0] _GEN_17 = offsetSW == 2'h0 ? io_writeData[23:16] : _GEN_11; // @[MemoryFetch.scala 53:12 58:27]
  wire [7:0] _GEN_18 = offsetSW == 2'h0 ? io_writeData[31:24] : _GEN_12; // @[MemoryFetch.scala 54:12 58:27]
  wire [3:0] _GEN_19 = _T_5 ? 4'h6 : 4'hc; // @[MemoryFetch.scala 86:33 88:38 95:38]
  wire [7:0] _GEN_20 = _T_5 ? io_writeData[23:16] : io_writeData[23:16]; // @[MemoryFetch.scala 86:33 89:16 98:16]
  wire [7:0] _GEN_21 = _T_5 ? io_writeData[7:0] : io_writeData[31:24]; // @[MemoryFetch.scala 86:33 90:16 99:16]
  wire [7:0] _GEN_22 = _T_5 ? io_writeData[15:8] : io_writeData[7:0]; // @[MemoryFetch.scala 86:33 91:16 96:16]
  wire [7:0] _GEN_23 = _T_5 ? io_writeData[31:24] : io_writeData[15:8]; // @[MemoryFetch.scala 86:33 92:16 97:16]
  wire [3:0] _GEN_24 = _T_4 ? 4'h3 : _GEN_19; // @[MemoryFetch.scala 83:27 85:38]
  wire [7:0] _GEN_25 = _T_4 ? io_writeData[7:0] : _GEN_20; // @[MemoryFetch.scala 51:12 83:27]
  wire [7:0] _GEN_26 = _T_4 ? io_writeData[15:8] : _GEN_21; // @[MemoryFetch.scala 52:12 83:27]
  wire [7:0] _GEN_27 = _T_4 ? io_writeData[23:16] : _GEN_22; // @[MemoryFetch.scala 53:12 83:27]
  wire [7:0] _GEN_28 = _T_4 ? io_writeData[31:24] : _GEN_23; // @[MemoryFetch.scala 54:12 83:27]
  wire [3:0] _GEN_29 = io_writeEnable & io_f3 == 3'h1 ? _GEN_24 : 4'hf; // @[MemoryFetch.scala 104:36 81:52]
  wire [7:0] _GEN_30 = io_writeEnable & io_f3 == 3'h1 ? _GEN_25 : io_writeData[7:0]; // @[MemoryFetch.scala 51:12 81:52]
  wire [7:0] _GEN_31 = io_writeEnable & io_f3 == 3'h1 ? _GEN_26 : io_writeData[15:8]; // @[MemoryFetch.scala 52:12 81:52]
  wire [7:0] _GEN_32 = io_writeEnable & io_f3 == 3'h1 ? _GEN_27 : io_writeData[23:16]; // @[MemoryFetch.scala 53:12 81:52]
  wire [7:0] _GEN_33 = io_writeEnable & io_f3 == 3'h1 ? _GEN_28 : io_writeData[31:24]; // @[MemoryFetch.scala 54:12 81:52]
  wire [7:0] wdata_0 = io_writeEnable & io_f3 == 3'h0 ? _GEN_15 : _GEN_30; // @[MemoryFetch.scala 57:45]
  wire [7:0] wdata_1 = io_writeEnable & io_f3 == 3'h0 ? _GEN_16 : _GEN_31; // @[MemoryFetch.scala 57:45]
  wire [7:0] wdata_2 = io_writeEnable & io_f3 == 3'h0 ? _GEN_17 : _GEN_32; // @[MemoryFetch.scala 57:45]
  wire [7:0] wdata_3 = io_writeEnable & io_f3 == 3'h0 ? _GEN_18 : _GEN_33; // @[MemoryFetch.scala 57:45]
  wire [15:0] io_dccmReq_bits_dataRequest_lo = {wdata_1,wdata_0}; // @[MemoryFetch.scala 107:46]
  wire [15:0] io_dccmReq_bits_dataRequest_hi = {wdata_3,wdata_2}; // @[MemoryFetch.scala 107:46]
  wire [31:0] _io_dccmReq_bits_addrRequest_T = io_aluResultIn & 32'h1fff; // @[MemoryFetch.scala 108:50]
  wire [31:0] rdata = io_dccmRsp_valid ? io_dccmRsp_bits_dataResponse : 32'h0; // @[MemoryFetch.scala 114:15]
  wire  _T_13 = offset == 2'h0; // @[MemoryFetch.scala 124:21]
  wire [23:0] _io_readData_T_2 = rdata[7] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_4 = {_io_readData_T_2,rdata[7:0]}; // @[Cat.scala 33:92]
  wire  _T_14 = offset == 2'h1; // @[MemoryFetch.scala 127:28]
  wire [23:0] _io_readData_T_7 = rdata[15] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_9 = {_io_readData_T_7,rdata[15:8]}; // @[Cat.scala 33:92]
  wire  _T_15 = offset == 2'h2; // @[MemoryFetch.scala 130:28]
  wire [23:0] _io_readData_T_12 = rdata[23] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_14 = {_io_readData_T_12,rdata[23:16]}; // @[Cat.scala 33:92]
  wire [23:0] _io_readData_T_17 = rdata[31] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_19 = {_io_readData_T_17,rdata[31:24]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_40 = offset == 2'h2 ? _io_readData_T_14 : _io_readData_T_19; // @[MemoryFetch.scala 130:41 132:23]
  wire [31:0] _GEN_41 = offset == 2'h1 ? _io_readData_T_9 : _GEN_40; // @[MemoryFetch.scala 127:41 129:23]
  wire [31:0] _GEN_42 = offset == 2'h0 ? _io_readData_T_4 : _GEN_41; // @[MemoryFetch.scala 124:34 126:23]
  wire [31:0] _io_readData_T_22 = {24'h0,rdata[7:0]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_25 = {24'h0,rdata[15:8]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_28 = {24'h0,rdata[23:16]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_31 = {24'h0,rdata[31:24]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_44 = _T_15 ? _io_readData_T_28 : _io_readData_T_31; // @[MemoryFetch.scala 149:40 151:23]
  wire [31:0] _GEN_45 = _T_14 ? _io_readData_T_25 : _GEN_44; // @[MemoryFetch.scala 146:40 148:23]
  wire [31:0] _GEN_46 = _T_13 ? _io_readData_T_22 : _GEN_45; // @[MemoryFetch.scala 143:34 145:23]
  wire [31:0] _io_readData_T_34 = {16'h0,rdata[15:0]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_37 = {16'h0,rdata[23:8]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_40 = {16'h0,rdata[31:16]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_48 = _T_14 ? _io_readData_T_37 : _io_readData_T_40; // @[MemoryFetch.scala 165:41 167:23]
  wire [31:0] _GEN_49 = _T_13 ? _io_readData_T_34 : _GEN_48; // @[MemoryFetch.scala 162:34 164:23]
  wire [15:0] _io_readData_T_43 = rdata[15] ? 16'hffff : 16'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_45 = {_io_readData_T_43,rdata[15:0]}; // @[Cat.scala 33:92]
  wire [15:0] _io_readData_T_48 = rdata[23] ? 16'hffff : 16'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_50 = {_io_readData_T_48,rdata[23:8]}; // @[Cat.scala 33:92]
  wire [15:0] _io_readData_T_53 = rdata[31] ? 16'hffff : 16'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_55 = {_io_readData_T_53,rdata[31:16]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_51 = _T_14 ? _io_readData_T_50 : _io_readData_T_55; // @[MemoryFetch.scala 181:41 183:23]
  wire [31:0] _GEN_52 = _T_13 ? _io_readData_T_45 : _GEN_51; // @[MemoryFetch.scala 178:34 180:23]
  wire [31:0] _GEN_54 = funct3 == 3'h5 ? _GEN_49 : _GEN_52; // @[MemoryFetch.scala 160:38]
  wire [31:0] _GEN_55 = funct3 == 3'h4 ? _GEN_46 : _GEN_54; // @[MemoryFetch.scala 141:38]
  wire [31:0] _GEN_56 = funct3 == 3'h0 ? _GEN_42 : _GEN_55; // @[MemoryFetch.scala 122:38]
  wire  _T_32 = io_writeEnable & io_aluResultIn[31:28] == 4'h8; // @[MemoryFetch.scala 201:23]
  wire [31:0] addr = io_v_ins ? io_v_addr : io_aluResultIn; // @[MemoryFetch.scala 29:25 30:10 33:10]
  wire [31:0] data = io_v_ins ? io_v_writeData : io_writeData; // @[MemoryFetch.scala 29:25 31:10 34:10]
  assign io_readData = funct3 == 3'h2 ? rdata : _GEN_56; // @[MemoryFetch.scala 118:31 120:19]
  assign io_dccmReq_valid = io_writeEnable | io_readEnable; // @[MemoryFetch.scala 110:42]
  assign io_dccmReq_bits_addrRequest = {{2'd0}, _io_dccmReq_bits_addrRequest_T[31:2]}; // @[MemoryFetch.scala 108:31]
  assign io_dccmReq_bits_dataRequest = {io_dccmReq_bits_dataRequest_hi,io_dccmReq_bits_dataRequest_lo}; // @[MemoryFetch.scala 107:46]
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
        if (_T_32 & ~reset) begin
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
  wire [31:0] _io_pc4_T_2 = $signed(pc_reg) + 32'sh4; // @[PC.scala 16:41]
  wire [31:0] _io_pc2_T_2 = $signed(pc_reg) + 32'sh2; // @[PC.scala 17:41]
  assign io_out = pc_reg; // @[PC.scala 15:10]
  assign io_pc4 = io_halt ? $signed(pc_reg) : $signed(_io_pc4_T_2); // @[PC.scala 16:16]
  assign io_pc2 = io_halt ? $signed(pc_reg) : $signed(_io_pc2_T_2); // @[PC.scala 17:16]
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
  wire [3:0] _sew_T_1 = 3'h0 == vsew ? 4'h8 : 4'h0; // @[Mux.scala 81:58]
  wire [4:0] _sew_T_3 = 3'h1 == vsew ? 5'h10 : {{1'd0}, _sew_T_1}; // @[Mux.scala 81:58]
  wire [5:0] _sew_T_5 = 3'h2 == vsew ? 6'h20 : {{1'd0}, _sew_T_3}; // @[Mux.scala 81:58]
  wire [6:0] sew = 3'h3 == vsew ? 7'h40 : {{1'd0}, _sew_T_5}; // @[Mux.scala 81:58]
  wire [1:0] _lmul_T_3 = 3'h1 == vlmul ? 2'h2 : {{1'd0}, 3'h0 == vlmul}; // @[Mux.scala 81:58]
  wire [2:0] _lmul_T_5 = 3'h2 == vlmul ? 3'h4 : {{1'd0}, _lmul_T_3}; // @[Mux.scala 81:58]
  wire [3:0] lmul = 3'h3 == vlmul ? 4'h8 : {{1'd0}, _lmul_T_5}; // @[Mux.scala 81:58]
  wire [3:0] _eew_T_1 = 3'h0 == width ? 4'h8 : 4'h0; // @[Mux.scala 81:58]
  wire [4:0] _eew_T_3 = 3'h5 == width ? 5'h10 : {{1'd0}, _eew_T_1}; // @[Mux.scala 81:58]
  wire [5:0] _eew_T_5 = 3'h6 == width ? 6'h20 : {{1'd0}, _eew_T_3}; // @[Mux.scala 81:58]
  wire [6:0] eew = 3'h7 == width ? 7'h40 : {{1'd0}, _eew_T_5}; // @[Mux.scala 81:58]
  reg [3:0] emul; // @[vlsu.scala 68:17]
  wire  _T = eew == sew; // @[vlsu.scala 71:8]
  wire  _T_1 = lmul == 4'h1; // @[vlsu.scala 71:25]
  wire  _T_3 = eew == 7'h8; // @[vlsu.scala 72:10]
  wire  _T_4 = sew == 7'h10; // @[vlsu.scala 72:25]
  wire  _T_6 = eew == 7'h10; // @[vlsu.scala 72:43]
  wire  _T_7 = sew == 7'h20; // @[vlsu.scala 72:59]
  wire  _T_10 = eew == 7'h20; // @[vlsu.scala 72:77]
  wire  _T_11 = sew == 7'h40; // @[vlsu.scala 72:93]
  wire  _T_13 = eew == 7'h8 & sew == 7'h10 | eew == 7'h10 & sew == 7'h20 | eew == 7'h20 & sew == 7'h40; // @[vlsu.scala 72:69]
  wire  _T_14 = lmul == 4'h2; // @[vlsu.scala 72:112]
  wire  _T_15 = (eew == 7'h8 & sew == 7'h10 | eew == 7'h10 & sew == 7'h20 | eew == 7'h20 & sew == 7'h40) & lmul == 4'h2; // @[vlsu.scala 72:104]
  wire  _T_16 = eew == sew & lmul == 4'h1 | _T_15; // @[vlsu.scala 71:34]
  wire  _T_23 = _T_3 & _T_7 | _T_6 & _T_11; // @[vlsu.scala 73:35]
  wire  _T_24 = lmul == 4'h4; // @[vlsu.scala 73:78]
  wire  _T_25 = (_T_3 & _T_7 | _T_6 & _T_11) & lmul == 4'h4; // @[vlsu.scala 73:70]
  wire  _T_26 = _T_16 | _T_25; // @[vlsu.scala 72:121]
  wire  _T_30 = lmul == 4'h8; // @[vlsu.scala 74:42]
  wire  _T_31 = _T_3 & _T_11 & lmul == 4'h8; // @[vlsu.scala 74:34]
  wire  _T_32 = _T_26 | _T_31; // @[vlsu.scala 73:87]
  wire  _T_34 = sew == 7'h8; // @[vlsu.scala 78:26]
  wire  _T_35 = _T_6 & sew == 7'h8; // @[vlsu.scala 78:19]
  wire  _T_38 = _T_10 & _T_4; // @[vlsu.scala 78:52]
  wire  _T_40 = eew == 7'h40; // @[vlsu.scala 78:77]
  wire  _T_42 = eew == 7'h40 & _T_7; // @[vlsu.scala 78:86]
  wire  _T_43 = _T_6 & sew == 7'h8 | _T_10 & _T_4 | eew == 7'h40 & _T_7; // @[vlsu.scala 78:69]
  wire  _T_48 = _T & _T_14; // @[vlsu.scala 79:16]
  wire  _T_49 = (_T_6 & sew == 7'h8 | _T_10 & _T_4 | eew == 7'h40 & _T_7) & _T_1 | _T_48; // @[vlsu.scala 78:121]
  wire  _T_62 = _T_13 & _T_24; // @[vlsu.scala 80:104]
  wire  _T_63 = _T_49 | _T_62; // @[vlsu.scala 79:33]
  wire  _T_72 = _T_23 & _T_30; // @[vlsu.scala 81:70]
  wire  _T_73 = _T_63 | _T_72; // @[vlsu.scala 80:121]
  wire  _T_80 = _T_10 & _T_34 | _T_40 & _T_4; // @[vlsu.scala 85:35]
  wire  _T_95 = _T_43 & _T_14; // @[vlsu.scala 86:104]
  wire  _T_96 = (_T_10 & _T_34 | _T_40 & _T_4) & _T_1 | _T_95; // @[vlsu.scala 85:87]
  wire  _T_99 = _T & _T_24; // @[vlsu.scala 87:16]
  wire  _T_100 = _T_96 | _T_99; // @[vlsu.scala 86:121]
  wire  _T_113 = _T_13 & _T_30; // @[vlsu.scala 88:104]
  wire  _T_114 = _T_100 | _T_113; // @[vlsu.scala 87:33]
  wire  _T_128 = _T_80 & _T_14; // @[vlsu.scala 93:70]
  wire  _T_129 = _T_40 & _T_34 & _T_1 | _T_128; // @[vlsu.scala 92:53]
  wire  _T_142 = (_T_35 | _T_42 | _T_38) & _T_24; // @[vlsu.scala 94:104]
  wire  _T_143 = _T_129 | _T_142; // @[vlsu.scala 93:87]
  wire  _T_146 = _T & _T_30; // @[vlsu.scala 95:16]
  wire  _T_147 = _T_143 | _T_146; // @[vlsu.scala 94:121]
  wire [3:0] _GEN_0 = _T_147 ? 4'h8 : emul; // @[vlsu.scala 68:17 96:3 97:9]
  wire [1:0] _io_UnitStride_T_3 = 5'h8 == lsumop ? 2'h2 : {{1'd0}, 5'h0 == lsumop}; // @[Mux.scala 81:58]
  wire [1:0] _lsuType_T_1 = 2'h1 == mop ? 2'h2 : 2'h1; // @[Mux.scala 81:58]
  wire [1:0] _lsuType_T_3 = 2'h2 == mop ? 2'h3 : _lsuType_T_1; // @[Mux.scala 81:58]
  wire [2:0] lsuType = 2'h3 == mop ? 3'h4 : {{1'd0}, _lsuType_T_3}; // @[Mux.scala 81:58]
  wire [3:0] _io_emmul_T = emul; // @[vlsu.scala 160:21]
  assign io_UnitStride = 5'hb == lsumop ? 2'h3 : _io_UnitStride_T_3; // @[Mux.scala 81:58]
  assign io_evl = 8'h10; // @[Mux.scala 81:58]
  assign io_vs3_Addr = 5'h0; // @[vlsu.scala 147:13]
  assign io_lsuType = {{1'd0}, lsuType}; // @[vlsu.scala 164:16]
  assign io_eew = {{3'd0}, eew}; // @[vlsu.scala 163:12]
  assign io_nf = 4'h0; // @[vlsu.scala 162:11]
  assign io_emmul = {{2{_io_emmul_T[3]}},_io_emmul_T}; // @[vlsu.scala 160:13]
  assign io_emul = emul; // @[vlsu.scala 161:13]
  always @(posedge clock) begin
    if (reset) begin // @[vlsu.scala 68:17]
      emul <= 4'h0; // @[vlsu.scala 68:17]
    end else if (_T_32) begin // @[vlsu.scala 75:3]
      emul <= 4'h1; // @[vlsu.scala 76:9]
    end else if (_T_73) begin // @[vlsu.scala 82:3]
      emul <= 4'h2; // @[vlsu.scala 83:9]
    end else if (_T_114) begin // @[vlsu.scala 89:3]
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
  wire [31:0] conc_instr = {io_ral_instruction_i[15:0],lhw_reg}; // @[Cat.scala 33:92]
  wire [31:0] _io_ral_address_o_T_1 = io_ral_address_i + 32'h4; // @[Realigner.scala 56:53]
  reg [1:0] stateReg; // @[Realigner.scala 68:25]
  wire  _pc4_sel_T = stateReg == 2'h1; // @[Realigner.scala 101:30]
  wire  pc4_sel = stateReg == 2'h1 & addri & ~io_ral_jmp; // @[Realigner.scala 101:50]
  wire  conc_sel = stateReg == 2'h2; // @[Realigner.scala 103:30]
  wire [31:0] _io_ral_instruction_o_T = conc_sel ? conc_instr : io_ral_instruction_i; // @[Realigner.scala 59:69]
  wire [1:0] _GEN_0 = addri ? 2'h1 : 2'h0; // @[Realigner.scala 73:20 74:18 76:18]
  wire [1:0] _GEN_1 = io_ral_jmp ? 2'h1 : 2'h2; // @[Realigner.scala 81:27 82:20 84:20]
  assign io_ral_address_o = pc4_sel ? _io_ral_address_o_T_1 : io_ral_address_i; // @[Realigner.scala 56:26]
  assign io_ral_instruction_o = _pc4_sel_T ? 32'h13 : _io_ral_instruction_o_T; // @[Realigner.scala 59:30]
  assign io_ral_halt_o = stateReg == 2'h1; // @[Realigner.scala 100:30]
  always @(posedge clock) begin
    if (reset) begin // @[Realigner.scala 49:24]
      lhw_reg <= 16'h0; // @[Realigner.scala 49:24]
    end else begin
      lhw_reg <= io_ral_instruction_i[31:16]; // @[Realigner.scala 51:11]
    end
    if (reset) begin // @[Realigner.scala 68:25]
      stateReg <= 2'h0; // @[Realigner.scala 68:25]
    end else if (2'h0 == stateReg) begin // @[Realigner.scala 71:19]
      stateReg <= _GEN_0;
    end else if (2'h1 == stateReg) begin // @[Realigner.scala 71:19]
      if (addri) begin // @[Realigner.scala 80:18]
        stateReg <= _GEN_1;
      end else begin
        stateReg <= 2'h0; // @[Realigner.scala 87:18]
      end
    end else if (2'h2 == stateReg) begin // @[Realigner.scala 71:19]
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
  wire  _T_3 = 2'h0 == io_instruction_i[15:14]; // @[CompressedDecoder.scala 42:41]
  wire [31:0] _io_instruction_o_T_5 = {2'h0,io_instruction_i[10:7],io_instruction_i[12:11],io_instruction_i[5],
    io_instruction_i[6],2'h0,10'h41,io_instruction_i[4:2],7'h13}; // @[Cat.scala 33:92]
  wire  _T_4 = 2'h1 == io_instruction_i[15:14]; // @[CompressedDecoder.scala 42:41]
  wire [31:0] _io_instruction_o_T_12 = {5'h0,io_instruction_i[5],io_instruction_i[12:10],io_instruction_i[6],4'h1,
    io_instruction_i[9:7],3'h2,2'h1,io_instruction_i[4:2],7'h3}; // @[Cat.scala 33:92]
  wire  _T_5 = 2'h3 == io_instruction_i[15:14]; // @[CompressedDecoder.scala 42:41]
  wire [17:0] io_instruction_o_lo_2 = {io_instruction_i[9:7],3'h2,io_instruction_i[11:10],io_instruction_i[6],2'h0,7'h23
    }; // @[Cat.scala 33:92]
  wire [31:0] _io_instruction_o_T_20 = {5'h0,io_instruction_i[5],io_instruction_i[12],2'h1,io_instruction_i[4:2],2'h1,
    io_instruction_o_lo_2}; // @[Cat.scala 33:92]
  wire  _T_6 = 2'h2 == io_instruction_i[15:14]; // @[CompressedDecoder.scala 42:41]
  wire [31:0] _GEN_3 = 2'h3 == io_instruction_i[15:14] ? _io_instruction_o_T_20 : io_instruction_i; // @[CompressedDecoder.scala 42:41 61:28]
  wire  _GEN_4 = 2'h1 == io_instruction_i[15:14] | 2'h3 == io_instruction_i[15:14]; // @[CompressedDecoder.scala 42:41 53:22]
  wire [31:0] _GEN_5 = 2'h1 == io_instruction_i[15:14] ? _io_instruction_o_T_12 : _GEN_3; // @[CompressedDecoder.scala 42:41 54:28]
  wire  _GEN_6 = 2'h0 == io_instruction_i[15:14] | _GEN_4; // @[CompressedDecoder.scala 42:41 46:22]
  wire [31:0] _GEN_7 = 2'h0 == io_instruction_i[15:14] ? _io_instruction_o_T_5 : _GEN_5; // @[CompressedDecoder.scala 42:41 47:28]
  wire [5:0] _io_instruction_o_T_23 = io_instruction_i[12] ? 6'h3f : 6'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_instruction_o_T_28 = {_io_instruction_o_T_23,io_instruction_i[12],io_instruction_i[6:2],
    io_instruction_i[11:7],3'h0,io_instruction_i[11:7],7'h13}; // @[Cat.scala 33:92]
  wire [8:0] _io_instruction_o_T_39 = io_instruction_i[12] ? 9'h1ff : 9'h0; // @[Bitwise.scala 77:12]
  wire  _io_instruction_o_T_41 = ~io_instruction_i[15]; // @[CompressedDecoder.scala 95:82]
  wire [24:0] io_instruction_o_lo_4 = {io_instruction_i[11],io_instruction_i[5:3],_io_instruction_o_T_39,4'h0,
    _io_instruction_o_T_41,7'h6f}; // @[Cat.scala 33:92]
  wire [31:0] _io_instruction_o_T_42 = {io_instruction_i[12],io_instruction_i[8],io_instruction_i[10:9],io_instruction_i
    [6],io_instruction_i[7],io_instruction_i[2],io_instruction_o_lo_4}; // @[Cat.scala 33:92]
  wire [31:0] _io_instruction_o_T_63 = {_io_instruction_o_T_23,io_instruction_i[12],io_instruction_i[6:2],5'h0,3'h0,
    io_instruction_i[11:7],7'h13}; // @[Cat.scala 33:92]
  wire [14:0] _io_instruction_o_T_66 = io_instruction_i[12] ? 15'h7fff : 15'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_instruction_o_T_69 = {_io_instruction_o_T_66,io_instruction_i[6:2],io_instruction_i[11:7],7'h37}; // @[Cat.scala 33:92]
  wire [2:0] _io_instruction_o_T_72 = io_instruction_i[12] ? 3'h7 : 3'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_instruction_o_T_77 = {_io_instruction_o_T_72,io_instruction_i[4:3],io_instruction_i[5],
    io_instruction_i[2],io_instruction_i[6],24'h10113}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_8 = io_instruction_i[11:7] == 5'h2 ? _io_instruction_o_T_77 : _io_instruction_o_T_69; // @[CompressedDecoder.scala 118:28 120:62 122:31]
  wire [31:0] _io_instruction_o_T_82 = {1'h0,io_instruction_i[10],5'h0,io_instruction_i[6:2],2'h1,io_instruction_i[9:7],3'h5
    ,2'h1,io_instruction_i[9:7],7'h13}; // @[Cat.scala 33:92]
  wire [31:0] _io_instruction_o_T_95 = {_io_instruction_o_T_23,io_instruction_i[12],io_instruction_i[6:2],2'h1,
    io_instruction_i[9:7],5'h1d,io_instruction_i[9:7],7'h13}; // @[Cat.scala 33:92]
  wire [31:0] _io_instruction_o_T_99 = {9'h81,io_instruction_i[4:2],2'h1,io_instruction_i[9:7],3'h0,2'h1,
    io_instruction_i[9:7],7'h33}; // @[Cat.scala 33:92]
  wire [31:0] _io_instruction_o_T_104 = {9'h1,io_instruction_i[4:2],2'h1,io_instruction_i[9:7],5'h11,io_instruction_i[9:
    7],7'h33}; // @[Cat.scala 33:92]
  wire [31:0] _io_instruction_o_T_109 = {9'h1,io_instruction_i[4:2],2'h1,io_instruction_i[9:7],5'h19,io_instruction_i[9:
    7],7'h33}; // @[Cat.scala 33:92]
  wire [31:0] _io_instruction_o_T_114 = {9'h1,io_instruction_i[4:2],2'h1,io_instruction_i[9:7],5'h1d,io_instruction_i[9:
    7],7'h33}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_10 = 2'h3 == io_instruction_i[6:5] ? _io_instruction_o_T_114 : io_instruction_i; // @[CompressedDecoder.scala 154:46 180:36 35:20]
  wire  _GEN_11 = 2'h2 == io_instruction_i[6:5] | 2'h3 == io_instruction_i[6:5]; // @[CompressedDecoder.scala 154:46 172:30]
  wire [31:0] _GEN_12 = 2'h2 == io_instruction_i[6:5] ? _io_instruction_o_T_109 : _GEN_10; // @[CompressedDecoder.scala 154:46 173:36]
  wire  _GEN_13 = 2'h1 == io_instruction_i[6:5] | _GEN_11; // @[CompressedDecoder.scala 154:46 165:30]
  wire [31:0] _GEN_14 = 2'h1 == io_instruction_i[6:5] ? _io_instruction_o_T_104 : _GEN_12; // @[CompressedDecoder.scala 154:46 166:36]
  wire  _GEN_15 = 2'h0 == io_instruction_i[6:5] | _GEN_13; // @[CompressedDecoder.scala 154:46 158:30]
  wire [31:0] _GEN_16 = 2'h0 == io_instruction_i[6:5] ? _io_instruction_o_T_99 : _GEN_14; // @[CompressedDecoder.scala 154:46 159:36]
  wire  _GEN_17 = 2'h3 == io_instruction_i[11:10] & _GEN_15; // @[CompressedDecoder.scala 129:44 34:14]
  wire [31:0] _GEN_18 = 2'h3 == io_instruction_i[11:10] ? _GEN_16 : io_instruction_i; // @[CompressedDecoder.scala 129:44 35:20]
  wire  _GEN_19 = 2'h2 == io_instruction_i[11:10] | _GEN_17; // @[CompressedDecoder.scala 129:44 147:26]
  wire [31:0] _GEN_20 = 2'h2 == io_instruction_i[11:10] ? _io_instruction_o_T_95 : _GEN_18; // @[CompressedDecoder.scala 129:44 148:32]
  wire  _GEN_21 = 2'h1 == io_instruction_i[11:10] | _GEN_19; // @[CompressedDecoder.scala 129:44 140:26]
  wire [31:0] _GEN_22 = 2'h1 == io_instruction_i[11:10] ? _io_instruction_o_T_82 : _GEN_20; // @[CompressedDecoder.scala 129:44 141:32]
  wire  _GEN_23 = 2'h0 == io_instruction_i[11:10] | _GEN_21; // @[CompressedDecoder.scala 129:44 133:26]
  wire [31:0] _GEN_24 = 2'h0 == io_instruction_i[11:10] ? _io_instruction_o_T_82 : _GEN_22; // @[CompressedDecoder.scala 129:44 134:32]
  wire [3:0] _io_instruction_o_T_117 = io_instruction_i[12] ? 4'hf : 4'h0; // @[Bitwise.scala 77:12]
  wire [14:0] io_instruction_o_lo_16 = {2'h0,io_instruction_i[13],io_instruction_i[11:10],io_instruction_i[4:3],
    io_instruction_i[12],7'h63}; // @[Cat.scala 33:92]
  wire [31:0] _io_instruction_o_T_126 = {_io_instruction_o_T_117,io_instruction_i[6:5],io_instruction_i[2],7'h1,
    io_instruction_i[9:7],io_instruction_o_lo_16}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_26 = 3'h7 == io_instruction_i[15:13] ? _io_instruction_o_T_126 : io_instruction_i; // @[CompressedDecoder.scala 199:28 35:20 80:41]
  wire  _GEN_27 = 3'h6 == io_instruction_i[15:13] | 3'h7 == io_instruction_i[15:13]; // @[CompressedDecoder.scala 190:22 80:41]
  wire [31:0] _GEN_28 = 3'h6 == io_instruction_i[15:13] ? _io_instruction_o_T_126 : _GEN_26; // @[CompressedDecoder.scala 191:28 80:41]
  wire  _GEN_29 = 3'h4 == io_instruction_i[15:13] ? _GEN_23 : _GEN_27; // @[CompressedDecoder.scala 80:41]
  wire [31:0] _GEN_30 = 3'h4 == io_instruction_i[15:13] ? _GEN_24 : _GEN_28; // @[CompressedDecoder.scala 80:41]
  wire  _GEN_31 = 3'h3 == io_instruction_i[15:13] | _GEN_29; // @[CompressedDecoder.scala 117:22 80:41]
  wire [31:0] _GEN_32 = 3'h3 == io_instruction_i[15:13] ? _GEN_8 : _GEN_30; // @[CompressedDecoder.scala 80:41]
  wire  _GEN_33 = 3'h2 == io_instruction_i[15:13] | _GEN_31; // @[CompressedDecoder.scala 109:22 80:41]
  wire [31:0] _GEN_34 = 3'h2 == io_instruction_i[15:13] ? _io_instruction_o_T_63 : _GEN_32; // @[CompressedDecoder.scala 110:28 80:41]
  wire  _GEN_35 = 3'h5 == io_instruction_i[15:13] | _GEN_33; // @[CompressedDecoder.scala 100:22 80:41]
  wire [31:0] _GEN_36 = 3'h5 == io_instruction_i[15:13] ? _io_instruction_o_T_42 : _GEN_34; // @[CompressedDecoder.scala 101:28 80:41]
  wire  _GEN_37 = 3'h1 == io_instruction_i[15:13] | _GEN_35; // @[CompressedDecoder.scala 80:41 92:22]
  wire [31:0] _GEN_38 = 3'h1 == io_instruction_i[15:13] ? _io_instruction_o_T_42 : _GEN_36; // @[CompressedDecoder.scala 80:41 93:28]
  wire  _GEN_39 = 3'h0 == io_instruction_i[15:13] | _GEN_37; // @[CompressedDecoder.scala 80:41 85:22]
  wire [31:0] _GEN_40 = 3'h0 == io_instruction_i[15:13] ? _io_instruction_o_T_28 : _GEN_38; // @[CompressedDecoder.scala 80:41 86:28]
  wire [31:0] _io_instruction_o_T_143 = {7'h0,io_instruction_i[6:2],io_instruction_i[11:7],3'h1,io_instruction_i[11:7],7'h13
    }; // @[Cat.scala 33:92]
  wire [31:0] _io_instruction_o_T_149 = {4'h0,io_instruction_i[3:2],io_instruction_i[12],io_instruction_i[6:4],2'h0,8'h12
    ,io_instruction_i[11:7],7'h3}; // @[Cat.scala 33:92]
  wire  _T_37 = io_instruction_i[6:2] != 5'h0; // @[CompressedDecoder.scala 235:40]
  wire [31:0] _io_instruction_o_T_154 = {7'h0,io_instruction_i[6:2],8'h0,io_instruction_i[11:7],7'h33}; // @[Cat.scala 33:92]
  wire [31:0] _io_instruction_o_T_158 = {12'h0,io_instruction_i[11:7],15'h67}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_42 = io_instruction_i[6:2] != 5'h0 ? _io_instruction_o_T_154 : _io_instruction_o_T_158; // @[CompressedDecoder.scala 235:62 240:32 245:32]
  wire [31:0] _io_instruction_o_T_163 = {7'h0,io_instruction_i[6:2],io_instruction_i[11:7],3'h0,io_instruction_i[11:7],7'h33
    }; // @[Cat.scala 33:92]
  wire [31:0] _io_instruction_o_T_167 = {12'h0,io_instruction_i[11:7],7'h0,8'he7}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_44 = io_instruction_i[11:7] == 5'h0 ? 32'h100073 : _io_instruction_o_T_167; // @[CompressedDecoder.scala 256:65 259:34 263:34]
  wire [31:0] _GEN_46 = _T_37 ? _io_instruction_o_T_163 : _GEN_44; // @[CompressedDecoder.scala 249:62 253:32]
  wire [31:0] _GEN_48 = ~io_instruction_i[12] ? _GEN_42 : _GEN_46; // @[CompressedDecoder.scala 233:50]
  wire [31:0] _io_instruction_o_T_173 = {4'h0,io_instruction_i[8:7],io_instruction_i[12],io_instruction_i[6:2],5'h2,3'h2
    ,io_instruction_i[11:9],9'h23}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_50 = _T_5 ? _io_instruction_o_T_173 : io_instruction_i; // @[CompressedDecoder.scala 214:40 272:28 35:20]
  wire [31:0] _GEN_52 = _T_6 ? _GEN_48 : _GEN_50; // @[CompressedDecoder.scala 214:40]
  wire  _GEN_53 = _T_4 | (_T_6 | _T_5); // @[CompressedDecoder.scala 214:40 226:22]
  wire [31:0] _GEN_54 = _T_4 ? _io_instruction_o_T_149 : _GEN_52; // @[CompressedDecoder.scala 214:40 227:28]
  wire  _GEN_55 = _T_3 | _GEN_53; // @[CompressedDecoder.scala 214:40 219:22]
  wire [31:0] _GEN_56 = _T_3 ? _io_instruction_o_T_143 : _GEN_54; // @[CompressedDecoder.scala 214:40 220:28]
  wire [31:0] _GEN_60 = 2'h2 == io_instruction_i[1:0] ? _GEN_56 : io_instruction_i; // @[CompressedDecoder.scala 37:34]
  wire  _GEN_61 = 2'h1 == io_instruction_i[1:0] ? _GEN_39 : 2'h2 == io_instruction_i[1:0] & _GEN_55; // @[CompressedDecoder.scala 37:34]
  wire [31:0] _GEN_62 = 2'h1 == io_instruction_i[1:0] ? _GEN_40 : _GEN_60; // @[CompressedDecoder.scala 37:34]
  wire  _GEN_63 = 2'h0 == io_instruction_i[1:0] ? _GEN_6 : _GEN_61; // @[CompressedDecoder.scala 37:34]
  wire [31:0] _GEN_64 = 2'h0 == io_instruction_i[1:0] ? _GEN_7 : _GEN_62; // @[CompressedDecoder.scala 37:34]
  assign io_is_comp = io_instruction_i == 32'h0 ? 1'h0 : _GEN_63; // @[CompressedDecoder.scala 285:47 287:18]
  assign io_instruction_o = io_instruction_i == 32'h0 ? io_instruction_i : _GEN_64; // @[CompressedDecoder.scala 285:47 288:24]
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
  reg [31:0] _RAND_26;
  reg [127:0] _RAND_27;
  reg [127:0] _RAND_28;
  reg [127:0] _RAND_29;
  reg [127:0] _RAND_30;
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
  reg [31:0] _RAND_56;
  reg [127:0] _RAND_57;
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
  reg [31:0] _RAND_77;
  reg [127:0] _RAND_78;
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
  reg [31:0] _RAND_110;
  reg [31:0] _RAND_111;
  reg [31:0] _RAND_112;
`endif // RANDOMIZE_REG_INIT
  wire  InstructionFetch_reset; // @[Core.scala 188:18]
  wire [31:0] InstructionFetch_io_address; // @[Core.scala 188:18]
  wire [31:0] InstructionFetch_io_instruction; // @[Core.scala 188:18]
  wire  InstructionFetch_io_stall; // @[Core.scala 188:18]
  wire  InstructionFetch_io_coreInstrReq_ready; // @[Core.scala 188:18]
  wire  InstructionFetch_io_coreInstrReq_valid; // @[Core.scala 188:18]
  wire [31:0] InstructionFetch_io_coreInstrReq_bits_addrRequest; // @[Core.scala 188:18]
  wire [31:0] InstructionFetch_io_coreInstrReq_bits_dataRequest; // @[Core.scala 188:18]
  wire [3:0] InstructionFetch_io_coreInstrReq_bits_activeByteLane; // @[Core.scala 188:18]
  wire  InstructionFetch_io_coreInstrReq_bits_isWrite; // @[Core.scala 188:18]
  wire  InstructionFetch_io_coreInstrResp_ready; // @[Core.scala 188:18]
  wire  InstructionFetch_io_coreInstrResp_valid; // @[Core.scala 188:18]
  wire [31:0] InstructionFetch_io_coreInstrResp_bits_dataResponse; // @[Core.scala 188:18]
  wire  IDecode_clock; // @[Core.scala 190:23]
  wire  IDecode_reset; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_id_instruction; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_writeData; // @[Core.scala 190:23]
  wire [4:0] IDecode_io_writeReg; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_pcAddress; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_writeEnable; // @[Core.scala 190:23]
  wire  IDecode_io_id_ex_mem_read; // @[Core.scala 190:23]
  wire  IDecode_io_ex_mem_mem_read; // @[Core.scala 190:23]
  wire  IDecode_io_dmem_resp_valid; // @[Core.scala 190:23]
  wire [4:0] IDecode_io_id_ex_rd; // @[Core.scala 190:23]
  wire [4:0] IDecode_io_ex_mem_rd; // @[Core.scala 190:23]
  wire  IDecode_io_id_ex_branch; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_ex_mem_ins; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_mem_wb_ins; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_ex_ins; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_ex_result; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_ex_mem_result; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_mem_wb_result; // @[Core.scala 190:23]
  wire  IDecode_io_id_ex_regWr; // @[Core.scala 190:23]
  wire  IDecode_io_ex_mem_regWr; // @[Core.scala 190:23]
  wire  IDecode_io_csr_Ex; // @[Core.scala 190:23]
  wire  IDecode_io_csr_Mem; // @[Core.scala 190:23]
  wire  IDecode_io_csr_Wb; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_csr_Ex_data; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_csr_Mem_data; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_csr_Wb_data; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_dmem_data; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_immediate; // @[Core.scala 190:23]
  wire [4:0] IDecode_io_writeRegAddress; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_readData1; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_readData2; // @[Core.scala 190:23]
  wire [6:0] IDecode_io_func7; // @[Core.scala 190:23]
  wire [2:0] IDecode_io_func3; // @[Core.scala 190:23]
  wire [5:0] IDecode_io_func6; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_aluSrc; // @[Core.scala 190:23]
  wire [1:0] IDecode_io_ctl_memToReg; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_regWrite; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_memRead; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_memWrite; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_branch; // @[Core.scala 190:23]
  wire [1:0] IDecode_io_ctl_aluOp; // @[Core.scala 190:23]
  wire [1:0] IDecode_io_ctl_jump; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_v_RegWrite; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_v_opBsel; // @[Core.scala 190:23]
  wire [3:0] IDecode_io_ctl_v_Ex_sel; // @[Core.scala 190:23]
  wire [4:0] IDecode_io_ctl_v_aluop; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_v_vset; // @[Core.scala 190:23]
  wire [3:0] IDecode_io_ctl_v_load; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_v_ins; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_v_memRead; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_v_memWrite; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_v_reg_read; // @[Core.scala 190:23]
  wire [127:0] IDecode_io_write_data; // @[Core.scala 190:23]
  wire [4:0] IDecode_io_wb_addr; // @[Core.scala 190:23]
  wire  IDecode_io_wb_RegWrite; // @[Core.scala 190:23]
  wire [3:0] IDecode_io_id_lmul_count; // @[Core.scala 190:23]
  wire [3:0] IDecode_io_id_lmul_vs1in_vs2in; // @[Core.scala 190:23]
  wire [4:0] IDecode_io_id_vc3; // @[Core.scala 190:23]
  wire [127:0] IDecode_io_vs0_data; // @[Core.scala 190:23]
  wire [127:0] IDecode_io_vs1_data; // @[Core.scala 190:23]
  wire [127:0] IDecode_io_vs2_data; // @[Core.scala 190:23]
  wire  IDecode_io_reg_write; // @[Core.scala 190:23]
  wire [4:0] IDecode_io_vs1_addr; // @[Core.scala 190:23]
  wire [4:0] IDecode_io_vs2_addr; // @[Core.scala 190:23]
  wire [4:0] IDecode_io_vd_addr; // @[Core.scala 190:23]
  wire [127:0] IDecode_io_vs3_data; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_v_z_imm; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_v_addi_imm; // @[Core.scala 190:23]
  wire [10:0] IDecode_io_vtypei; // @[Core.scala 190:23]
  wire [10:0] IDecode_io_vtypei_out; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_vl; // @[Core.scala 190:23]
  wire  IDecode_io_ctl_vset; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_vl_out; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_vstart_out; // @[Core.scala 190:23]
  wire [1:0] IDecode_io_ctl_aluSrc1; // @[Core.scala 190:23]
  wire  IDecode_io_hdu_pcWrite; // @[Core.scala 190:23]
  wire  IDecode_io_hdu_if_reg_write; // @[Core.scala 190:23]
  wire  IDecode_io_pcSrc; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_pcPlusOffset; // @[Core.scala 190:23]
  wire  IDecode_io_ifid_flush; // @[Core.scala 190:23]
  wire  IDecode_io_stall; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_csr_i_misa; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_csr_i_mhartid; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_csr_o_data; // @[Core.scala 190:23]
  wire  IDecode_io_is_csr; // @[Core.scala 190:23]
  wire [31:0] IDecode_io_fscr_o_data; // @[Core.scala 190:23]
  wire [4:0] IDecode_io_rs_addr_0; // @[Core.scala 190:23]
  wire [4:0] IDecode_io_rs_addr_1; // @[Core.scala 190:23]
  wire  Execute_clock; // @[Core.scala 193:18]
  wire  Execute_reset; // @[Core.scala 193:18]
  wire [31:0] Execute_io_immediate; // @[Core.scala 193:18]
  wire [31:0] Execute_io_readData1; // @[Core.scala 193:18]
  wire [31:0] Execute_io_readData2; // @[Core.scala 193:18]
  wire [31:0] Execute_io_pcAddress; // @[Core.scala 193:18]
  wire [6:0] Execute_io_func7; // @[Core.scala 193:18]
  wire [2:0] Execute_io_func3; // @[Core.scala 193:18]
  wire [31:0] Execute_io_mem_result; // @[Core.scala 193:18]
  wire [31:0] Execute_io_wb_result; // @[Core.scala 193:18]
  wire  Execute_io_ex_mem_regWrite; // @[Core.scala 193:18]
  wire  Execute_io_mem_wb_regWrite; // @[Core.scala 193:18]
  wire [31:0] Execute_io_id_ex_ins; // @[Core.scala 193:18]
  wire [31:0] Execute_io_ex_mem_ins; // @[Core.scala 193:18]
  wire [31:0] Execute_io_mem_wb_ins; // @[Core.scala 193:18]
  wire  Execute_io_ctl_aluSrc; // @[Core.scala 193:18]
  wire [1:0] Execute_io_ctl_aluOp; // @[Core.scala 193:18]
  wire [1:0] Execute_io_ctl_aluSrc1; // @[Core.scala 193:18]
  wire [5:0] Execute_io_func6; // @[Core.scala 193:18]
  wire [2:0] Execute_io_v_ctl_aluop; // @[Core.scala 193:18]
  wire [3:0] Execute_io_v_ctl_exsel; // @[Core.scala 193:18]
  wire  Execute_io_v_ctl_regwrite; // @[Core.scala 193:18]
  wire  Execute_io_v_ctl_opBsel; // @[Core.scala 193:18]
  wire  Execute_io_v_ctl_v_load; // @[Core.scala 193:18]
  wire  Execute_io_v_ctl_v_ins; // @[Core.scala 193:18]
  wire  Execute_io_v_ctl_vset; // @[Core.scala 193:18]
  wire [127:0] Execute_io_vs1_data; // @[Core.scala 193:18]
  wire [127:0] Execute_io_vs2_data; // @[Core.scala 193:18]
  wire [31:0] Execute_io_vl; // @[Core.scala 193:18]
  wire [31:0] Execute_io_vstart; // @[Core.scala 193:18]
  wire [127:0] Execute_io_vs3_data; // @[Core.scala 193:18]
  wire  Execute_io_vma; // @[Core.scala 193:18]
  wire  Execute_io_vta; // @[Core.scala 193:18]
  wire  Execute_io_vm; // @[Core.scala 193:18]
  wire [127:0] Execute_io_vs0; // @[Core.scala 193:18]
  wire [4:0] Execute_io_vd_addr; // @[Core.scala 193:18]
  wire [2:0] Execute_io_v_sew; // @[Core.scala 193:18]
  wire [31:0] Execute_io_zimm; // @[Core.scala 193:18]
  wire [31:0] Execute_io_v_addi_imm; // @[Core.scala 193:18]
  wire [127:0] Execute_io_vec_mem_res; // @[Core.scala 193:18]
  wire [127:0] Execute_io_vec_wb_res; // @[Core.scala 193:18]
  wire [4:0] Execute_io_fu_ex_reg_vd; // @[Core.scala 193:18]
  wire [4:0] Execute_io_fu_mem_reg_vd; // @[Core.scala 193:18]
  wire [4:0] Execute_io_fu_reg_vs1; // @[Core.scala 193:18]
  wire [4:0] Execute_io_fu_reg_vs2; // @[Core.scala 193:18]
  wire [4:0] Execute_io_fu_reg_vs3; // @[Core.scala 193:18]
  wire  Execute_io_fu_ex_reg_write; // @[Core.scala 193:18]
  wire  Execute_io_fu_mem_reg_write; // @[Core.scala 193:18]
  wire  Execute_io_v_MemWrite; // @[Core.scala 193:18]
  wire [127:0] Execute_io_vec_alu_res; // @[Core.scala 193:18]
  wire [31:0] Execute_io_vec_vl; // @[Core.scala 193:18]
  wire [4:0] Execute_io_vec_rd_out; // @[Core.scala 193:18]
  wire [31:0] Execute_io_vec_avl_o; // @[Core.scala 193:18]
  wire [31:0] Execute_io_vec_valmax_o; // @[Core.scala 193:18]
  wire [127:0] Execute_io_vs3_data_o; // @[Core.scala 193:18]
  wire [31:0] Execute_io_writeData; // @[Core.scala 193:18]
  wire [31:0] Execute_io_ALUresult; // @[Core.scala 193:18]
  wire [127:0] Execute_io_vs0_o; // @[Core.scala 193:18]
  wire  Execute_io_stall; // @[Core.scala 193:18]
  wire  MEM_clock; // @[Core.scala 195:19]
  wire  MEM_reset; // @[Core.scala 195:19]
  wire [31:0] MEM_io_aluResultIn; // @[Core.scala 195:19]
  wire [31:0] MEM_io_v_addr; // @[Core.scala 195:19]
  wire  MEM_io_v_ins; // @[Core.scala 195:19]
  wire [31:0] MEM_io_writeData; // @[Core.scala 195:19]
  wire [31:0] MEM_io_v_writeData; // @[Core.scala 195:19]
  wire  MEM_io_writeEnable; // @[Core.scala 195:19]
  wire  MEM_io_readEnable; // @[Core.scala 195:19]
  wire [31:0] MEM_io_readData; // @[Core.scala 195:19]
  wire [2:0] MEM_io_f3; // @[Core.scala 195:19]
  wire  MEM_io_dccmReq_valid; // @[Core.scala 195:19]
  wire [31:0] MEM_io_dccmReq_bits_addrRequest; // @[Core.scala 195:19]
  wire [31:0] MEM_io_dccmReq_bits_dataRequest; // @[Core.scala 195:19]
  wire [3:0] MEM_io_dccmReq_bits_activeByteLane; // @[Core.scala 195:19]
  wire  MEM_io_dccmReq_bits_isWrite; // @[Core.scala 195:19]
  wire  MEM_io_dccmRsp_valid; // @[Core.scala 195:19]
  wire [31:0] MEM_io_dccmRsp_bits_dataResponse; // @[Core.scala 195:19]
  wire  pc_clock; // @[Core.scala 203:18]
  wire  pc_reset; // @[Core.scala 203:18]
  wire [31:0] pc_io_in; // @[Core.scala 203:18]
  wire  pc_io_halt; // @[Core.scala 203:18]
  wire [31:0] pc_io_out; // @[Core.scala 203:18]
  wire [31:0] pc_io_pc4; // @[Core.scala 203:18]
  wire [31:0] pc_io_pc2; // @[Core.scala 203:18]
  wire  vlsu_clock; // @[Core.scala 252:19]
  wire  vlsu_reset; // @[Core.scala 252:19]
  wire [31:0] vlsu_io_instr; // @[Core.scala 252:19]
  wire [31:0] vlsu_io_vtype; // @[Core.scala 252:19]
  wire [1:0] vlsu_io_UnitStride; // @[Core.scala 252:19]
  wire [7:0] vlsu_io_evl; // @[Core.scala 252:19]
  wire [4:0] vlsu_io_vs3_Addr; // @[Core.scala 252:19]
  wire [3:0] vlsu_io_lsuType; // @[Core.scala 252:19]
  wire [9:0] vlsu_io_eew; // @[Core.scala 252:19]
  wire [3:0] vlsu_io_nf; // @[Core.scala 252:19]
  wire [5:0] vlsu_io_emmul; // @[Core.scala 252:19]
  wire [3:0] vlsu_io_emul; // @[Core.scala 252:19]
  wire  Realigner_clock; // @[Core.scala 534:20]
  wire  Realigner_reset; // @[Core.scala 534:20]
  wire [31:0] Realigner_io_ral_address_i; // @[Core.scala 534:20]
  wire [31:0] Realigner_io_ral_instruction_i; // @[Core.scala 534:20]
  wire  Realigner_io_ral_jmp; // @[Core.scala 534:20]
  wire [31:0] Realigner_io_ral_address_o; // @[Core.scala 534:20]
  wire [31:0] Realigner_io_ral_instruction_o; // @[Core.scala 534:20]
  wire  Realigner_io_ral_halt_o; // @[Core.scala 534:20]
  wire [31:0] CompressedDecoder_io_instruction_i; // @[Core.scala 548:20]
  wire  CompressedDecoder_io_is_comp; // @[Core.scala 548:20]
  wire [31:0] CompressedDecoder_io_instruction_o; // @[Core.scala 548:20]
  reg [31:0] if_reg_pc; // @[Core.scala 38:26]
  reg [31:0] if_reg_ins; // @[Core.scala 39:27]
  reg [3:0] if_reg_lmul_v; // @[Core.scala 42:30]
  reg [3:0] if_vc3; // @[Core.scala 43:23]
  reg [9:0] if_reg_eew; // @[Core.scala 46:27]
  reg [3:0] if_reg_lsuType; // @[Core.scala 47:31]
  reg [31:0] id_reg_pc; // @[Core.scala 51:26]
  reg [31:0] id_reg_rd1; // @[Core.scala 52:27]
  reg [31:0] id_reg_rd2; // @[Core.scala 53:27]
  reg [31:0] id_reg_imm; // @[Core.scala 54:27]
  reg [4:0] id_reg_wra; // @[Core.scala 55:27]
  reg [6:0] id_reg_f7; // @[Core.scala 56:26]
  reg [2:0] id_reg_f3; // @[Core.scala 58:26]
  reg [31:0] id_reg_ins; // @[Core.scala 59:27]
  reg  id_reg_ctl_aluSrc; // @[Core.scala 60:34]
  reg [1:0] id_reg_ctl_aluSrc1; // @[Core.scala 61:35]
  reg [1:0] id_reg_ctl_memToReg; // @[Core.scala 62:36]
  reg  id_reg_ctl_regWrite; // @[Core.scala 63:36]
  reg  id_reg_ctl_memRead; // @[Core.scala 64:35]
  reg  id_reg_ctl_memWrite; // @[Core.scala 65:36]
  reg [1:0] id_reg_ctl_aluOp; // @[Core.scala 67:33]
  reg  id_reg_is_csr; // @[Core.scala 69:30]
  reg [31:0] id_reg_csr_data; // @[Core.scala 70:32]
  reg [10:0] id_reg_z_imm; // @[Core.scala 75:29]
  reg [31:0] id_reg_vstart_out; // @[Core.scala 77:34]
  reg [31:0] id_reg_vtype; // @[Core.scala 78:29]
  reg [31:0] id_reg_v_addi_imm; // @[Core.scala 79:34]
  reg [127:0] id_reg_v0_data; // @[Core.scala 80:31]
  reg [127:0] id_reg_v1_data; // @[Core.scala 81:31]
  reg [127:0] id_reg_v2_data; // @[Core.scala 82:31]
  reg [127:0] id_reg_vs3_data; // @[Core.scala 83:32]
  reg [4:0] id_reg_vs1_addr; // @[Core.scala 84:32]
  reg [4:0] id_reg_vs2_addr; // @[Core.scala 85:32]
  reg [4:0] id_reg_vd_addr; // @[Core.scala 86:31]
  reg [3:0] id_reg_lmul_v; // @[Core.scala 87:30]
  reg [9:0] id_reg_eew; // @[Core.scala 91:27]
  reg [3:0] id_reg_lsuType; // @[Core.scala 92:31]
  reg  id_reg_ctl_RegWrite; // @[Core.scala 96:36]
  reg  id_reg_ctl_opBsel; // @[Core.scala 99:34]
  reg [3:0] id_reg_ctl_Ex_sel; // @[Core.scala 100:34]
  reg [4:0] id_reg_ctl_aluop; // @[Core.scala 102:33]
  reg  id_reg_ctl_vset; // @[Core.scala 103:32]
  reg  id_reg_ctl_v_load; // @[Core.scala 104:34]
  reg  id_reg_ctl_v_ins; // @[Core.scala 105:33]
  reg  id_reg_ctl_v_memRead; // @[Core.scala 106:37]
  reg  id_reg_ctl_v_MemWrite; // @[Core.scala 107:38]
  reg [31:0] ex_reg_result; // @[Core.scala 116:30]
  reg [31:0] ex_reg_wd; // @[Core.scala 117:26]
  reg [4:0] ex_reg_wra; // @[Core.scala 118:27]
  reg [31:0] ex_reg_ins; // @[Core.scala 119:27]
  reg [1:0] ex_reg_ctl_memToReg; // @[Core.scala 120:36]
  reg  ex_reg_ctl_regWrite; // @[Core.scala 121:36]
  reg  ex_reg_ctl_memRead; // @[Core.scala 122:35]
  reg  ex_reg_ctl_memWrite; // @[Core.scala 123:36]
  reg [31:0] ex_reg_pc; // @[Core.scala 125:26]
  reg  ex_reg_is_csr; // @[Core.scala 126:30]
  reg [31:0] ex_reg_csr_data; // @[Core.scala 127:32]
  reg [127:0] ex_reg_vec_alu_res; // @[Core.scala 130:35]
  reg [31:0] ex_reg_vl; // @[Core.scala 132:26]
  reg [4:0] ex_reg_vd_addr; // @[Core.scala 139:31]
  reg [3:0] ex_reg_lmul_v; // @[Core.scala 140:30]
  reg  ex_reg_vset; // @[Core.scala 142:28]
  reg  ex_reg_ctl_v_memRead; // @[Core.scala 143:37]
  reg  ex_reg_ctl_v_MemWrite; // @[Core.scala 144:38]
  reg  ex_reg_reg_write; // @[Core.scala 145:33]
  reg [10:0] ex_reg_vtype; // @[Core.scala 146:29]
  reg [9:0] ex_reg_eew; // @[Core.scala 149:27]
  reg [3:0] ex_reg_lsuType; // @[Core.scala 150:31]
  reg [31:0] ex_reg_read_data1; // @[Core.scala 151:34]
  reg  ex_reg_v_ins; // @[Core.scala 154:29]
  reg [31:0] mem_reg_ins; // @[Core.scala 158:28]
  reg [31:0] mem_reg_result; // @[Core.scala 159:31]
  reg [4:0] mem_reg_wra; // @[Core.scala 161:28]
  reg [1:0] mem_reg_ctl_memToReg; // @[Core.scala 162:37]
  reg  mem_reg_ctl_regWrite; // @[Core.scala 163:37]
  reg [31:0] mem_reg_pc; // @[Core.scala 164:27]
  reg  mem_reg_is_csr; // @[Core.scala 165:31]
  reg [31:0] mem_reg_csr_data; // @[Core.scala 166:33]
  reg [127:0] mem_reg_vec_alu_out; // @[Core.scala 169:36]
  reg [31:0] mem_reg_vec_vl; // @[Core.scala 170:31]
  reg [10:0] mem_reg_vtype; // @[Core.scala 171:30]
  reg [4:0] mem_reg_vec_vd_addr; // @[Core.scala 175:36]
  reg [3:0] mem_reg_lmul_v; // @[Core.scala 177:31]
  reg  mem_reg_vset; // @[Core.scala 178:29]
  reg  mem_reg_vec_reg_write; // @[Core.scala 179:38]
  reg [2:0] lmul; // @[Core.scala 218:19]
  reg [31:0] vtype; // @[Core.scala 219:20]
  wire [31:0] instruction = CompressedDecoder_io_instruction_o; // @[Core.scala 208:25 551:18]
  wire  _T_1 = instruction[6:0] == 7'h57; // @[Core.scala 222:22]
  wire  _T_3 = instruction[14:12] == 3'h7; // @[Core.scala 222:59]
  wire [31:0] _GEN_8 = lmul == 3'h3 ? 32'h7 : 32'h0; // @[Core.scala 272:33 273:21 256:27]
  wire [31:0] _GEN_9 = lmul == 3'h2 ? 32'h3 : _GEN_8; // @[Core.scala 268:33 269:21]
  wire [31:0] _GEN_10 = lmul == 3'h1 ? 32'h1 : _GEN_9; // @[Core.scala 264:34 265:21]
  wire  _T_21 = instruction[6:0] == 7'h27; // @[Core.scala 278:49]
  wire [31:0] _GEN_12 = vlsu_io_emul == 4'h8 & _T_21 ? 32'h20 : 32'h0; // @[Core.scala 287:70 288:14 277:28]
  wire [31:0] _GEN_13 = vlsu_io_emul == 4'h8 & _T_21 ? 32'h7 : 32'h0; // @[Core.scala 287:70 289:16 276:30]
  wire [31:0] _GEN_14 = vlsu_io_emul == 4'h4 & _T_21 ? 32'h10 : _GEN_12; // @[Core.scala 284:70 285:14]
  wire [31:0] _GEN_15 = vlsu_io_emul == 4'h4 & _T_21 ? 32'h3 : _GEN_13; // @[Core.scala 284:70 286:16]
  wire [31:0] _GEN_16 = vlsu_io_emul == 4'h2 & _T_21 ? 32'h8 : _GEN_14; // @[Core.scala 281:70 282:14]
  wire [31:0] _GEN_17 = vlsu_io_emul == 4'h2 & _T_21 ? 32'h1 : _GEN_15; // @[Core.scala 281:70 283:16]
  wire [31:0] vlcount1 = vlsu_io_emul == 4'h1 & instruction[6:0] == 7'h27 ? 32'h4 : _GEN_16; // @[Core.scala 278:65 279:14]
  wire [31:0] emul_count = vlsu_io_emul == 4'h1 & instruction[6:0] == 7'h27 ? 32'h0 : _GEN_17; // @[Core.scala 278:65 280:16]
  reg [31:0] lmul_reg; // @[Core.scala 293:25]
  reg [4:0] vc3; // @[Core.scala 294:20]
  wire [31:0] vlmul_count = lmul == 3'h0 ? 32'h0 : _GEN_10; // @[Core.scala 260:29 261:21]
  wire  _T_41 = lmul_reg != vlmul_count & _T_1 & instruction[14:12] != 3'h7; // @[Core.scala 295:70]
  wire [31:0] _lmul_reg_T_1 = lmul_reg + 32'h1; // @[Core.scala 297:30]
  wire [31:0] _GEN_21 = lmul_reg != vlmul_count & _T_1 & instruction[14:12] != 3'h7 ? _lmul_reg_T_1 : 32'h0; // @[Core.scala 295:103 297:18 301:18]
  reg [31:0] emul_reg; // @[Core.scala 305:27]
  wire  _T_46 = vc3 != 5'h4; // @[Core.scala 309:18]
  wire [4:0] _vc3_T_1 = vc3 + 5'h1; // @[Core.scala 310:23]
  wire [32:0] _if_vc3_T = {{1'd0}, emul_reg}; // @[Core.scala 311:31]
  wire [31:0] _if_vc3_T_3 = emul_reg + 32'h1; // @[Core.scala 316:30]
  wire [31:0] _GEN_24 = vc3 != 5'h4 ? _if_vc3_T[31:0] : _if_vc3_T_3; // @[Core.scala 309:27 311:19 316:18]
  wire  _T_54 = vc3 != 5'h3 & _T_21; // @[Core.scala 324:26]
  wire [31:0] _GEN_28 = vc3 != 5'h3 & _T_21 ? _if_vc3_T[31:0] : _lmul_reg_T_1; // @[Core.scala 324:62 326:19 331:18]
  wire [31:0] _GEN_33 = emul_reg == emul_count & _T_21 ? _GEN_28 : {{28'd0}, if_vc3}; // @[Core.scala 321:79 43:23]
  wire  _GEN_35 = emul_reg == emul_count & _T_21 ? _T_54 : _T_41; // @[Core.scala 321:79]
  wire [31:0] _GEN_38 = emul_reg != emul_count & _T_21 ? _GEN_24 : _GEN_33; // @[Core.scala 306:71]
  wire  _GEN_39 = emul_reg != emul_count & _T_21 ? _T_46 : _GEN_35; // @[Core.scala 306:71]
  reg [31:0] delays; // @[Core.scala 340:25]
  wire [31:0] _delays_T_1 = delays + 32'h1; // @[Core.scala 343:23]
  wire  _GEN_42 = delays != vlcount1 & _T_21 | _GEN_39; // @[Core.scala 341:66 342:24]
  wire [31:0] _T_60 = mem_reg_vset ? $signed(mem_reg_vec_vl) : $signed(IDecode_io_vl_out); // @[Core.scala 412:43]
  wire  _T_65 = mem_reg_vset ? mem_reg_vtype[7] : IDecode_io_vtypei_out[7]; // @[Core.scala 415:50]
  wire  _T_70 = mem_reg_vset ? mem_reg_vtype[6] : IDecode_io_vtypei_out[6]; // @[Core.scala 416:50]
  wire [2:0] _T_77 = mem_reg_vset ? mem_reg_vtype[5:3] : IDecode_io_vtypei_out[5:3]; // @[Core.scala 420:55]
  reg [31:0] addrcount; // @[Core.scala 464:24]
  reg [31:0] vlcount; // @[Core.scala 475:22]
  wire [31:0] eew_32_vs3_data_0 = Execute_io_vs3_data_o[31:0]; // @[Core.scala 479:82]
  wire [31:0] _MEM_io_v_addr_T_1 = ex_reg_read_data1 + addrcount; // @[Core.scala 484:42]
  wire [31:0] _addrcount_T_1 = addrcount + 32'h4; // @[Core.scala 485:30]
  wire [31:0] eew_32_vs3_data_1 = Execute_io_vs3_data_o[63:32]; // @[Core.scala 479:82]
  wire [31:0] eew_32_vs3_data_2 = Execute_io_vs3_data_o[95:64]; // @[Core.scala 479:82]
  wire [31:0] _MEM_io_v_writeData_T_2 = Execute_io_vs3_data_o[95:64]; // @[Core.scala 483:52]
  wire [31:0] _GEN_45 = ex_reg_lsuType == 4'h1 ? _MEM_io_v_writeData_T_2 : 32'h0; // @[Core.scala 474:20 481:33 483:26]
  wire [31:0] _GEN_46 = ex_reg_lsuType == 4'h1 ? _MEM_io_v_addr_T_1 : 32'h0; // @[Core.scala 473:15 481:33 484:21]
  wire  _vlcount_T = ex_reg_eew == 10'h8; // @[Core.scala 490:19]
  wire [31:0] _vlcount_T_2 = vlcount + 32'h4; // @[Core.scala 490:39]
  wire  _vlcount_T_3 = ex_reg_eew == 10'h10; // @[Core.scala 491:19]
  wire [31:0] _vlcount_T_5 = vlcount + 32'h2; // @[Core.scala 491:40]
  wire  _vlcount_T_6 = ex_reg_eew == 10'h20; // @[Core.scala 492:19]
  wire [31:0] _vlcount_T_8 = vlcount + 32'h1; // @[Core.scala 492:40]
  wire  _vlcount_T_9 = ex_reg_eew == 10'h40; // @[Core.scala 493:19]
  wire [32:0] _vlcount_T_10 = {{1'd0}, vlcount}; // @[Core.scala 493:40]
  wire [31:0] _vlcount_T_12 = _vlcount_T_9 ? _vlcount_T_10[31:0] : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _vlcount_T_13 = _vlcount_T_6 ? _vlcount_T_8 : _vlcount_T_12; // @[Mux.scala 101:16]
  wire [6:0] _GEN_52 = instruction[6:0] == 7'h33 ? instruction[31:25] : 7'h0; // @[Core.scala 565:42 566:11 568:11]
  wire [5:0] func7 = _GEN_52[5:0]; // @[Core.scala 564:19]
  wire  IF_stall = func7 == 6'h1 & (instruction[14:12] == 3'h4 | instruction[14:12] == 3'h5 | instruction[14:12] == 3'h6
     | _T_3); // @[Core.scala 571:32]
  wire  ral_halt_o = Realigner_io_ral_halt_o; // @[Core.scala 209:29 543:26]
  wire [31:0] next_pc_selector = {{31'd0}, _GEN_42}; // @[Core.scala 292:34]
  wire  _npc_T = next_pc_selector == 32'h1; // @[Core.scala 578:33]
  wire  is_comp = CompressedDecoder_io_is_comp; // @[Core.scala 210:29 553:13]
  wire [31:0] _npc_T_2 = is_comp ? $signed(pc_io_pc2) : $signed(pc_io_pc4); // @[Core.scala 578:115]
  wire [31:0] _npc_T_3 = IDecode_io_pcSrc ? $signed(IDecode_io_pcPlusOffset) : $signed(_npc_T_2); // @[Core.scala 578:75]
  wire [31:0] _npc_T_4 = IDecode_io_hdu_pcWrite ? $signed(_npc_T_3) : $signed(pc_io_out); // @[Core.scala 578:55]
  wire [31:0] _wb_data_T_1 = mem_reg_pc + 32'h4; // @[Core.scala 729:28]
  wire [31:0] _GEN_58 = mem_reg_ctl_memToReg == 2'h2 ? _wb_data_T_1 : mem_reg_result; // @[Core.scala 728:44 729:15 733:15]
  reg [31:0] npcDelay_0; // @[Core.scala 753:23]
  reg [31:0] npcDelay_1; // @[Core.scala 753:23]
  reg [31:0] npcDelay_2; // @[Core.scala 753:23]
  reg [31:0] npcDelay_3; // @[Core.scala 753:23]
  reg [4:0] rsAddrDelay_0_0; // @[Core.scala 754:53]
  reg [4:0] rsAddrDelay_0_1; // @[Core.scala 754:53]
  reg [4:0] rsAddrDelay_0_2; // @[Core.scala 754:53]
  reg [4:0] rsAddrDelay_1_0; // @[Core.scala 754:53]
  reg [4:0] rsAddrDelay_1_1; // @[Core.scala 754:53]
  reg [4:0] rsAddrDelay_1_2; // @[Core.scala 754:53]
  reg [31:0] rsDataDelay_0_0; // @[Core.scala 755:53]
  reg [31:0] rsDataDelay_0_1; // @[Core.scala 755:53]
  reg [31:0] rsDataDelay_1_0; // @[Core.scala 755:53]
  reg [31:0] rsDataDelay_1_1; // @[Core.scala 755:53]
  reg [31:0] memAddrDelay; // @[Core.scala 756:31]
  reg [31:0] memWdataDelay; // @[Core.scala 757:32]
  reg  stallDelay_0; // @[Core.scala 758:25]
  reg  stallDelay_1; // @[Core.scala 758:25]
  reg  stallDelay_2; // @[Core.scala 758:25]
  reg  stallDelay_3; // @[Core.scala 758:25]
  wire [31:0] data = 32'sh0; // @[Core.scala 469:{20,20}]
  wire [31:0] next_pc_sel = 32'h0; // @[Core.scala 471:{27,27}]
  wire [31:0] eew_32_vs3_data_3 = Execute_io_vs3_data_o[127:96]; // @[Core.scala 479:82]
  wire [31:0] _GEN_62 = reset ? 32'h0 : lmul_reg; // @[Core.scala 42:{30,30}]
  wire [31:0] _GEN_63 = reset ? 32'h0 : _GEN_38; // @[Core.scala 43:{23,23}]
  wire [31:0] _GEN_65 = reset ? $signed(32'sh0) : $signed(IDecode_io_v_z_imm); // @[Core.scala 365:18 75:{29,29}]
  wire [3:0] _GEN_67 = reset ? 4'h0 : IDecode_io_ctl_v_load; // @[Core.scala 104:{34,34} 378:23]
  InstructionFetch InstructionFetch ( // @[Core.scala 188:18]
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
  InstructionDecode IDecode ( // @[Core.scala 190:23]
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
    .io_id_vc3(IDecode_io_id_vc3),
    .io_vs0_data(IDecode_io_vs0_data),
    .io_vs1_data(IDecode_io_vs1_data),
    .io_vs2_data(IDecode_io_vs2_data),
    .io_reg_write(IDecode_io_reg_write),
    .io_vs1_addr(IDecode_io_vs1_addr),
    .io_vs2_addr(IDecode_io_vs2_addr),
    .io_vd_addr(IDecode_io_vd_addr),
    .io_vs3_data(IDecode_io_vs3_data),
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
  Execute Execute ( // @[Core.scala 193:18]
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
    .io_vs0_o(Execute_io_vs0_o),
    .io_stall(Execute_io_stall)
  );
  MemoryFetch MEM ( // @[Core.scala 195:19]
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
  PC pc ( // @[Core.scala 203:18]
    .clock(pc_clock),
    .reset(pc_reset),
    .io_in(pc_io_in),
    .io_halt(pc_io_halt),
    .io_out(pc_io_out),
    .io_pc4(pc_io_pc4),
    .io_pc2(pc_io_pc2)
  );
  VLSU vlsu ( // @[Core.scala 252:19]
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
  Realigner Realigner ( // @[Core.scala 534:20]
    .clock(Realigner_clock),
    .reset(Realigner_reset),
    .io_ral_address_i(Realigner_io_ral_address_i),
    .io_ral_instruction_i(Realigner_io_ral_instruction_i),
    .io_ral_jmp(Realigner_io_ral_jmp),
    .io_ral_address_o(Realigner_io_ral_address_o),
    .io_ral_instruction_o(Realigner_io_ral_instruction_o),
    .io_ral_halt_o(Realigner_io_ral_halt_o)
  );
  CompressedDecoder CompressedDecoder ( // @[Core.scala 548:20]
    .io_instruction_i(CompressedDecoder_io_instruction_i),
    .io_is_comp(CompressedDecoder_io_is_comp),
    .io_instruction_o(CompressedDecoder_io_instruction_o)
  );
  assign io_pin = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_58; // @[Core.scala 725:38 726:13]
  assign io_Vpin = IDecode_io_vs3_data; // @[Core.scala 747:26]
  assign io_dmemReq_valid = MEM_io_dccmReq_valid; // @[Core.scala 684:14]
  assign io_dmemReq_bits_addrRequest = MEM_io_dccmReq_bits_addrRequest; // @[Core.scala 684:14]
  assign io_dmemReq_bits_dataRequest = MEM_io_dccmReq_bits_dataRequest; // @[Core.scala 684:14]
  assign io_dmemReq_bits_activeByteLane = MEM_io_dccmReq_bits_activeByteLane; // @[Core.scala 684:14]
  assign io_dmemReq_bits_isWrite = MEM_io_dccmReq_bits_isWrite; // @[Core.scala 684:14]
  assign io_imemReq_valid = InstructionFetch_io_coreInstrReq_valid; // @[Core.scala 205:14]
  assign io_imemReq_bits_addrRequest = InstructionFetch_io_coreInstrReq_bits_addrRequest; // @[Core.scala 205:14]
  assign io_imemReq_bits_dataRequest = InstructionFetch_io_coreInstrReq_bits_dataRequest; // @[Core.scala 205:14]
  assign io_imemReq_bits_activeByteLane = InstructionFetch_io_coreInstrReq_bits_activeByteLane; // @[Core.scala 205:14]
  assign io_imemReq_bits_isWrite = InstructionFetch_io_coreInstrReq_bits_isWrite; // @[Core.scala 205:14]
  assign io_rvfiUInt_0 = mem_reg_pc; // @[Core.scala 799:19]
  assign io_rvfiUInt_1 = npcDelay_3; // @[Core.scala 799:19]
  assign io_rvfiUInt_2 = mem_reg_ins; // @[Core.scala 799:19]
  assign io_rvfiUInt_3 = memAddrDelay; // @[Core.scala 799:19]
  assign io_rvfiSInt_0 = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_58; // @[Core.scala 793:36]
  assign io_rvfiSInt_1 = rsDataDelay_0_1; // @[Core.scala 768:30]
  assign io_rvfiSInt_2 = rsDataDelay_1_1; // @[Core.scala 768:30]
  assign io_rvfiSInt_3 = MEM_io_readData; // @[Core.scala 794:44]
  assign io_rvfiSInt_4 = memWdataDelay; // @[Core.scala 799:19]
  assign io_rvfiBool_0 = stallDelay_3; // @[Core.scala 799:19]
  assign io_rvfiRegAddr_0 = mem_reg_wra; // @[Core.scala 725:38 727:13]
  assign io_rvfiRegAddr_1 = rsAddrDelay_0_2; // @[Core.scala 765:33]
  assign io_rvfiRegAddr_2 = rsAddrDelay_1_2; // @[Core.scala 765:33]
  assign io_fcsr_o_data = IDecode_io_fscr_o_data; // @[Core.scala 197:18]
  assign InstructionFetch_reset = reset;
  assign InstructionFetch_io_address = Realigner_io_ral_address_o; // @[Core.scala 540:26]
  assign InstructionFetch_io_stall = Execute_io_stall | IDecode_io_stall | IF_stall; // @[Core.scala 573:48]
  assign InstructionFetch_io_coreInstrReq_ready = 1'h1; // @[Core.scala 205:14]
  assign InstructionFetch_io_coreInstrResp_valid = io_imemRsp_valid; // @[Core.scala 206:20]
  assign InstructionFetch_io_coreInstrResp_bits_dataResponse = io_imemRsp_bits_dataResponse; // @[Core.scala 206:20]
  assign IDecode_clock = clock;
  assign IDecode_reset = reset;
  assign IDecode_io_id_instruction = if_reg_ins; // @[Core.scala 617:21]
  assign IDecode_io_writeData = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_58; // @[Core.scala 725:38 726:13]
  assign IDecode_io_writeReg = mem_reg_wra; // @[Core.scala 725:38 727:13]
  assign IDecode_io_pcAddress = if_reg_pc; // @[Core.scala 618:16]
  assign IDecode_io_ctl_writeEnable = mem_reg_ctl_regWrite; // @[Core.scala 742:22]
  assign IDecode_io_id_ex_mem_read = id_reg_ctl_memRead; // @[Core.scala 659:21]
  assign IDecode_io_ex_mem_mem_read = ex_reg_ctl_memRead; // @[Core.scala 660:22]
  assign IDecode_io_dmem_resp_valid = io_dmemRsp_valid; // @[Core.scala 619:22]
  assign IDecode_io_id_ex_rd = id_reg_ins[11:7]; // @[Core.scala 664:28]
  assign IDecode_io_ex_mem_rd = ex_reg_ins[11:7]; // @[Core.scala 666:29]
  assign IDecode_io_id_ex_branch = id_reg_ins[6:0] == 7'h63; // @[Core.scala 665:42]
  assign IDecode_io_ex_mem_ins = ex_reg_ins; // @[Core.scala 623:17]
  assign IDecode_io_mem_wb_ins = mem_reg_ins; // @[Core.scala 624:17]
  assign IDecode_io_ex_ins = id_reg_ins; // @[Core.scala 622:13]
  assign IDecode_io_ex_result = Execute_io_ALUresult; // @[Core.scala 667:16]
  assign IDecode_io_ex_mem_result = ex_reg_result; // @[Core.scala 625:20]
  assign IDecode_io_mem_wb_result = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_58; // @[Core.scala 725:38 726:13]
  assign IDecode_io_id_ex_regWr = id_reg_ctl_regWrite; // @[Core.scala 629:18]
  assign IDecode_io_ex_mem_regWr = ex_reg_ctl_regWrite; // @[Core.scala 630:19]
  assign IDecode_io_csr_Ex = id_reg_is_csr; // @[Core.scala 668:13]
  assign IDecode_io_csr_Mem = ex_reg_is_csr; // @[Core.scala 714:14]
  assign IDecode_io_csr_Wb = mem_reg_is_csr; // @[Core.scala 743:13]
  assign IDecode_io_csr_Ex_data = id_reg_csr_data; // @[Core.scala 669:18]
  assign IDecode_io_csr_Mem_data = ex_reg_csr_data; // @[Core.scala 715:19]
  assign IDecode_io_csr_Wb_data = mem_reg_csr_data; // @[Core.scala 744:18]
  assign IDecode_io_dmem_data = io_dmemRsp_bits_dataResponse; // @[Core.scala 745:16]
  assign IDecode_io_write_data = mem_reg_vec_alu_out; // @[Core.scala 523:17]
  assign IDecode_io_wb_addr = mem_reg_vec_vd_addr; // @[Core.scala 521:14]
  assign IDecode_io_wb_RegWrite = mem_reg_vec_reg_write; // @[Core.scala 520:18]
  assign IDecode_io_id_lmul_count = mem_reg_lmul_v; // @[Core.scala 522:20]
  assign IDecode_io_id_lmul_vs1in_vs2in = if_reg_lmul_v; // @[Core.scala 387:28]
  assign IDecode_io_id_vc3 = {{1'd0}, if_vc3}; // @[Core.scala 388:15]
  assign IDecode_io_vtypei = mem_reg_vtype; // @[Core.scala 526:13]
  assign IDecode_io_vl = mem_reg_vec_vl; // @[Core.scala 525:9]
  assign IDecode_io_ctl_vset = mem_reg_vset; // @[Core.scala 524:15]
  assign IDecode_io_csr_i_misa = 32'h0;
  assign IDecode_io_csr_i_mhartid = 32'h0;
  assign Execute_clock = clock;
  assign Execute_reset = reset;
  assign Execute_io_immediate = id_reg_imm; // @[Core.scala 640:16]
  assign Execute_io_readData1 = id_reg_rd1; // @[Core.scala 641:16]
  assign Execute_io_readData2 = id_reg_rd2; // @[Core.scala 642:16]
  assign Execute_io_pcAddress = id_reg_pc; // @[Core.scala 643:16]
  assign Execute_io_func7 = id_reg_f7; // @[Core.scala 645:12]
  assign Execute_io_func3 = id_reg_f3; // @[Core.scala 644:12]
  assign Execute_io_mem_result = ex_reg_result; // @[Core.scala 713:17]
  assign Execute_io_wb_result = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_58; // @[Core.scala 725:38 726:13]
  assign Execute_io_ex_mem_regWrite = ex_reg_ctl_regWrite; // @[Core.scala 706:22]
  assign Execute_io_mem_wb_regWrite = mem_reg_ctl_regWrite; // @[Core.scala 740:22]
  assign Execute_io_id_ex_ins = id_reg_ins; // @[Core.scala 661:16]
  assign Execute_io_ex_mem_ins = ex_reg_ins; // @[Core.scala 662:17]
  assign Execute_io_mem_wb_ins = mem_reg_ins; // @[Core.scala 663:17]
  assign Execute_io_ctl_aluSrc = id_reg_ctl_aluSrc; // @[Core.scala 646:17]
  assign Execute_io_ctl_aluOp = id_reg_ctl_aluOp; // @[Core.scala 647:16]
  assign Execute_io_ctl_aluSrc1 = id_reg_ctl_aluSrc1; // @[Core.scala 648:18]
  assign Execute_io_func6 = id_reg_ins[31:26]; // @[Core.scala 401:25]
  assign Execute_io_v_ctl_aluop = id_reg_ctl_aluop[2:0]; // @[Core.scala 402:18]
  assign Execute_io_v_ctl_exsel = id_reg_ctl_Ex_sel; // @[Core.scala 403:18]
  assign Execute_io_v_ctl_regwrite = id_reg_ctl_RegWrite; // @[Core.scala 404:21]
  assign Execute_io_v_ctl_opBsel = id_reg_ctl_opBsel; // @[Core.scala 405:19]
  assign Execute_io_v_ctl_v_load = id_reg_ctl_v_load; // @[Core.scala 406:19]
  assign Execute_io_v_ctl_v_ins = id_reg_ctl_v_ins; // @[Core.scala 407:18]
  assign Execute_io_v_ctl_vset = id_reg_ctl_vset; // @[Core.scala 408:17]
  assign Execute_io_vs1_data = id_reg_v1_data; // @[Core.scala 410:15]
  assign Execute_io_vs2_data = id_reg_v2_data; // @[Core.scala 411:15]
  assign Execute_io_vl = ex_reg_vset ? $signed(ex_reg_vl) : $signed(_T_60); // @[Core.scala 412:15]
  assign Execute_io_vstart = id_reg_vstart_out; // @[Core.scala 413:13]
  assign Execute_io_vs3_data = id_reg_vs3_data; // @[Core.scala 414:15]
  assign Execute_io_vma = ex_reg_vset ? ex_reg_vtype[7] : _T_65; // @[Core.scala 415:16]
  assign Execute_io_vta = ex_reg_vset ? ex_reg_vtype[6] : _T_70; // @[Core.scala 416:16]
  assign Execute_io_vm = id_reg_ins[25]; // @[Core.scala 417:22]
  assign Execute_io_vs0 = id_reg_v0_data; // @[Core.scala 418:10]
  assign Execute_io_vd_addr = id_reg_ins[11:7]; // @[Core.scala 419:27]
  assign Execute_io_v_sew = ex_reg_vset ? ex_reg_vtype[5:3] : _T_77; // @[Core.scala 420:18]
  assign Execute_io_zimm = id_reg_vtype; // @[Core.scala 421:11]
  assign Execute_io_v_addi_imm = id_reg_v_addi_imm; // @[Core.scala 422:17]
  assign Execute_io_vec_mem_res = ex_reg_vec_alu_res; // @[Core.scala 502:18]
  assign Execute_io_vec_wb_res = mem_reg_vec_alu_out; // @[Core.scala 519:17]
  assign Execute_io_fu_ex_reg_vd = ex_reg_vd_addr; // @[Core.scala 428:19]
  assign Execute_io_fu_mem_reg_vd = mem_reg_vec_vd_addr; // @[Core.scala 429:20]
  assign Execute_io_fu_reg_vs1 = id_reg_vs1_addr; // @[Core.scala 424:17]
  assign Execute_io_fu_reg_vs2 = id_reg_vs2_addr; // @[Core.scala 425:17]
  assign Execute_io_fu_reg_vs3 = id_reg_vd_addr; // @[Core.scala 426:17]
  assign Execute_io_fu_ex_reg_write = ex_reg_reg_write; // @[Core.scala 445:22]
  assign Execute_io_fu_mem_reg_write = mem_reg_vec_reg_write; // @[Core.scala 431:23]
  assign Execute_io_v_MemWrite = id_reg_ctl_v_MemWrite; // @[Core.scala 446:17]
  assign MEM_clock = clock;
  assign MEM_reset = reset;
  assign MEM_io_aluResultIn = ex_reg_result; // @[Core.scala 708:22]
  assign MEM_io_v_addr = vlcount != ex_reg_vl & ex_reg_ins[6:0] == 7'h27 ? _GEN_46 : 32'h0; // @[Core.scala 478:72 498:17]
  assign MEM_io_v_ins = ex_reg_v_ins; // @[Core.scala 707:15]
  assign MEM_io_writeData = ex_reg_wd; // @[Core.scala 709:20]
  assign MEM_io_v_writeData = vlcount != ex_reg_vl & ex_reg_ins[6:0] == 7'h27 ? _GEN_45 : 32'h0; // @[Core.scala 474:20 478:72]
  assign MEM_io_writeEnable = ex_reg_v_ins ? ex_reg_ctl_v_MemWrite : ex_reg_ctl_memWrite; // @[Core.scala 711:28]
  assign MEM_io_readEnable = ex_reg_v_ins ? ex_reg_ctl_v_memRead : ex_reg_ctl_memRead; // @[Core.scala 710:27]
  assign MEM_io_f3 = ex_reg_ins[14:12]; // @[Core.scala 712:26]
  assign MEM_io_dccmRsp_valid = io_dmemRsp_valid; // @[Core.scala 685:18]
  assign MEM_io_dccmRsp_bits_dataResponse = io_dmemRsp_bits_dataResponse; // @[Core.scala 685:18]
  assign pc_clock = clock;
  assign pc_reset = reset;
  assign pc_io_in = _npc_T ? $signed(pc_io_out) : $signed(_npc_T_4); // @[Core.scala 700:17]
  assign pc_io_halt = Execute_io_stall | IDecode_io_stall | IF_stall | ~io_imemReq_valid | ral_halt_o; // @[Core.scala 576:79]
  assign vlsu_clock = clock;
  assign vlsu_reset = reset;
  assign vlsu_io_instr = CompressedDecoder_io_instruction_o; // @[Core.scala 208:25 551:18]
  assign vlsu_io_vtype = vtype; // @[Core.scala 255:15]
  assign Realigner_clock = clock;
  assign Realigner_reset = reset;
  assign Realigner_io_ral_address_i = pc_io_in; // @[Core.scala 536:44]
  assign Realigner_io_ral_instruction_i = InstructionFetch_io_instruction; // @[Core.scala 537:26]
  assign Realigner_io_ral_jmp = IDecode_io_pcSrc; // @[Core.scala 538:26]
  assign CompressedDecoder_io_instruction_i = Realigner_io_ral_instruction_o; // @[Core.scala 550:22]
  always @(posedge clock) begin
    if (reset) begin // @[Core.scala 38:26]
      if_reg_pc <= 32'h0; // @[Core.scala 38:26]
    end else if (IDecode_io_hdu_if_reg_write) begin // @[Core.scala 581:29]
      if_reg_pc <= pc_io_out; // @[Core.scala 582:15]
    end
    if (reset) begin // @[Core.scala 39:27]
      if_reg_ins <= 32'h0; // @[Core.scala 39:27]
    end else if (IDecode_io_ifid_flush) begin // @[Core.scala 585:23]
      if_reg_ins <= 32'h0; // @[Core.scala 586:16]
    end else if (IDecode_io_hdu_if_reg_write) begin // @[Core.scala 581:29]
      if_reg_ins <= instruction; // @[Core.scala 583:16]
    end
    if_reg_lmul_v <= _GEN_62[3:0]; // @[Core.scala 42:{30,30}]
    if_vc3 <= _GEN_63[3:0]; // @[Core.scala 43:{23,23}]
    if (reset) begin // @[Core.scala 46:27]
      if_reg_eew <= 10'h0; // @[Core.scala 46:27]
    end else begin
      if_reg_eew <= vlsu_io_eew; // @[Core.scala 354:14]
    end
    if (reset) begin // @[Core.scala 47:31]
      if_reg_lsuType <= 4'h0; // @[Core.scala 47:31]
    end else begin
      if_reg_lsuType <= vlsu_io_lsuType; // @[Core.scala 355:18]
    end
    if (reset) begin // @[Core.scala 51:26]
      id_reg_pc <= 32'h0; // @[Core.scala 51:26]
    end else begin
      id_reg_pc <= if_reg_pc; // @[Core.scala 602:13]
    end
    if (reset) begin // @[Core.scala 52:27]
      id_reg_rd1 <= 32'h0; // @[Core.scala 52:27]
    end else begin
      id_reg_rd1 <= IDecode_io_readData1; // @[Core.scala 594:14]
    end
    if (reset) begin // @[Core.scala 53:27]
      id_reg_rd2 <= 32'h0; // @[Core.scala 53:27]
    end else begin
      id_reg_rd2 <= IDecode_io_readData2; // @[Core.scala 595:14]
    end
    if (reset) begin // @[Core.scala 54:27]
      id_reg_imm <= 32'h0; // @[Core.scala 54:27]
    end else begin
      id_reg_imm <= IDecode_io_immediate; // @[Core.scala 596:14]
    end
    if (reset) begin // @[Core.scala 55:27]
      id_reg_wra <= 5'h0; // @[Core.scala 55:27]
    end else if (!(Execute_io_stall)) begin // @[Core.scala 674:17]
      id_reg_wra <= IDecode_io_writeRegAddress; // @[Core.scala 597:14]
    end
    if (reset) begin // @[Core.scala 56:26]
      id_reg_f7 <= 7'h0; // @[Core.scala 56:26]
    end else begin
      id_reg_f7 <= IDecode_io_func7; // @[Core.scala 600:13]
    end
    if (reset) begin // @[Core.scala 58:26]
      id_reg_f3 <= 3'h0; // @[Core.scala 58:26]
    end else begin
      id_reg_f3 <= IDecode_io_func3; // @[Core.scala 598:13]
    end
    if (reset) begin // @[Core.scala 59:27]
      id_reg_ins <= 32'h0; // @[Core.scala 59:27]
    end else begin
      id_reg_ins <= if_reg_ins; // @[Core.scala 601:14]
    end
    if (reset) begin // @[Core.scala 60:34]
      id_reg_ctl_aluSrc <= 1'h0; // @[Core.scala 60:34]
    end else begin
      id_reg_ctl_aluSrc <= IDecode_io_ctl_aluSrc; // @[Core.scala 603:21]
    end
    if (reset) begin // @[Core.scala 61:35]
      id_reg_ctl_aluSrc1 <= 2'h0; // @[Core.scala 61:35]
    end else begin
      id_reg_ctl_aluSrc1 <= IDecode_io_ctl_aluSrc1; // @[Core.scala 611:22]
    end
    if (reset) begin // @[Core.scala 62:36]
      id_reg_ctl_memToReg <= 2'h0; // @[Core.scala 62:36]
    end else begin
      id_reg_ctl_memToReg <= IDecode_io_ctl_memToReg; // @[Core.scala 604:23]
    end
    if (reset) begin // @[Core.scala 63:36]
      id_reg_ctl_regWrite <= 1'h0; // @[Core.scala 63:36]
    end else if (!(Execute_io_stall)) begin // @[Core.scala 674:17]
      id_reg_ctl_regWrite <= IDecode_io_ctl_regWrite | IDecode_io_ctl_v_RegWrite; // @[Core.scala 605:23]
    end
    if (reset) begin // @[Core.scala 64:35]
      id_reg_ctl_memRead <= 1'h0; // @[Core.scala 64:35]
    end else begin
      id_reg_ctl_memRead <= IDecode_io_ctl_memRead; // @[Core.scala 606:22]
    end
    if (reset) begin // @[Core.scala 65:36]
      id_reg_ctl_memWrite <= 1'h0; // @[Core.scala 65:36]
    end else begin
      id_reg_ctl_memWrite <= IDecode_io_ctl_memWrite; // @[Core.scala 607:23]
    end
    if (reset) begin // @[Core.scala 67:33]
      id_reg_ctl_aluOp <= 2'h0; // @[Core.scala 67:33]
    end else begin
      id_reg_ctl_aluOp <= IDecode_io_ctl_aluOp; // @[Core.scala 609:20]
    end
    if (reset) begin // @[Core.scala 69:30]
      id_reg_is_csr <= 1'h0; // @[Core.scala 69:30]
    end else begin
      id_reg_is_csr <= IDecode_io_is_csr; // @[Core.scala 612:17]
    end
    if (reset) begin // @[Core.scala 70:32]
      id_reg_csr_data <= 32'h0; // @[Core.scala 70:32]
    end else begin
      id_reg_csr_data <= IDecode_io_csr_o_data; // @[Core.scala 613:19]
    end
    id_reg_z_imm <= _GEN_65[10:0]; // @[Core.scala 365:18 75:{29,29}]
    if (reset) begin // @[Core.scala 77:34]
      id_reg_vstart_out <= 32'sh0; // @[Core.scala 77:34]
    end else begin
      id_reg_vstart_out <= IDecode_io_vstart_out; // @[Core.scala 366:23]
    end
    if (reset) begin // @[Core.scala 78:29]
      id_reg_vtype <= 32'sh0; // @[Core.scala 78:29]
    end else begin
      id_reg_vtype <= {{21{IDecode_io_vtypei_out[10]}},IDecode_io_vtypei_out}; // @[Core.scala 367:18]
    end
    if (reset) begin // @[Core.scala 79:34]
      id_reg_v_addi_imm <= 32'sh0; // @[Core.scala 79:34]
    end else begin
      id_reg_v_addi_imm <= IDecode_io_v_addi_imm; // @[Core.scala 368:23]
    end
    if (reset) begin // @[Core.scala 80:31]
      id_reg_v0_data <= 128'sh0; // @[Core.scala 80:31]
    end else begin
      id_reg_v0_data <= IDecode_io_vs0_data; // @[Core.scala 369:20]
    end
    if (reset) begin // @[Core.scala 81:31]
      id_reg_v1_data <= 128'sh0; // @[Core.scala 81:31]
    end else begin
      id_reg_v1_data <= IDecode_io_vs1_data; // @[Core.scala 370:20]
    end
    if (reset) begin // @[Core.scala 82:31]
      id_reg_v2_data <= 128'sh0; // @[Core.scala 82:31]
    end else begin
      id_reg_v2_data <= IDecode_io_vs2_data; // @[Core.scala 371:20]
    end
    if (reset) begin // @[Core.scala 83:32]
      id_reg_vs3_data <= 128'sh0; // @[Core.scala 83:32]
    end else begin
      id_reg_vs3_data <= IDecode_io_vs3_data; // @[Core.scala 372:21]
    end
    if (reset) begin // @[Core.scala 84:32]
      id_reg_vs1_addr <= 5'h0; // @[Core.scala 84:32]
    end else begin
      id_reg_vs1_addr <= IDecode_io_vs1_addr; // @[Core.scala 384:21]
    end
    if (reset) begin // @[Core.scala 85:32]
      id_reg_vs2_addr <= 5'h0; // @[Core.scala 85:32]
    end else begin
      id_reg_vs2_addr <= IDecode_io_vs2_addr; // @[Core.scala 385:21]
    end
    if (reset) begin // @[Core.scala 86:31]
      id_reg_vd_addr <= 5'h0; // @[Core.scala 86:31]
    end else begin
      id_reg_vd_addr <= IDecode_io_vd_addr; // @[Core.scala 383:20]
    end
    if (reset) begin // @[Core.scala 87:30]
      id_reg_lmul_v <= 4'h0; // @[Core.scala 87:30]
    end else begin
      id_reg_lmul_v <= if_reg_lmul_v; // @[Core.scala 386:20]
    end
    if (reset) begin // @[Core.scala 91:27]
      id_reg_eew <= 10'h0; // @[Core.scala 91:27]
    end else begin
      id_reg_eew <= if_reg_eew; // @[Core.scala 391:16]
    end
    if (reset) begin // @[Core.scala 92:31]
      id_reg_lsuType <= 4'h0; // @[Core.scala 92:31]
    end else begin
      id_reg_lsuType <= if_reg_lsuType; // @[Core.scala 392:20]
    end
    if (reset) begin // @[Core.scala 96:36]
      id_reg_ctl_RegWrite <= 1'h0; // @[Core.scala 96:36]
    end else begin
      id_reg_ctl_RegWrite <= IDecode_io_ctl_v_RegWrite; // @[Core.scala 373:25]
    end
    if (reset) begin // @[Core.scala 99:34]
      id_reg_ctl_opBsel <= 1'h0; // @[Core.scala 99:34]
    end else begin
      id_reg_ctl_opBsel <= IDecode_io_ctl_v_opBsel; // @[Core.scala 374:23]
    end
    if (reset) begin // @[Core.scala 100:34]
      id_reg_ctl_Ex_sel <= 4'h0; // @[Core.scala 100:34]
    end else begin
      id_reg_ctl_Ex_sel <= IDecode_io_ctl_v_Ex_sel; // @[Core.scala 375:23]
    end
    if (reset) begin // @[Core.scala 102:33]
      id_reg_ctl_aluop <= 5'h0; // @[Core.scala 102:33]
    end else begin
      id_reg_ctl_aluop <= IDecode_io_ctl_v_aluop; // @[Core.scala 376:22]
    end
    if (reset) begin // @[Core.scala 103:32]
      id_reg_ctl_vset <= 1'h0; // @[Core.scala 103:32]
    end else begin
      id_reg_ctl_vset <= IDecode_io_ctl_v_vset; // @[Core.scala 377:21]
    end
    id_reg_ctl_v_load <= _GEN_67[0]; // @[Core.scala 104:{34,34} 378:23]
    if (reset) begin // @[Core.scala 105:33]
      id_reg_ctl_v_ins <= 1'h0; // @[Core.scala 105:33]
    end else begin
      id_reg_ctl_v_ins <= IDecode_io_ctl_v_ins; // @[Core.scala 379:22]
    end
    if (reset) begin // @[Core.scala 106:37]
      id_reg_ctl_v_memRead <= 1'h0; // @[Core.scala 106:37]
    end else begin
      id_reg_ctl_v_memRead <= IDecode_io_ctl_v_memRead; // @[Core.scala 380:26]
    end
    if (reset) begin // @[Core.scala 107:38]
      id_reg_ctl_v_MemWrite <= 1'h0; // @[Core.scala 107:38]
    end else begin
      id_reg_ctl_v_MemWrite <= IDecode_io_ctl_v_memWrite; // @[Core.scala 381:27]
    end
    if (reset) begin // @[Core.scala 116:30]
      ex_reg_result <= 32'h0; // @[Core.scala 116:30]
    end else begin
      ex_reg_result <= Execute_io_ALUresult; // @[Core.scala 697:19]
    end
    if (reset) begin // @[Core.scala 117:26]
      ex_reg_wd <= 32'h0; // @[Core.scala 117:26]
    end else begin
      ex_reg_wd <= Execute_io_writeData; // @[Core.scala 696:15]
    end
    if (reset) begin // @[Core.scala 118:27]
      ex_reg_wra <= 5'h0; // @[Core.scala 118:27]
    end else begin
      ex_reg_wra <= id_reg_wra; // @[Core.scala 652:14]
    end
    if (reset) begin // @[Core.scala 119:27]
      ex_reg_ins <= 32'h0; // @[Core.scala 119:27]
    end else begin
      ex_reg_ins <= id_reg_ins; // @[Core.scala 653:14]
    end
    if (reset) begin // @[Core.scala 120:36]
      ex_reg_ctl_memToReg <= 2'h0; // @[Core.scala 120:36]
    end else begin
      ex_reg_ctl_memToReg <= id_reg_ctl_memToReg; // @[Core.scala 654:23]
    end
    if (reset) begin // @[Core.scala 121:36]
      ex_reg_ctl_regWrite <= 1'h0; // @[Core.scala 121:36]
    end else begin
      ex_reg_ctl_regWrite <= id_reg_ctl_regWrite; // @[Core.scala 655:23]
    end
    if (reset) begin // @[Core.scala 122:35]
      ex_reg_ctl_memRead <= 1'h0; // @[Core.scala 122:35]
    end else begin
      ex_reg_ctl_memRead <= id_reg_ctl_memRead; // @[Core.scala 694:24]
    end
    if (reset) begin // @[Core.scala 123:36]
      ex_reg_ctl_memWrite <= 1'h0; // @[Core.scala 123:36]
    end else begin
      ex_reg_ctl_memWrite <= id_reg_ctl_memWrite; // @[Core.scala 695:25]
    end
    if (reset) begin // @[Core.scala 125:26]
      ex_reg_pc <= 32'h0; // @[Core.scala 125:26]
    end else begin
      ex_reg_pc <= id_reg_pc; // @[Core.scala 651:13]
    end
    if (reset) begin // @[Core.scala 126:30]
      ex_reg_is_csr <= 1'h0; // @[Core.scala 126:30]
    end else begin
      ex_reg_is_csr <= id_reg_is_csr; // @[Core.scala 656:17]
    end
    if (reset) begin // @[Core.scala 127:32]
      ex_reg_csr_data <= 32'h0; // @[Core.scala 127:32]
    end else begin
      ex_reg_csr_data <= id_reg_csr_data; // @[Core.scala 657:19]
    end
    if (reset) begin // @[Core.scala 130:35]
      ex_reg_vec_alu_res <= 128'sh0; // @[Core.scala 130:35]
    end else begin
      ex_reg_vec_alu_res <= Execute_io_vec_alu_res; // @[Core.scala 435:22]
    end
    if (reset) begin // @[Core.scala 132:26]
      ex_reg_vl <= 32'sh0; // @[Core.scala 132:26]
    end else begin
      ex_reg_vl <= Execute_io_vec_vl; // @[Core.scala 437:13]
    end
    if (reset) begin // @[Core.scala 139:31]
      ex_reg_vd_addr <= 5'h0; // @[Core.scala 139:31]
    end else begin
      ex_reg_vd_addr <= id_reg_vd_addr; // @[Core.scala 447:18]
    end
    if (reset) begin // @[Core.scala 140:30]
      ex_reg_lmul_v <= 4'h0; // @[Core.scala 140:30]
    end else begin
      ex_reg_lmul_v <= id_reg_lmul_v; // @[Core.scala 448:17]
    end
    if (reset) begin // @[Core.scala 142:28]
      ex_reg_vset <= 1'h0; // @[Core.scala 142:28]
    end else begin
      ex_reg_vset <= id_reg_ctl_vset; // @[Core.scala 409:15]
    end
    if (reset) begin // @[Core.scala 143:37]
      ex_reg_ctl_v_memRead <= 1'h0; // @[Core.scala 143:37]
    end else begin
      ex_reg_ctl_v_memRead <= id_reg_ctl_v_memRead; // @[Core.scala 441:24]
    end
    if (reset) begin // @[Core.scala 144:38]
      ex_reg_ctl_v_MemWrite <= 1'h0; // @[Core.scala 144:38]
    end else begin
      ex_reg_ctl_v_MemWrite <= id_reg_ctl_v_MemWrite; // @[Core.scala 442:25]
    end
    if (reset) begin // @[Core.scala 145:33]
      ex_reg_reg_write <= 1'h0; // @[Core.scala 145:33]
    end else begin
      ex_reg_reg_write <= id_reg_ctl_RegWrite; // @[Core.scala 444:20]
    end
    if (reset) begin // @[Core.scala 146:29]
      ex_reg_vtype <= 11'sh0; // @[Core.scala 146:29]
    end else begin
      ex_reg_vtype <= id_reg_z_imm; // @[Core.scala 434:16]
    end
    if (reset) begin // @[Core.scala 149:27]
      ex_reg_eew <= 10'h0; // @[Core.scala 149:27]
    end else begin
      ex_reg_eew <= id_reg_eew; // @[Core.scala 452:14]
    end
    if (reset) begin // @[Core.scala 150:31]
      ex_reg_lsuType <= 4'h0; // @[Core.scala 150:31]
    end else begin
      ex_reg_lsuType <= id_reg_lsuType; // @[Core.scala 453:18]
    end
    if (reset) begin // @[Core.scala 151:34]
      ex_reg_read_data1 <= 32'h0; // @[Core.scala 151:34]
    end else begin
      ex_reg_read_data1 <= id_reg_rd1; // @[Core.scala 454:21]
    end
    if (reset) begin // @[Core.scala 154:29]
      ex_reg_v_ins <= 1'h0; // @[Core.scala 154:29]
    end else begin
      ex_reg_v_ins <= id_reg_ctl_v_ins; // @[Core.scala 456:16]
    end
    if (reset) begin // @[Core.scala 158:28]
      mem_reg_ins <= 32'h0; // @[Core.scala 158:28]
    end else begin
      mem_reg_ins <= ex_reg_ins; // @[Core.scala 691:17]
    end
    if (reset) begin // @[Core.scala 159:31]
      mem_reg_result <= 32'h0; // @[Core.scala 159:31]
    end else begin
      mem_reg_result <= ex_reg_result; // @[Core.scala 688:20]
    end
    if (reset) begin // @[Core.scala 161:28]
      mem_reg_wra <= 5'h0; // @[Core.scala 161:28]
    end else begin
      mem_reg_wra <= ex_reg_wra; // @[Core.scala 702:15]
    end
    if (reset) begin // @[Core.scala 162:37]
      mem_reg_ctl_memToReg <= 2'h0; // @[Core.scala 162:37]
    end else begin
      mem_reg_ctl_memToReg <= ex_reg_ctl_memToReg; // @[Core.scala 703:24]
    end
    if (reset) begin // @[Core.scala 163:37]
      mem_reg_ctl_regWrite <= 1'h0; // @[Core.scala 163:37]
    end else begin
      mem_reg_ctl_regWrite <= ex_reg_ctl_regWrite; // @[Core.scala 690:26]
    end
    if (reset) begin // @[Core.scala 164:27]
      mem_reg_pc <= 32'h0; // @[Core.scala 164:27]
    end else begin
      mem_reg_pc <= ex_reg_pc; // @[Core.scala 692:16]
    end
    if (reset) begin // @[Core.scala 165:31]
      mem_reg_is_csr <= 1'h0; // @[Core.scala 165:31]
    end else begin
      mem_reg_is_csr <= ex_reg_is_csr; // @[Core.scala 704:18]
    end
    if (reset) begin // @[Core.scala 166:33]
      mem_reg_csr_data <= 32'h0; // @[Core.scala 166:33]
    end else begin
      mem_reg_csr_data <= ex_reg_csr_data; // @[Core.scala 705:20]
    end
    if (reset) begin // @[Core.scala 169:36]
      mem_reg_vec_alu_out <= 128'sh0; // @[Core.scala 169:36]
    end else begin
      mem_reg_vec_alu_out <= ex_reg_vec_alu_res; // @[Core.scala 503:23]
    end
    if (reset) begin // @[Core.scala 170:31]
      mem_reg_vec_vl <= 32'sh0; // @[Core.scala 170:31]
    end else begin
      mem_reg_vec_vl <= ex_reg_vl; // @[Core.scala 505:18]
    end
    if (reset) begin // @[Core.scala 171:30]
      mem_reg_vtype <= 11'sh0; // @[Core.scala 171:30]
    end else begin
      mem_reg_vtype <= ex_reg_vtype; // @[Core.scala 506:17]
    end
    if (reset) begin // @[Core.scala 175:36]
      mem_reg_vec_vd_addr <= 5'h0; // @[Core.scala 175:36]
    end else begin
      mem_reg_vec_vd_addr <= ex_reg_vd_addr; // @[Core.scala 511:23]
    end
    if (reset) begin // @[Core.scala 177:31]
      mem_reg_lmul_v <= 4'h0; // @[Core.scala 177:31]
    end else begin
      mem_reg_lmul_v <= ex_reg_lmul_v; // @[Core.scala 512:18]
    end
    if (reset) begin // @[Core.scala 178:29]
      mem_reg_vset <= 1'h0; // @[Core.scala 178:29]
    end else begin
      mem_reg_vset <= ex_reg_vset; // @[Core.scala 504:16]
    end
    if (reset) begin // @[Core.scala 179:38]
      mem_reg_vec_reg_write <= 1'h0; // @[Core.scala 179:38]
    end else begin
      mem_reg_vec_reg_write <= ex_reg_reg_write; // @[Core.scala 510:25]
    end
    if (reset) begin // @[Core.scala 218:19]
      lmul <= 3'h0; // @[Core.scala 218:19]
    end else if (instruction[6:0] == 7'h57 & instruction[14:12] == 3'h7 & (~instruction[31] | instruction[31:30] == 2'h3
      )) begin // @[Core.scala 222:133]
      lmul <= instruction[22:20]; // @[Core.scala 224:8]
    end
    if (reset) begin // @[Core.scala 219:20]
      vtype <= 32'h0; // @[Core.scala 219:20]
    end else if (instruction[6:0] == 7'h57 & instruction[14:12] == 3'h7 & (~instruction[31] | instruction[31:30] == 2'h3
      )) begin // @[Core.scala 222:133]
      vtype <= {{21'd0}, instruction[30:20]}; // @[Core.scala 225:9]
    end
    if (reset) begin // @[Core.scala 293:25]
      lmul_reg <= 32'h0; // @[Core.scala 293:25]
    end else if (emul_reg != emul_count & _T_21) begin // @[Core.scala 306:71]
      lmul_reg <= _GEN_21;
    end else if (emul_reg == emul_count & _T_21) begin // @[Core.scala 321:79]
      if (vc3 != 5'h3 & _T_21) begin // @[Core.scala 324:62]
        lmul_reg <= _GEN_21;
      end else begin
        lmul_reg <= 32'h0; // @[Core.scala 332:20]
      end
    end else begin
      lmul_reg <= _GEN_21;
    end
    if (reset) begin // @[Core.scala 294:20]
      vc3 <= 5'h0; // @[Core.scala 294:20]
    end else if (emul_reg != emul_count & _T_21) begin // @[Core.scala 306:71]
      if (vc3 != 5'h4) begin // @[Core.scala 309:27]
        vc3 <= _vc3_T_1; // @[Core.scala 310:16]
      end else begin
        vc3 <= 5'h0; // @[Core.scala 318:15]
      end
    end else if (emul_reg == emul_count & _T_21) begin // @[Core.scala 321:79]
      if (vc3 != 5'h3 & _T_21) begin // @[Core.scala 324:62]
        vc3 <= _vc3_T_1; // @[Core.scala 325:16]
      end else begin
        vc3 <= 5'h0; // @[Core.scala 334:15]
      end
    end
    if (reset) begin // @[Core.scala 305:27]
      emul_reg <= 32'h0; // @[Core.scala 305:27]
    end else if (emul_reg != emul_count & _T_21) begin // @[Core.scala 306:71]
      if (!(vc3 != 5'h4)) begin // @[Core.scala 309:27]
        emul_reg <= _if_vc3_T_3; // @[Core.scala 317:20]
      end
    end
    if (reset) begin // @[Core.scala 340:25]
      delays <= 32'h0; // @[Core.scala 340:25]
    end else if (delays != vlcount1 & _T_21) begin // @[Core.scala 341:66]
      delays <= _delays_T_1; // @[Core.scala 343:14]
    end
    if (reset) begin // @[Core.scala 464:24]
      addrcount <= 32'h0; // @[Core.scala 464:24]
    end else if (vlcount != ex_reg_vl & ex_reg_ins[6:0] == 7'h27) begin // @[Core.scala 478:72]
      if (ex_reg_lsuType == 4'h1) begin // @[Core.scala 481:33]
        addrcount <= _addrcount_T_1; // @[Core.scala 485:17]
      end
    end
    if (reset) begin // @[Core.scala 475:22]
      vlcount <= 32'h0; // @[Core.scala 475:22]
    end else if (vlcount != ex_reg_vl & ex_reg_ins[6:0] == 7'h27) begin // @[Core.scala 478:72]
      if (_vlcount_T) begin // @[Mux.scala 101:16]
        vlcount <= _vlcount_T_2;
      end else if (_vlcount_T_3) begin // @[Mux.scala 101:16]
        vlcount <= _vlcount_T_5;
      end else begin
        vlcount <= _vlcount_T_13;
      end
    end
    npcDelay_0 <= next_pc_selector == 32'h1 ? $signed(pc_io_out) : $signed(_npc_T_4); // @[Core.scala 777:25]
    npcDelay_1 <= npcDelay_0; // @[Core.scala 771:23]
    npcDelay_2 <= npcDelay_1; // @[Core.scala 771:23]
    npcDelay_3 <= npcDelay_2; // @[Core.scala 771:23]
    rsAddrDelay_0_0 <= IDecode_io_rs_addr_0; // @[Core.scala 764:25]
    rsAddrDelay_0_1 <= rsAddrDelay_0_0; // @[Core.scala 762:31]
    rsAddrDelay_0_2 <= rsAddrDelay_0_1; // @[Core.scala 762:31]
    rsAddrDelay_1_0 <= IDecode_io_rs_addr_1; // @[Core.scala 764:25]
    rsAddrDelay_1_1 <= rsAddrDelay_1_0; // @[Core.scala 762:31]
    rsAddrDelay_1_2 <= rsAddrDelay_1_1; // @[Core.scala 762:31]
    rsDataDelay_0_0 <= id_reg_rd1; // @[Core.scala 779:38]
    rsDataDelay_0_1 <= rsDataDelay_0_0; // @[Core.scala 767:25]
    rsDataDelay_1_0 <= id_reg_rd2; // @[Core.scala 780:38]
    rsDataDelay_1_1 <= rsDataDelay_1_0; // @[Core.scala 767:25]
    if (reset) begin // @[Core.scala 756:31]
      memAddrDelay <= 32'h0; // @[Core.scala 756:31]
    end else begin
      memAddrDelay <= ex_reg_result; // @[Core.scala 799:19]
    end
    if (reset) begin // @[Core.scala 757:32]
      memWdataDelay <= 32'sh0; // @[Core.scala 757:32]
    end else begin
      memWdataDelay <= ex_reg_wd; // @[Core.scala 799:19]
    end
    stallDelay_0 <= IDecode_io_hdu_if_reg_write; // @[Core.scala 799:19]
    stallDelay_1 <= stallDelay_0; // @[Core.scala 772:25]
    stallDelay_2 <= stallDelay_1; // @[Core.scala 772:25]
    stallDelay_3 <= stallDelay_2; // @[Core.scala 772:25]
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
  if_vc3 = _RAND_3[3:0];
  _RAND_4 = {1{`RANDOM}};
  if_reg_eew = _RAND_4[9:0];
  _RAND_5 = {1{`RANDOM}};
  if_reg_lsuType = _RAND_5[3:0];
  _RAND_6 = {1{`RANDOM}};
  id_reg_pc = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  id_reg_rd1 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  id_reg_rd2 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  id_reg_imm = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  id_reg_wra = _RAND_10[4:0];
  _RAND_11 = {1{`RANDOM}};
  id_reg_f7 = _RAND_11[6:0];
  _RAND_12 = {1{`RANDOM}};
  id_reg_f3 = _RAND_12[2:0];
  _RAND_13 = {1{`RANDOM}};
  id_reg_ins = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  id_reg_ctl_aluSrc = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  id_reg_ctl_aluSrc1 = _RAND_15[1:0];
  _RAND_16 = {1{`RANDOM}};
  id_reg_ctl_memToReg = _RAND_16[1:0];
  _RAND_17 = {1{`RANDOM}};
  id_reg_ctl_regWrite = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  id_reg_ctl_memRead = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  id_reg_ctl_memWrite = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  id_reg_ctl_aluOp = _RAND_20[1:0];
  _RAND_21 = {1{`RANDOM}};
  id_reg_is_csr = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  id_reg_csr_data = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  id_reg_z_imm = _RAND_23[10:0];
  _RAND_24 = {1{`RANDOM}};
  id_reg_vstart_out = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  id_reg_vtype = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  id_reg_v_addi_imm = _RAND_26[31:0];
  _RAND_27 = {4{`RANDOM}};
  id_reg_v0_data = _RAND_27[127:0];
  _RAND_28 = {4{`RANDOM}};
  id_reg_v1_data = _RAND_28[127:0];
  _RAND_29 = {4{`RANDOM}};
  id_reg_v2_data = _RAND_29[127:0];
  _RAND_30 = {4{`RANDOM}};
  id_reg_vs3_data = _RAND_30[127:0];
  _RAND_31 = {1{`RANDOM}};
  id_reg_vs1_addr = _RAND_31[4:0];
  _RAND_32 = {1{`RANDOM}};
  id_reg_vs2_addr = _RAND_32[4:0];
  _RAND_33 = {1{`RANDOM}};
  id_reg_vd_addr = _RAND_33[4:0];
  _RAND_34 = {1{`RANDOM}};
  id_reg_lmul_v = _RAND_34[3:0];
  _RAND_35 = {1{`RANDOM}};
  id_reg_eew = _RAND_35[9:0];
  _RAND_36 = {1{`RANDOM}};
  id_reg_lsuType = _RAND_36[3:0];
  _RAND_37 = {1{`RANDOM}};
  id_reg_ctl_RegWrite = _RAND_37[0:0];
  _RAND_38 = {1{`RANDOM}};
  id_reg_ctl_opBsel = _RAND_38[0:0];
  _RAND_39 = {1{`RANDOM}};
  id_reg_ctl_Ex_sel = _RAND_39[3:0];
  _RAND_40 = {1{`RANDOM}};
  id_reg_ctl_aluop = _RAND_40[4:0];
  _RAND_41 = {1{`RANDOM}};
  id_reg_ctl_vset = _RAND_41[0:0];
  _RAND_42 = {1{`RANDOM}};
  id_reg_ctl_v_load = _RAND_42[0:0];
  _RAND_43 = {1{`RANDOM}};
  id_reg_ctl_v_ins = _RAND_43[0:0];
  _RAND_44 = {1{`RANDOM}};
  id_reg_ctl_v_memRead = _RAND_44[0:0];
  _RAND_45 = {1{`RANDOM}};
  id_reg_ctl_v_MemWrite = _RAND_45[0:0];
  _RAND_46 = {1{`RANDOM}};
  ex_reg_result = _RAND_46[31:0];
  _RAND_47 = {1{`RANDOM}};
  ex_reg_wd = _RAND_47[31:0];
  _RAND_48 = {1{`RANDOM}};
  ex_reg_wra = _RAND_48[4:0];
  _RAND_49 = {1{`RANDOM}};
  ex_reg_ins = _RAND_49[31:0];
  _RAND_50 = {1{`RANDOM}};
  ex_reg_ctl_memToReg = _RAND_50[1:0];
  _RAND_51 = {1{`RANDOM}};
  ex_reg_ctl_regWrite = _RAND_51[0:0];
  _RAND_52 = {1{`RANDOM}};
  ex_reg_ctl_memRead = _RAND_52[0:0];
  _RAND_53 = {1{`RANDOM}};
  ex_reg_ctl_memWrite = _RAND_53[0:0];
  _RAND_54 = {1{`RANDOM}};
  ex_reg_pc = _RAND_54[31:0];
  _RAND_55 = {1{`RANDOM}};
  ex_reg_is_csr = _RAND_55[0:0];
  _RAND_56 = {1{`RANDOM}};
  ex_reg_csr_data = _RAND_56[31:0];
  _RAND_57 = {4{`RANDOM}};
  ex_reg_vec_alu_res = _RAND_57[127:0];
  _RAND_58 = {1{`RANDOM}};
  ex_reg_vl = _RAND_58[31:0];
  _RAND_59 = {1{`RANDOM}};
  ex_reg_vd_addr = _RAND_59[4:0];
  _RAND_60 = {1{`RANDOM}};
  ex_reg_lmul_v = _RAND_60[3:0];
  _RAND_61 = {1{`RANDOM}};
  ex_reg_vset = _RAND_61[0:0];
  _RAND_62 = {1{`RANDOM}};
  ex_reg_ctl_v_memRead = _RAND_62[0:0];
  _RAND_63 = {1{`RANDOM}};
  ex_reg_ctl_v_MemWrite = _RAND_63[0:0];
  _RAND_64 = {1{`RANDOM}};
  ex_reg_reg_write = _RAND_64[0:0];
  _RAND_65 = {1{`RANDOM}};
  ex_reg_vtype = _RAND_65[10:0];
  _RAND_66 = {1{`RANDOM}};
  ex_reg_eew = _RAND_66[9:0];
  _RAND_67 = {1{`RANDOM}};
  ex_reg_lsuType = _RAND_67[3:0];
  _RAND_68 = {1{`RANDOM}};
  ex_reg_read_data1 = _RAND_68[31:0];
  _RAND_69 = {1{`RANDOM}};
  ex_reg_v_ins = _RAND_69[0:0];
  _RAND_70 = {1{`RANDOM}};
  mem_reg_ins = _RAND_70[31:0];
  _RAND_71 = {1{`RANDOM}};
  mem_reg_result = _RAND_71[31:0];
  _RAND_72 = {1{`RANDOM}};
  mem_reg_wra = _RAND_72[4:0];
  _RAND_73 = {1{`RANDOM}};
  mem_reg_ctl_memToReg = _RAND_73[1:0];
  _RAND_74 = {1{`RANDOM}};
  mem_reg_ctl_regWrite = _RAND_74[0:0];
  _RAND_75 = {1{`RANDOM}};
  mem_reg_pc = _RAND_75[31:0];
  _RAND_76 = {1{`RANDOM}};
  mem_reg_is_csr = _RAND_76[0:0];
  _RAND_77 = {1{`RANDOM}};
  mem_reg_csr_data = _RAND_77[31:0];
  _RAND_78 = {4{`RANDOM}};
  mem_reg_vec_alu_out = _RAND_78[127:0];
  _RAND_79 = {1{`RANDOM}};
  mem_reg_vec_vl = _RAND_79[31:0];
  _RAND_80 = {1{`RANDOM}};
  mem_reg_vtype = _RAND_80[10:0];
  _RAND_81 = {1{`RANDOM}};
  mem_reg_vec_vd_addr = _RAND_81[4:0];
  _RAND_82 = {1{`RANDOM}};
  mem_reg_lmul_v = _RAND_82[3:0];
  _RAND_83 = {1{`RANDOM}};
  mem_reg_vset = _RAND_83[0:0];
  _RAND_84 = {1{`RANDOM}};
  mem_reg_vec_reg_write = _RAND_84[0:0];
  _RAND_85 = {1{`RANDOM}};
  lmul = _RAND_85[2:0];
  _RAND_86 = {1{`RANDOM}};
  vtype = _RAND_86[31:0];
  _RAND_87 = {1{`RANDOM}};
  lmul_reg = _RAND_87[31:0];
  _RAND_88 = {1{`RANDOM}};
  vc3 = _RAND_88[4:0];
  _RAND_89 = {1{`RANDOM}};
  emul_reg = _RAND_89[31:0];
  _RAND_90 = {1{`RANDOM}};
  delays = _RAND_90[31:0];
  _RAND_91 = {1{`RANDOM}};
  addrcount = _RAND_91[31:0];
  _RAND_92 = {1{`RANDOM}};
  vlcount = _RAND_92[31:0];
  _RAND_93 = {1{`RANDOM}};
  npcDelay_0 = _RAND_93[31:0];
  _RAND_94 = {1{`RANDOM}};
  npcDelay_1 = _RAND_94[31:0];
  _RAND_95 = {1{`RANDOM}};
  npcDelay_2 = _RAND_95[31:0];
  _RAND_96 = {1{`RANDOM}};
  npcDelay_3 = _RAND_96[31:0];
  _RAND_97 = {1{`RANDOM}};
  rsAddrDelay_0_0 = _RAND_97[4:0];
  _RAND_98 = {1{`RANDOM}};
  rsAddrDelay_0_1 = _RAND_98[4:0];
  _RAND_99 = {1{`RANDOM}};
  rsAddrDelay_0_2 = _RAND_99[4:0];
  _RAND_100 = {1{`RANDOM}};
  rsAddrDelay_1_0 = _RAND_100[4:0];
  _RAND_101 = {1{`RANDOM}};
  rsAddrDelay_1_1 = _RAND_101[4:0];
  _RAND_102 = {1{`RANDOM}};
  rsAddrDelay_1_2 = _RAND_102[4:0];
  _RAND_103 = {1{`RANDOM}};
  rsDataDelay_0_0 = _RAND_103[31:0];
  _RAND_104 = {1{`RANDOM}};
  rsDataDelay_0_1 = _RAND_104[31:0];
  _RAND_105 = {1{`RANDOM}};
  rsDataDelay_1_0 = _RAND_105[31:0];
  _RAND_106 = {1{`RANDOM}};
  rsDataDelay_1_1 = _RAND_106[31:0];
  _RAND_107 = {1{`RANDOM}};
  memAddrDelay = _RAND_107[31:0];
  _RAND_108 = {1{`RANDOM}};
  memWdataDelay = _RAND_108[31:0];
  _RAND_109 = {1{`RANDOM}};
  stallDelay_0 = _RAND_109[0:0];
  _RAND_110 = {1{`RANDOM}};
  stallDelay_1 = _RAND_110[0:0];
  _RAND_111 = {1{`RANDOM}};
  stallDelay_2 = _RAND_111[0:0];
  _RAND_112 = {1{`RANDOM}};
  stallDelay_3 = _RAND_112[0:0];
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
  wire  _T_2 = io_req_valid & io_req_bits_isWrite; // @[SRamTop.scala 49:34]
  wire  _GEN_0 = io_req_valid & io_req_bits_isWrite ? 1'h0 : 1'h1; // @[SRamTop.scala 29:19 49:58 54:27]
  wire  _GEN_6 = io_req_valid & ~io_req_bits_isWrite | _T_2; // @[SRamTop.scala 40:52 43:22]
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
  assign sram_csb_i = io_req_valid & ~io_req_bits_isWrite ? 1'h0 : _GEN_0; // @[SRamTop.scala 40:52 44:27]
  assign sram_we_i = io_req_valid & ~io_req_bits_isWrite; // @[SRamTop.scala 40:27]
  assign sram_wmask_i = io_req_bits_activeByteLane; // @[SRamTop.scala 49:58 56:29]
  assign sram_addr_i = io_req_bits_addrRequest[12:0];
  assign sram_wdata_i = io_req_bits_dataRequest; // @[SRamTop.scala 49:58 58:29]
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
  wire  _T_2 = io_req_valid & io_req_bits_isWrite; // @[SRamTop.scala 49:34]
  wire  _GEN_0 = io_req_valid & io_req_bits_isWrite ? 1'h0 : 1'h1; // @[SRamTop.scala 29:19 49:58 54:27]
  wire  _GEN_6 = io_req_valid & ~io_req_bits_isWrite | _T_2; // @[SRamTop.scala 40:52 43:22]
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
  assign sram_csb_i = io_req_valid & ~io_req_bits_isWrite ? 1'h0 : _GEN_0; // @[SRamTop.scala 40:52 44:27]
  assign sram_we_i = io_req_valid & ~io_req_bits_isWrite; // @[SRamTop.scala 40:27]
  assign sram_wmask_i = io_req_bits_activeByteLane; // @[SRamTop.scala 49:58 56:29]
  assign sram_addr_i = io_req_bits_addrRequest[12:0];
  assign sram_wdata_i = io_req_bits_dataRequest; // @[SRamTop.scala 49:58 58:29]
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
  wire [31:0] _clkCycle_T_1 = clkCycle + 32'h1; // @[Tracer.scala 19:24]
  wire  _T_1 = io_rvfiBool_0 & io_rvfiUInt_2 != 32'h0; // @[Tracer.scala 44:28]
  always @(posedge clock) begin
    if (reset) begin // @[Tracer.scala 18:31]
      clkCycle <= 32'h0; // @[Tracer.scala 18:31]
    end else begin
      clkCycle <= _clkCycle_T_1; // @[Tracer.scala 19:12]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~reset) begin
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
  wire  tracer_clock; // @[Top.scala 37:24]
  wire  tracer_reset; // @[Top.scala 37:24]
  wire [31:0] tracer_io_rvfiUInt_0; // @[Top.scala 37:24]
  wire [31:0] tracer_io_rvfiUInt_1; // @[Top.scala 37:24]
  wire [31:0] tracer_io_rvfiUInt_2; // @[Top.scala 37:24]
  wire [31:0] tracer_io_rvfiUInt_3; // @[Top.scala 37:24]
  wire [31:0] tracer_io_rvfiSInt_0; // @[Top.scala 37:24]
  wire [31:0] tracer_io_rvfiSInt_1; // @[Top.scala 37:24]
  wire [31:0] tracer_io_rvfiSInt_2; // @[Top.scala 37:24]
  wire [31:0] tracer_io_rvfiSInt_3; // @[Top.scala 37:24]
  wire [31:0] tracer_io_rvfiSInt_4; // @[Top.scala 37:24]
  wire  tracer_io_rvfiBool_0; // @[Top.scala 37:24]
  wire [4:0] tracer_io_rvfiRegAddr_0; // @[Top.scala 37:24]
  wire [4:0] tracer_io_rvfiRegAddr_1; // @[Top.scala 37:24]
  wire [4:0] tracer_io_rvfiRegAddr_2; // @[Top.scala 37:24]
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
  Tracer tracer ( // @[Top.scala 37:24]
    .clock(tracer_clock),
    .reset(tracer_reset),
    .io_rvfiUInt_0(tracer_io_rvfiUInt_0),
    .io_rvfiUInt_1(tracer_io_rvfiUInt_1),
    .io_rvfiUInt_2(tracer_io_rvfiUInt_2),
    .io_rvfiUInt_3(tracer_io_rvfiUInt_3),
    .io_rvfiSInt_0(tracer_io_rvfiSInt_0),
    .io_rvfiSInt_1(tracer_io_rvfiSInt_1),
    .io_rvfiSInt_2(tracer_io_rvfiSInt_2),
    .io_rvfiSInt_3(tracer_io_rvfiSInt_3),
    .io_rvfiSInt_4(tracer_io_rvfiSInt_4),
    .io_rvfiBool_0(tracer_io_rvfiBool_0),
    .io_rvfiRegAddr_0(tracer_io_rvfiRegAddr_0),
    .io_rvfiRegAddr_1(tracer_io_rvfiRegAddr_1),
    .io_rvfiRegAddr_2(tracer_io_rvfiRegAddr_2)
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
  assign tracer_clock = clock;
  assign tracer_reset = reset;
  assign tracer_io_rvfiUInt_0 = core_io_rvfiUInt_0; // @[Top.scala 45:19]
  assign tracer_io_rvfiUInt_1 = core_io_rvfiUInt_1; // @[Top.scala 45:19]
  assign tracer_io_rvfiUInt_2 = core_io_rvfiUInt_2; // @[Top.scala 45:19]
  assign tracer_io_rvfiUInt_3 = core_io_rvfiUInt_3; // @[Top.scala 45:19]
  assign tracer_io_rvfiSInt_0 = core_io_rvfiSInt_0; // @[Top.scala 45:19]
  assign tracer_io_rvfiSInt_1 = core_io_rvfiSInt_1; // @[Top.scala 45:19]
  assign tracer_io_rvfiSInt_2 = core_io_rvfiSInt_2; // @[Top.scala 45:19]
  assign tracer_io_rvfiSInt_3 = core_io_rvfiSInt_3; // @[Top.scala 45:19]
  assign tracer_io_rvfiSInt_4 = core_io_rvfiSInt_4; // @[Top.scala 45:19]
  assign tracer_io_rvfiBool_0 = core_io_rvfiBool_0; // @[Top.scala 45:19]
  assign tracer_io_rvfiRegAddr_0 = core_io_rvfiRegAddr_0; // @[Top.scala 45:19]
  assign tracer_io_rvfiRegAddr_1 = core_io_rvfiRegAddr_1; // @[Top.scala 45:19]
  assign tracer_io_rvfiRegAddr_2 = core_io_rvfiRegAddr_2; // @[Top.scala 45:19]
endmodule
