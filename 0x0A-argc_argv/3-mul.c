#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *main- program that multiplies two numbers
 *
 *@argc: number of elements in the array
 *@argv: array of strings that apunta to an char
 *
 *Return: exit succesfull
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
