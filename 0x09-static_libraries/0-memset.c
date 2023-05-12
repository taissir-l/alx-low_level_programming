#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte
 *
 * @s: the memory area
 * @b: the constant byte(the new value)
 * @n:  the first bytes of the memory area that would be changed
 * Return: the changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
