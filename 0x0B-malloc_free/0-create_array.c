#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of array
 * @c: storaged value
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	if (size <= 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(array + i) = c;
		i++;
	}
	return (array);
}
