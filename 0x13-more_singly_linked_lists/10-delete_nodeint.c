#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node index
 * @head: list
 * @index: index
 * Return: SUCCESS ? 1 : -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *new, *temp;

	if (!*head)
		return (-1);

	new = *head;

	if (!index)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	for (; (index - 1) && new; index--)
		new = new->next;

	if ((index - 1) || !new->next)
		return (-1);

	temp = new->next;
	new->next = (new->next)->next;
	free(temp);

	return (1);
}
