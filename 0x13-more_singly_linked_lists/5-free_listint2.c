#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: Pointer to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
		return;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}

	*head = NULL;
}
