#include "lists.h"
#include <stdlib.h>
/**
 * list_len - a function that returns the number
 *            of elements in a linked list_t list.
 *
 * @h: the poiter to list_t.
 *
 * Return: number of elements linked to list_t liist.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
