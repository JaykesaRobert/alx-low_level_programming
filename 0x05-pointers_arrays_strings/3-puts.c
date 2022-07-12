#include "main.h"

/**
 * _puts - print to the stdout
 * @str: string
 *
 * Return: void
 */

void _puts(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
