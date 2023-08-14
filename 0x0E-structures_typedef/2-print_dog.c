#include <stdio.h>
#include "dog.h"
/**
  *print_dog - prints the struct dog structure
  *@d: is the pointer to the structure dog
  *
  *Return: NULL when it fails
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		printf("name: %s\n", (*d).name);
		printf("age: %f\n", (*d).age);
		printf("owner %s\n", (*d).owner);
	}
}

