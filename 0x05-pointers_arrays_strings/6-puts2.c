#include "main.h"

/**
 * puts2 - print to the stdout
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
