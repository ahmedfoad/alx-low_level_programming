#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: Pointer to array of string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
	}
	putchar(*s);
}
