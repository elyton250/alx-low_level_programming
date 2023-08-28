#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
  *add_nodeint_end - add node at the end
  *@head: head of list
  *@n: data to be added
  *
  *Return: address of thr new temp
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t **ptr;

	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	ptr = head;
	while (*ptr != NULL)
	{
		ptr = &((*ptr)->next);
	}
	*ptr = temp;
	return (temp);
}
