#include <stdio.h>

/**
 * main -  prints the largest prime factor of the number
 * Return: 0
 */

int main(void)
{
	long int number, div;

	div = 2;
	number = 612852475143;

	while (div < number)
	{
		if (number % div == 0)
		{
			number /= div;
			div = 2;
		}
		else
			div++;
	}
	printf("%ld\n", number);

	return (0);
}
