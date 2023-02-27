#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	if (len % 2 == 1)
		i = len / 2;
	else
		i = (len - 1) / 2;

	for (i++; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
