#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning.
 * @n: Input value to isert in new node
 * @head: pointer in the list
 *
 * Return: Address of new elemen if successful, else NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}



