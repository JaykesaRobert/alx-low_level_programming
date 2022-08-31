#include "lists.h"

/**
 * find_listint_loop - finds loop
 * @head: list
 *
 * Return: nodes or 0
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *chaser, *runner;

	if (!head || !head->next)
		return (NULL);

	chaser = head->next;
	runner = (head->next)->next;

	for (; runner;)
	{
		if (chaser == runner)
		{
			chaser = head;
			for (; chaser != runner;)
			{
				chaser = chaser->next;
				runner = runner->next;
			}
			return (chaser);
		}

		chaser = chaser->next;
		runner = (runner->next)->next;
	}

	return (NULL);
}
