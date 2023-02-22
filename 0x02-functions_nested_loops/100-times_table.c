#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: integer argument
 */

void print_times_table(int n)
{
	int row, col, op;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (col = 0; col <= n; col++)
			{
				op = row * col;
				_putchar(',');
				_putchar(' ');

				if (op <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + op);
				}
				else if (op > 99)
				{
					_putchar('0' + (op / 100));
					_putchar('0' + ((op / 10) % 10));
					_putchar('0' + (op % 10));
				}
				else
				{
					_putchar(' ');
					_putchar('0' + (op / 10));
					_putchar('0' + (op % 10));
				}
			}
			_putchar('\n');
		}
	}
}
