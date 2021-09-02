#include <stdio.h>

void print_all(char s[]);
/**
 *main- programa que imprime el abecedario en minuscula y luego en mayuscula
 *
 *Return: always 0.
 */

int main(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	print_all(alp);
	return (0);
}
/**
 *print_all- print un string
 *
 *@s: string to print
 *
 *Return: void
 */
void print_all(char s[])
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}
