#include "main.h"


int the_real_deal(char *s, int i, int l);
int the_length(char *s);



/**
 * the_real_deal - checks if it's palindrome
 *
 * @s: the input string
 * @i: the itration
 * @l: the length
 *
 * Return: 1 if it is, 0 it's not
 */
int the_real_deal(char *s, int i, int l)
{
if (*(s + i) != *(s + l - 1))
{
return (0);
}
if (i >= l)
{
return (1);
}
return (the_real_deal(s, i + 1, l - 1));
}

/**
 * the_length - to calculate the length of the string
 *
 * @s: the string
 *
 * Return: the lenght
 */
int the_length(char *s)
{
if (*s == 0)
{
return (0);
}
return (1 + the_length(s + 1));
}

/**
 * is_palindrome -  function that returns 1 if a string
 * is a palindrome and 0 if not.
 *
 * @s: the input string.
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (the_real_deal(s, 0, the_length(s)));
}
