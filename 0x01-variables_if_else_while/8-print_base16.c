#include <stdio.h>

/**
 *main- print hexa base16
 *
 *Return: always 0.
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
