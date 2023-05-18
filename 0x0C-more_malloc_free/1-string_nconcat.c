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
	unsigned int i = 0, j = 0, k = 0, len = 0;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;
	if (n >= j)
		len = i + j;
	else
		len = i + n;
	A = malloc(sizeof(char) * len + 1);

	if (A == NULL)
		return (NULL);
	j = 0;
	while (k < len)
	{
		if (k <= i)
			A[k] = s1[k];
		if (k >= i)
		{
			A[k] = s2[j];
			j++;
		}
		k++;
	}
	A[j] = '\0';
	return (A);
}
