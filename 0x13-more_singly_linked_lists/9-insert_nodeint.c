#include "lists.h"


/**
 * insert_nodeint_at_index -  a function that inserts a new node
 *                            at a given position.
 *
 * @head: the first node.
 * @idx: the index where the data will be added.
 * @n: the data of the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *x, *y = *head;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;
	if (idx == 0)
	{
		x->next = y;
		*head = x;
		return (x);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (y == NULL || y->next == NULL)
			return (NULL);

		y = y->next;
	}
	x->next = y->next;
	y->next = x;
	return (x);
}
