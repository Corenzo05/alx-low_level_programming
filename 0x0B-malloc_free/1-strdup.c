#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given
 * @str: string to duplicate
 * Return: pointer to array of cbars
 */

char *_strdup(char *str)
{
	int i, size;
	char *strcopy;

	i = 0;
	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++;

	strcopy = malloc(size * sizeof(char));

	if (strcopy == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(strcopy + i) = *(str + i);
		i++;
	}

	return (strcopy);
}
