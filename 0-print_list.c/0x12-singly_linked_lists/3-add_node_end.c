#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds node at the end
 * @str: string where lists is stored
 * @head: head
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *temp;
	size_t n_char;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	for (n_char = 0; str[n_char]; n_char++)
		;
	n_node->len = n_char;
	n_node->next  = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = n_node;
	}
	return (*head);
}
