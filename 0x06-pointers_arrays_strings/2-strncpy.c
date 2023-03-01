#include "main.h"

/**
 * _strncpy - copies n bytes of a source into buffer of a destination string,
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != *(src + n))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
