#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
  *add_dnodeint - adds nodes
  *@head: teh head of thelist
  *@n: data in the node
  *Return: the pointer to the head
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p = malloc(sizeof(dlistint_t));

	if (p == NULL)
		return (NULL);

	p->prev = NULL;
	p->n = n;
	p->next = *head;
	if ((*head) != NULL)
		(*head)->prev = p;
	*head = p;

	return (p);
}
