section .data
	hello db 'Hello, Holberton', 0
section .text
	global main

	extern printf

	main:
	mov rdi, hello
	call printf
	add esp, 0
	ret
