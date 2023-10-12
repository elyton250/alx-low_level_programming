#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
  *sum_dlistint - add data
  *@head: the head of the list
  *Return: the sum
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
