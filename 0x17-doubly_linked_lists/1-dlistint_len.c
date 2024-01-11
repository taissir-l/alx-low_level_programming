#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in
 *                a double linked list
 *
 * @h: head of the list.
 *
 * Return: number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int leng = 0;

	if (h == NULL)
		return (leng);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		leng++;
		h = h->next;
	}
	return (leng);
}
