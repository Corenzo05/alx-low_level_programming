#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer argument
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	while (n < 0)
	{
		printf("%d, ", n);
		n++;
	}

	printf("%d\n", n);
}
