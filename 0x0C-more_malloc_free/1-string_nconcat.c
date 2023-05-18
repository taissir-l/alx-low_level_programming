#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bites to concatente to s1
 *
 * Return: NULL if fonction fails
 * or the ointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *A;
	unsigned int i = 0, len = n;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	A = malloc(sizeof(char) * (len + 1));

	if (A == NULL)
		return (NULL);
	len = 0;

	for (i = 0; s0[i]; i++)
		A[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		A[len++] = s2[i];

	A[j] = '\0';
	return (A);
}
