#include "main.h"

/**
 * main - Entry point
 * @argc: number of params
 * @argv: array of params
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
