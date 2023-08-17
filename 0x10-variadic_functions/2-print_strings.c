#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  *print_strings - prints passed strings
  *@n: the number of passed arguments
  *@separator: string that separates
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(string, char *));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(string);
}
