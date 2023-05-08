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
	unsigned int i ,j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
