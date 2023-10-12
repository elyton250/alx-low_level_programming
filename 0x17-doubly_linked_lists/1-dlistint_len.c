#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
  *dlistint_len - it return the number of nodes
  *@h: the passed node
  *Return: the number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
