#include "main.h"

/**
 * set_string -  function that sets the value of a pointer to a char
 *
 * @s: the pointer to pointer (value to modify)
 * @to: the pointer char (value to assign)
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
