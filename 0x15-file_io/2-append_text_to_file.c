#include "main.h"

/**
 * append_text_to_file- function that appends text at the end of a file.
 * @filename: pointer to name of file
 * @text_content: content to input
 * Return: 1 succesfull
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_APPEND | O_WRONLY), ancho;

	if (fd == -1 || filename == NULL)
		return (-1);

	if (text_content)
	{
		ancho = _strlen(text_content);

		if ((write(fd, text_content, ancho)) < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
