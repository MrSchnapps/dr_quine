; First and outside comment.
section .data
    output_str db '%4$c First and outside comment.%1$csection .data%1$c    output_str db %2$c%3$s%2$c, 0%1$c%1$csection .text%1$c    global _start%1$c    extern printf%1$c    extern exit%1$c%1$c_start:%1$c    ; Second and inside main comment.%1$c    mov rdi, output_str%1$c    mov rsi, 10%1$c    mov rdx, 39%1$c    mov rcx, output_str%1$c    mov r8, 59%1$c    call printf%1$c    call ft_ret%1$c    xor rdi, rdi%1$c    call exit%1$c%1$cft_ret:%1$c    ret%1$c', 0

section .text
    global _start
    extern printf
    extern exit

_start:
    ; Second and inside main comment.
    mov rdi, output_str
    mov rsi, 10
    mov rdx, 39
    mov rcx, output_str
    mov r8, 59
    call printf
    call ft_ret
    xor rdi, rdi
    call exit

ft_ret:
    ret
