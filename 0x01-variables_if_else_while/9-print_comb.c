#include <stdio.h>

/**
 *main - print numbers from 0 to 9 separated by ','
 *Return: Always 0 (Success)
 */

int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);

		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}

	putchar('\n');

	return (0);
}
