#include "main.h"

/**
 * _this_is_prime - recurcively if a number is prime
 * @n: integer n
 * @_is_divisor: check if is a divisor
 *
 * Return: SUCCESS ? 1 : 0
 */

int _this_is_prime(int n, int _is_divisor)
{
	if (n == _is_divisor)
		return (TRUE);

	if (n % _is_divisor == NULL)
		return (NULL);

	return (_this_is_prime(n, _is_divisor + 1));
}

/**
 * is_prime_number - call @_this_is_prime func
 * @n: integer n
 *
 * Return: SUCCESS ? 1 : 0
 */

int is_prime_number(int n)
{
	if ((n % 2 == NULL && n != 2) || n < 2)
		return (NULL);

	return (_this_is_prime(n, 2));
}
