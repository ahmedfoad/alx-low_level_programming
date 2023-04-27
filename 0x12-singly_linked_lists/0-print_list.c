#include "lists.h"

/**
 * print_list - print the linked list
 * @h: linked list h
 * Return: the no of the nodes
 */
size_t print_list(const list_t *h)
{
	list_t *current_t;
	size_t i = 0;

	if (h == NULL)
		return (0);

	current_t = (list_t *)h;
	do {
		if (current_t->str != NULL)
			printf("[%d] (%s)\n", (int)current_t->len, current_t->str);
		else
			printf("[0] (nil)\n");

		current_t = current_t->next;
		i++;
	} while (current_t != NULL);

	return (i++);
}
