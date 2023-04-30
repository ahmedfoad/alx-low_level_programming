#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees
 * a listint_t list.
 *
 * @head: a pointer to a linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current_t;

	if (head == NULL)
		return;

	if (*head != NULL)
	{
		current_t = *head;
		free_listint2(&current_t->next);
		free(current_t);
	}
}

