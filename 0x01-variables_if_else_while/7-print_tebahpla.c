#include <stdio.h>

/**
 * main - reverse lowercase alphabet
 * new line after
 * Return: 0 always
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
