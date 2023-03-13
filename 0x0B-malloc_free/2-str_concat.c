#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, s1_len, s2_len;
	char *strconcat;

	i = 0, j = 0, s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	while (*(s1 + i))
		s1_len++, i++;
	while (*(s2 + j))
		s2_len++, j++;
	s2_len++;

	strconcat = malloc((s1_len + s2_len) * sizeof(char));

	if (strconcat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		*(strconcat + i) = *(s1 + i);

	j = 0;
	while (*(s2 + j))
	{
		*(strconcat + i) = *(s2 + j);
		i++, j++;
	}

	return (strconcat);
}
