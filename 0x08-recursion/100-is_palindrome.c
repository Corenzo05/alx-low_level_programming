#include "main.h"

/**
 * compare - compare head and tail indices for match
 * @start: index starting from left of string
 * @end: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int compare(char *start, char *end)
{
	if (strat >= end)
		return (1);
	if (*start == *end)
		return (compare(start + 1, end - 1));
	return (0);
}

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen(s));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (*s == '\0')
		return (1);
	return (compare(s, s + (len - 1)));
}
