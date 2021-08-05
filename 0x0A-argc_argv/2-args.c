#include <stdio.h>

/**
 *main- print the arguments passed into it.
 *
 *@argc: number of elements passed into program
 *@argv: array of elements passed into it.
 *
 *Return: always 0.
 */
int main(int argc, char *argv[])
{
	while (argc-- >= 1)
		printf("%s\n", *argv++);
	return (0);
}
