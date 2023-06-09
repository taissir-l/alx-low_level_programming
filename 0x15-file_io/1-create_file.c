#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @filename: the name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file, i, j;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (!text_content)
		text_content = "";
	for (i = 0; text_content[i]; i++)
		;

	j = write(file, text_content, i);

	if (j == -1 || file == -1)
		return (-1);
	close(file);
	return (1);
}
