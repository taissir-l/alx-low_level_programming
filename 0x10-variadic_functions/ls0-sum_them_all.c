#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: Number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum
 *
 * Return: If n == 0 , return 0
 * Otherwise the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
