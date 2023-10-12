#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
  *insert_dnodeint_at_index - insert node at a posintion
  *@h: the head of the list
  *@idx: the index to remove it
  *@n: the data
  *Return: the node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = temp;
		newnode->prev = NULL;
		if (temp != NULL)
		{
			temp->prev = newnode;
		}
		*h = newnode;
		return (newnode);
	}
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	newnode->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = newnode;
	temp->next = newnode;
	return (newnode);
}
