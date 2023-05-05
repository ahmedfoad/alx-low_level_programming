#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary to a number.
 * @b: pointing that contains a binary data zero and one
 *
 * Return:convert the binday to a int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
		{
			j += 1;
		}
	}

	return (j);
}

