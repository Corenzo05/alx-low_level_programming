#include <stdio.h>

/**
 *main - print different combinations of two two-digits (00 01, 00 02, ...)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens, ones, t, o;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (t = tens; t <= '9'; t++)
			{
				for (o = ones + 1; o <= '9'; o++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(o);

					if (tens == '9' && ones == '8' && t == '9' && o == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				o = '0';
			}
		}
	}

	putchar('\n');

	return (0);
}
