#include "lists.h"

/**
 * free_listint_safe -  function that frees a listint_t list.
 *
 * @h: the pointer of  the first node in the linked list
 *
 * Return: the number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int x;
	listint_t *a;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			a = (*h)->next;
			free(*h);
			*h = a;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

