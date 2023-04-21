#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the last digit random number and if its greater then 5,less then6 or0
 *
 * Return: 0 (alwys)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n % 10) > 5)
{
printf("Last digit of %d is %d and is greater then 5\n", n, n % 10);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit of %d is %d and is less then 6 and not 0\n", n, n % 10);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}
