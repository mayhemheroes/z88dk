INCLUDE "config_private.inc"

SECTION code_driver
SECTION code_driver_terminal_output

PUBLIC rc_01_output_hbios1_oterm_msg_putc
PUBLIC rc_01_output_hbios1_oterm_msg_putc_raw
PUBLIC rc_01_output_hbios1_oterm_msg_putc_send

EXTERN BF_CIOOUT
EXTERN asm_hbios
EXTERN l_jpix

rc_01_output_hbios1_oterm_msg_putc:

   ; enter  : c = char to output
   ; can use: af, bc, de, hl
   
   ; char to print is coming from stdio
   
   bit 5,(ix+6)
   jr z, cooked                ; if cook is disabled

   ; tty emulation is enabled
   
   ld a,OTERM_MSG_TTY
   
   call l_jpix                 ; carry reset if tty absorbed char
   ret nc                      ; if tty absorbed char
   
   ld a,c
   
   cp CHAR_BELL
   jr nz, cooked

putchar_bell:

   ld a,OTERM_MSG_BELL
   jp (ix)

cooked:
rc_01_output_hbios1_oterm_msg_putc_raw:

   ; c = ascii code

   bit 4,(ix+6)
   jr z, rc_01_output_hbios1_oterm_msg_putc_send   ; if not processing crlf

   ld a,c
   
   cp CHAR_CR
   ret z                       ; ignore cr

   cp CHAR_LF
   jr nz, rc_01_output_hbios1_oterm_msg_putc_send

   ; send cr+lf
   
   ld c,13
   call rc_01_output_hbios1_oterm_msg_putc_send
   
   ld c,10

rc_01_output_hbios1_oterm_msg_putc_send:

   ; c = char

   ld e,c

   ld bc,BF_CIOOUT<<8|0x01
   call asm_hbios               ; block and send character in Tx buffer
   
   or a
   ret
