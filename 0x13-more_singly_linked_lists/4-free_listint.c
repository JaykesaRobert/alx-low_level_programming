#include "lists.h"

/**
 * free_listint - frees a list
 * @head: list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *mem_loc;

	if (!head)
		return;

	for (; head;)
	{
		mem_loc = head;
		head = head->next;
		free(mem_loc);
	}
}
