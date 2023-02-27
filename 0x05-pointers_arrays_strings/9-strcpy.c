#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (*src != '\0')
	{
		len++;
		src++;
	}

	for (i = 0; i <= len; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
