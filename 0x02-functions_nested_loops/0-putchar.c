#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const char str[] = "_putchar\n";
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
		_putchar(str[i]);
	return (0);
}
