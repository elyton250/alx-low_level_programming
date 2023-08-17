#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  *sum_them_all - the function that craets the sum
  *@n: the number of arguments to be passed
  *@...: varible of arguments
  *
  *Return: the sum of arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, unsigned int);
	}

	va_end(args);
	return (sum);
}
