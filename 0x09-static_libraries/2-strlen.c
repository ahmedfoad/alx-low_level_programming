#include <stdio.h>

/**
 * _strlen - count the lenght of a string
 *
 * @str: pointer to a string
 * Return: len (int) return the lenght of a string.
 */
int _strlen(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}
