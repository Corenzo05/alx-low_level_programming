#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long int a, b, sum;

	a = 1;
	b = 2;

	printf("%d, %d", a, b);

	for (int i = 0; i < 48; i++)
	{
		sum = a + b;

		printf(", %ld", sum);

		a = b;
		b = sum;
	}
	printf("\n");

	return (0);
}
