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
	unsigned int i = 0, j = 0, len = 0, len1, len2;
	char *s;

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

	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	len1 = i;
	len2 = j;
	i = 0;
	j = 0;

	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
