.code

initialiseArray proc
	; stack created
	push rbp		; saving base pointer value 
	mov rbp, rsp	; current stack pointer to new base pointer
	sub rsp, 48 ; reserve memory (8 bit x 5) + 8 = 48 (divided by 16, ok)
	mov [rbp - 8], rdi	; saves function variable to rbp - 8
	
	mov rax, 0	; loop counter to zero

	initialise_array_loop:
		mov [rax*8 - 48 + rbp], 0	; zero to memory 48(rax*8 + rbp)
		add rax, 1					; increment loop counter
		cmp rax, 5					; compare counter with 5
		jl initialise_array_loop	; jump if < 5

	leave
	ret

initialiseArray endp
end