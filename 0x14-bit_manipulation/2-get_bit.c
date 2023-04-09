#include "main.h"
#include <stdio.h>

/**
 * get_int - get bit at given index
 * @n: long int
 * @index: index of bit
 * Return: the bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max, bit;

	max = sizeof(unsigned long int) * 8;
	if (index > max)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
