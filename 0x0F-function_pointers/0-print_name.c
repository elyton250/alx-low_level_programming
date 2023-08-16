#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *print_name - prints a string
  *@name: the string to be printed
  *@f: a function to be applied
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
