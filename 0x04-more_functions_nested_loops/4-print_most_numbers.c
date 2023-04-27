#include "main.h"
/**
 *  print_most_numbers -  function that prints the numbers, from 0 to 9
 *  without 2 and 4, followed by a new line.
 *
 *  Return: void
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '4' && i != '2')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
