#include "main.h"

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (*str != '0')
	{
		len++;
		str++;
	}
	str -= len;

	for (i = 0; i < len; i + 2)
	{
		_putchar(str[i]);
	}
}
