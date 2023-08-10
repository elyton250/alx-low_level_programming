#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *malloc_checked - allocates memeory
  *@b: The number of bytes to be allocated
  *
  *Return: A pointer tothe allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *ptr  = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
