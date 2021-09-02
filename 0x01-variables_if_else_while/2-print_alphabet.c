#include <stdio.h>

/**
 *main- programa que imprime el abecedario con la funcion putchar
 *
 *Return: always 0.
 */

int main(void)
{
	int i = 0;
	char alp[] = "abcdefghijklmnopqrstuvwxyz";

	while (alp[i] != '\0')
		putchar(alp[i]), i++;
	putchar('\n');
	return (0);
}
