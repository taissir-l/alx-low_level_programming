#include "main.h"

/**
 * set_bit - function that sets a bit at a given index to 1.
 *
 * @n: pointer of nul to change.
 * @index: index of bit set to 1.
 *
 * Return: 1 if success or -1 for failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);

	return (1);
}
