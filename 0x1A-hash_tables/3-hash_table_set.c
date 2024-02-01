#include "hash_tables.h"

/**
 * new_val -  function to replace values at a pre-existing key.
 *
 * @ht: double pointer to hash_node_t list
 * @key: new key to add to  node
 * @value: value to add to  node
 */

void new_val(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *x = *ht;

	while (x && strcmp(x->key, key))
		x = x->next;
	free(x->value);
	x->value = strdup(value);
}


/**
 * Key_checker - function that checks if a key exists in HT.
 *
 * @ht: the pointer to the hash_node_t list
 * @key: key
 *
 * Return: 1 if key is found otherwise 0.
 */

int Key_checker(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
		ht = ht->next;
	}
	return (0);
}


/**
 * node_add - function to add a new node at the beginning of Linked l.
 *
 * @head: the double pointer to the hash_node_t list
 * @key: new key
 * @value: value to add to node
 *
 * Return: address of new element or NULL with fail.
 */

hash_node_t *node_add(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *x;

	x = malloc(sizeof(hash_node_t));
	if (!x)
		return (NULL);
	x->key = strdup(key);
	x->value = strdup(value);
	if (*head == NULL)
	{
		(*head) = x;
		x->next = NULL;
	} else
	{
		x->next = (*head);
		(*head) = x;
	}
	return (*head);
}


/**
 * HT_set - function that adds elements to hash table
 *
 * @ht: HT to add the element to
 * @key: key of the element,
 * @value: value of  element to store in array
 *
 * Return: 1 on success otherwise 0.
 */

int HT_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	x = key_index((unsigned char *)key, ht->size);

	if (Key_checker(ht->array[x], key))
	{
		new_val(&ht->array[x], key, value);
		return (1);
	}
	node_add(&ht->array[x], key, value);
	if (&ht->array[x] == NULL)
		return (0);
	return (1);
}
