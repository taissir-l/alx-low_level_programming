#include <stdio.h>

/**
 * main - the alphabet between a and f and numbers between 0 and 9
 *
 * Return: 0 always
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
