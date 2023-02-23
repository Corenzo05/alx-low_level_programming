#include "main.h"

/**
 * print_square - prints a square using only _putchar
 * @size: size of the square
 * Use the character # to print the square
 */

void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 1; row <= n; row++)
		{
			for(col = 1; col <= n; col++)
				_putchar('#');
			_putchr('\n');
		}
	}
	else
		_putchar('\n');
}
