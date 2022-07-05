#include "main.h"

/**
 * _isalpha - check for aphabetic character
 * @c: input character
 *
 * Return: 1 (Success) 0 (Otherwise)
 */

int _isalpha(int c)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (c == alpha)
			return (1);
	}

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (c == alpha)
			return (1);
	}
	return (0);
}
