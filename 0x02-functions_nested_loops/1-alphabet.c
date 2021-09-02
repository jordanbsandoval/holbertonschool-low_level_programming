#include "main.h"

/**
 *print_alphabet- programa que imprime el abecedario con la funcion propia _put
 *
 *Return: always 0.
 */

void print_alphabet(void)
{
	int i = 0;
	char alp[] = "abcdefghijklmnopqrstuvwxyz";

	while (alp[i] != '\0')
	{
		_putchar(alp[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
