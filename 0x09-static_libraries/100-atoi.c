#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int len = 0;
	int sign = 1;
	int p = 1;
	int size = 0, i;
	unsigned int num = 0;

	while (*(s + len) != '\0')
	{
		if (size > 0 && (*(s + len) < '0' || *(s + len) > '9'))
			break;

		if (*(s + len) == '-')
			sign = sign * -1;

		if ((*(s + len) >= '0') && (*(s + len) <= '9'))
		{
			if (size > 0)
				p = p * 10;
			size++;
		}
		len++;
	}

	for (i = len - size; i < len; i++)
	{
		num = num + ((*(s + i) - '0') * p);
		p = p / 10;
	}

	return (sign * num);
}
