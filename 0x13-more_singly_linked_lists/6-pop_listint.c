#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the first node
 * @head: a pointer to a linked list
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current_t;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	current_t = *head;
	*head = current_t->next;
	n = current_t->n;

	free(current_t);

	return (n);
}

