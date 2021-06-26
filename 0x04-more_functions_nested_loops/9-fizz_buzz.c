#include "holberton.h"

/**
 *fizz_buzz- Print number of 1 to 100
 *
 *Return: exit succesfull
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Buzz");
		else if (i % 5 == 0)
			printf(" Fizz");
		else
			printf(" %d", i);
	}
	printf("\n");
}

int main(void)
{
	fizz_buzz();
	return (0);
}
