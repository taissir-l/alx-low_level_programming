#include "main.h"
/**
 * _islower -  function that checks for lowercase character
 *
 *@c: the character
 *
 * Return: 1 for lowercase characters and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
