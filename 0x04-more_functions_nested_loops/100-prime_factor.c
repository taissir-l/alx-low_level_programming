#include <stdio.h>
#include <math.h>
/**
 * main - a program that finds and prints the largest prime
 * factor of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long i, max;
	long n = 612852475143;
	double square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
		if (n % i == 0)
		{
			max = n / i;
		}
	}

	printf("%ld\n", max);

	return (0);
}
