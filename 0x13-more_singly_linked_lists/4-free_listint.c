#include "lists.h"

/**
 * free_listint - function that frees a linked list.
 *
 * @head: list to be freed.
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
