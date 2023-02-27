#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int j = 0;
	char tmp;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s -= len;
	j = (len - 1);

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
}
