#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *alloc_grid - allocate mem for 2D
  *@width: The width of the grid
  *@height: The height of thr grid
  *
  *Return: Pointer to the allocated 2D grid
  */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **ptr;

	if (width < 0 || height < 0)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
		}

		free(ptr);

		return (NULL);
	}

	for (j = 0; j < width; j++)
	{
		ptr[i][j] = 0;
	}

	return (ptr);
}
