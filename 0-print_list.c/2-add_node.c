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
	size_t n_char;
	list_t *n_node;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);

	for (n_char = 0; str[n_char]; n_char++)
		;
	n_node->len = n_char;
	n_node->next = *head;
	*head = n_node;

	return (*head);
}
