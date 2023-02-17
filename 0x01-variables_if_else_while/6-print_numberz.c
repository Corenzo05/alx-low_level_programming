#include <stdio.h>

/**
 *main - print all single digit numbers of base 10 using putchar()
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
