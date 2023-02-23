#include "main.h"

/**
 * print_diagonal - draws a diagonal line using only _putchar
 * @n: number of times
 * Where n is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
