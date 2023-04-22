#include <stdio.h>

/**
 * main - possible conbinations of three dugits
 * Return: 0 always
 */
int main(void)
{
int i, j, k;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 58; k++)
{
if (j > i && k > j)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 || j != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
