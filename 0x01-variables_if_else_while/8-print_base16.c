#include <stdio.h>

/**
 *main- print the numbers of base 10
 *Return: exit succesfull
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (j = 97; j < 103; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
