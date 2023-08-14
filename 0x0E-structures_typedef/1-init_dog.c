#include <stdio.h>
#include "dog.h"
/**
  *init_dog - intializes varible withtype of struct dog
  *@d: The string to be initialized
  *@name: the dog name
  *@age: age of the dog
  *@owner: The owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


