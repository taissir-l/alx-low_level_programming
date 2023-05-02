#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse
 * followed by a new line
 *
 * @s: the string to reverse
 */
void print_rev(char *s)
{
	int i;
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (i = l; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
