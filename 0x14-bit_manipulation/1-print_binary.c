#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of number
 * @n: number to converts
 */

void print_binary(unsigned long int n)
{
	unsigned long int copy;
	unsigned long int m;
	int len = 1;

	m = 1;
	copy = n;
	while (copy > 0)
	{
		copy >>= 1;
		len++;
	}

	len--;
	if (len > 0)
		m <<= len;

	while (m > 0)
	{
		if (m & n)
			_putchar('1');
		else
			_putchar('0');
		m >>= 1;
	}
}
