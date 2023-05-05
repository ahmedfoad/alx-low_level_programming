#include "main.h"
/**
 * flip_bits - flip a binay digit
 * get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: Return the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result = 1;
	unsigned int j = 0, i = 0;


	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			j++;
		result <<= 1;
	}

	return (j);
}

