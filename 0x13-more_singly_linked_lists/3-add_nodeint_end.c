#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a linked list.
 *
 * @head: the pointer to the first element in the list.
 * @n: data of the new element.
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}
	while (y->next)
		y = y->next;

	y->next = x;
	return (x);
}
