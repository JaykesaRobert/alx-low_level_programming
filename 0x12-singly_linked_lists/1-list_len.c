#include "lists.h"

/**
 *list_len - return number of elements in list
 *@h: pointer to head
 *
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count;
	const list_t *tmp;

	tmp = h;

	for (count = 0; tmp; count++)
		tmp = tmp->next;

	return (count);
}
