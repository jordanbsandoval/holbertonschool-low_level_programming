#include "main.h"

/**
 * main - check the code
 * @ac: number of parameters
 * @av: array of pointer to char
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1, fd2, rd, wr, cl1, cl2;
	const char *from = NULL, *to = NULL;
	char buff[MAXSIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	rd = wr = cl1 = cl2 = 0;

	from = av[1];
	to = av[2];

	fd1 = open(from, O_RDONLY);
	rd = read(fd1, buff, MAXSIZE);
	if (fd1 == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	buff[MAXSIZE] = '\0';
	fd2 = open(to, O_TRUNC | O_WRONLY | O_CREAT, 0664);
	wr = write(fd2, buff, rd);
	if (fd2 == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(98);
	}
	cl1 = close(fd1);
	cl2 = close(fd2);
	if (cl1 == -1 || cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
