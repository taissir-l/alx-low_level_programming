#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: the input
 * @accept: the input
 *
 * Return: 0 always
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int x;

	while (*s)
	{
		for (r = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				x++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (0);
		}
		s++;
	}
	return (x);
}
