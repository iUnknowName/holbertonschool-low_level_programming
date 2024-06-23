#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	/* Declaración de variables */
	int digit;

	/* Bucle para imprimir los números del 0 al 9 */
	for (digit = 0; digit <= 9; digit++)
	{
		putchar('0' + digit); /* Imprimir el dígito actual */

		if (digit != 9)
		{
			putchar(','); /* Imprimir la coma */
			putchar(' '); /* Imprimir el espacio */
		}
	}

	putchar('\n'); /* Nueva línea al final */

	return (0);
}
