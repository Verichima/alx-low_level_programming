#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: Pointer to be freed
 *
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int nom;

	if (!head || !*head)
		return (0);

	nom = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (nom);
}

