#include "lists.h"

/**
 * pop_listint - pop list
 * @head: list
 *
 * Return: head's node data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (!*head)
		return (0);

	temp = *head;

	data = temp->n;

	*head = temp->next;
	free(temp);

	return (data);
}
