#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int next;
	long int prev = 1;
	long int current = 1;

	for (i = 1; i <= 50; i++)
	{
		next = current + prev;
		if (i == 50)
		{
			printf("%ld\n", current);
			continue;
		}
		printf("%ld, ", current);
		prev = current;
		current = next;
	}
	return (0);
}
