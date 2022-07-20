#include "main.h"

/**
 * factorial - get the factorial of a number
 * @n: integer number
 *
 * Return: Success ? Factorial : -1
 */

int factorial(int n)
{
	if (n < 0)
		return (ERROR);

	if (n == 0 || n == 1)
		return (n);

	return (n * factorial(n - 1));
}
