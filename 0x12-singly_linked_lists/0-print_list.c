#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - print the linked list
 * @h: linked list h
 * Return: the no of the nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", (int)h->len, h->str);

		count++;
		h = h->next;
	}
	return (count);
}
