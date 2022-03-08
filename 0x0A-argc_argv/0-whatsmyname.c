#include <stdio.h>

/**
 * main- program that prints its name, followed by a new line.
 * @argc: count arguments to main
 * @argv: vector to array arguments
 * Return: always 0.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
