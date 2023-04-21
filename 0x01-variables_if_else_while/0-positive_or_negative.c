#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determis if the nuber is positive or negative or null
 *
 * Return: 0 if successful, non-zero value if an error occurred
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
