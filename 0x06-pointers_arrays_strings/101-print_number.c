#include "main.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int digit, m, count;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	else
	{
		m = n;
	}

	digit = m;
	count = 1;

	while (digit > 9)
	{
		digit /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
		_putchar(((m / count) % 10) + '0');
}
