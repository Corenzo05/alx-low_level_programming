#include "main.h"

/**
 * clear_bit - set 0 at given index
 * @n: pointer to an unsigned long int
 * @index: index of bit to sets
 * Return: 1 if it worked, -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;
	unsigned int max;

	m = 1;
	max = sizeof(unsigned long int) * 8;
	if (index > max)
		return (-1);

	m = ~(m << index);
	*n = m & *n;

	return (1);
}
