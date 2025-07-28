# General Idea
First, assembly language is essentially a CPU instruction set that has been encoded, made readable, and textualized. Otherwise, a CPU instruction set is a collection of operations executable by the CPU, represented in machine code. This means that learning assembly for a particular architecture requires knowledge of that architecture's CPU physical structure. The most common examples are the x86 instruction set (used in computers) and the ARM instruction set (used in mobile phones).

The core actions of assembly (or the CPU instruction set, or what the CPU does) are to transfer data from RAM to registers, perform computations on the data in the registers, and then transfer the results back to RAM. The methods of computation can vary greatly, but they all follow these three steps.

Since assembly is the readable form of CPU instruction sets, assembly and CPU machine code are directly correlated. We can easily compile assembly and also disassemble the compiled machine code back into assembly, which is called "disassembly." This is a very common technique in debugging and reverse engineering.

Learning assembly will give you a deeper understanding of how compilers and programming languages operate. Moreover, low-level embedded systems (usually using ARM architecture) also utilize assembly.

# Assembler directives
Assembler directives are part of assembly language. The main usage is for "memory allocation". We know that everything that need calculated in computers are cpu instruction sets. The cpu instruciton sets can allocate memory in a very basic logic. Operation system is built by those cpu instruction sets and have implement more complicated but efficient memory managements method called "virtual memory".

Assembler directives is a script that can guide the assembler/linker how memory should be allocated and used. It would not be as the final assmbly machine code but solve by operating system for memory allocation and usage.
