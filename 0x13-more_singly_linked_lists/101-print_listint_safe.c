#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - function that prints a listint_t linked list.
 *
 * @head: head of linked list
 *
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *c;
	size_t i;
	const listint_t *h;

	c = head;
	if (c == NULL)
		exit(98);

	i = 0;
	while (c != NULL)
	{
		h = c;
		c = c->next;
		i++;
		printf("[%p] %d\n", (void *)h, h->n);

		if (h < c)
		{
			printf("-> [%p] %d\n", (void *)c, c->n);
			break;
		}
	}

	return (i);
}
