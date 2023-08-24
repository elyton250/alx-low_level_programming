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

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d]%s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d]%s\n", h->len, h->str);
		}
		h = h->next;
		node++;
	}
	return (node);
}
