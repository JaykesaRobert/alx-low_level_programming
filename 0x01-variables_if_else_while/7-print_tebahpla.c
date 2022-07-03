#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 indicates success
 */

int main(void)
{
	char alphabet;
	/* Program */
	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
