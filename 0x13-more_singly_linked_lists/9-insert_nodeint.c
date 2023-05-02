#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: Pointer of node in the list
 * @idx: index of the list where node should be added
 * @n: Value input to insert
 * Return: NULL if failed or the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *fresh;
	listint_t *temporary = *head;

	fresh = malloc(sizeof(listint_t));
	if (!fresh || !head)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (idx == 0)
	{
		fresh->next = *head;
		*head = fresh;
		return (fresh);
	}

	for (a = 0; temporary && a < idx; a++)
	{
		if (a == idx - 1)
		{
			fresh->next = temporary->next;
			temporary->next = fresh;
			return (fresh);
		}
		else
			temporary = temporary->next;
	}

	return (NULL);
}
