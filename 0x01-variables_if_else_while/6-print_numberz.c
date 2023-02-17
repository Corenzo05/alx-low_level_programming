#include <stdio.h>

/**
 *main - print all single digit numbers of base 10 using putchar()
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '1';

	for (n = '1'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
