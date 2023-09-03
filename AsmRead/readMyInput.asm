; Method reads number from user and returns it
; Variables: FILE input
; @author Antiik.dev
; @version 2 September 2023


.code

EXTERN fgetc:PROC	; Tell assembler where to find fgetc function

readMyInput proc
	; stack created
	push rbp		; saving base pointer value 
	mov rbp, rsp	; current stack pointer to new base pointer

	; Error value initialised (see Main.c)
	mov rdi, -1

	; Read variable (calling convention)
	mov rdi, [rcx]	; FILE from first argument, memory location pointed.
	call fgetc		; Call fgetc function to read, stored in rax (return value)

	; TODO: EOF is not checked! 


	leave
	ret

readMyInput endp
end