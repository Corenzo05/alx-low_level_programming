#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int ex;

	while (start < end)
	{
		ex = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = ex;
		start++;
		end--;
	}
}
