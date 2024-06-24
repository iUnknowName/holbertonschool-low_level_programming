#include <stdio.h>
#include "main.h"

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= 9; i++)

	{
		printf("0");
		for (j = 0; j <= n; j++)

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
