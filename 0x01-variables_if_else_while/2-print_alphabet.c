#include <stdio.h>

/**
 * main - the alphabet
 *
 * Return: 0 if successful, non-zero value if an error occurred
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}

