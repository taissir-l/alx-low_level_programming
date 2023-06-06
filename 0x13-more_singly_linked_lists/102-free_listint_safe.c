#include "lists.h"
#include <stdlib.h>

/**
 * find_loop - locates a loop in a linked list
 *
 * @head: list
 *
 * Return: the adress when the loop starts.
 */

listint_t *find_loop(listint_t *head)
{
	listint_t *p, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (p = head; p != end; p = p->next)
			if (p == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe -  function that frees a listint_t list.
 *
 * @h: the pointer of  the first node in the linked list
 *
 * Return: the number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len;
	listint_t *next, l;
	int x = 1;

	if (h == NULL || *h == NULL)
		return (0);
	l = find_loop(*h);
	for (len = 0; (*h != l || x) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		
		if (*h == l && x)
		{
			if (l == l->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			x = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
