#include <stdio.h>

/**
 *main- programa que imprime el abecedario en minuscula y luego en mayuscula
 *
 *Return: always 0.
 */

int main(void)
{
	int i = 0;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (alp[i] != '\0')
		putchar(alp[i]), i++;
	putchar('\n');
	return (0);
}
