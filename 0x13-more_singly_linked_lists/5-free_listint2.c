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
	listint_t *temp = *head;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}

	if (*head != NULL)
		free(*head);
}


