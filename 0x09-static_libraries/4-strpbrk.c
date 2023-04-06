#include "main.h"

/**
 * _strpbrk - function that gets the length of a prefix substring.
 *
 * @s: source string
 *
 * @accept: substring
 *
 *
 * Return: Returns a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			return (s);
		}
		s++;
	}

	return (NULL);
}
