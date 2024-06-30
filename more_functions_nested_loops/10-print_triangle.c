#include <main.h>

void print_triangle(int size) {
	if (size <= 0) {
		_putchar('\n');
		return;
	}

	for (int row = 1; row <= size; row++) {
		for (int space = size - row; space > 0; space--) {
			_putchar(' ');
		}
		for (int character = 1; character <= row; character++) {
			_putchar('#');
		}
		_putchar('\n');
	}
}
