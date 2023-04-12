#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - unction that concatenates two strings.
 * @s1: First String
 * @s2: Second string
 *
 * Return: s1 + s2.
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i1 = 0, i2 = 0;
	char *copy;

	if (s1 != NULL)
		while (s1[size1] != '\0')
			size1++;

	if (s2 != NULL)
		while (s2[size2] != '\0')
			size2++;

	copy = (char *)malloc((sizeof(char) * size1) + (sizeof(char) * size2) + 1);

	if (copy == NULL)
		return ((void *)0);

	for (i1 = 0; i1 < size1; i1++)
		copy[i1] = s1[i1];

	for (i2 = 0; i2 < size2; i2++)
	{
		copy[i1] = s2[i2];
		i1++;
	}
	copy[size1 + size2] = '\0';
	return (copy);
}
