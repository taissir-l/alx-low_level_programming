#include "lists.h"

/**
 * add_nodeint - function that adds a new node at
 *              the beginning of a linked list.
 *
 * @head: the first node pointer in the list.
 * @n: what to insert in that new node.
 *
 * Return: pointer to the new node, or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);
	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}
