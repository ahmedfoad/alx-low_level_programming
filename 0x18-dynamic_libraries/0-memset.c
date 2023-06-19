#include "main.h"
/**
 * _memset - 
 * @s: the area being search in
 * @b: the byte in memory
 * @n: Amount of memory
 * Return:  memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
