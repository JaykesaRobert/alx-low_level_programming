#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *mem_loc;

	if (!head)
		return;

	for (; *head;)
	{
		mem_loc = *head;
		*head = mem_loc->next;
		free(mem_loc);
	}
}
