#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to concat from string s2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, ptrlen, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;

	ptrlen = len1 + n;

	ptr = malloc(ptrlen + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ptrlen; i++)
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];

	ptr[i] = '\0';

	return (ptr);
}
