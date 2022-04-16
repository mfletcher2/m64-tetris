
// ==================== main.c ==================== //
// Follow this file template to implement your game //
// ================================================ //

#define SIM 1  // change value depending if running simulation or not

// ================================ //
#pragma code - name("CODE")
#pragma bss - name("BSS")

#include <Q9_6.h>
#include <controller.h>
#include <int.h>
#include <mapache64_zero_page.h>
#include <screen.h>
#include <stop.h>
#include <string.h>
#include <vram.h>

// run once on startup
void reset(void) {
    uint8_t i;
    char* text = "Tetris :)";

    for (i = 0; i < strlen(text); i++) TXBL[4][4 + i] = text[i] | COLOR_SELECT_MASK;

    stop();
}

// run 60 times a second
void do_logic(void) {}

// run after do_logic and once gpu is idle
void fill_vram(void) {}
