#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
  *pop_listint - delete a node
  *@head: head of the node
  *Return: the data of the head
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;
	*head = (*head)->next;
	free(temp);
	temp = NULL;

	if (*head != NULL)
	{
		return ((*head)->n);
	}
	else
	{
		return (-1);
	}
}
