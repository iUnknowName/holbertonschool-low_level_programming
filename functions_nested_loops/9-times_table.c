#include "main.h"

/**
 * times_table - Imprime la tabla de multiplicar del 9, comenzando con 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		_putchar('0'); /* Imprime el primer número en cada fila */

		for (b = 1; b < 10; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;

		       /* Asegura que el número esté formateado adecuadamente */
			if (c < 10)
			{
				_putchar(' ');
			      /* Espacio adicional para alinear correctamente */
			}

			_putchar((c / 10) + '0'); /* Imprime la decena */
			_putchar((c % 10) + '0'); /* Imprime la unidad */
		}

		_putchar('\n'); /* Nueva línea al final de cada fila */
	}
}
