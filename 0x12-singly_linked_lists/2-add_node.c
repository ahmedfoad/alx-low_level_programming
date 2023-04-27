#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - add a new node
 * @head: linked list head
 * @str: a new string we need to add in a new node.
 * Return: the adress
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;

	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	while (str[count] != '\0')
		count++;

	add->len = count;

	add->next = *head;
	*head = add;

	return (add);
}

