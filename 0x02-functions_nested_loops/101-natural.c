#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 */

int main(void)
{
	int multi;
	int c;

	multi = 0;
	c = 1;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			multi += c;
		}
		c++;
	}
	printf("sum of all the multiples of 3 or 5 is: %d\n", multi);
	return (0);
}
