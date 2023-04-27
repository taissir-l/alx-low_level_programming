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
	long n = 612852475143, x;

	while (x < (n / 2))
	{
		if ((n % 2) == 0)
		{
			n /= 2;
			continue;
		}

		for (x = 3; x < (n / 2); x += 2)
		{
			if ((n % x) == 0)
				n /= x;
		}
	}

	printf("%ld\n", n);

	return (0);
}
