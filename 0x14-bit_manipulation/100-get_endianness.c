#include "main.h"

/**
 * get_endianness - check the endianness
 * Return: 0 if big endian, 1if little endian
 */

int get_endianness(void);
{
	/*char *c;
	int i = 1;

	c = (char *)&i;

	return ((int) *c);*/
	int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
}
