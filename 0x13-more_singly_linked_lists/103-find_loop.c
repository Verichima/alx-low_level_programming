#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: Pointer to search
 * Return: The address of the node when loop starts else NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *stop = head;
	listint_t *start = head;

	if (!head)
		return (NULL);

	while (stop && start && start->next)
	{
		start = start->next->next;
		stop = stop->next;
		if (start == stop)
		{
			stop = head;
			while (stop != start)
			{
				stop = stop->next;
				start = start->next;
			}
			return (start);
		}
	}

	return (NULL);
}
