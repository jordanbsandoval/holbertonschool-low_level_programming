#include "holberton.h"
#include <stdio.h>

/**
 *main- program that prints its name, followed by a new line.
 *
 *@argc: number of elements in the array
 *@argv: array of strings that apunta to an char
 *
 *Return: exit succes
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
