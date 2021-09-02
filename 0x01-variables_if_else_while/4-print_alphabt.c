#include <stdio.h>

/**
 *main- programa que imprime el abecedario en minuscula si cumple la condicion
 *
 *Return: always 0.
 */

int main(void)
{
	int i = 0;
	char alp[] = "abcdefghijklmnopqrstuvwxyz";

	while (alp[i] != '\0')
	{
		if ((alp[i] != 'e') && (alp[i] != 'q'))
			putchar(alp[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
