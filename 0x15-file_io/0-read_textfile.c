#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: file to read from
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	char *buffer;
	int file_d;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rd = read(file_d, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}
	close(file_d);
	return (rd);
}
