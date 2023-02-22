#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int row, col, op;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');

		for (col = 1; col <= 9; col++)
		{
			op = row * col;
			_putchar(',');
			_putchar(' ');

			if (op <= 9)
			{
				_putchar(' ');
				_putchar(op + '0');
			}
			else
			{
				_putchar((op / 10) + '0');
				_putchar((op % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
