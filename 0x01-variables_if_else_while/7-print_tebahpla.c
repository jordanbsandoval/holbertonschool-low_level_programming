#include <stdio.h>

/**
 *main- print to alphabet in lowercase in reverse
 *Return: exit succesfull
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
