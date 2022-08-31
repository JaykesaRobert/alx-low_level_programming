#include "lists.h"

/**
 * listint_len - get num of elements of a list
 * @h: list
 *
 * Return: list size
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
		h = (*h).next;

	return (nodes);
}
