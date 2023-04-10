#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to an unsigned long int
 * @index: index of bit to set
 * Return: 1 if it worked, -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;
	unsigned int max;

	m = 1;
	max = sizeof(unsigned long int) * 8;
	if (index > max)
		return (-1);

	m <<= index;
	*n = m | *n;

	return (1);
}
