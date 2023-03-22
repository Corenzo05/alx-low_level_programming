#include "function_pointers.h"

/**
 * print_name - execute a function given as argument
 * @name: name to print
 * @f: function to execute
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
