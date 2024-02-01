#include "hash_tables.h"

/**
 * hash_djb2 - function to compute hash using the djb2 algorithm
 *
 * @str: pointer to a string to hash
 *
 * Return: dbj2 hash of str
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int x = 5381;
	unsigned int c = '\0';

	while ((c = *str++))
		x += (x << 5) + c;
	return (x);
}
