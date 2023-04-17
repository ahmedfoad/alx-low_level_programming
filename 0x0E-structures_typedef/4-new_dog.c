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
	unsigned int nl, ol;

	dog_t *my_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog != NULL)
	{
		for (nl = 0; name[nl]; nl++)
			nl++;
		(*my_dog).name = malloc(nl * sizeof(char));
		if (my_dog->name == NULL)
		{
			free(my_dog);
			return (NULL);
		}
		(*my_dog).name = name;
		(*my_dog).age = age;
		for (ol = 0; owner[ol]; ol++)
			ol++;
		(*my_dog).owner =  malloc(ol * sizeof(char));
		if (my_dog->owner == NULL)
		{
			free(my_dog);
			return (NULL);
		}
		(*my_dog).owner = owner;
	}
	else
	{
		return (NULL);
	}
	return (my_dog);
}
