#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint -  function that adds
  * a new node at the beginning of the linked list
  *
  * @head: a pointer to a linked list
  * @n: the value of the new node.
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_t;

	if (head == NULL)
		return (NULL);

	new_t = malloc(sizeof(listint_t));

	if (new_t == NULL)
		return (NULL);

	(*new_t).n = n;
	(*new_t).next = *head;
	*head = new_t;

	return (new_t);
}

