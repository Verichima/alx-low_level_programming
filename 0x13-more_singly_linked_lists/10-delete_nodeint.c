#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: Pointer to element in the list
 * @index: of node that should be deleted
 * Return: 1 if successful, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	while (a < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		a++;
	}

	current = temporary->next;
	temporary->next = current->next;
	free(current);

	return (1);
}
