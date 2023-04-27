#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
if (size <= 0)
_putchar('\n')
else
{
int i, j;

for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
{
_putchar(' ');
}
for (j = 0; j < i; j++)
{
_putchar('#');
}
if (i == size)
	continue;
_putchar('\n');
}
}
}
