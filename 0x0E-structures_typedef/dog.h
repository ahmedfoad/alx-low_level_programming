#ifndef DOG_H
#define DOG_H

/**
* struct dog - Struct that display the dog's name, age, and the owner name.
*
* @name: Displays the dog's name.
*
* @age: Displays the dog's age.
*
* @owner: Displays the dog's owner name.
*/

struct dog
{
	char *name; /* 8 bytes */
	float age; /* 4 bytes */
	char *owner; /* 8 bytes */
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
