#include "lists.h"

/**
 * free_listint_safe - Function that frees a listint_t
 * @h: value input in the linked list
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int different;
	listint_t *temporal;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		different = *h - (*h)->next;
		if (different > 0)
		{
			temporal = (*h)->next;
			free(*h);
			*h = temporal;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;
	return (length);
}
