# General Idea
First, assembly language is essentially a CPU instruction set that has been encoded, made readable, and textualized. Otherwise, a CPU instruction set is a collection of operations executable by the CPU, represented in machine code. This means that learning assembly for a particular architecture requires knowledge of that architecture's CPU physical structure. The most common examples are the x86 instruction set (used in computers) and the ARM instruction set (used in mobile phones).

The core actions of assembly (or the CPU instruction set, or what the CPU does) are to transfer data from RAM to registers, perform computations on the data in the registers, and then transfer the results back to RAM. The methods of computation can vary greatly, but they all follow these three steps.

Since assembly is the readable form of CPU instruction sets, assembly and CPU machine code are directly correlated. We can easily compile assembly and also disassemble the compiled machine code back into assembly, which is called "disassembly." This is a very common technique in debugging and reverse engineering.

Learning assembly will give you a deeper understanding of how compilers and programming languages operate. Moreover, low-level embedded systems (usually using ARM architecture) also utilize assembly.

# Assembler directives
Assembler directives are part of assembly language. The main usage is for "memory allocation". We know that everything that need calculated in computers are cpu instruction sets. The cpu instruciton sets can allocate memory in a very basic logic. Operation system is built by those cpu instruction sets and have implement more complicated but efficient memory managements method called "virtual memory".

Assembler directives is a script that can guide the assembler/linker how memory should be allocated and used. It would not be as the final assmbly machine code but solve by operating system for memory allocation and usage.

# Registers [tutorial](https://www.tutorialspoint.com/assembly_programming/assembly_registers.htm)
A modern x86 CPU exposes a set of register “views” on a common register file. Physically they’re identical, but the ISA gives them conventional roles:

## General-Purpose Registers
- **Data registers(A, B, C, D)**
  - EAX(Accumulator): Commonly implied in many instructions
  - EBX(Base): Traditionally used for base addressing. Also usable as a general-purpose temp storage registers.
  - ECX(Counter): Automatically decremented by LOOP instruction during iterations
  - EDX(Data): Used with AX for multiplication/division operations
  - Those four registers above are all the same in physical structure and usages. For some historical reasons, we named them ABCD, but the are the same. However, defaultly, many instructions would implicity use, for example, AX as accumulator, and CX as counter, DX as port. These is the convention for ISA, not about the difference between those registers.
- **Pointer Registers**  
  - `ESP` (Stack Pointer)  
  - `EBP` (Base Pointer)  
  - `EIP` (Instruction Pointer)  
- **Index Registers**  
  - `ESI` (Source Index)  
  - `EDI` (Destination Index)
- The Register names below is for 32-bit. In x86 architecture, the register naming reflects the evolution of CPU bit-width. Here's the rule below:
  - AX: 16-bit: Original Accumulator Register
  - EAX: 32-bit: Extended Version for x86
  - RAX: 64-bit: Extended Again for x86-64
  

## Control Registers  
- `CR0`, `CR2`, `CR3`, `CR4` (paging, protection control)

## Segment Registers  
- `CS`, `DS`, `ES`, `FS`, `GS`, `SS` (segment selectors in protected mode)

---

# Instructions

## 1. Data Transfer
- **Between registers**  
  - `MOV`, `XCHG`, `LEA`, `MOVSX`, `MOVZX`  
- **Stack operations**  
  - `PUSH`, `POP`, `PUSHA`/`POPA`, `PUSHF`/`POPF`  
- **Memory ↔ register, I/O ↔ register**  
  - `MOV [mem], reg` / `MOV reg, [mem]`  
  - `IN`, `OUT`

## 2. Arithmetic
- **Add/Subtract**  
  - `ADD`, `ADC`, `SUB`, `SBB`, `INC`, `DEC`  
- **Multiply/Divide**  
  - `MUL`, `IMUL`, `DIV`, `IDIV`  
- **Sign‑extend / Zero‑extend**  
  - `CBW`, `CWDE`, `CDQ`, `CQO`

## 3. Logical
- `AND`, `OR`, `XOR`, `NOT`, `TEST`

## 4. Control Flow
- **Unconditional**: `JMP`, `CALL`, `RET`  
- **Conditional jumps** (based on flags): `JE`/`JZ`, `JNE`/`JNZ`, `JG`/`JNLE`, `JL`/`JNGE`, etc.  
- **Loop/repeat**: `LOOP`, `LOOPE`/`LOOPZ`, `LOOPNE`/`LOOPNZ`  
- **Interrupts/exceptions**: `INT n`, `INT3`, `INTO`, `IRET`  
- **Syscall gateways**: `SYSCALL`/`SYSRET`, `SYSENTER`/`SYSEXIT`

## 5. String & Block Operations
- `MOVS`/`MOVSB`/`MOVSW`/`MOVSD`/`MOVSQ`  
- `CMPS`/`CMPSB`/…  
- `SCAS`/`SCASB`/…  
- `LODS`/`STOS`/…

## 6. Bit & Bit‑Field Operations
- **Shift/rotate**: `SHL`/`SAL`, `SHR`/`SAR`, `ROL`, `ROR`, `RCL`, `RCR`  
- **Bit test/set/reset**: `BT`, `BTS`, `BTR`, `BTC`  
- **Bit scan**: `BSF`, `BSR`

## 7. I/O Port‑Mapped Operations
- `IN AL/AX/EAX, DX/imm8`  
- `OUT DX/imm8, AL/AX/EAX`

## 8. Privileged & System
- **Descriptor tables**: `LGDT`, `SGDT`, `LIDT`, `SIDT`, `LLDT`, `SLDT`, `LTR`, `STR`  
- **Control regs**: `MOV CRx, r`, `MOV r, CRx`  
- **Debug regs**: `MOV DRx, r`, `MOV r, DRx`

## 9. Floating‑Point & SIMD
- **x87 FPU**: `FLD`, `FSTP`, `FADD`, `FSTENV`, …  
- **MMX**: `MOVQ`, `PADD`, `PSUB`, …  
- **SSE/AVX**: `MOVAPS`, `ADDPS`, `MULPD`, `VADDPS`, …
