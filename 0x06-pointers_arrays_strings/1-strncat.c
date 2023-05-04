#inclide "main.h"
/**
 * _strncat -  function that concatenates two strings
 * it will use at most n bytes from src
 * src does not need to be null-terminated if
 * it contains n or more byte
 *
 * @dest: the first string
 * @src: the second string
 * @n: input
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
