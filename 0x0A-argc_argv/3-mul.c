#include "main.h"
#include <stdio.h>

/**
 * conv - program that converts a string to an integer
 *
 * @A: string to be converted
 *
 * Return: the int converted
 */

int conv(char *A)
{
	int i, j, n, m, l, d;

	i = 0;
	j = 0;
	n = 0;
	m = 0;
	l = 0;
	d = 0;

	while (A[l] != '\0')
		l++;

	while (i < l && m == 0)
	{
		if (A[i] == '-')
			++j;

		if (A[i] >= '0' && A[i] <= '9')
		{
			d = A[i] - '0';
			if (j % 2)
				d = -d;
			n = n * 10 + d;
			m = 1;
			if (A[i + 1] < '0' || A[i + 1] > '9')
				break;
			m = 0;
			}
		i++;
	}

	if (m == 0)
		return (0);

	return (n);
}

/**
 * main -  a program that multiplies two numbers.
 *
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 if Success and 1 if error
 */
int main(int argc, char *argv[])
{
	int mul, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x = conv(argv[1]);
	y = conv(argv[2]);
	mul = x * y;

	printf("%d\n", mul);

	return (0);
}

