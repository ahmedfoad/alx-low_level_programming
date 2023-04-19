#include "function_pointers.h"

/**
  * int_index - Function that searches for an integer.
  * @array: array of int
  * @size: the size of the array (array)
  * @cmp: function that will be called
  *
  * Return: search number as int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}

