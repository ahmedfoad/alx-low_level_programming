#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @size: the size of the array
 * @c: the characther that we need to allocat for every element in the array
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL || size <= 0)
	{
		return ((void *)0);
	}

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
