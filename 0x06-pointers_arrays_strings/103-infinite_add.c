#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char x;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		x = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = x;
	}
}

/**
 * infinite_add - a function that adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: sum or 0 If the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int excess = 0, i = 0, j = 0, digits = 0;
	int x = 0, y = 0, total = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || excess == 1)
	{
		if (i < 0)
			x = 0;
		else
			x = *(n1 + i) - '0';
		if (j < 0)
			y = 0;
		else
			y = *(n2 + j) - '0';
		total = x + y + excess;
		if (total >= 10)
			excess = 1;
		else
			excess = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (total % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
