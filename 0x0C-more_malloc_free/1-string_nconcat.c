#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *string_len - Concatenates two strings while considering a limit.
 * @s: The string.
 *
 *Return: The length of the string
 */
unsigned int string_len(char *s)
{
	unsigned int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}

/**
  *string_nconcat - Concatenates two strings while considering a limit.
  *@s1: The first string.
  *@s2: The second string.
  *@n: The maximum number of characters from s2 to concatenate.
  *
  *Return: A pointer to the concatenated string, or NULL on failure.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int con_ind = 0;
	unsigned int i;
	unsigned int len1 = 0;
	char *con;
	unsigned int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = string_len(s1);
	len2 = string_len(s2);

	con = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
	{
		con[con_ind++] = s1[i];
	}
	if (len2 <= n)
	{
		for (i = 0; i < len2; i++)
			con[con_ind++] = s2[i];
	}
	else
	{
		for (i = 0; i < n; i++)
			con[con_ind++] = s2[i];
	}
	return (con);
}

