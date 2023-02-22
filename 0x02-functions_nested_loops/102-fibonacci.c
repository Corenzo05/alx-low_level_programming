#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long int a, b, sum;
	int i;

	a = 1;
	b = 2;

	printf("%ld, %ld", a, b);

	for (i = 0; i < 48; i++)
	{
		sum = a + b;

		printf(", %ld", sum);

		a = b;
		b = sum;
	}
	printf("\n");

	return (0);
}
