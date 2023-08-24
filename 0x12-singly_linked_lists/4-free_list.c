#include "lists.h"
#include <stdlib.h>
/**
  *free_list - frees a list_t list
  *@head: head of lsi
  *Return; nothing
  */
void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
