#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at
 *            the beginning of a list_t list.
 *
 * @head: double pointer to the list_t.
 * @str: string.
 *
 * Return:  the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dub;
	int len;
	list_t *new_list;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);

	dub = strdup(str);
	if (dub == NULL)
	{
		free(new_list);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_list->str = dub;
	new_list->len = len;
	new_list->next = *head;

	*head = new_list;

	return (new_list);
}
