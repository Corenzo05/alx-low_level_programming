#ifndef main_h
#define main_h

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * prints the alphabet in lowercase
 */
void print_alphabet(void);

/**
 * prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void);

/**
 * _islower : checks for lowercase character.
 * return: integer
 */
int _islower(int c);

/**
 * _isalpha : checks for alphabetic character
 * return: integer
 */
int _isalpha(int c);

/**
 * print_sign : prints the sign of a number
 * return: integer
 */
int print_sign(int n);

/**
 * computes the absolute value of an integer
 * return: integer
 */
int _abs(int);

/**
 * prints the last digit of a number
 * return: integer
 */
int print_last_digit(int);

/**
 * prints every minute of the day of Jack Bauer
 */
void jack_bauer(void);

/**
 * prints the 9 times table, starting with 0
 */
void times_table(void);

/**
 * add : adds two integers and returns the result
 * return: integer
 */
int add(int, int);

/**
 * print_to_98 :  prints all natural numbers from n to 98
 * @n : int argument
 */
void print_to_98(int n);

/**
 * print_times_table - prints the n times table
 * @n: integer argument
 */
void print_times_table(int n);
#endif
