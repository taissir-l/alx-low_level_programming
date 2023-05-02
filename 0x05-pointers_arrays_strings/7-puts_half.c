#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int x, y, l;

	l = 0;

	for (x = 0; str[x] != '\0'; x++)
		l++;

	y = (l / 2);

	if ((l % 2) == 1)
		y = ((l + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}

