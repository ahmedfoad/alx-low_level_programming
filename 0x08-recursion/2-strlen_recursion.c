#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s:string s
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + 1;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}

