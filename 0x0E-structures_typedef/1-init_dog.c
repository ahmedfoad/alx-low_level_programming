#include <stdio.h>
#include "dog.h"

/**
* init_dog - function intialize the dog values
*
* @d: struct dog
*
* @name: dog name
*
* @age: dog age
*
* @owner: owner name
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
