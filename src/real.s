# Simple Pascal Compiler for Compiler System Design Course.
# This is generated mips file from input pascal source file.
# To run this file, please use: "spim -file [filename]".
.text
.globl main

main:
  li $v0, 2
  li.s $f2, 1.0
  li.s $f3, 3.0
  add.s $f1, $f2, $f3
  mov.s $f12, $f1
  syscall
  li $v0, 4
  la $a0, __newline__
  syscall
  li $v0, 10
  syscall

.data
  __newline__: .asciiz "  \n"
