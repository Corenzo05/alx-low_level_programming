#include "main.h"

/**
 * _strchr - locate 1st occurrence of character in string
 * @s: string to search
 * @c: target characer
 * Return: pointer to that character in string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) && *(s + i) != c)
		i++;

	if (*(s + i) == c)
		return (s + i);
	else
		return ('\0');
}
