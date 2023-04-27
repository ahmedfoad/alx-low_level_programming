#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_list - free the momory of the list
 * @head: linked list head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		while (current->next != NULL)
			current = current->next;
		free(current);
	}
	free(head);
}
