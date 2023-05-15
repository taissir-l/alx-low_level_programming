#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL on failure
 * NULL of  width or height is 0 or negative
 * pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **S;

	if (width <= 0 || height <= 0)
		return (NULL);
	S = malloc(sizeof(int *) * height);

	if (S == NULL)
	{
		free(S);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		S[i] = malloc(sizeof(int) * width);
		if (S[i] == NULL)
		{
			for (; i >= 0; i--)
				free(S[i]);
			free(S);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			S[i][j] = 0;
	}
	return (S);
}
