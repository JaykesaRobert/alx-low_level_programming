#include "main.h"

/**
 * print_last_digit - evaluate the last digit of a number
 * @k: integer input
 *
 * Return: The last digit (Success)
 */

int print_last_digit(int k)
{
	int last;

	last = k % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}

