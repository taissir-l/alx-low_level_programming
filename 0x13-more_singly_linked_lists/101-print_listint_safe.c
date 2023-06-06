#include "lists.h"
#include <stdio.h>

/**
 * _listint_len - function that counts the number of unique
 *               nodes in a looped listint_t linked list.
 *
 * @head: pointer to the head of the list.
 *
 * Return: If the list is not looped 0 or
 *         the number of unique nodes in the list.
 */

size_t _listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = h;
			while (t != h)
			{
				nodes++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				nodes++;
				t = t->next;
			}

			return (nodes);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}


/**
 * print_listint_safe - function that prints a listint_t linked list.
 *
 * @head: first node.
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = _listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
