#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *array_range - creates an array of integers ranging from min to max
  *@min: the minimum value
  *@max: The maximum value
  *
  *Return: A pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int i;
	int *ar;
	int diff;

	diff = max - min + 1;

	if (min > max)
		return (NULL);
	ar = malloc(diff * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < diff; i++)
		ar[i] = min + i;
	return (ar);
}

