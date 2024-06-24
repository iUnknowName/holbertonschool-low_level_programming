#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @a: The number to extract the last digit from
 *
 * Return: The last digit of the number
 */
int print_last_digit(int a)
{
	int last_digit = a % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
