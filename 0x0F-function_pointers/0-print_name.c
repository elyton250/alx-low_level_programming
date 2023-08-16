#include "function_pointers.h"
#include <stdio.h>
/**
  *print_name - prints a string
  *@name: the string to be printed
  *@f: a function to be applied
  *Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
