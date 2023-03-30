	global 	main
	extern 	printf

	section .text
main:
	mov	rdi, format
	mov	rax, 0
	call	printf
	mov	rax, 0
	ret
format:
	db "Hello, Jeremiah", 10, 0
