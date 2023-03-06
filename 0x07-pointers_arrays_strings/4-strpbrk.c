#include "main.h"

/**
 * _strpbrk - return pointer to byte in s
 * that matches a byte in accepted target
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
