#include "include/console.h"
void clear_terminal() {
	unsigned char *video_memory = (unsigned char*)0xB8000;

	for(int i = 0; i < 80 * 25 * 2; i += 2){
		video_memory[i] = '\0';
		video_memory[i + 1] = 0x07;
	}
}

void main() {
	clear_terminal();
	print_string("HELLO");
	print_line("WORLD");
	print_string("TODAY");
}
