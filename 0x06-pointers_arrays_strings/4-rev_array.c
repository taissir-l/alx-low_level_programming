#include "main.h"
/**
 * reverse_array -  function that reverses the content
 * of an array of integers
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < n--; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
