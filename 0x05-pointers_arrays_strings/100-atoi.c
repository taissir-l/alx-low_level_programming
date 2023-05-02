#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer from the string
 */
int _atoi(char *s)
{
	int i, j, k, l, x, y;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	x = 0;
	y = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && x == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			y = s[i] - '0';
			if (j % 2)
				y = -y;
			k = k * 10 + y;
			x = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			x = 0;
		}
		i++;
	}

	if (x == 0)
		return (0);

	return (n);
}
