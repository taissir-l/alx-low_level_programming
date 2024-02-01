#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 * shash_table_set - function that adds an element to a sorted HT.
 * @ht: pointer to the sorted HT.
 * @key: key
 * @value: The value of key.
 *
 * Return: 0 otherwise 1.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *n, *t;
	char *value_copy;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	t = ht->shead;
	while (t)
	{
		if (strcmp(t->key, key) == 0)
		{
			free(t->value);
			t->value = value_copy;
			return (1);
		}
		t = t->snext;
	}
	n = malloc(sizeof(shash_node_t));
	if (n == NULL)
	{
		free(value_copy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(value_copy);
		free(n);
		return (0);
	}
	n->value = value_copy;
	n->next = ht->array[i];
	ht->array[i] = n;
	if (ht->shead == NULL)
	{
		n->sprev = NULL;
		n->snext = NULL;
		ht->shead = n;
		ht->stail = n;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		n->sprev = NULL;
		n->snext = ht->shead;
		ht->shead->sprev = n;
		ht->shead = n;
	}
	else
	{
		t = ht->shead;
		while (t->snext != NULL && strcmp(t->snext->key, key) < 0)
			t = t->snext;
		n->sprev = t;
		n->snext = t->snext;
		if (t->snext == NULL)
			ht->stail = n;
		else
			t->snext->sprev = n;
		t->snext = n;
	}

	return (1);
}
/**
 * shash_table_get - function that retrieve the value associated
 *                   with key in a sorted HT.
 * @ht: pointer to the sorted HT.
 * @key: The key
 *
 * Return: value associated with key in HT, Null otherwise.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *n;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	n = ht->shead;
	while (n != NULL && strcmp(n->key, key) != 0)
		n = n->snext;
	return ((n == NULL) ? NULL : n->value);
}

/**
 * shash_table_print - function that prints a sorted HT in order.
 *
 * @ht: pointer to sorted HT.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;
	n = ht->shead;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->snext;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function that prints a sorted HT in reverse order.
 *
 * @ht: pointer to sorted HT to print.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;
	n = ht->stail;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->sprev;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - function that deletes a sorted HT.
 *
 * @ht: the pointer to the sorted HT.
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *x = ht;
	shash_node_t *n, *y;

	if (ht == NULL)
		return;
	n = ht->shead;
	while (n)
	{
		y = n->snext;
		free(n->key);
		free(n->value);
		free(n);
		n = y;
	}
	free(x->array);
	free(x);
}
