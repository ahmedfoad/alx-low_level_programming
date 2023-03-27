#include <stdio.h>

/**
 * _puts - function print a string then a new line
 *
 * @str: pointer to a string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
