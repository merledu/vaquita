module BindsTo_0_instr_memory(
  input         clock,
  input  [31:0] io_address,
  output [31:0] io_r_data
);

initial begin
  $readmemh("./src/main/scala/riscv/file.txt", instr_memory.memory);
end
                      endmodule

bind instr_memory BindsTo_0_instr_memory BindsTo_0_instr_memory_Inst(.*);