#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum;
	long int next;
	long int prev = 1;
	long int current = 1;

	while (current < 4000000)
	{
		next = current + prev;
		if (current % 2 == 0)
			sum += current;
		prev = current;
		current = next;
	}

	printf("%d\n", sum);
	return (0);
}
