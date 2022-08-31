#include "common.h"

/**
 * print_binary - prints binary
 * @n: number
 *
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	int len;
	ulint buff, mask = 1;

	for (len = 0, buff = n; buff > 0; len++)
		buff >>= 1;

	if (--len > 0)
		mask <<= len;

	for (; mask > 0; mask >>= 1)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
