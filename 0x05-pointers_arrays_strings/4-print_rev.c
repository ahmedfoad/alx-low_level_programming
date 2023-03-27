#include <stdio.h>

/**
 * print_rev - function print a string in reverse and then a new line
 *
 * @str: pointer to a string
 * Return: void
 */
void print_rev(char *str)
{
	int i = 0;

	int index = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (index = i - 1; index >= 0; index--)
	{
		putchar(str[index]);
	}
	putchar('\n');
}
