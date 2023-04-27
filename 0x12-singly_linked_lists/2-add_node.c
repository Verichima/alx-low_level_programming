#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - function that adds a new node at the beginning of a list.
 * @head: double place pointer
 * @str: A string to add
 *
 * Return: If successful, the address of new element, else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
