#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - function that sums of all data (n) in a
  *                doubly linked list.
  *
  * @head: head of the linked list.
  *
  * Return: sum.
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *x = head;
	int sum = 0;

	if (head)
	{
		while (x != NULL)
		{
			sum += x->n;
			x = x->next;
		}
	}

	return (sum);
}
