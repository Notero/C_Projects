# MySPIM: MIPS Processor Simulator

## CDA3103 – Computer Logic and Organization  
**Project: Mini MIPS Processor Simulator in C**

## 📌 Introduction

This project involves implementing the core of a MIPS single-cycle processor simulator, called **MySPIM**, using the C programming language on a Unix platform. MySPIM reads a file of MIPS machine code and simulates the behavior of a real MIPS processor, cycle by cycle.

---

## 📋 Features and Requirements

- Simulate **14 MIPS instructions** as listed in Appendix A of the project.
- Handle **32 general-purpose registers**.
- Simulate **64kB memory** from `0x0000` to `0xFFFF`.
- Program memory starts at address `0x4000`.
- Memory is **word-aligned** and **big-endian**.
- Simulation halts on:
  - Illegal instruction
  - Unaligned memory access
  - Memory access beyond range

---

# Group Size : 4
