#include "main.h"
#include <stdlib.h>


/**
 * array_range -  a function that creates an array of integers.
 *
 * @min: min value.
 * @max: max value.
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *A;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	A = malloc(sizeof(int) * len);

	if (A == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		A[i] = min++;

	return (A);
}
