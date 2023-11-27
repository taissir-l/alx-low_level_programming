#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * valid_file - function that checks if files can be opened.
 *
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 *
 * Return: void.
 */

void valid_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}


/**
 * main - function that check the code.
 *
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t chars, x;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	valid_file(file_from, file_to, argv);
	chars = 1024;
	while (chars == 1024)
	{
		chars = read(file_from, buf, 1024);
		if (chars == -1)
			valid_file(-1, 0, argv);
		x = write(file_to, buf, chars);
		if (x == -1)
			valid_file(0, -1, argv);
	}
	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);

	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
