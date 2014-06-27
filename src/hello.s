# Simple Pascal Compiler for Compiler System Design Course.
# This is generated mips file from input pascal source file.
# To run this file, please use: "spim -file [filename]".
.text
.globl main

main:
  li $v0, 4
  la $t1, helloworld
  move $a0, $t1
  syscall
  li $v0, 4
  la $a0, __newline__
  syscall
  li $v0, 10
  syscall

.data
  __newline__: .asciiz "\n"
  helloworld: .asciiz "Hello world!"
