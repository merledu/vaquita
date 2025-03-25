
# Vaquita: RISC-V Vector Co-Processor  
A CHISEL-based RISC-V Vector (RVV) v1.0 Extension Coprocessor Generator.

Vaquita is currently integrated with the [NucleusRV](https://github.com/merledu/nucleusrv)

---

## Features  
1. Supports configurable VLEN (Vector Length) 
2. Designed for seamless integration with In-Order cores.
3. 4 stage Pipeline execution for optimal throughput and latency.

### Instruction Coverage  
- **Vector-to-Vector Instructions**: 25 implemented  
- **Vector-to-Scalar Instructions**: 29 implemented  
- **Vector-to-Immediate Instructions**: 19 implemented  

### Testing and Compliance  
- Fully validated using the [**RISC-V Imperas Compliance Test Suite**](https://github.com/riscv-ovpsim/imperas-riscv-tests)
- Configuration tested with:  
  - **VLEN**: 256  
  - **LMUL**: 1 , 2 , 4 , 8  
  - Supported **SEW**: 8 , 16 , 32  

## Diagram
### System Diagram of vaquita
<img src="./docs/images/vector Co Processor vaquita system diagram.png">

### System Diagram of Vaquita integrated with NucleusRV-Core
<img src="./docs/images/vaquita co processoe with NucleusRV core.png">

---

# How to Run/Build Vaquita


## 1. Building the Vaquita Co-Processor

Clone the repository:  
```bash  
   git clone --recurse-submodule https://github.com/merledu/nucleusrv.git -b vec_dev_csr
   cd nucleusrv
```
### 1.1. Generating the Coprocessor with NRV(In-Order Core)

Building with SBT
  Run this command in SBT shell
```bash
testOnly nucleusrv.components.TopTest -- -DwriteVcd=1 -DprogramFile=/path/to/instructions/hex
```

### 1.2. Generating the Coprocessor without In-Order core

This step generates only the coprocessor without integrating it with an in-order core. The command below runs the VaquitaDriver, which is responsible for generating the coprocessor design in Verilog. The -mem 4096 argument specifies the memory allocation for the process.

Run the following command in the terminal to generate the Verilog file:

```bash
sbt "runMain vaquita.VaquitaDriver" -mem 4096
```
Once the command executes successfully, the Verilog file will be available in the /VaquitaTop.v



## 2. Running Imperas Test Cases 
To validate the compliance of the Vaquita RISC-V Vector Co-Processor with the RISC-V specifications, you can execute Imperas test cases using the steps outlined below.

### 2.1. Prerequisites  
- [**RISCV GCC Toolchain**](https://github.com/riscv-collab/riscv-gnu-toolchain.git): Install the RISC-V toolchain for compilation and testing  
- [**Imperas RISC-V Compliance Tools**](https://github.com/riscv-ovpsim/imperas-riscv-tests): For instruction set compliance testing  

### 2.2. Command to Execute Test Cases  

Use the following command to run a specific test case:  

```bash
make compliance ISA=rv32i_m DEVICE=<device name> TEST=<test case name>
```

Explanation of Command Parameters

    ISA=rv32i_m: Specifies RISC-V instruction set architecture.
    DEVICE=<device name>: Defines the target device for testing.
    TEST=<test case name>: Specifies the name of the test case to run. Replace <test case name> with the actual test name.

Finding Test Case Names

To locate the available test case names for the vector processor:

    Navigate to the test suite directory:

    ./imperas-riscv-tests/riscv-test-suite/rv32i_m/<device name>/Makefrag

    Open the Makefrag file to view the list of test cases associated with the specified <device name>.

    Identify the desired test case name to be used in the TEST parameter of the command.

Example
```bash
make compliance ISA=rv32i_m DEVICE=Vi TEST=VADD-VV-SEW32_LMUL1
```

# Dependencies

| Dependencies         | Version         |
| :----------- | :--------------: |
| sbt | 1.10.1 |
| verilator | 5.026 |

## GSoC Contribution
This project is a part of Google Summer of Code of 2024 mentored by Micro Electronics Research Lab (MERL).

GSoC Project: https://summerofcode.withgoogle.com/programs/2024/projects/FWHAVeL5