#include "main.h"
/**
 * factorial -  function that returns the factorial of a given number.
 *
 * @n: the input number.
 *
 * Return: n! or -1 if n < 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
