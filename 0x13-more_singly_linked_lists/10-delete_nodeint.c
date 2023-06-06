#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node in a
 *                           linked list at a certain index.
 * @head: the first element in the list.
 * @index: the index of the node to delete
 *
 * Return: 1 when Success or -1 when Fail.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *y = *head;
	unsigned int i;

	if (y == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(y);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (y->next == NULL)
			return (-1);

		y = y->next;
	}

	tmp = y->next;
	y->next = tmp->next;
	free(tmp);
	return (1);
}
