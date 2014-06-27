# Simple Pascal Compiler for Compiler System Design Course.
# This is generated mips file from input pascal source file.
# To run this file, please use: "spim -file [filename]".
.text
.globl main

main:
  li $t2, 1
  li $t3, 0
  seq $t1, $t3, $t2
  beq $t1, $zero, main_0
  li $v0, 1
  li $t2, 1
  move $a0, $t2
  syscall
  li $v0, 4
  la $a0, __newline__
  syscall
  j main_1
  main_0: 
  li $v0, 1
  li $t2, 0
  move $a0, $t2
  syscall
  li $v0, 4
  la $a0, __newline__
  syscall
  main_1: 
  li $v0, 10
  syscall

.data
  __newline__: .asciiz "  \n"
