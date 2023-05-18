#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: nbr of elements
 * @size: the size of each element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, len = 0;
	char *A;

	if (nmemb == 0 || size == 0)
		return (NULL);
	len = nmemb * size;
	A = malloc(len);
	if (A == NULL)
		return (NULL);

	while (i < len)
	{
		A[i] = 0;
		i++;
	}

	return (A);
}
