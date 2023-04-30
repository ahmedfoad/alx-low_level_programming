#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at end of a the linked list.
  *
  * @head: a pointer to a linked list
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_t;
	listint_t *first_t;

	if (head == NULL)
		return (NULL);

	new_t = malloc(sizeof(listint_t));

	if (new_t == NULL)
		return (NULL);

	(*new_t).n = n;
	(*new_t).next = NULL;

	if (*head == NULL)
	{
		*head = new_t;
		return (new_t);
	}

	first_t = *head;
	while ((*first_t).next != NULL)
	{
		first_t = (*first_t).next;
	}
	(*first_t).next = new_t;
	return (new_t);
}

