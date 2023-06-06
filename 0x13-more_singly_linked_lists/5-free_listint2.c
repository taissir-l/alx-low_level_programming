#include "lists.h"

/**
 * free_listint2 - an other function that frees a linked list.
 *
 * @head: double pointer to the listint_t list to be freed
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (*head)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}

	head = NULL;
}
