#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
