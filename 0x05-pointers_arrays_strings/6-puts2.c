#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: the input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;
	int x = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	x = i;
	for (o = 0 ; o < x ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
