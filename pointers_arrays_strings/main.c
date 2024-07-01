#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	int number = 5;

	printf("Initial value of number: %d\n", number);
	reset_to_98(&number);
	printf("Value of number after reset: %d\n", number);

	return (0);
}
