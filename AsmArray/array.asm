; TODO issue: array not correctly referred

.code

initialiseArray proc
	; stack created
	push rbp		; saving base pointer value 
	mov rbp, rsp	; current stack pointer to new base pointer
	sub rsp, 48		; reserve memory (8 bit x 5) + 8 = 48 (divided by 16, ok)
	mov [rbp - 8], rdi	; saves function variable array to rbp - 8
	
	mov rax, 0	; loop counter to zero

	initialise_array_loop:
		mov -48[rbp+rax*8], 0	; rbp-48+8*rax = 0-48+0*8= -48
		add rax, 1					; increment loop counter
		cmp rax, 5					; compare counter with 5
		jl initialise_array_loop	; jump if < 5

	leave
	ret

initialiseArray endp
end