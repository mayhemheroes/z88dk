
; void *shadowwrite_callee(void * restrict s1, const void * restrict s2, size_t n)

SECTION code_driver

PUBLIC _shadowwrite_callee

EXTERN asm_cpu_push_di
EXTERN asm_cpu_pop_ei

EXTERN asm_shadowwrite

_shadowwrite_callee:

   pop af
   pop de
   pop hl
   pop bc
   push af

   call asm_cpu_push_di

   xor a    ; set up write to shadow ram

   call asm_shadowwrite
   jp asm_cpu_pop_ei
