#include "function_pointers.h"

/**
 * print_name - Function that prints name by path a param.
 * @name: string input param as name
 * @f: function name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
