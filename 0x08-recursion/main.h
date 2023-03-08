#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */
int _putchar(char c);

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - the length of a string
 * @s: string argument
 * Return: string length
 */
int _strlen_recursion(char *s);

/**
 * factorial - the factorial of a given number
 * @n: number
 * Return: factorial of number, -1 if negative n
 */
int factorial(int n);

/**
 * _pow_recursion - x raised to the power of y
 * @x: number
 * @y: power
 * Return: power of a number, -1 if power less than 0
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: n
 * Return: natural square root, or -1 if not natural root
 */
int _sqrt_recursion(int n);

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n);

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s);

int wildcmp(char *s1, char *s2);

#endif
