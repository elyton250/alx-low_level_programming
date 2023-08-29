#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
  *insert_nodeint_at_index - inserts a node
  *@head: the head of the node
  *@idx: the index where to add
  *@n: the index to add
  *Return: the poniter to the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *n_ptr;
	unsigned int i = 0;

	if (idx == 0)
	{
		n_ptr = malloc(sizeof(listint_t));

		if (n_ptr == NULL)
			return (NULL);
		n_ptr->n = n;
		n_ptr->next = *head;
		*head = n_ptr;

		return (n_ptr);
	}
	for (i = 0; ptr != NULL && i < idx - 1; i++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return NULL;
	n_ptr = malloc(sizeof(listint_t));
	if (n_ptr == NULL)
		return NULL;
	n_ptr->n = n;
	n_ptr->next = ptr->next;
	ptr->next = n_ptr;

	return (n_ptr);
}
