#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
  *delete_nodeint_at_index - delete node at any position
  *@head: head od the list
  *@index: determineds the position
  *Return: -1 if fails 1 if success
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;
	unsigned int j;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	for (j = 0; current != NULL && j < index;  j++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
}

