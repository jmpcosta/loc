; Example of an Hello World program written in assembler

; Define function entry point
global _start

; Executable section
section	.text
	
_start:	          
   mov	edx,len   ; message length
   mov	ecx,msg   ; message to write
   mov	ebx,1     ; file descriptor (stdout)
   mov	eax,4     ; system call number (sys_write)
   int	0x80      ; call kernel
	
; Exit program
   mov	eax,1     ; system call number (sys_exit)
   int	0x80      ; call kernel

; Data section
section	.data
msg db 'Hello, world!', 0xa  ; string to be printed
len equ $ - msg              ; length of the string

