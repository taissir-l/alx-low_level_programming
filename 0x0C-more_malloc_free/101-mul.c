#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * digit_check - checks if a string has non-digit char
 *
 * @s: the string
 *
 * Return: 0 if there is no digit found, 1 otherwise
 */
int digit_check(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}



/**
 * str_len - finds the lenght of a string
 *
 * @s: the string
 *
 * Return: the length of the string
 */
int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}



/**
 * exit_error - exit with a status of 98 in case of an error
 */
void exit_error(void)
{
	printf("Error\n");
	exit(98);
}


/**
 * mai - a program that multiplies two positive numbers.
 *
 * @argc: the number
 * @argv: the array
 *
 * Return: 0 always
 */
int mai(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, x, num1, num2, *mul, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !digit_check(s1) || !digit_check(s2))
		exit_error();
	len1 = str_len(s1);
	len2 = str_len(s2);
	len = len1 + len2 + 1;
	mul = malloc(sizeof(int) * len);
	if (!mul)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		mul[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = s1[len1] - '0';
		x = 0;
		for (len2 = str_len(s2) - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			x += mul[len1 + len2 + 1] + (num1 * num2);
			mul[len1 + len2 + 1] = x % 10;
			x /= 10;
		}
		if (x > 0)
			mul[len1 + len2 + 1] += x;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (mul[i])
			a = 1;
		if (a)
			_putchar(mul[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(mul);
	return (0);
}
