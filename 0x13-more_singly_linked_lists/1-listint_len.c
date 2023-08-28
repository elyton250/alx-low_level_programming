#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
  *listint_len - returns the number oof elements in the lsi
  *@h: the head of the list
  *
  *Return: the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t count = 0;
	ptr = h;

	if (h == NULL)
		return (-1);

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
