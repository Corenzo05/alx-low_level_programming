#include "main.h"

/**
 * string_toupper - capitalize first letter of all words
 * @s: string to manipulate
 * Return: string
 */

char *cap_string(char *s)
{
	int separators[] = {' ', 9, 10, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i;
	int len = 0;

	if (*(s + len) >= 'a' && *(s + len) <= 'z')
		*(s + len) = *(s + len) - 'a' + 'A';
	len++;
	while (*(s + len) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + len) == separators[i])
			{
				if ((*(s + (len + 1)) >= 'a') && (*(s + (len + 1)) <= 'z'))
					*(s + (len + 1)) = *(s + (len + 1)) - 'a' + 'A';
				break;
			}
		}
		len++;
	}
	return (s)
}
