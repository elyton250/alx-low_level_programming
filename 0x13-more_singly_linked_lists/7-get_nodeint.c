#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
  *get_nodeint_at_index - retunr thr nth nide
  *@index: the index of the returned node
  *@head: the head of the list
  *Return: the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (j != index && head != NULL)
	{
		head = head->next;
		j++;
	}
	return (head);
}
