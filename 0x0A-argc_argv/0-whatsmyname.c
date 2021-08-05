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
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
