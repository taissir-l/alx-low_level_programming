#include "main.h"
/**
 * print_times_table - function prints the n times table, starting null value
 *@n: a numbber
 */
void print_times_table(int n)
{
	int i = 0, y, z;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		for (y = 0; y <= n; y++)
		{
			z = i * y;
			if (y != 0)
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			else if (z > 9)
				_putchar(' ');
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			else if (z > 99)
				_putchar(z / 100 + '0');
				_putchar((z / 10 % 10) + '0');
				_putchar(z % 10 + '0');
			else
				_putchar(' ');
				_putchar(z + '0');

			if (y != n)
				_putchar(',');
				_putchar(' ');
		}
		_putchar('\n');
		i++;
	}
}
