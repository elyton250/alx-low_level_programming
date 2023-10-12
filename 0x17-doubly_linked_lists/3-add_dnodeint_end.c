#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
  *add_dnodeint_end - add nodes at the end
  *@head: the head
  *@n: the data
  *Return: the new node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	newnode->next = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	newnode->prev = temp;
	temp->next = newnode;
	return (newnode);
}
