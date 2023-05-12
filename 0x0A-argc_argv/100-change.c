#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 if Success or 1 with an Error
 */


int main(int argc, char *argv[])
{
	int number, i, x;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	x = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && number >= 0; i++)
	{
		while (number >= coins[i])
		{
			x++;
			number -= coins[i];
		}
	}

	printf("%d\n", x);
	return (0);
}
