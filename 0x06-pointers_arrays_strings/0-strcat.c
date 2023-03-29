#include <stdio.h>

/**
 * _strcat - concate two strings
 *
 * @dest: destination string
 * @src: Source string
 * Return: src string value.
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;
	int i1, i2;

	i1 = 0;

	while (dest[i1] != '\0')
	{
		i1++;
	}

	i2 = 0;
	while (src[i2] != '\0')
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	i1++;
	dest[i1] = '\0';
	return (s);
}
