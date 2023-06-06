#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list.
 *
 * @head: the pointer to the first node in the list
 *
 * Return: the pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
	}

	*head = old;

	return (*head);
}
