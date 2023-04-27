#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - add a new node at the end
 * @head: linked list head
 * @str: a new string we need to add in a new node.
 * Return: the adress
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;

	list_t *add, *current;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}
	while (str[count] != '\0')
		count++;

	add->len = count;
	add->next = NULL;

	if (*head == NULL)
		*head = add;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = add;
	}

	return (add);
}
