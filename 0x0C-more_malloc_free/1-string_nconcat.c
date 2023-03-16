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
	int i, j, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s2 = "";
	if (s2 == NULL)
		s1 = "";

	i = 0, j = 0;
	while (*(s1 + i))
		i++, len1++;
	len1++;
	while (*(s2 + j))
		j++, len2++;

	if (n >= len2)
		ptr = malloc(sizeof(char) * (len1 * len2));
	else
		ptr = malloc(sizeof(char) * (len1 * n));

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		if (s2[j] == '\0')
			break;
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
