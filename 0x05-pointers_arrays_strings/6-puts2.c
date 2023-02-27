#include "main.h"

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */
void puts2(char *str)
{
	int len = 0;

	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			_putchar('\n');
			break;
		}

		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
}
