; Method initialises an array
; Variables: int array[], int size
; @Antiik.dev

.code

initialiseArray proc
	; stack created
	push rbp		; saving base pointer value 
	mov rbp, rsp	; current stack pointer to new base pointer

	; Method var: calling convention int parameters passed: RCX, RDX, R8, and R9 (MS)
	mov rdi, rcx	; array address from rcx to rdi
	mov rcx, rdx	; array size from rdx to rcx
	
	mov eax, 0		; zero to eax to initialise the array

	; loop through the array
	initialise_array_loop:
		mov [rdi], eax	; move eax (0) value into memory location pointed to rdi
		add rdi, 4					; move to next index element (4 bytes)
		loop initialise_array_loop	; loop indexes until the end of the array

	leave
	ret

initialiseArray endp
end