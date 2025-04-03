# COP-3402 Processes Project - mysh

This project implements a simplified command-line shell named `mysh` for COP-3402 at UCF. It supports basic command execution, input/output redirection, and single-level piping.

Features: Run programs with or without arguments, input redirection using `<filename`, output redirection using `>filename`, piping between two commands (e.g., `ls | wc`), error handling with exit codes, and a minimal shell prompt using `$ `.

Building: Use the provided Makefile with the command `make`.

Running: After building, run the shell with `./mysh`. You will see the `$ ` prompt where you can enter commands.

Testing: Download the public test suite with:
`wget https://www.cs.ucf.edu/~gazzillo/teaching/cop3402spring25/files/proc_public_tests.tar`  
Extract it using `tar -xvf proc_public_tests.tar`  
Run a test case with:
`bash proc-tests/03-onearg.sh $(realpath mysh)`  
Check the exit code with `echo $?`. A result of 0 indicates success.

Author: Your Name  
Course: COP-3402 Spring 2025  
Instructor: Professor Paul Gazzillo
