#include "main.h"

/**
 * read_textfile- function that reads a text file and prints it to the stout.
 * @filename: pointer to name of the file
 * @letters: number of bytes to saved
 * Return: number of bytes print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	char *buff = malloc(letters);
	int fd = open(filename, O_RDONLY);

	if (buff == NULL)
		return (0);

	if (fd == -1 || filename == NULL)
	{
		free(buff);
		return (0);
	}
	count = read(fd, buff, letters);

	if (count == -1)
	{
		free(buff);
		return (0);
	}
	buff[count] = '\0';

	if ((write(STDIN_FILENO, buff, count)) < 0)
	{
		free(buff);
		return (0);
	}
	close(fd);
	return (count);
}
