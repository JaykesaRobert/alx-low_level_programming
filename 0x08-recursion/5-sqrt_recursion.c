#include "main.h"

/**
 * _this_is_root - recurcively obtain root
 * @n: integer n
 * @is_root: check if done
 *
 * Return: SUCCESS ? root : -1
 */

int _this_is_root(int n, int is_root)
{
	if (is_root * is_root > n)
		return (ERROR);

	if (is_root * is_root == n)
		return (is_root);

	return (_this_is_root(n, is_root + 1));
}

/**
 * _sqrt_recursion - call @_this_is_root func
 * @n: integer n
 *
 * Return: SUCCESS ? root : -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (ERROR);

	return (_this_is_root(n, NULL));
}
