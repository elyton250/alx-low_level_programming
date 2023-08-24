#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node -  adds node at the beginning of a list_t list
 * @head: head
 * @str: string store the list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *n_node;

	while (str[len])
		len++;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->str = strdup(str);

	n_node->len = len;
	n_node->next = (*head);
	(*head) = n_node;

	return (*head);
}
