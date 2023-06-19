#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the main string
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (haystack == NULL || needle == NULL)
	return (NULL);

	for (; *haystack; haystack++)
	{
	for (h = haystack, n = needle; *h && *n && (*h == *n); h++, n++)
		;

	if (*n == '\0')
		return (haystack);
	}

	return (NULL);
}

