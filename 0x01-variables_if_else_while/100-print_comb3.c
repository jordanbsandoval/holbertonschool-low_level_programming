#include <stdio.h>

/**
 *main- program that prints all possible different combinations of two digits.
 *
 *Return: always 0.
 */

int main(void)
{
	int i, p;

	i = 0;
	while (i < 9)
	{
		p = i + 1;
		while (p < 10)
		{
			putchar(i + '0');
			putchar(p + '0');
			if (i == 8 && p == 9)
				break;
			putchar(',');
			putchar(' ');
			p++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
