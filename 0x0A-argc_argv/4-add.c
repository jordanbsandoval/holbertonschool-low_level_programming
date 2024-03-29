#include <stdio.h>
#include "main.h"

/**
 * main- program that multiplies two numbers.
 * @argc: count arguments to main
 * @argv: vector to array arguments
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i, j, res;

	if (argc == 1)
		res = 0;
	
	for (i = 1; i < argc; i++)
		for (j = 0; j < argc; j++)
			if (argv[i][j] < '0' && *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
	for (i = 0; i < argc; i++)
		res += _atoi(argv[i]);

	printf("%d\n", res);
	return (0);
}

/**
 * _atoi- converter an string to int
 * @s: pointer to string
 * Return: number converted
 */

int _atoi(char *s)
{
	int res = 0;
	int signo = 1;

	while (*s)
	{
		if (*(s) == '-')
			signo *= -1;
		if (*(s) >= '0' && *(s) <= '9')
		{
			res = res * 10 + *(s) - '0';
			if (*(s + 1) < '0' || *(s + 1) > '9')
				break;
		}
		s++;
	}
	if (signo == -1)
		res = res * signo;
	return (res);
}
