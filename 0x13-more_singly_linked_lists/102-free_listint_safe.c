#include "lists.h"

/**
 * get_loop - Counts the number of unique nodes
 * @head: list
 *
 * Return: nodes or 0
 */
size_t get_loop(const listint_t *head)
{
	const listint_t *chaser, *runner;
	size_t nodes = 1;

	if (!head || !head->next)
		return (0);

	chaser = head->next;
	runner = (head->next)->next;

	for (; runner;)
	{
		if (chaser == runner)
		{
			chaser = head;
			for (; chaser != runner;)
			{
				nodes++;
				chaser = chaser->next;
				runner = runner->next;
			}

			chaser = chaser->next;
			for (; chaser != runner;)
			{
				nodes++;
				chaser = chaser->next;
			}

			return (nodes);
		}

		chaser = chaser->next;
		runner = (runner->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a safe list
 * @h: list
 *
 * Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, index;

	nodes = get_loop(*h);

	if (!nodes)
	{
		for (; h && *h; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
