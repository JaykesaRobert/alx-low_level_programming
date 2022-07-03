#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 indicates success
 */

int main(void)
{
	int num;
	char str;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (str = 'a'; str <= 'f'; str++)
		putchar(str);
	putchar('\n');
	return (0);
}
