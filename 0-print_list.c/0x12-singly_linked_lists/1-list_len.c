#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *list_len - retuns the lenght of the list
  *@h: pointr to the head
  *
  *Return: number of nodes
  */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
