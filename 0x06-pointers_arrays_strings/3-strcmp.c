#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(s1 + i))
		i++;

	while (*(s2 + j))
		j++;

	if (i != j)
		return (i - j);
	else
		return (0);
}
