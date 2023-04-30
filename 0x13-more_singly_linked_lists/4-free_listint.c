#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees
 * a listint_t list.
 *
 * @head: a pointer to a linked list
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free(head);
	}
}

