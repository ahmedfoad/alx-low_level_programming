#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: the characther that we need to allocat for every element in the array
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	unsigned int size, i;
	char *arr;

	if (str == NULL)
	{
		return ((void *)0);
	}

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}

	arr = (char *)malloc((sizeof(char) * size) + 1);

	if (arr == NULL)
	{
		return ((void *)0);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	arr[size] = '\0';
	return (arr);
}
