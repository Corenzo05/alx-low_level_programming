#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to appends content into
 * @text_content: content to appends
 * Return: 1 if it success, or -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, wr, letters;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if  (file_d == -1)
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
