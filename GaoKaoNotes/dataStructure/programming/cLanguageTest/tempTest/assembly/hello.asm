section .data
    msg db 'hello', 0xA
    len equ $ - msg

section .text
    global _start

_start:
    mov eax, 4 ; operating system read eax as sys_write when its value is 4
    mov ebx, 1 ; operating system read ebx as "Write to stdout(screen)" when its value is 1
    mov ecx, msg
    mov edx, len
    int 0x80 ; Interrupt and use operating system kernel functions, operating system would do the job according to data in registers. In short it would invoke kernel to write to write to screen

    mov eax, 1 ; operating system read eax as sys_exit when its value is 1
    xor ebx, ebx ; operating system read ebx as "exit with code 0(success). xor ebx, ebx would make ebx 0. You can also use "mov ebx, 0" but in this case, xor is better and faster
    int 0x80 ; invoke kernel to terminate program
