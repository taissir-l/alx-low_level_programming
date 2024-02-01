#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: pointer to HT.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *x = ht;
	hash_node_t *n, *y;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			n = ht->array[i];
			while (n != NULL)
			{
				y = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = y;
			}
		}
	}
	free(x->array);
	free(x);
}
