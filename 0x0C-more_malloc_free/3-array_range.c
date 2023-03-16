#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, rang;

	rang = (max - min + 1);
	if (min > max)
		return (NULL);

	ptr = malloc(rang * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < rang; i++)
		ptr[i] = min++;

	return (ptr);
}
