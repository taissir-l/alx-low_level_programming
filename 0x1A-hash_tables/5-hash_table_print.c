#include "./hash_tables.h"

/**
 * hash_table_print - function that prints HT.
 *
 * @ht: A pointer to HT.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *x;
	unsigned long int i;
	unsigned char flag_c = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag_c == 1)
				printf(", ");

			x = ht->array[i];
			while (x != NULL)
			{
				printf("'%s': '%s'", x->key, x->value);
				x = x->next;
				if (x != NULL)
					printf(", ");
			}
			flag_c = 1;
		}
	}
	printf("}\n");
}
