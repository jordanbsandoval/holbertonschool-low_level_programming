#include <stdio.h>
#include <stdlib.h>

/**
 *main- print the number of arguments passed into it.
 *
 *@argc: number of elements passed into program
 *@argv: array of elements passed into it.
 *
 *Return: always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
