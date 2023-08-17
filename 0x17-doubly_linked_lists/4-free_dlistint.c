#include "lists.h"

/**
 * free_dlistint - Function that frees a linked dlistint_t list.
 *
 * @head: head of the dlistint_t list.
 *
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *x;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
