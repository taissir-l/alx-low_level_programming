#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint - function that adds a new node at the
  *                beginning of a doubly linked list.
  *
  * @head: head of the doubly linked list.
  * @n: number in the new node
  *
  * Return: The new head of the list.
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newer_node = NULL;

	newer_node = malloc(sizeof(dlistint_t));
	if (newer_node == NULL)
		return (NULL);
	newer_node->n = n;
	if (*head)
	{
		newer_node->next = *head;
		newer_node->prev = (*head)->prev;
		(*head)->prev = newer_node;
		*head = newer_node;
		return (*head);
	}
	newer_node->next = *head;
	newer_node->prev = NULL;
	*head = newer_node;
	return (*head);
}
