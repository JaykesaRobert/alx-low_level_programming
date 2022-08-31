#include "common.h"

/**
 * clear_bit - clear bit at given index
 * @n: number
 * @index: index
 * Return: SUCCESS ? 1 : -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	ulint mask = 1;

	if (out_of_range(index))
		return (-1);

	mask <<= index;
	*n &= ~mask;

	return (1);
}

