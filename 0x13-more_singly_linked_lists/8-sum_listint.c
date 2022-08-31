#include "lists.h"

/**
 * sum_listint - sum list
 * @head: list
 *
 * Return: SUM
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	for (; head;)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
