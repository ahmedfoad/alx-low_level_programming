#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - add in the last node
 *
 * @head: pointer to the head of the list
 *
 * Return: sum of nodes in the list
 */
int sum_dlistint(dlistint_t *head)
{
	size_t i;
	int sum = 0;

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
