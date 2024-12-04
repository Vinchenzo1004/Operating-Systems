#include "console.h"
static unsigned char* VGA_MEMORY = (unsigned char*)0xB8000;

static int terminal_position = 0;

static VGA_Color terminal_font_color = LIGHT_GRAY; //Default font color will be light gray
static VGA_Color terminal_baclground_color = BLACK; //Default background color is black

void clear_terminal() {
        for(int i = 0; i < VGA_WIDTH * VGA_HEIGHT; i++) {
                VGA_MEMORY[i * VGA_BYTES_PER_CHARACTER] = '\0';
                VGA_MEMORY[i * VGA_BYTES_PER_CHARACTER + 1] = 0x07;
       }
	terminal_position = 0;
}

void print_character(char c) {
	print_character_with_color(c, terminal_background_color, terminal_font_color);
}

void print_string(char* str) {
	print_string_with_color(str, terminal_background_color, terminal_font_color);
t
}

void print_line(char* str) {
	print_line_with_color(str, terminal_background_color, terminal_font_color);

}

void print_line_with_color(char* str, VGA_Color bg_color, VGA_Color font_color){
	print_string_with_color(str, bg_color, font_color);

	print_character_with_color('\n', bg_color, font_color);
}

void print_string_with_color(char* str, VGA_Color bg_color, VGA_Color font_color){
	for(int i = 0; str[i] != '\0'; i++){
		print_character_with_color(str[i], bg_color, font_color);
	}
}

void print_character_with_color(char c, VGA_Color bg_color, VGA_Color font_color){
	

void set_terminal_font_color(VGA_Color col){
	terminal_font_color = col;
}

void set_terminal_background_color(VGA_Color col){
	terminal_background_color = col;
}
