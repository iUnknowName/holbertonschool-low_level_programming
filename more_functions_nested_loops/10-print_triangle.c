#include <stdio.h>

/**
 * print_triangle - prints a triangle of '#' characters of specified size
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int row = 1; row <= size; row++)
	{

		for (int space = size - row; space > 0; space--)
			_putchar(' ');

		for (int character = 1; character <= row; character++)
			_putchar('#');

		_putchar('\n');
	}
}
