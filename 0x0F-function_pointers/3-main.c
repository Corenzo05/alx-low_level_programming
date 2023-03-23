#include "3-calc.h"
#include <stdio.h>

/**
 * main - when user runs main,
 * user should give two integers and an operator and
 * main will calculate the math via a function pointer.
 * prints sum, difference, product, dividend, or remainder
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit (99);
	}

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", op(num1, num2));
	return (0);
}
