#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  *_calloc - allocates memory 
  *@i: used to intialise to 0
  *@ar: is the array that holds the memory
  *
  *Return: the pointer to the array
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = malloc(nmemb * size);

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size) / sizeof(unsigned int); i++)
	{
		ar[i] = 0;
	}

	return (ar);
}
