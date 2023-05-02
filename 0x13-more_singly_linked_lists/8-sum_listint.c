#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: Pointer in the linked list
 *
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temporary = head;

	while (temporary)
	{
		sum += temporary->n;
		temporary = temporary->next;
	}

	return (sum);
}
