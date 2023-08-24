#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *print_list - prints elelments in list t
  *@h: pointer to the first node
  *Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u]%s\n", h->len, h->str);
		}
		h = h->next;
		node++;
	}
	return (node);
}
