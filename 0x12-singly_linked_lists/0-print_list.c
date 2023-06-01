#include "lists.h"
#include <stdio.h>

/**
 * print_list -  a function that prints all
 *                      the elements of a list_t list.
 * @h: the pointer to the list_t to print.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
}
