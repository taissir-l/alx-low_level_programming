#include "main.h"
#include <stdio.h>


/**
  * main - a program that prints all arguments it receives.
  *
  * @argc: thecargument count
  * @argv: the argument vector
  *
  * Return: 0 always.
  */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
