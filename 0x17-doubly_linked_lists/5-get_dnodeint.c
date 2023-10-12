#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
  *get_dnodeint_at_index - get a specific node
  *@head: head of list
  *@index: the pos of the node
  *Return: the node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i;

	if (index == 0)
	{
		return (head);
	}
	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
