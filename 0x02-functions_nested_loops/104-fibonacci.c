#include <stdio.h>
#define BILLION 1000000000

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, overflow;
	unsigned long int next;
	unsigned long int prev = 1;
	unsigned long int current = 1;
	long current_head, current_tail, next_head, next_tail;
	long sum_head, sum_tail;

	printf("1");
	for (i = 2; i <= 92; i++)
	{
		next = current + prev;
		printf(", %lu", next);
		prev = current;
		current = next;
	}

	current_head = prev / BILLION;
	current_tail = prev % BILLION;
	next_head = current / BILLION;
	next_tail = current % BILLION;

	for (; i < 99; i++)
	{
		overflow = (current_tail + next_tail) / BILLION;
		sum_tail = (current_tail + next_tail) - (BILLION * overflow);
		sum_head = (current_head + next_head) + overflow;

		printf(", %lu%lu", sum_head, sum_tail);

		current_head = next_head;
		current_tail = next_tail
		next_head = sum_head;
		next_tail = sum_tail;
	}
	printf("\n")
	return (0);
}
