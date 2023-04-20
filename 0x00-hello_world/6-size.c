#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 if successful, non-zero value if an error occurred
 */
int main(void)
{
char x;
int y;
long int z;
long long int a;
float b;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(b));
return (0);
}
