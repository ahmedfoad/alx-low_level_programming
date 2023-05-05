#include "main.h"

/**
 * get_bit - bit of the given index
 * @n: checking bits
 * @index: gt the bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div = 0;
	unsigned long int res = 0;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	div = 1 << index;
	res = n & div;

	if (res == div)
	{
		return (1);
	}

	return (0);
}

