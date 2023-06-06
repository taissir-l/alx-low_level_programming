#include "lists.h"

/**
 * print_listint - function that prints all the elements of a linked list
 *
 * @h: linked list to print.
 *
 * Return: thevnumber of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t p = 0;

	while (h)
	{
		printf("%d\n", h->n);
		p++;
		h = h->next;
	}

	return (p);
}
