#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - free all nodes in the dlist
 *
 * @head: pointer to the head of the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
		}
		free(temp);
	}
}

