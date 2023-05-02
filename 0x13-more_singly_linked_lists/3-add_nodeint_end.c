#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: Pointer in the list
 * @n: value input to insert
 *
 * Return: If successful, returns the address of the new element else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *temporary = *head;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}

	while (temporary->next)
		temporary = temporary->next;

	temporary->next = fresh;

	return (fresh);
}
