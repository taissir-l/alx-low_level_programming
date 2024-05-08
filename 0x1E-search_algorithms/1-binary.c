#include "search_algos.h"

/**
 * binary_search - fun of a binary search
 *
 * @array: array
 * @size: size of the array
 * @value: value
 *
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t j, i = 0;
	size_t R = size;
	size_t x = R;

	if (array == NULL)
	{
		return (-1);
	}
	while (j < size)
	{
		printf("Searching in array: ");
		for (i = j; i < R; i++)
		{
			if (i == R - 1)
			{
				printf("%d\n", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		x = (j + R) / 2;

		if (array[x] < value)
		{
			j = x + 1;
		}
		else if (array[m] > value)
		{
			R = x - 1;
		}
		else
		{
			return (x);
		}
	}
	return (-1);
}
