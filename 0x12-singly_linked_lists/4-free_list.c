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
	list_t *current, *previous;


	while (head)
	{
		current = head;
		previous = head;
		while (current->next != NULL)
		{
			previous = current;
			current = current->next;
		}

		if (current->str != NULL)
			free(current->str);
		previous->next = NULL;
		free(current);
	}

	if (head->str != NULL)
		free(head->str);
	free(head);

	head = NULL;
}
