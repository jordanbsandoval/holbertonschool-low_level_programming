#include <stdio.h>

/**
 *main- Print to alphabet without e and q
 *Return: exit succesfull
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
