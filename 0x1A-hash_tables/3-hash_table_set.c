#include "hash_tables.h"

/**
 * hash_table_set - function to add or update elements in a HT.
 *
 * @ht: pointer to HT.
 * @key: The key
 * @value: value of  key.
 *
 * Return: 1 otherwise 0(failiure).
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *x;
	char *v_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);


	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_copy;
			return (1);
		}
	}
	x = malloc(sizeof(hash_node_t));
	if (x == NULL)
	{
		free(v_copy);
		return (0);
	}
	x->key = strdup(key);
	if (x->key == NULL)
	{
		free(x);
		return (0);
	}
	x->value = v_copy;
	x->next = ht->array[index];
	ht->array[index] = x;
	return (1);
}
