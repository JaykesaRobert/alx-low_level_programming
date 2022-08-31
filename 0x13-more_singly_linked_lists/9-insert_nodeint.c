#include "lists.h"

/**
 * insert_nodeint_at_index - get node at given index
 * @head: list
 * @idx: index
 * @n: data to insert
 *
 * Return: new node address or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;

	for (; (idx - 1); idx--)
	{
		temp = temp->next;
		if (!temp)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}
