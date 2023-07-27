
	;the main entry
	global	main
		extern printf
	;define the string
	format: db `Hello, Holberton\n`,0
	main:
	;adreess of format
	mov edi,format
	xor eax,eax
	call printf
	mov eax, 0
	ret
