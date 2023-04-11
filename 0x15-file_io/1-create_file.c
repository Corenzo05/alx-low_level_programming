#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the new file
 * @text_content: content to write into file
 * Return: 1 if it success, or -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, wr, letters;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		return (1);
	}

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);

	for (letters = 0; text_content[letters]; letters++)
		;

	wr = write(file_d, text_content, letters);
	if (wr == -1)
	{
		close(file_d);
		return (-1);
	}

	close(file_d);
	return (1);
}
