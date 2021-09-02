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

	for (; alp[i] != '\0'; i++)
		_putchar(alp[i]);
	_putchar('\n');
}
