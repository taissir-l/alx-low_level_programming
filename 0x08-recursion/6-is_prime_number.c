#include "main.h"
int the_real_deal_prime_number(int n, int i);
/**
 * is_prime_number - function that finds if number is a  prime number.
 *
 * @n: the number to check
 *
 * Return: 1 if n is prime number or 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (the_real_deal_prime_number(n, 1));
}

/**
 * the_real_deal_prime_number - the real prime number calculator
 *
 * @n: the number to check
 * @i: the iteration
 *
 * Return: 1 if n is prime number or 0 otherwise.
 */
int the_real_deal_prime_number(int n, int i)
{
if (i == 1)
{
return (1);
}
if (n % i == 0 && i > 0)
{
return (0);
}
return (the_real_deal_prime_number(n, i + 1));
}
