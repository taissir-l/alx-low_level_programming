
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it
 *                 to the POSIX standard output.
 *
 * @filename: filename.
 * @letters: number of letters it should read and print.
 *
 * Return: the actual number of bytes read and printed
 *         or 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t i, j;
	char *x;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	x = malloc(sizeof(char) * (letters));

	if (!x)
		return (0);
	i = read(file, x, letters);
	j = write(STDOUT_FILENO, x, i);
	close(file);
	free(x);

	return (j);
}
