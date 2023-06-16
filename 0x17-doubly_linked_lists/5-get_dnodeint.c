#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - add in the last node
 *
 * @head: pointer to the head of the list
 * @index: the index of the node
 *
 * Return: node
 * if the function fails, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}

	return (head);
}
