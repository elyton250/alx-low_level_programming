#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
  *print_listint - prints content
  *@h: the head of the list
  *
  *Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	if (h == NULL)
		return (-1);
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}


