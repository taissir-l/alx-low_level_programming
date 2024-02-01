#include "hash_tables.h"
/**
 * hash_table_create - function to create a hash table
 *
 * @size: table size
 *
 * Return: pointer to table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *x;

	if (size == 0)
		return (NULL);
	x = malloc(sizeof(hash_table_t));
	if (x == NULL)
		return (NULL);
	x->size = size;
	x->array = calloc(size, sizeof(hash_node_t *));
	if (x->array == NULL)
	{
		free(x);
		return (NULL);
	}
	return (x);
}
