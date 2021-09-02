#include <stdio.h>

/**
 *
 *
 *
 *
 */
int main(void)
{
	char a = 'a';
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
