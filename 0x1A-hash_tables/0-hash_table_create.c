#include "hash_tables.h"

/**
 * hash_table_create - function that creates HT
 *
 * @size: array size
 *
 * Return: pointer to the new hash table, otherwise Null.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *x;
	unsigned long int i;

	x = malloc(sizeof(hash_table_t));
	if (x == NULL)
		return (NULL);

	x->size = size;
	x->array = malloc(sizeof(hash_node_t *) * size);

	if (x->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		x->array[i] = NULL;
	}
	return (x);
}
