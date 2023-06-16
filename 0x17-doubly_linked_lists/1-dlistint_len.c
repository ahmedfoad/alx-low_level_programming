#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - get lenght of the data
 * of each node in a doubly linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h);
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
