#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - print the alphabet in lowercase
 * followed by a new line
 */

void print_alphabet_x10(void);

/**
 * _islower - check for lower case character
 * @c: integer input
 *
 * Return: 0 (Lowercase) 1 (Otherwise)
 */

int _islower(int c);

/**
 * _isalpha - check for aphabetic character
 * @c: input character
 *
 * Return: 1 (Success) 0 (Otherwise)
 *
 */

int _isalpha(int c);

/**
 * print_sign - Print the sign of a number
 * @n: integer input
 *
 * Return: -1 (Negative) 0 (Zero) 1 (Positive)
 */
int print_sign(int n);

/**
 * _abs - Compute absolute value of a number
 * @int: integer
 *
 * Return: Always 0 (Success)
 */
int _abs(int);

/**
 * print_last_digit - evaluate the last digit of a number
 * @int: integer input
 *
 * Return: The last digit (Success)
 */

int print_last_digit(int);

/**
 * jack_bauer - print every minute and hour of the day
 */
void jack_bauer(void);

/**
 * times_table - print the 9 x i table
 */

void times_table(void);

/**
 * add - add two numbers
 * @int: integer input
 *
 * Return: (Solution)
 */
int add(int, int);

/**
 * print_to_98 - print from n to 98
 * @n: integer n
 */

void print_to_98(int n);

/**
 * times_table - print the 9 x i table
 * @n: integer n
 */

void print_times_table(int n);


#endif
