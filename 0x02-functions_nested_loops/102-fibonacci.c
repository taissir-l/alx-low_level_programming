#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int i = 0;

	long int j = 1, k = 2;
	long int l;

	while (i <= 50)
	{
		if (i == 50)
		{
			printf("%ld\n", k);
		}
		else
		{
			printf("%ld, ", k);
		}
		l = k;
		k += j
		j = l
		i++;
	}
	printf("\n");
	return (0);
}
