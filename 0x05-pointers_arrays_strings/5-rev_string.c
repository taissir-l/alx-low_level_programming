#include "main.h"
/**
 * rev_string -  function that reverses a string
 *
 * @s: the string
 */
void rev_string(char *s)
{
	char x = s[0];
	int i;
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	for (i = 0; i < l; i++)
	{
		l--;
		x = s[i];
		s[i] = s[l];
		s[l] = x;
	}
}
