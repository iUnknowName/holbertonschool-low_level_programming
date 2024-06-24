#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Imprime la tabla de multiplicar de n, comenzando desde 0
 * @n: Número cuya tabla de multiplicar se imprimirá
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i = 0;

	for (; i <= 9; i++)

	{
		printf("0");

		int j = 0;

		for (; j <= n; j++)

		{
			int product = i * j;

			printf(", ");
			if (product < 10)
				printf(" ");
			printf("%d", product);
		}
		printf("\n");
	}
}
