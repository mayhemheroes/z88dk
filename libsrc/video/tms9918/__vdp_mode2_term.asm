

SECTION rodata_clib
PUBLIC __vdp_mode2_term

EXTERN  ansi_cls
EXTERN  __tms9918_mode2_printc
EXTERN  ansi_SCROLLUP

__vdp_mode2_term:
    defw     ansi_cls
    defw     __tms9918_mode2_printc
    defw     ansi_SCROLLUP

