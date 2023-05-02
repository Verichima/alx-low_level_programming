#include "lists.h"

/**
 * listint_len - Function that returns the number of elements
 * @h: Value input of linked list that traverse
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nom = 0;

	while (h)
	{
		nom++;
		h = h->next;
	}

	return (nom);
}
