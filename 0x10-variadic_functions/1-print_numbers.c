#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  *print_numbers - print numbers
  *@separator: string to be printed bettween numbers
  *@n: number of integers
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(num, unsigned int));

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}


