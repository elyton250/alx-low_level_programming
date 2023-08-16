#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
  *int_index - the function that searches
  *@array: the array to be searched
  *@size: volume of the array
  *@cmp: pointer to the function that compares
  *
  *Return: -1 if no match and i if there is a maatch
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}

