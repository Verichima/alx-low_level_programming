#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_node_end - function that adds a new node at the end of a list
 * @head: Double pointer
 * @str: The string of a new code
 *
 * Return: If successful, return an address of a new element. Else, return NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temporary = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temporary->next)
	temporary = temporary->next;
	temporary->next = new_node;

	return (new_node);
}
