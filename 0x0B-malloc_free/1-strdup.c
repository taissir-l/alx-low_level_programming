#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory  which contains a copy of the string given
 * as a parameter.
 *
 * @str: the string to duplicate
 *
 * Return: NULL if ste =0 or if thememory was not sufficient
 * and a pointer to the duplicated string else
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *A;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	A = malloc(sizeof(char) * (i + 1));
	if (A == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		A[j] = str[j];
	A[i] = '\0';
	return (A);
}
