#include "lists.h"

/**
 * listint_len - function that returns the number
 *               of elements in a linked lists
 *
 * @h: the linked list.
 *
 * Return: the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t p = 0;

	while (h)
	{
		h = h->next;
		p++;
	}

	return (p);
}
