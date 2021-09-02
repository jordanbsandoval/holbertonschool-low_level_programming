#include <stdio.h>

int putchar_num_base10(void);
/**
 *main- print all single digit numbers of base 10 starting from 0
 *
 *Return: always 0.
 */

int main(void)
{
	putchar_num_base10();
	return (0);
}
/**
 *putchar_num_base10- imprime los numeros de base 10 empezando con el 0
 *
 *Return: always 0.
 */
int putchar_num_base10(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
