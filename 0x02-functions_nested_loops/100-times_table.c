nclude "main.h"
#include <string.h>

/**
 * panctuate - format the output
 * @n: number of spaces
 */

void panctuate(int n)
{
	int panct;
	{

		_putchar(',');
		for (panct = 0; panct < n; panct++)
		{
			_putchar(' ');
		}
	}
}

/**
 * print_numbers - print values using _putchar
 * @k: integer k
 * @mod: check wether to append control x-ters
 */

void print_numbers(int k, int mod)
{
	if (k < 10)
	{
		_putchar(k + '0');
		if (mod > 0)
			panctuate(mod);
	}
	else if (k < 100)
	{
		_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
		if (mod > 0)
			panctuate(mod);
	}
	else
	{
		_putchar((k / 100) + '0');
		_putchar(((k % 100) / 10) + '0');
		_putchar((k % 10) + '0');
		if (mod > 0)
			panctuate(mod);
	}
}

/**
 * print_times_table - print the n x i table
 * @n: integer n
 */
void print_times_table(int n)
{
	int left, right, product, mod, postprod;

	if (n > 15 || n < 0)
		return;

	for (left = 0; left <= n; left++)
	{
		for (right = 0; right <= n; right++)
		{
			product = left * right;
			postprod = (left * (right + 1));

			if (postprod >= 100)
				mod = 1;
			else if (postprod >= 10)
				mod = 2;
			else
				mod = 3;
			if (right == n)
				mod = -1;
			print_numbers(product, mod);
		}
		_putchar('\n');
	}
}
