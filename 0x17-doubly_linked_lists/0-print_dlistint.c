#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
  *print_dlistint - this function prints list
  *@h: the passed linked list
  *Return: the number of the nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
