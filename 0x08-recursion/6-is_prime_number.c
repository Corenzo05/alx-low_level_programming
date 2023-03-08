#include "main.h"

/**
 * is_prime - checks if a number is a prime number
 * @n: number
 * @i: increment number
 * Return: 1 if n is a prime number, or 0 if note
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 0 || n == 1)
		return (0);
	return (is_prime(n, 2));
}
