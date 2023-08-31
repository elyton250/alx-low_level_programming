#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *binary_to_uint - converts numbers into binary
  *@b: the passed string
  *Return: the convertetd number is returned
  */
unsigned int binary_to_uint(const char *b)
{
	int len;
	int i;
	unsigned int total = 0;
	unsigned int p_val = 1;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			total += p_val;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		p_val *= 2;
	}
	return (total);
}
