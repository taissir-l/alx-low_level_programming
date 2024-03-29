#include "lists.h"
#include <stddef.h>
/**
 * print_dlistint - function Prints all elements of double linked list.
 *
 * @h: double linked list to print.
 *
 * Return: number of nodes of the double linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int leng = 0;

	if (h == NULL)
		return (leng);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		++leng;
		h = h->next;
	}
	return (leng);
}
