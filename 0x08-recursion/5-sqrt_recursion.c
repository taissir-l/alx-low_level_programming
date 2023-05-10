#include "main.h"
/**
 * the_real_deal - the counter of the sqrt
 *
 * @n:  the input number
 * @i: the iteration number
 *
 * Return: the sqrt
 */
int the_real_deal(int n, int i)
{
int q = i * i;

if (q > n)
{
return (-1);
}
if (q == n)
{
return (i);
}
return (the_real_deal(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root
 * of a number
 *
 * @n: the input number
 *
 * Return: the square root of n.
 * If n does not have a natural square root
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (the_real_deal(n, 0));
}
