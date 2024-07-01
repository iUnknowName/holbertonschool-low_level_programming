#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	char str[] = "Hello, World!";
	int length = _strlen(str);

	printf("Length of '%s' is %d\n", str, length);
	return (0);
}
