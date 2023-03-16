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
	unsigned int i, j, ptrlen, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n < 0)
		return (NULL);

	i = 0, j = 0;
	while (*(s1 + i))
		i++, len1++;

	while (*(s2 + j))
		j++, len2++;

	if (n >= len2)
		n = len2;

	ptrlen = len1 + n + 1;

	ptr = malloc(sizeof(*ptr) * ptrlen);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < ptrlen; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
