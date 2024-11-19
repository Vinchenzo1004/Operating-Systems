#include "console.h"
static unsigned char* VGA_MEMORY = (unsigned char*)0xB8000;

static int terminal_position = 0;

void clear_terminal() {
        for(int i = 0; i < VGA_WIDTH * VGA_HEIGHT; i++) {
                VGA_MEMORY[i * VGA_BYTES_PER_CHARACTER] = '\0';
                VGA_MEMORY[i * VGA_BYTES_PER_CHARACTER + 1] = 0x07;
       }
	terminal_position = 0;
}

void print_character(char c) {
	if(c == '\n') {
		int row = terminal_position / VGA_WIDTH;
		terminal_position = (row + 1) * VGA_WIDTH;
	} else {
		VGA_MEMORY[terminal_position * VGA_BYTES_PER_CHARACTER] = c;
		VGA_MEMORY[terminal_position * VGA_BYTES_PER_CHARACTER + 1] = 0x07;
		terminal_position++;
	}
}

void print_string(char* str) {
	while(*str) {
		print_character(*str);
		str++;
	}
}

void print_line(char* str) {
	print_string(str);
	print_character('\n');
}

