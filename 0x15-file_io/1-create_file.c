#include "main.h"

/**
 * create_file- Create a function that creates a file.
 * @filename: pointer to char that was the name of file
 * @text_content: pointer to char to write in the file
 * Return: 1 succesfull
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600), ancho;

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
