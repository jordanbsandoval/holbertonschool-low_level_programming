#include <stdio.h>

/**
 *main- print the numbers of base 10
 *Return: exit succesfull
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	putchar('\n');
	return (0);
}
