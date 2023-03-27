#include <stdio.h>

/**
 * swap_int - swap two int varables
 * @a: first value
 * @b: second value
 *
 */
void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
