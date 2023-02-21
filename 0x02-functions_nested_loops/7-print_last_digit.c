#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number argument
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
		n = n * -1;

	d = n % 10;

	if (d < 10)
		d = d * -1;

	_putchar(d + '0');

	return (d);
}
