#include "main.h"

/**
 * print_sign - print the sign of number
 * @n: number checking sign
 * Return:  1 if n greter than 0 - (-1) if n less than 0 - 0 if n equal 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n >= 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

	_putchar('\n');
}
