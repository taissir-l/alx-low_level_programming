#include "main.h"
/**
 * print_diagsums -  function that prints the sum of the
 * two diagonals of a square matrix of integers
 *
 * @a: the string of integers
 * @size: size of diagonal matrix
 *
 * Return: 0 always.
 */
void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
		s2 += a[i * size + (size - i - 1)];
	printf("%d, %d\n", s1, s2);
}
