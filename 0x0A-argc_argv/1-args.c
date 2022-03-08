#include <stdio.h>

/**
 * main- program that prints its name, followed by a new line.
 * @argc: count arguments to main
 * @argv: vector to array arguments
 * Return: always 0.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
