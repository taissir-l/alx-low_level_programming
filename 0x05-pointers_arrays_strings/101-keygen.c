#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: 0 always.
 */
int main(void)
{
	int x[100];
	int i, j, s;

	s = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		x[i] = rand() % 78;
		s += (x[i] + '0');
		putchar(x[i] + '0');
		if ((2772 - s) - '0' < 78)
		{
			j = 2772 - s - '0';
			s += j;
			putchar(j + '0');
			break;
		}
	}

	return (0);
}
