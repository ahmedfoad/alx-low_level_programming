#include "main.h"
/**
 * get_endianness - a function that
 * checks the endianness of int
 *
 * Return: return 0 if big endian,
 * or  1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c;

	c = (char *)&i;
	return (*c);
}

