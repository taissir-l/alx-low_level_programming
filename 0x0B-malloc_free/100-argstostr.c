#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  a function that concatenates all the arguments
 * of your program.
 *
 * @ac: input
 * @av: the array
 *
 * Return: 0 id ac=0 or av=0
 * pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, y = 0;
	char *S;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			x++;
	}
	x += ac;
	S = malloc(sizeof(char) * x + 1);
	if (S ==  NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			S[y] = av[i][j];
			y++;
		}
		if (S[y] == '\0')
			S[y++] = '\n';
	}
	return (S);
}
