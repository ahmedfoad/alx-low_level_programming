#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - function that creates a new dog
*
* @name: dog name
*
* @age: dog age
*
* @owner: owner name
* Return: new_dog object.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog != NULL)
	{
		(*my_dog).name = name;
		(*my_dog).age = age;
		(*my_dog).owner = owner;
	}
	else
	{
		return (NULL);
	}
	return (my_dog);
}
