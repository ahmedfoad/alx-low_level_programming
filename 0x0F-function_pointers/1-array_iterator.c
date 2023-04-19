#include "function_pointers.h"

/**
 * array_iterator - a function given
 * as a parameter on each element of an array.
 *
 * @array: array of integer
 * @size: The size of the array (array)
 * @action: A pointer to the function that will be called
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

