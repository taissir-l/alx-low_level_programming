#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: the string
 *
 * Return: the length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
