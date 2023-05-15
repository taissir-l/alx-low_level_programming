#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: the size of the array
 * @c: the char
 *
 * Return: NULL if size is 0 or pinter to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	if (size == 0)
		return (NULL);

	A = malloc(sizeof(char) * size);
	if (A == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		A[i] = c;
	return (A);
}
