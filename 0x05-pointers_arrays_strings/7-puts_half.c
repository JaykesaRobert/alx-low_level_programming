#include "main.h"

/**
 * puts_half - print half a string
 * @str: character pointer
 * Return: void
 */

void puts_half(char *str)
{
	int i, len;

	len = strlen(str) - 1;

	i = len / 2 + 1;

	while (i <= len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
