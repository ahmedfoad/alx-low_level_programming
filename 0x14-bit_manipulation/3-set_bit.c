#include "main.h"

/**
 * set_bit - Set one (1) to a bit a given index.
 * @index: the index of the bit
 * that we need to set as 1
 * @n: pointer number of i
 * Return: 1 if succedded, or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	i = 1 << index;
	*n = *n | i;

	return (1);
}

