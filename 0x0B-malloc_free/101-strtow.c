#include "main.h"
#include <stdlib.h>

int find_length(char *str);
int find_words(char *str);
char **strtow(char *str);


/**
 * find_length - function to find the end of the first word in a string
 *
 * @str: the string
 *
 * Return: the index of first word in the string
 */

int find_length(char *str)
{
	int i = 0, l = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		i++;
		l++;
	}
	return (l);
}

/**
 * find_words - function that counts the number of the words in the string
 *
 * @str: the string
 *
 * Return: how many words.
 */

int find_words(char *str)
{
	int i, j = 0, k = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			j = 0;
		else if (j == 0)
		{
			j = 1;
			k++;
		}
	}
	return (k);
}

/**
 * strtow -  function that splits a string into words.
 *
 * @str: the string
 *
 * Return:  NULL if str == NULL or str == "" or function fail
 *  a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **A;
	int i, j = 0, x, w, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	w = find_words(str);

	if (w == 0)
	{
		return (NULL);
	}
	A = malloc(sizeof(char *) * (w + 1));

	if (A == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < w; i++)
	{
		while (str[j] == ' ')
			j++;
		l = find_length(str + j);
		A[i] = malloc(sizeof(char) * (l + 1));
		if (A[i] == NULL)
		{
			for (; i >= 0; i--)
				free(A[i]);
			free(A);
			return (NULL);
		}
		for (x = 0; x < l; x++)
			A[i][x] = str[j++];
		 A[i][x] = '\0';
	}
	A[i] = NULL;
	return (A);
}
