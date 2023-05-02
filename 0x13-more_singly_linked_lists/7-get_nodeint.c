#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: Pointer in the linked list
 * @index: index of node to return
 *
 * Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temporary = head;

	while (temporary && a < index)
	{
		temporary = temporary->next;
		a++;
	}

	return (temporary ? temporary : NULL);
}
