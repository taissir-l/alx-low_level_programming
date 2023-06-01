#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that adds a new node
 *                at the end of a list_t list.
 *
 * @head: double pointer to list_t.
 * @str: string.
 *
 * Return:  the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dub;
	int len;
	list_t *new_list, *bottom;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);

	dub = strdup(str);
	if (str == NULL)
	{
		free(new_list);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_list->str = dub;
	new_list->len = len;
	new_list->next = NULL;

	if (*head == NULL)
		*head = new_list;

	else
	{
		bottom = *head;
		while (bottom->next != NULL)
			bottom = bottom->next;
		bottom->next = new_list;
	}

	return (*head);
}
