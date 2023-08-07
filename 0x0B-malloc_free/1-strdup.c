#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string in memory.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the newly duplicated string, or NULL if memalloc fails.
 */
char *_strdup(char *str)
{
	int i;
	int n = 0;
	char *s2;

	while (str[n] != '\0')
	{
		n++;
	}

	s2 = (char *)malloc((n + 1) * sizeof(char));

	if (s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= n; i++)
	{
		s2[i] = str[i];
	}

	return (s2);
}

