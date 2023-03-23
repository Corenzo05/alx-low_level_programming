#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by new line
 * @separator: the string to be printed between strings
 * @n: number of strings passed as arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	char *str;

	va_start(vlist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vlist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vlist);
}
