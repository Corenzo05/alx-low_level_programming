#include <stdio.h>

/**
 * main - print sum of even Fionacci sequence up to 4 000 000
 * Return: 0
 */

int main(void)
{
	long int a, b, sum, sum_ev;

	a = 1;
	b = 1;
	sum = 1;
	sum_ev = 0;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_ev += sum;
	}
	printf("%ld\n", sum_ev);

	return (0);
}
