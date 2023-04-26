#include <stdio.h>
/**
 * main - sum in the Fibonacci sequence
 * Return: 0 always
 */
int main(void)
{
	int i = 0;

	long j = 1, k = 2, s = k;

	while (k + j < 4000000)
	{
		k += j
		if (k % 2 == 0)
		s += j;
		j = k - j;
		++i;
	}
	printf("%ld\n", s);
	return (0);
}
