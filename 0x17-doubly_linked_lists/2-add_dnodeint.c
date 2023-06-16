#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - add in the first node
 *
 * @head: pointer to the head of the list
 * @n: the value of the new node
 *
 * Return: the address of the new node
 * if the function fails, NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
	{
		return (NULL);
	}
	new_head->n = n;
	new_head->next = *head;
	new_head->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_head;
	}
	*head = new_head;
	return (new_head);
}
