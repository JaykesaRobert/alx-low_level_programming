#include "common.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index
 *
 * Return: 0 / 1 / -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (out_of_range(index))
		return (-1);

	return ((n >> index) & 1);
}
