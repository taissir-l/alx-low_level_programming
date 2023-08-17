#include "lists.h"

/**
 * delete_dnodeint_at_index - function eletes a node from a list
 *                            at a given index.
 *
 * @head: pointer to the head of the dlistint_t.
 * @index: index of the node to delete.
 *
 * Return: 1 if success.
 *         Otherwise -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (x == NULL)
			return (-1);
		x = x->next;
	}
	if (x == *head)
	{
		*head = x->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		x->prev->next = x->next;
		if (x->next != NULL)
			x->next->prev = x->prev;
	}
	free(x);
	return (1);
}
