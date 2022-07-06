#include "main.h"

/**
 * times_table - print the 9 x i table
 */

void times_table(void)
{
	int left, right;

	for (left = 0; left < 10; left++)
	{
		for (right = 0; right < 10; right++)
		{
			if ((left * right) < 10)
			{
				_putchar((left * right) + '0');
				if (right == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				if (left * (right + 1) >= 10)
					continue;
				_putchar(' ');
				continue;
			}
			_putchar(((left * right) / 10) + '0');
			_putchar(((left * right) % 10) + '0');
			if (right == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
