#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: integer input
 *
 * Return: -1 (Negative) 0 (Zero) 1 (Positive)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
