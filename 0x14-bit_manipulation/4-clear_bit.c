#include "main.h"

/**
 * clear_bit - set the value of byte
 * @n: num  of i
 * @index: the starting index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}

