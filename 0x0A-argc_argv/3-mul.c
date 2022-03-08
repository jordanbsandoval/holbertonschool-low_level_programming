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
	int num1, num2, res = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return(1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	res = num1 * num2;

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
