#include "common.h"

/**
 * set_bit - set bit at given index
 * @n: number
 * @index: index
 * Return: SUCCESS ? 1 : -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	ulint mask = 1;

	if (out_of_range(index))
		return (-1);

	mask <<= index;
	*n |= mask;

	return (1);
}

