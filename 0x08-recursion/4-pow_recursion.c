#include "main.h"

/**
 * _pow_recursion - x exponent y
 * @x: number
 * @y: power to raise to
 *
 * Return: power < 0 ? -1 : power of a number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (ERROR);

	if (x == 0)
		return (NULL);

	if (x == 1 || y == 0)
		return (TRUE);

	return (x * _pow_recursion(x, y - 1));
}
