#include <stdio.h>

/**
 * main- program that prints all arguments it receives.
 * @argc: count arguments to main
 * @argv: vector to array arguments
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
