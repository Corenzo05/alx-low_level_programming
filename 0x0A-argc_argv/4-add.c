#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - print result of adds positive numbers
 * @argc: counter
 * @argv: pointer to array of arguments
 * Return: 0 on success, 1 if one of the arguments was not numbers
 */

int main(int argc, char *argv[])
{
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
