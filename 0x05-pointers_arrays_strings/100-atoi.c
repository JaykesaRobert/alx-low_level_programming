#include "main.h"

/**
 * _strlen - get len
 * @str: char pointer
 * Return: int
 */

int _strlen(char *str)
{
	return (strlen(str));
}
/**
 * _num_id - find index where a digit is first found in string
 * @s: string to search
 * Return: integer index where digit is first found
 */

int _num_id(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i);
	}
	return (-1); /* return -1 if no digits found */
}

/**
 * find_sign - determine if integer is negative
 * @s: integer
 * Return: integer 1 or -1
 */
int find_sign(char *s)
{
	int negatives = 0, i = 0, sign = 1;

	while (i < (_num_id(s)))
	{
		if (s[i++] == '-')
			negatives++;
	}

	if (negatives % 2 != 0)
		sign = -1;

	return (sign);
}

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{

	int _start_id = (_num_id(s));
	int sign;
	int _digits = 0;
	int t = 1, i;
	unsigned int num = 0;
	int digit = (_num_id(s));

	if (_start_id < 0) /* if no digits found, exit program */
		return (0);

	sign = find_sign(s);

	while ((s[_start_id] >= '0' && s[_start_id] <= '9')
			&& (_start_id <= _strlen(s))) /* count digits to print */
	{
		_digits += 1;
		_start_id++;
	}

	i = 1;
	while (i < _digits) /* find powers of ten to multiply places */
	{
		t *= 10;
		i++;
	}

	for (i = digit; i < (digit + _digits); i++) /* calculate num */
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}

	return (num * sign);
}
