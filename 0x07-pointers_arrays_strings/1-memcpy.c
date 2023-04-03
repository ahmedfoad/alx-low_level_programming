#include "main.h"

/**
 * _memcpy - function copies @n bytes from  @src as source
 * to @dest as destination
 *
 * @n: no of indexes
 *
 * @src: from source
 *
 * @dest: to destenation
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

