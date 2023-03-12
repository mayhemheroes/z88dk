///////////////////////////////////////////////////////////////////////////////
//
// periodic.c - Example code for using loop driven music playback with Arkos
// player
//
// 10/03/2023 - ZXjogv <zx@jogv.es>
//
// Compile with:
//   zcc +zx -vn periodic.c hocuspocus.asm -m -s --list -create-app -o arkos
//
///////////////////////////////////////////////////////////////////////////////

#include <intrinsic.h>
#include <stdint.h>

#include <psg/arkos.h>

extern uint8_t song[];

void main( void ) {
    ply_akg_init( song, 0 );
    while ( 1 ) {
        intrinsic_halt();
        intrinsic_di();
        ply_akg_play();
        intrinsic_ei();
        // show something on screen
        (*(uint8_t *)0x4000)++;
    }
}
