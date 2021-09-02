#include "main.h"

/**
 *print_alphabet_x10- print the alphabet 10 times
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	for (i = 0; i < 10; i++)
		print_alphabet();
}
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
