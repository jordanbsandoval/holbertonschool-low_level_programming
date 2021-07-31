#include <stdio.h>

/**
 *main- prints all arguments it receives.
 *
 *@argc: number of elements in the array
 *@argv: array of strings that apunta to an char
 *
 *Return: exit succes
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
