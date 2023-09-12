<div align="center">
  <img src="https://github.com/merledu/vaquita/blob/main/V%20(2)%20(1).png" alt="Vaquita" width="250"> <h1> VAQUITA - RISC-V Vector Core</h1>
</div>


# Introduction:

"Vaquita" 🐬, named after the critically endangered Vaquita porpoise, represents a groundbreaking project at the intersection of technology, education, and environmental consciousness. It introduces the RISC-V vector extension, an enhancement to the RISC-V instruction set architecture that introduces powerful support for vector operations. This extension includes vector registers and a comprehensive suite of vector instructions, enabling efficient parallel processing of large datasets.

1. [Cloning the Repository](#cloning-the-repository)
2. [Creating a New Branch](#creating-a-new-branch)
3. [Switching to a Different Branch](#switching-to-a-different-branch)
4. [Branch Management Table](#branch-management-table)



# Getting Started

To begin working with Vaquita and exploring the RISC-V vector extension, follow these steps:

1. Clone this repository to your local machine:

   
    ``` bash
   git clone https://github.com/your-username/vaquita.git
  
3. Navigate to the project directory:

    ``` bash
   cd vaquita

4. Edit the path to the input text file in the test configuration. Open src/main/scala/rvv/RISC5.scala and replace `/home/yourname/vaquita/vector_input.txt` with the path to your local machine's input text file.

5. Build the project using SBT (Scala Build Tool):

   
   ``` bash
   sbt

6. Once you're in the SBT interactive shell, you can run the test suite with VCD (Value Change Dump) output enabled. To run the tests for the RISC-V vector processor with VCD output, use the following command:

   
   ``` bash
   testOnly rvv.RISC5Test -- -DwriteVcd=1 
  This command will execute the test suite for the RISC-V vector processor and generate VCD files for debugging and analysis.

7. The test case being run is as follows:

   
   ```addi x2, x0, 12
   vsetvli x1, x2, e16, m1, vma
   lui x1, 0xa
   srli x2, x1, 12
   vmv.v.v v0, v1, x2
   vadd.vi v3, v7, 3, vm=0
   ```
   

8. The expected output on register `v3` will be
 ![Result](https://github.com/merledu/vaquita/blob/main/result.png)
   
9. This output represents the result of the `vadd.vi` operation where each element of vector `v3` is incremented by 3.

## Contributing:

```bash
git switch branch_name
```

Replace `branch_name` with the branch name you want to switch to.

---

## Branch Management Table

Use the table below to keep track of team members and their corresponding branch names:

| Team Member | Branch Name |
|-------------|-------------|
| Hamna, Maira , Abdul Samad   | HMS       |
| Hafsa Shoaib                 | pandora   |


Happy coding! 🚀

