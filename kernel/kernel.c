#include <stddef.h>
#include <stdint.h>
#include <terminal.h>
#include <interupts.h>

void kernel_main(void) {
    terminal_initialize();
    init_interupts();
}