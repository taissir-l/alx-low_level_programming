#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array
 * @a: the array
 * @n: the number of elements the array will be printing
 * Return: a, n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

