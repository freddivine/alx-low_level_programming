section .data
    format db "Hello, Holberton", 0
    newline db 10, 0 ; New line character

section .text
    extern printf

    global main
main:
    sub rsp, 8       ; Adjust stack pointer
    
    mov rdi, format  ; Set the format string as the first argument
    xor eax, eax     ; Clear eax register for varargs
    call printf      ; Call the printf function
    
    mov rdi, newline ; Set the newline string as the first argument
    xor eax, eax     ; Clear eax register for varargs
    call printf      ; Call the printf function for the new line
    
    add rsp, 8       ; Restore stack pointer
    
    xor eax, eax     ; Return 0
    ret
