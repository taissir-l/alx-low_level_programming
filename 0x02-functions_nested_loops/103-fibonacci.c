#include <stdio.h>
/**
 * main - sum in the Fibonacci sequence
 * Return: 0 always
 */
int main(void)
{
	int i = 1, j = 2, sum = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", sum);
	return (0);
}
