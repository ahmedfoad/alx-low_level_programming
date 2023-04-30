#include "lists.h"

/**
 * listint_len -  a function that prints all the elements of a linked list
 *
 * @h: a pointer to a linked list
 *
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = (*h).next;
		count++;
	}
	return (count);
}

