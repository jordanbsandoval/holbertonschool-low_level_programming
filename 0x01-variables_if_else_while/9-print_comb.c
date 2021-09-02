#include <stdio.h>

/**
 *main- print los numeros de base 10 separados por coma y espacio excepto final
 *
 *Return: always 0.
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
