#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list.
 *
 * @head: to be freed
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *x;

	while (head)
	{
		x = head->next;
		free(head->str);
		free(head);
		head = x;
	}
}
