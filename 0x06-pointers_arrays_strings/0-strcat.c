#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0', j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
