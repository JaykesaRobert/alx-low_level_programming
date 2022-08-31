#include "lists.h"

/**
 * add_nodeint_end - push to list at tail
 * @head: list head
 * @n: integer
 *
 * Return: address or NULL on fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	(*new).n = n;
	(*new).next = NULL;

	if (!(*head))
	{
		*head = new;
		goto KILL;
	}

	temp = *head;
	while ((*temp).next)
		temp = (*temp).next;
	(*temp).next = new;

KILL:	return (new);
}
