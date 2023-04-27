#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * list_len - counting nodes in a linked list
 * @h: linked list h
 * Return: the no of the nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
