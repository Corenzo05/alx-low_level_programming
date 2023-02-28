#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: 0
 */
int main(void)
{
	int s = 0;
	int r = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (s < 2772)
	{
		r = rand() % 128;
		if((s + r) > 2772)
		{
			break;
		}
		s = s + r;
		printf("%c", r);
	}

	printf("%c\n", (2772 - s));

	return (0);
}
