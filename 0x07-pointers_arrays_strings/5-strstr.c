#include "main.h"

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j, idx;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == needle[0])
		{
			idx = i;
			j = 0;
			while (*(needle + j) != '\0')
			{
				if (*(haystack + idx) == *(needle + j))
					j++, idx++;
				else
					break;
			}

			if (*(needle + j) == '\0')
				return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
