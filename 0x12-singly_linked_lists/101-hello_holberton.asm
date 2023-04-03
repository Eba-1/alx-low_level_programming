section .data
    str: db "Hello, Holberton", 10
    strLen: equ $-str
section .text
    global main
    
    main:
        mov rax,1
        mov rdi,1
        mov rsi,str
        mov rdx,strLen
        syscall
        
        mov rax,60
        mov rdi,0
        syscall
