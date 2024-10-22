#include "console.h"
#define VGA_MEMORY ((unsigned char*)0xB8000)
#define VGA_WIDTH 80
#define VGA_HEIGHT 25

static int terminal_position = 0;

void print_character(char c) {
	VGA_MEMORY[terminal_position * 2] = c;
	VGA_MEMORY[terminal_position * 2 + 1] = 0x07;

	terminal_position++;
}

void print_string(char* str) {
	int i = 0;
	while(str[i] != '\0') {
		print_character(str[i]);
		i++;
	}
}

void print_line(char* str) {
	print_string(str);
	print_character('\n');
}

void clear_terminal();
