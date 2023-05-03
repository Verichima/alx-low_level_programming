#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Function that counts the number of unique nodes
 * @head: Pointer of the listint_t to check
 *
 * Return: -0 if list is not looped
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *up, *down;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	up = head->next;
	down = (head->next)->next;

	while (down)
	{
		if (up == down)
		{
			up = head;
			while (up != down)
			{
				nodes++;
				up = up->next;
				down = down->next;
			}

			up = up->next;
			while (up != down)
			{
				nodes++;
				down = down->next;
			}

			return (nodes);
		}

		up = up->next;
		down = (down->next)->next;
	}
	return (0);
}


/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: Pointer of the listint_t to check
 * Returns: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

