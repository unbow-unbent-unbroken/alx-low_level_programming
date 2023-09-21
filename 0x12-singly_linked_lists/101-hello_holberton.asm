section .data
    hello db "Hello, Holberton", 10, 0  ; The string to print followed by a newline character and null terminator

section .text
    global main

extern printf

main:
    ; Call printf to print the string
    mov rdi, hello
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; status code 0
    syscall
