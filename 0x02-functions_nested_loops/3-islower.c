#include "main.h"

/**
 * _islower - check if the character is lowercase or not
 * @c: character checking
 * Return: 1 - if c is lowercase - 0 in otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
