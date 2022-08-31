#include "lists.h"

/**
 * get_nodeint_at_index - get node at given index
 * @head: list
 * @index: index
 *
 * Return: node at index or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	for (; head && index; index--)
		head = head->next;

	if (!index)
		return (head);

	return (NULL);
}
