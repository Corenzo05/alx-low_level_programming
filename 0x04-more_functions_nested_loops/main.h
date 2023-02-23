#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 * @c: The character to print
 * Return: 1 if @c uppercase, 0 if not
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the argument to check
 * Return: 1 if @c uppercase, 0 if not
 */
int _isdigit(int c);

/**
 * mul - print multiplies two integers
 * @a: first argument
 * @b: second argument
 * Return: 0
 */
int mul(int a, int b);

/**
 * print_numbers - prints the numbers, from 0 to 9
 * using _putchr twice
 */
void print_numbers(void);

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * do not print 2 and 4
 * using _putchar twice
 */
void print_most_numbers(void);

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * use _putchar three times
 */
void more_numbers(void);

/**
 * print_line - draws a straight line using only _putchar
 * @n: number of times
 * Where n is the number of times the character _ should be printed
 */
void print_line(int n);

/**
 * print_diagonal - draws a diagonal line using only _putchar
 * @n: number of times
 * Where n is the number of times the character \ should be printed
 */
void print_diagonal(int n);

/**
 * print_square - prints a square using only _putchar
 * @size: size of the square
 * Use the character # to print the square
 */
void print_square(int size);

/**
 * print_triangle - prints a triangle using only _putchar
 * @size: size of triangle
 * Use the character # to print the triangle
 */
void print_triangle(int size);

#endif /* MAIN_H */
