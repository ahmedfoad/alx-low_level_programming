#include <unistd.h>

/**
 * _putchar - put the char into a console
 * @c: char
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
