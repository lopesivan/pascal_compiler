# Simple Pascal Compiler for Compiler System Design Course.
# This is generated mips file from input pascal source file.
# To run this file, please use: "spim -file [filename]".
.text
.globl main

main:
  li $v0, 5
  syscall
  sw $v0, c
  li $v0, 5
  syscall
  sw $v0, d
  li $v0, 1
  lw $t4, c
  li $t5, 2
  div $t2, $t4, $t5
  lw $t4, d
  li $t5, 3
  mul $t3, $t4, $t5
  add $t1, $t2, $t3
  move $a0, $t1
  syscall
  li $v0, 4
  la $a0, __newline__
  syscall
  li $v0, 10
  syscall

.data
  __newline__: .asciiz "\n"
  c: .word 0
  d: .word 0
