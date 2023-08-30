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
	int data;
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
