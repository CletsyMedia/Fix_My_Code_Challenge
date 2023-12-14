#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a list
 *
 * @head: The address of the pointer to the first element of the list
 * @n: The number to store in the new element
 *
 * Return: A pointer to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
	new->prev = NULL;
	*head = new;
	}
	else
	{
	dlistint_t *last = *head;

	while (last->next)
	last = last->next;

	last->next = new;
	new->prev = last;
	}

	return (new);
}
