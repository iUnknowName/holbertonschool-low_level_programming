#include "main.h"

/**
 * main - Entry point of the program
 *
 * This function demonstrates the usage of print_times_table function.
 * It calls print_times_table with various arguments
 * to print different times tables.
 * Return: Always 0
 */
int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);
	return (0);
}
