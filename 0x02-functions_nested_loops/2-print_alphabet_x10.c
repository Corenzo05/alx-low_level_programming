#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int counter;

	counter = 1;

	while (counter <= 10)
	{

		alphabet = 'a';
		counter++;

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		_putchar('\n');
	}
}
