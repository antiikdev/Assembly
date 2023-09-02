; Method reads number from user and returns it
; Variables: FILE input
; @author Antiik.dev
; @version 2 September 2023

.code

readMyInput proc
	; stack created
	push rbp		; saving base pointer value 
	mov rbp, rsp	; current stack pointer to new base pointer

	; Error value initialised (see Main.c)
	mov rdi, -1

	; Read variable
	mov rsi, rcx	; FILE reading pointer
	call fgetc		; Call fgetc function to read

	; Check if End Of File marker (EOF)
    cmp eax, EOF
    je eof

	; Read character for return value
	mov rdi, rax

eof:
	leave
	ret

readMyInput endp
end