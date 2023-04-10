#include "main.h"
#include <stdio.h>

/**
 * get_endianness - check the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void);
{
	char *c;
	unsigned int i = 1;

	*c = (char*)&i;
	if (*c == 1)
		return (1);
	else
		return (0);
}
