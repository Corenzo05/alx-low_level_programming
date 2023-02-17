#include <stdio.h>

/**
 *main - print the number of base 16 in lowercase
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	char a = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
