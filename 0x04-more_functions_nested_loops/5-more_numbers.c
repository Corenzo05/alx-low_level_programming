#include "main.h"

/**
 * print_line - draws a straight line using only _putchar
 * @n: number of times
 * Where n is the number of times the character _ should be printed
 */
void print_line(int n)
{
	int i, c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
