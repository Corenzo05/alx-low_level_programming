#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1
 * Return: the converted number, or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int len, i = 0;
	unsigned int conv = 0;

	if (b == NULL)
		return (conv);

	for (len = 0; b[len] != '\0'; len++)
		;

	len--;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] & 1)
			conv += (1 << len);

		i++;
		len--;
	}

	return (conv);
}