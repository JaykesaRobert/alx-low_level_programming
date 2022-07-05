#include <stdio.h>

/**
 * _abs - Compute absolute value of a number
 * @k: integer
 *
 * Return: Always 0 (Success)
 */
int _abs(int k)
{
	if (k >= 0)
		return (k);
	k *= -1;
	return (k);
}
