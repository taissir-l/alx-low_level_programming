#include "main.h"

/**
 * clear_bit - function that 0sets the value of a bit to
 *             0 at a given index.
 *
 * @n: pointer of the number to be changed.
 * @index: index.
 *
 * Return: 1 if success or -1 when failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);

	return (1);
}
