#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
  *free_listint2 - free the list
  *@head: head of the list
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
