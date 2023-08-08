#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *str_concat - concatenates two stringsi
  *@s1: fIRST STRING
  *@s2: SECOND STRIN
  *
  *Return: A pointer to c
  */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	char *c;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	c = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		c[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		c[len1 + i] = s2[i];
	}

	c[len1 + len2] = '\0';

	return (c);
}


