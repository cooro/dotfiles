org        0x7c00               ; BIOS loads at this address

bits       16                   ; 16 bits real mode

; Print a welcome message.
; We have no DOS nor Linux kernel here.
; Therefore, we will use bios int 0x10.

start:
        xor     ax, ax          ; reset stuff: set ax=0
        mov     ds, ax          ; reset stuff: point ds to ax

        cli                     ; disable interrupts

        mov     si, msg         ; SI points to message
        mov     ah, 0x0e        ; print char service

.loop   lodsb                   ; AL <- [DS:SI] && SI++
        or      al, al          ; end of string?
        jz      halt
        int     0x10            ; print char
        jmp     .loop           ; next char

halt:   hlt                     ; halt

msg:    db      "Hello, World!", 0


; Bootloader signature must be located
; at bytes #511 and #512.
; Fill with 0 in between.
; $  = address of the current line
; $$ = address of the 1st instruction

        times 510 - ($-$$) db 0 ; write zer0s until 510th byte
        dw        0xaa55        ; write 0x55, 0xaa (x86 is little endian)
