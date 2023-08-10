#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_calloc - allocates memory
 *@size: size of bytes
 *@nmemb: the number of elements
 *
 *Return: the pointer to the array on successs
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
