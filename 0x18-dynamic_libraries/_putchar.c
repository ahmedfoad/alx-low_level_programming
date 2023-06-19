#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to standard output
 * @c: The character to write
 *
 * Return: On success, returns the number of bytes written.
 * On error, returns -1 and sets errno to indicate the error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

