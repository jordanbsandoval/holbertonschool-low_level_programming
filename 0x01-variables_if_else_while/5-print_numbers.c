#include <stdio.h>

/**
 *main- print all single digit numbers of base 10 starting from 0
 *
 *Return: always 0.
 */

int main(void)
{
	int i = 0;

	while (i < 10)
		printf("%d", i++);
	printf("\n");
	return (0);
}
