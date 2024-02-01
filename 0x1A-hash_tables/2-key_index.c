#include "hash_tables.h"

/**
 * key_index - function that gives the index of key in a hash table
 *
 * @key: key
 *
 * @size: array size
 *
 * Return: index which the key/value pair is stored in the
 *        array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x;

	if (size == 0)
		return (0);

	x = hash_djb2(key);
	return (x % size);
}
