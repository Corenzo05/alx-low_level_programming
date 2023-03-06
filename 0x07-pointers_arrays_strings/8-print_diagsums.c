#include "main.h"

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size);
{
	int i, idx, diago_sum1, diago_sum2;

	diago_sum1 = 0;
	diago_sum2 = 0;
	for (i = 0; i < size; i++)
	{
		idx = (i * size) + i;
		diago_sum1 += a[idx];
	}

	for (i = 1; i <= size; i++)
	{
		idx = (i * size) - i;
		diago_sum2 += a[idx];
	}

	printf("%d, %d\n", diago_sum1, diago_sum2);
}
