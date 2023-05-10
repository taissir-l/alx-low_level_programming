#include "main.h"
/**
 * _print_rev_recursion -  function that prints a string in reverse
 *
 * @s: the input string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
