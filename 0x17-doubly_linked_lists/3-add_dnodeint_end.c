#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at
 *                   the end of a dlistint_t list.
 *
 * @head: the head of the list.
 * @n: value of the element.
 *
 * Return: address of the new element added.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *x;
	dlistint_t *i;

	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = NULL;

	x = *head;

	if (x != NULL)
	{
		while (x->next != NULL)
			x = x->next;
		x->next = i;
	}
	else
	{
		*head = i;
	}

	i->prev = x;
	return (i);
}
