#include "lists.h"
#include <stdio.h>
#include <stdio.h>

/**
 * _list - reallocates the memory
 *
 * @l: old list
 * @size: new list size
 * @new: new node
 *
 * Return: pointer to the new list.
 */
const listint_t **_list(const listint_t **l, size_t size, const listint_t *new)
{
	const listint_t **newl;
	size_t i;

	newl = malloc(size * sizeof(listint_t *));
	if (newl == NULL)
	{
		free(l);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newl[i] = l[i];
	newl[i] = new;
	free(l);
	return (newl);
}


/**
 * print_listint_safe - function that prints a listint_t linked list.
 *
 * @head: head of linked list
 *
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **l = NULL;

	while (head != NULL)
	{
		for (i = 0 ; i < num; i++)
		{
			if (head == l[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(l);
				return (num);
			}
		}
		num++;
		l = _list(l, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(l);

	return (num);
}
