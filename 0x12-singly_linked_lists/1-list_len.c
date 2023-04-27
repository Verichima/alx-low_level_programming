#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: valur input pointer
 *
 * Return: elements in h
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
