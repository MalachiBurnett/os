#include <stddef.h>
#include <stdint.h>
#include <terminal.c>
#include <interupts.h>

void kernel_main(void) {
    terminal_initialize();
    init_interupts();
}