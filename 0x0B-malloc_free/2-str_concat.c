#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings
 *
 * @s1: first string
 * @s2: the second string
 *
 * Return: pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2
 * Null if failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *A;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	A = malloc(sizeof(char) * (i + j + 1));
	while (A == NULL)
		return (NULL);
	i =  j = 0;
	while (s1[i])
	{
		A[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		A[i] = s2[j];
		i++;
		j++;
	}
	A[i] = '\0';
	return (A);
}
