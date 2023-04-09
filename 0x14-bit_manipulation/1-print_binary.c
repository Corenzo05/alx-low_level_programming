#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of number
 * @n: number to converts
 */

void print_binary(unsigned long int n)
{
	unsigned int copy;
	
	copy = 1;
	while (copy <= n)
		copy <<= 1;

	copy >>= 1;

	while (copy > 0)
	{
		if (copy & n)
			_putchar('1');
		else
			_putchar('0');
		copy >>= 1;
	}
}
