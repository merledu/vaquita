module control_unit(
  input         clock,
  input         reset,
  input  [6:0]  io_op_code,
  input  [4:0]  io_rd,
  input  [4:0]  io_rs1,
  input  [2:0]  io_fn3,
  input  [4:0]  io_lmul_count,
  input  [2:0]  io_n_fields,
  input  [1:0]  io_last2bits_config,
  output        io_mem_write,
  output        io_branch,
  output        io_mem_read,
  output        io_reg_write,
  output        io_vec_write,
  output [3:0]  io_mem_data_sel,
  output [3:0]  io_operand_a,
  output [3:0]  io_config,
  output [3:0]  io_operand_b,
  output [3:0]  io_vec_operand_a,
  output [3:0]  io_vec_operand_b,
  output [3:0]  io_extend_sel,
  output [3:0]  io_next_pc_selector,
  output        io_vector,
  output        io_vec_store,
  output [31:0] io_stall_true
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  wire  _T_3 = io_op_code == 7'h63; // @[control_unit.scala 100:25]
  wire  _T_8 = io_op_code == 7'h57; // @[control_unit.scala 199:25]
  wire  _T_10 = io_op_code == 7'h57 & io_fn3 == 3'h7; // @[control_unit.scala 199:41]
  wire  _T_11 = io_rs1 == 5'h0; // @[control_unit.scala 216:22]
  wire [1:0] _GEN_0 = _T_11 & io_rd != 5'h0 ? 2'h2 : 2'h0; // @[control_unit.scala 219:50 control_unit.scala 220:23 control_unit.scala 223:23]
  wire [1:0] _GEN_1 = io_rs1 == 5'h0 & io_rd == 5'h0 ? 2'h1 : _GEN_0; // @[control_unit.scala 216:45 control_unit.scala 217:23]
  wire [2:0] _GEN_2 = io_last2bits_config == 2'h3 ? 3'h4 : 3'h0; // @[control_unit.scala 225:44 control_unit.scala 226:26 control_unit.scala 229:26]
  wire  _T_18 = io_op_code == 7'h7; // @[control_unit.scala 234:26]
  reg [31:0] reg123; // @[control_unit.scala 249:29]
  wire [31:0] _reg123_T_1 = reg123 - 32'h1; // @[control_unit.scala 252:30]
  wire [2:0] _GEN_3 = reg123 > 32'h0 & _T_18 ? 3'h4 : 3'h0; // @[control_unit.scala 250:58 control_unit.scala 251:33 control_unit.scala 260:33]
  wire  _GEN_5 = reg123 > 32'h0 & _T_18 ? 1'h0 : 1'h1; // @[control_unit.scala 250:58 control_unit.scala 253:26 control_unit.scala 259:26]
  wire [31:0] _GEN_6 = reg123 > 32'h0 & _T_18 ? reg123 : 32'h0; // @[control_unit.scala 250:58 control_unit.scala 254:27 control_unit.scala 261:27]
  wire  _T_22 = io_op_code == 7'h27; // @[control_unit.scala 265:26]
  reg [31:0] reg1234; // @[control_unit.scala 280:30]
  wire [31:0] _reg1234_T_1 = reg1234 - 32'h1; // @[control_unit.scala 283:32]
  wire [2:0] _GEN_7 = reg1234 > 32'h0 & _T_22 ? 3'h4 : 3'h0; // @[control_unit.scala 281:57 control_unit.scala 282:33 control_unit.scala 291:33]
  wire [31:0] _GEN_10 = reg1234 > 32'h0 & _T_22 ? reg1234 : 32'h0; // @[control_unit.scala 281:57 control_unit.scala 285:27 control_unit.scala 292:27]
  wire  _T_28 = _T_8 & io_fn3 == 3'h0; // @[control_unit.scala 297:41]
  reg [31:0] lmul_reg; // @[control_unit.scala 313:31]
  wire [31:0] _GEN_202 = {{27'd0}, io_lmul_count}; // @[control_unit.scala 314:23]
  wire [31:0] _lmul_reg_T_1 = lmul_reg + 32'h1; // @[control_unit.scala 316:34]
  wire [2:0] _GEN_11 = lmul_reg != _GEN_202 & _T_8 ? 3'h4 : 3'h0; // @[control_unit.scala 314:70 control_unit.scala 315:33 control_unit.scala 322:33]
  reg [31:0] lmul_reg_1; // @[control_unit.scala 344:31]
  wire [31:0] _lmul_reg_T_3 = lmul_reg_1 + 32'h1; // @[control_unit.scala 347:34]
  wire [2:0] _GEN_14 = lmul_reg_1 != _GEN_202 & _T_8 ? 3'h4 : 3'h0; // @[control_unit.scala 345:70 control_unit.scala 346:33 control_unit.scala 353:33]
  wire  _T_40 = _T_8 & io_fn3 == 3'h3; // @[control_unit.scala 358:41]
  reg [31:0] lmul_reg_2; // @[control_unit.scala 375:31]
  wire [31:0] _lmul_reg_T_5 = lmul_reg_2 + 32'h1; // @[control_unit.scala 378:34]
  wire [2:0] _GEN_17 = lmul_reg_2 != _GEN_202 & _T_8 ? 3'h4 : 3'h0; // @[control_unit.scala 376:70 control_unit.scala 377:33 control_unit.scala 384:33]
  wire [1:0] _GEN_22 = _T_8 & io_fn3 == 3'h3 ? 2'h3 : 2'h0; // @[control_unit.scala 358:62 control_unit.scala 364:25 control_unit.scala 394:25]
  wire [2:0] _GEN_23 = _T_8 & io_fn3 == 3'h3 ? _GEN_17 : 3'h0; // @[control_unit.scala 358:62 control_unit.scala 398:29]
  wire [31:0] _GEN_24 = _T_8 & io_fn3 == 3'h3 ? lmul_reg_2 : 32'h0; // @[control_unit.scala 358:62 control_unit.scala 399:23]
  wire  _GEN_27 = _T_8 & io_fn3 == 3'h4 | _T_40; // @[control_unit.scala 327:62 control_unit.scala 332:22]
  wire [1:0] _GEN_28 = _T_8 & io_fn3 == 3'h4 ? 2'h3 : _GEN_22; // @[control_unit.scala 327:62 control_unit.scala 333:25]
  wire  _GEN_29 = _T_8 & io_fn3 == 3'h4 ? 1'h0 : _T_40; // @[control_unit.scala 327:62 control_unit.scala 335:22]
  wire [2:0] _GEN_30 = _T_8 & io_fn3 == 3'h4 ? _GEN_14 : _GEN_23; // @[control_unit.scala 327:62]
  wire [31:0] _GEN_31 = _T_8 & io_fn3 == 3'h4 ? lmul_reg_1 : _GEN_24; // @[control_unit.scala 327:62]
  wire  _GEN_34 = _T_8 & io_fn3 == 3'h0 | _GEN_27; // @[control_unit.scala 297:62 control_unit.scala 302:22]
  wire [1:0] _GEN_35 = _T_8 & io_fn3 == 3'h0 ? 2'h3 : _GEN_28; // @[control_unit.scala 297:62 control_unit.scala 303:24]
  wire  _GEN_36 = _T_8 & io_fn3 == 3'h0 ? 1'h0 : _GEN_29; // @[control_unit.scala 297:62 control_unit.scala 305:22]
  wire [2:0] _GEN_39 = _T_8 & io_fn3 == 3'h0 ? _GEN_11 : _GEN_30; // @[control_unit.scala 297:62]
  wire [31:0] _GEN_40 = _T_8 & io_fn3 == 3'h0 ? lmul_reg : _GEN_31; // @[control_unit.scala 297:62]
  wire [1:0] _GEN_43 = io_op_code == 7'h27 ? 2'h2 : _GEN_35; // @[control_unit.scala 265:43 control_unit.scala 270:24]
  wire  _GEN_44 = io_op_code == 7'h27 | _GEN_36; // @[control_unit.scala 265:43 control_unit.scala 272:22]
  wire [1:0] _GEN_45 = io_op_code == 7'h27 ? 2'h3 : 2'h0; // @[control_unit.scala 265:43 control_unit.scala 273:23]
  wire  _GEN_47 = io_op_code == 7'h27 ? 1'h0 : _T_28; // @[control_unit.scala 265:43 control_unit.scala 276:26]
  wire  _GEN_48 = io_op_code == 7'h27 ? 1'h0 : _GEN_34; // @[control_unit.scala 265:43 control_unit.scala 277:26]
  wire [2:0] _GEN_49 = io_op_code == 7'h27 ? _GEN_7 : _GEN_39; // @[control_unit.scala 265:43]
  wire [31:0] _GEN_51 = io_op_code == 7'h27 ? _GEN_10 : _GEN_40; // @[control_unit.scala 265:43]
  wire  _GEN_52 = io_op_code == 7'h7 ? 1'h0 : _T_22; // @[control_unit.scala 234:43 control_unit.scala 235:22]
  wire [1:0] _GEN_55 = io_op_code == 7'h7 ? 2'h2 : _GEN_43; // @[control_unit.scala 234:43 control_unit.scala 239:24]
  wire [1:0] _GEN_56 = io_op_code == 7'h7 ? 2'h2 : {{1'd0}, _GEN_44}; // @[control_unit.scala 234:43 control_unit.scala 241:22]
  wire [1:0] _GEN_57 = io_op_code == 7'h7 ? 2'h0 : _GEN_45; // @[control_unit.scala 234:43 control_unit.scala 242:23]
  wire  _GEN_59 = io_op_code == 7'h7 ? 1'h0 : _GEN_47; // @[control_unit.scala 234:43 control_unit.scala 245:26]
  wire  _GEN_60 = io_op_code == 7'h7 ? 1'h0 : _GEN_48; // @[control_unit.scala 234:43 control_unit.scala 246:26]
  wire [2:0] _GEN_61 = io_op_code == 7'h7 ? _GEN_3 : _GEN_49; // @[control_unit.scala 234:43]
  wire  _GEN_62 = io_op_code == 7'h7 ? _GEN_5 : _GEN_48; // @[control_unit.scala 234:43]
  wire [31:0] _GEN_63 = io_op_code == 7'h7 ? _GEN_6 : _GEN_51; // @[control_unit.scala 234:43]
  wire  _GEN_64 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? 1'h0 : _GEN_52; // @[control_unit.scala 199:62 control_unit.scala 200:22]
  wire  _GEN_66 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? 1'h0 : _T_18; // @[control_unit.scala 199:62 control_unit.scala 202:21]
  wire  _GEN_68 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? 1'h0 : _GEN_62; // @[control_unit.scala 199:62 control_unit.scala 204:22]
  wire [1:0] _GEN_69 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? 2'h0 : _GEN_55; // @[control_unit.scala 199:62 control_unit.scala 205:24]
  wire [1:0] _GEN_70 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? 2'h2 : _GEN_56; // @[control_unit.scala 199:62 control_unit.scala 206:22]
  wire [1:0] _GEN_71 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? 2'h0 : _GEN_57; // @[control_unit.scala 199:62 control_unit.scala 207:23]
  wire [2:0] _GEN_72 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? 3'h0 : _GEN_61; // @[control_unit.scala 199:62 control_unit.scala 208:29]
  wire [31:0] _GEN_73 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? 32'h0 : _GEN_63; // @[control_unit.scala 199:62 control_unit.scala 209:23]
  wire  _GEN_74 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? 1'h0 : 1'h1; // @[control_unit.scala 199:62 control_unit.scala 210:19]
  wire  _GEN_75 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? 1'h0 : _GEN_59; // @[control_unit.scala 199:62 control_unit.scala 212:26]
  wire  _GEN_76 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? 1'h0 : _GEN_60; // @[control_unit.scala 199:62 control_unit.scala 213:26]
  wire [2:0] _GEN_77 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? _GEN_2 : 3'h0; // @[control_unit.scala 199:62]
  wire [1:0] _GEN_78 = io_op_code == 7'h57 & io_fn3 == 3'h7 ? _GEN_1 : 2'h0; // @[control_unit.scala 199:62]
  wire  _GEN_79 = io_op_code == 7'h3 ? 1'h0 : _GEN_64; // @[control_unit.scala 179:41 control_unit.scala 180:22]
  wire  _GEN_81 = io_op_code == 7'h3 | _GEN_66; // @[control_unit.scala 179:41 control_unit.scala 182:21]
  wire  _GEN_82 = io_op_code == 7'h3 | _T_10; // @[control_unit.scala 179:41 control_unit.scala 183:22]
  wire  _GEN_83 = io_op_code == 7'h3 ? 1'h0 : _GEN_68; // @[control_unit.scala 179:41 control_unit.scala 184:22]
  wire [1:0] _GEN_84 = io_op_code == 7'h3 ? 2'h1 : _GEN_69; // @[control_unit.scala 179:41 control_unit.scala 185:24]
  wire [2:0] _GEN_85 = io_op_code == 7'h3 ? 3'h0 : _GEN_77; // @[control_unit.scala 179:41 control_unit.scala 186:22]
  wire [1:0] _GEN_86 = io_op_code == 7'h3 ? 2'h1 : _GEN_70; // @[control_unit.scala 179:41 control_unit.scala 187:22]
  wire [1:0] _GEN_87 = io_op_code == 7'h3 ? 2'h0 : _GEN_71; // @[control_unit.scala 179:41 control_unit.scala 188:23]
  wire [2:0] _GEN_88 = io_op_code == 7'h3 ? 3'h0 : _GEN_72; // @[control_unit.scala 179:41 control_unit.scala 189:29]
  wire [31:0] _GEN_89 = io_op_code == 7'h3 ? 32'h0 : _GEN_73; // @[control_unit.scala 179:41 control_unit.scala 190:31]
  wire  _GEN_90 = io_op_code == 7'h3 ? 1'h0 : _GEN_74; // @[control_unit.scala 179:41 control_unit.scala 191:19]
  wire  _GEN_91 = io_op_code == 7'h3 ? 1'h0 : _GEN_75; // @[control_unit.scala 179:41 control_unit.scala 193:26]
  wire  _GEN_92 = io_op_code == 7'h3 ? 1'h0 : _GEN_76; // @[control_unit.scala 179:41 control_unit.scala 194:26]
  wire [1:0] _GEN_93 = io_op_code == 7'h3 ? 2'h0 : _GEN_78; // @[control_unit.scala 179:41 control_unit.scala 195:19]
  wire  _GEN_94 = io_op_code == 7'h67 ? 1'h0 : _GEN_79; // @[control_unit.scala 159:41 control_unit.scala 160:22]
  wire  _GEN_96 = io_op_code == 7'h67 ? 1'h0 : _GEN_81; // @[control_unit.scala 159:41 control_unit.scala 162:21]
  wire  _GEN_97 = io_op_code == 7'h67 | _GEN_82; // @[control_unit.scala 159:41 control_unit.scala 163:22]
  wire  _GEN_98 = io_op_code == 7'h67 ? 1'h0 : _GEN_83; // @[control_unit.scala 159:41 control_unit.scala 164:22]
  wire [1:0] _GEN_99 = io_op_code == 7'h67 ? 2'h0 : _GEN_84; // @[control_unit.scala 159:41 control_unit.scala 165:24]
  wire [2:0] _GEN_100 = io_op_code == 7'h67 ? 3'h2 : _GEN_85; // @[control_unit.scala 159:41 control_unit.scala 166:22]
  wire [1:0] _GEN_101 = io_op_code == 7'h67 ? 2'h0 : _GEN_86; // @[control_unit.scala 159:41 control_unit.scala 167:22]
  wire [1:0] _GEN_102 = io_op_code == 7'h67 ? 2'h0 : _GEN_87; // @[control_unit.scala 159:41 control_unit.scala 168:23]
  wire [2:0] _GEN_103 = io_op_code == 7'h67 ? 3'h3 : _GEN_88; // @[control_unit.scala 159:41 control_unit.scala 169:29]
  wire [31:0] _GEN_104 = io_op_code == 7'h67 ? 32'h0 : _GEN_89; // @[control_unit.scala 159:41 control_unit.scala 170:31]
  wire  _GEN_105 = io_op_code == 7'h67 ? 1'h0 : _GEN_90; // @[control_unit.scala 159:41 control_unit.scala 171:19]
  wire  _GEN_106 = io_op_code == 7'h67 ? 1'h0 : _GEN_91; // @[control_unit.scala 159:41 control_unit.scala 173:26]
  wire  _GEN_107 = io_op_code == 7'h67 ? 1'h0 : _GEN_92; // @[control_unit.scala 159:41 control_unit.scala 174:26]
  wire [1:0] _GEN_108 = io_op_code == 7'h67 ? 2'h0 : _GEN_93; // @[control_unit.scala 159:41 control_unit.scala 175:19]
  wire  _GEN_109 = io_op_code == 7'h6f ? 1'h0 : _GEN_94; // @[control_unit.scala 139:41 control_unit.scala 140:22]
  wire  _GEN_111 = io_op_code == 7'h6f ? 1'h0 : _GEN_96; // @[control_unit.scala 139:41 control_unit.scala 142:21]
  wire  _GEN_112 = io_op_code == 7'h6f | _GEN_97; // @[control_unit.scala 139:41 control_unit.scala 143:22]
  wire  _GEN_113 = io_op_code == 7'h6f ? 1'h0 : _GEN_98; // @[control_unit.scala 139:41 control_unit.scala 144:22]
  wire [1:0] _GEN_114 = io_op_code == 7'h6f ? 2'h0 : _GEN_99; // @[control_unit.scala 139:41 control_unit.scala 145:24]
  wire [2:0] _GEN_115 = io_op_code == 7'h6f ? 3'h2 : _GEN_100; // @[control_unit.scala 139:41 control_unit.scala 146:22]
  wire [1:0] _GEN_116 = io_op_code == 7'h6f ? 2'h0 : _GEN_101; // @[control_unit.scala 139:41 control_unit.scala 147:22]
  wire [1:0] _GEN_117 = io_op_code == 7'h6f ? 2'h0 : _GEN_102; // @[control_unit.scala 139:41 control_unit.scala 148:23]
  wire [2:0] _GEN_118 = io_op_code == 7'h6f ? 3'h2 : _GEN_103; // @[control_unit.scala 139:41 control_unit.scala 149:29]
  wire [31:0] _GEN_119 = io_op_code == 7'h6f ? 32'h0 : _GEN_104; // @[control_unit.scala 139:41 control_unit.scala 150:31]
  wire  _GEN_120 = io_op_code == 7'h6f ? 1'h0 : _GEN_105; // @[control_unit.scala 139:41 control_unit.scala 151:19]
  wire  _GEN_121 = io_op_code == 7'h6f ? 1'h0 : _GEN_106; // @[control_unit.scala 139:41 control_unit.scala 153:26]
  wire  _GEN_122 = io_op_code == 7'h6f ? 1'h0 : _GEN_107; // @[control_unit.scala 139:41 control_unit.scala 154:26]
  wire [1:0] _GEN_123 = io_op_code == 7'h6f ? 2'h0 : _GEN_108; // @[control_unit.scala 139:41 control_unit.scala 155:19]
  wire  _GEN_124 = io_op_code == 7'h37 ? 1'h0 : _GEN_109; // @[control_unit.scala 120:41 control_unit.scala 121:22]
  wire  _GEN_126 = io_op_code == 7'h37 ? 1'h0 : _GEN_111; // @[control_unit.scala 120:41 control_unit.scala 123:21]
  wire  _GEN_127 = io_op_code == 7'h37 | _GEN_112; // @[control_unit.scala 120:41 control_unit.scala 124:22]
  wire  _GEN_128 = io_op_code == 7'h37 ? 1'h0 : _GEN_113; // @[control_unit.scala 120:41 control_unit.scala 125:22]
  wire [1:0] _GEN_129 = io_op_code == 7'h37 ? 2'h0 : _GEN_114; // @[control_unit.scala 120:41 control_unit.scala 126:24]
  wire [2:0] _GEN_130 = io_op_code == 7'h37 ? 3'h0 : _GEN_115; // @[control_unit.scala 120:41 control_unit.scala 127:22]
  wire [1:0] _GEN_131 = io_op_code == 7'h37 ? 2'h1 : _GEN_116; // @[control_unit.scala 120:41 control_unit.scala 128:22]
  wire [1:0] _GEN_132 = io_op_code == 7'h37 ? 2'h0 : _GEN_117; // @[control_unit.scala 120:41 control_unit.scala 129:23]
  wire [2:0] _GEN_133 = io_op_code == 7'h37 ? 3'h0 : _GEN_118; // @[control_unit.scala 120:41 control_unit.scala 130:29]
  wire [31:0] _GEN_134 = io_op_code == 7'h37 ? 32'h0 : _GEN_119; // @[control_unit.scala 120:41 control_unit.scala 131:31]
  wire  _GEN_135 = io_op_code == 7'h37 ? 1'h0 : _GEN_120; // @[control_unit.scala 120:41 control_unit.scala 132:19]
  wire  _GEN_136 = io_op_code == 7'h37 ? 1'h0 : _GEN_121; // @[control_unit.scala 120:41 control_unit.scala 134:26]
  wire  _GEN_137 = io_op_code == 7'h37 ? 1'h0 : _GEN_122; // @[control_unit.scala 120:41 control_unit.scala 135:26]
  wire [1:0] _GEN_138 = io_op_code == 7'h37 ? 2'h0 : _GEN_123; // @[control_unit.scala 120:41 control_unit.scala 136:19]
  wire  _GEN_139 = io_op_code == 7'h63 ? 1'h0 : _GEN_124; // @[control_unit.scala 100:41 control_unit.scala 101:22]
  wire  _GEN_141 = io_op_code == 7'h63 ? 1'h0 : _GEN_126; // @[control_unit.scala 100:41 control_unit.scala 103:21]
  wire  _GEN_142 = io_op_code == 7'h63 ? 1'h0 : _GEN_127; // @[control_unit.scala 100:41 control_unit.scala 104:22]
  wire  _GEN_143 = io_op_code == 7'h63 ? 1'h0 : _GEN_128; // @[control_unit.scala 100:41 control_unit.scala 105:22]
  wire [1:0] _GEN_144 = io_op_code == 7'h63 ? 2'h0 : _GEN_129; // @[control_unit.scala 100:41 control_unit.scala 106:24]
  wire [2:0] _GEN_145 = io_op_code == 7'h63 ? 3'h0 : _GEN_130; // @[control_unit.scala 100:41 control_unit.scala 107:22]
  wire [1:0] _GEN_146 = io_op_code == 7'h63 ? 2'h0 : _GEN_131; // @[control_unit.scala 100:41 control_unit.scala 108:22]
  wire [1:0] _GEN_147 = io_op_code == 7'h63 ? 2'h0 : _GEN_132; // @[control_unit.scala 100:41 control_unit.scala 109:23]
  wire [2:0] _GEN_148 = io_op_code == 7'h63 ? 3'h1 : _GEN_133; // @[control_unit.scala 100:41 control_unit.scala 110:29]
  wire [31:0] _GEN_149 = io_op_code == 7'h63 ? 32'h0 : _GEN_134; // @[control_unit.scala 100:41 control_unit.scala 111:31]
  wire  _GEN_150 = io_op_code == 7'h63 ? 1'h0 : _GEN_135; // @[control_unit.scala 100:41 control_unit.scala 112:19]
  wire  _GEN_151 = io_op_code == 7'h63 ? 1'h0 : _GEN_136; // @[control_unit.scala 100:41 control_unit.scala 114:26]
  wire  _GEN_152 = io_op_code == 7'h63 ? 1'h0 : _GEN_137; // @[control_unit.scala 100:41 control_unit.scala 115:26]
  wire [1:0] _GEN_153 = io_op_code == 7'h63 ? 2'h0 : _GEN_138; // @[control_unit.scala 100:41 control_unit.scala 116:19]
  wire  _GEN_154 = io_op_code == 7'h23 | _GEN_139; // @[control_unit.scala 80:41 control_unit.scala 81:22]
  wire  _GEN_155 = io_op_code == 7'h23 ? 1'h0 : _T_3; // @[control_unit.scala 80:41 control_unit.scala 82:19]
  wire  _GEN_156 = io_op_code == 7'h23 ? 1'h0 : _GEN_141; // @[control_unit.scala 80:41 control_unit.scala 83:21]
  wire  _GEN_157 = io_op_code == 7'h23 ? 1'h0 : _GEN_142; // @[control_unit.scala 80:41 control_unit.scala 84:22]
  wire  _GEN_158 = io_op_code == 7'h23 ? 1'h0 : _GEN_143; // @[control_unit.scala 80:41 control_unit.scala 85:22]
  wire [1:0] _GEN_159 = io_op_code == 7'h23 ? 2'h0 : _GEN_144; // @[control_unit.scala 80:41 control_unit.scala 86:24]
  wire [2:0] _GEN_160 = io_op_code == 7'h23 ? 3'h0 : _GEN_145; // @[control_unit.scala 80:41 control_unit.scala 87:22]
  wire [1:0] _GEN_161 = io_op_code == 7'h23 ? 2'h1 : _GEN_146; // @[control_unit.scala 80:41 control_unit.scala 88:22]
  wire [1:0] _GEN_162 = io_op_code == 7'h23 ? 2'h3 : _GEN_147; // @[control_unit.scala 80:41 control_unit.scala 89:23]
  wire [2:0] _GEN_163 = io_op_code == 7'h23 ? 3'h0 : _GEN_148; // @[control_unit.scala 80:41 control_unit.scala 90:29]
  wire [31:0] _GEN_164 = io_op_code == 7'h23 ? 32'h0 : _GEN_149; // @[control_unit.scala 80:41 control_unit.scala 91:31]
  wire  _GEN_165 = io_op_code == 7'h23 ? 1'h0 : _GEN_150; // @[control_unit.scala 80:41 control_unit.scala 92:19]
  wire  _GEN_166 = io_op_code == 7'h23 ? 1'h0 : _GEN_139; // @[control_unit.scala 80:41 control_unit.scala 93:22]
  wire  _GEN_167 = io_op_code == 7'h23 ? 1'h0 : _GEN_151; // @[control_unit.scala 80:41 control_unit.scala 94:26]
  wire  _GEN_168 = io_op_code == 7'h23 ? 1'h0 : _GEN_152; // @[control_unit.scala 80:41 control_unit.scala 95:26]
  wire [1:0] _GEN_169 = io_op_code == 7'h23 ? 2'h0 : _GEN_153; // @[control_unit.scala 80:41 control_unit.scala 96:19]
  wire  _GEN_170 = io_op_code == 7'h13 ? 1'h0 : _GEN_154; // @[control_unit.scala 59:41 control_unit.scala 60:22]
  wire  _GEN_171 = io_op_code == 7'h13 ? 1'h0 : _GEN_155; // @[control_unit.scala 59:41 control_unit.scala 61:19]
  wire  _GEN_172 = io_op_code == 7'h13 ? 1'h0 : _GEN_156; // @[control_unit.scala 59:41 control_unit.scala 62:21]
  wire  _GEN_173 = io_op_code == 7'h13 | _GEN_157; // @[control_unit.scala 59:41 control_unit.scala 63:22]
  wire  _GEN_174 = io_op_code == 7'h13 ? 1'h0 : _GEN_158; // @[control_unit.scala 59:41 control_unit.scala 64:22]
  wire [1:0] _GEN_175 = io_op_code == 7'h13 ? 2'h0 : _GEN_159; // @[control_unit.scala 59:41 control_unit.scala 65:24]
  wire [2:0] _GEN_176 = io_op_code == 7'h13 ? 3'h0 : _GEN_160; // @[control_unit.scala 59:41 control_unit.scala 66:22]
  wire [1:0] _GEN_177 = io_op_code == 7'h13 ? 2'h1 : _GEN_161; // @[control_unit.scala 59:41 control_unit.scala 67:22]
  wire [1:0] _GEN_178 = io_op_code == 7'h13 ? 2'h0 : _GEN_162; // @[control_unit.scala 59:41 control_unit.scala 68:23]
  wire [2:0] _GEN_179 = io_op_code == 7'h13 ? 3'h0 : _GEN_163; // @[control_unit.scala 59:41 control_unit.scala 69:29]
  wire [31:0] _GEN_180 = io_op_code == 7'h13 ? 32'h0 : _GEN_164; // @[control_unit.scala 59:41 control_unit.scala 70:31]
  wire  _GEN_181 = io_op_code == 7'h13 ? 1'h0 : _GEN_165; // @[control_unit.scala 59:41 control_unit.scala 71:19]
  wire  _GEN_182 = io_op_code == 7'h13 ? 1'h0 : _GEN_166; // @[control_unit.scala 59:41 control_unit.scala 72:22]
  wire  _GEN_183 = io_op_code == 7'h13 ? 1'h0 : _GEN_167; // @[control_unit.scala 59:41 control_unit.scala 73:26]
  wire  _GEN_184 = io_op_code == 7'h13 ? 1'h0 : _GEN_168; // @[control_unit.scala 59:41 control_unit.scala 74:26]
  wire [1:0] _GEN_185 = io_op_code == 7'h13 ? 2'h0 : _GEN_169; // @[control_unit.scala 59:41 control_unit.scala 75:19]
  wire [1:0] _GEN_191 = io_op_code == 7'h33 ? 2'h0 : _GEN_175; // @[control_unit.scala 39:36 control_unit.scala 45:24]
  wire [2:0] _GEN_192 = io_op_code == 7'h33 ? 3'h0 : _GEN_176; // @[control_unit.scala 39:36 control_unit.scala 46:22]
  wire [1:0] _GEN_193 = io_op_code == 7'h33 ? 2'h0 : _GEN_177; // @[control_unit.scala 39:36 control_unit.scala 47:22]
  wire [1:0] _GEN_194 = io_op_code == 7'h33 ? 2'h0 : _GEN_178; // @[control_unit.scala 39:36 control_unit.scala 48:23]
  wire [2:0] _GEN_195 = io_op_code == 7'h33 ? 3'h0 : _GEN_179; // @[control_unit.scala 39:36 control_unit.scala 49:29]
  wire  _GEN_199 = io_op_code == 7'h33 ? 1'h0 : _GEN_183; // @[control_unit.scala 39:36 control_unit.scala 53:26]
  wire  _GEN_200 = io_op_code == 7'h33 ? 1'h0 : _GEN_184; // @[control_unit.scala 39:36 control_unit.scala 54:26]
  wire [1:0] _GEN_201 = io_op_code == 7'h33 ? 2'h0 : _GEN_185; // @[control_unit.scala 39:36 control_unit.scala 55:19]
  assign io_mem_write = io_op_code == 7'h33 ? 1'h0 : _GEN_170; // @[control_unit.scala 39:36 control_unit.scala 40:22]
  assign io_branch = io_op_code == 7'h33 ? 1'h0 : _GEN_171; // @[control_unit.scala 39:36 control_unit.scala 41:19]
  assign io_mem_read = io_op_code == 7'h33 ? 1'h0 : _GEN_172; // @[control_unit.scala 39:36 control_unit.scala 42:21]
  assign io_reg_write = io_op_code == 7'h33 | _GEN_173; // @[control_unit.scala 39:36 control_unit.scala 43:22]
  assign io_vec_write = io_op_code == 7'h33 ? 1'h0 : _GEN_174; // @[control_unit.scala 39:36 control_unit.scala 44:22]
  assign io_mem_data_sel = {{2'd0}, _GEN_191}; // @[control_unit.scala 39:36 control_unit.scala 45:24]
  assign io_operand_a = {{1'd0}, _GEN_192}; // @[control_unit.scala 39:36 control_unit.scala 46:22]
  assign io_config = {{2'd0}, _GEN_201}; // @[control_unit.scala 39:36 control_unit.scala 55:19]
  assign io_operand_b = {{2'd0}, _GEN_193}; // @[control_unit.scala 39:36 control_unit.scala 47:22]
  assign io_vec_operand_a = {{3'd0}, _GEN_199}; // @[control_unit.scala 39:36 control_unit.scala 53:26]
  assign io_vec_operand_b = {{3'd0}, _GEN_200}; // @[control_unit.scala 39:36 control_unit.scala 54:26]
  assign io_extend_sel = {{2'd0}, _GEN_194}; // @[control_unit.scala 39:36 control_unit.scala 48:23]
  assign io_next_pc_selector = {{1'd0}, _GEN_195}; // @[control_unit.scala 39:36 control_unit.scala 49:29]
  assign io_vector = io_op_code == 7'h33 ? 1'h0 : _GEN_181; // @[control_unit.scala 39:36 control_unit.scala 51:19]
  assign io_vec_store = io_op_code == 7'h33 ? 1'h0 : _GEN_182; // @[control_unit.scala 39:36 control_unit.scala 52:22]
  assign io_stall_true = io_op_code == 7'h33 ? 32'h0 : _GEN_180; // @[control_unit.scala 39:36 control_unit.scala 50:23]
  always @(posedge clock) begin
    if (reset) begin // @[control_unit.scala 249:29]
      reg123 <= 32'h3; // @[control_unit.scala 249:29]
    end else if (reg123 > 32'h0 & _T_18) begin // @[control_unit.scala 250:58]
      reg123 <= _reg123_T_1; // @[control_unit.scala 252:20]
    end else begin
      reg123 <= 32'h3; // @[control_unit.scala 258:20]
    end
    if (reset) begin // @[control_unit.scala 280:30]
      reg1234 <= 32'h3; // @[control_unit.scala 280:30]
    end else if (reg1234 > 32'h0 & _T_22) begin // @[control_unit.scala 281:57]
      reg1234 <= _reg1234_T_1; // @[control_unit.scala 283:21]
    end else begin
      reg1234 <= 32'h3; // @[control_unit.scala 289:21]
    end
    if (reset) begin // @[control_unit.scala 313:31]
      lmul_reg <= 32'h0; // @[control_unit.scala 313:31]
    end else if (lmul_reg != _GEN_202 & _T_8) begin // @[control_unit.scala 314:70]
      lmul_reg <= _lmul_reg_T_1; // @[control_unit.scala 316:22]
    end else begin
      lmul_reg <= 32'h0; // @[control_unit.scala 321:22]
    end
    if (reset) begin // @[control_unit.scala 344:31]
      lmul_reg_1 <= 32'h0; // @[control_unit.scala 344:31]
    end else if (lmul_reg_1 != _GEN_202 & _T_8) begin // @[control_unit.scala 345:70]
      lmul_reg_1 <= _lmul_reg_T_3; // @[control_unit.scala 347:22]
    end else begin
      lmul_reg_1 <= 32'h0; // @[control_unit.scala 352:22]
    end
    if (reset) begin // @[control_unit.scala 375:31]
      lmul_reg_2 <= 32'h0; // @[control_unit.scala 375:31]
    end else if (lmul_reg_2 != _GEN_202 & _T_8) begin // @[control_unit.scala 376:70]
      lmul_reg_2 <= _lmul_reg_T_5; // @[control_unit.scala 378:22]
    end else begin
      lmul_reg_2 <= 32'h0; // @[control_unit.scala 383:22]
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
  reg123 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  reg1234 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  lmul_reg = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  lmul_reg_1 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  lmul_reg_2 = _RAND_4[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
