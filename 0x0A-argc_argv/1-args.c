#include <stdio.h>

/**
 *main- Write a program that prints the number of arguments passed into it.
 *
 *@argc: number of elements in the array
 *@argv: array of strings that apunta to an char
 *
 *Return: exit succesfull
 */
int main(int argc, char **argv __attribute__((unused)))
{
	argc--;
	printf("%d\n", argc);

	return (0);
}
