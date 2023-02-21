#include "main.h"

/**
 * _isalpha - check if the character is a letter or not
 * @c: character checking
 * Return: 1 - if c is a letter - 0 in otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
