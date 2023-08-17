#include <stdlib.h>
#include "lists.h"


/**
  * sum_dlistint - function that Sums of all data (n) in a doubly
  *                linked list dlistint_t.
  *
  * @head: head of the doubly linked list.
  *
  * Return: sum.
  */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *x = head;
	int sum;
	sum = 0;

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
